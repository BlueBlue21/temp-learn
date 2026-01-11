param(
    [Parameter(Mandatory, HelpMessage="Path")]
    [string]$Path,

    [Parameter(HelpMessage="Lib")]
    [switch]$Lib = $False
)

if (Test-Path -Path $Path) {
    $SourcePath = "$Path" + "main.c"
    $ExePath = "$Path" + "main.exe"

    if (-Not (Test-Path -Path $SourcePath)) { return }

    if ($Lib) {
        # Locate the libcs50 path
        clang $SourcePath ./cs50/cs50.c -o $ExePath
    } else {
        clang $SourcePath -o $ExePath
    }

    $Confirm = Read-Host -Prompt "Do you want run this program? (Y/N)"
    if ($Confirm -eq "Y") {
        if (-Not (Test-Path -Path $ExePath)) { return }

        & $ExePath
    }
}
