param(
    [Parameter(Mandatory, HelpMessage="Path")]
    [String]$Path,

    [Parameter(HelpMessage="Lib")]
    [Switch]$Lib = $False
)

if (Test-Path -Path $Path) {
    $SourcePath = "$Path" + "main.c"
    $ExePath = "$Path" + "main.exe"

    if (-Not (Test-Path -Path $SourcePath)) { return }
    if ($Lib) {
        # Locate the libcs50 path
        Clang $SourcePath ./cs50/cs50.c -o $ExePath
    } else {
        Clang $SourcePath -o $ExePath
    }

    $Confirm = Read-Host -Prompt "Do you want run this program? (Y/N)"
    if ($Confirm -eq "Y") {
        if (-Not (Test-Path -Path $ExePath)) { return }
        & $ExePath
    }
}
