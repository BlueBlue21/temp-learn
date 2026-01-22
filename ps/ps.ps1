param(
    [Parameter(Mandatory, HelpMessage="Name")]
    [String]$Name,

    [Parameter(HelpMessage="Run")]
    [Switch]$Run = $False
)

$Name = "p$Name"
$Path = "./$Name"

$FileNames = @{
    Input = "input.txt"
    C = "main.c"
    Python = "main.py"
}
$FilePaths = @{
    Input = "$Path/$($FileNames.Input)"
    C = "$Path/$($FileNames.C)"
    Python = "$Path/$($FileNames.Python)"
}

if ($Run) {
    if (-Not (Test-Path -Path $Path)) { return }

    $Langs = [System.Management.Automation.Host.ChoiceDescription[]] @("&C", "&Python")
    $Lang = $host.UI.PromptForChoice("Language", "Which language will you use?", $Langs, 1)
    switch ($Lang) {
        0 {
            $OutputFile = Join-Path -Path $Path -ChildPath $FileNames.C.Replace(".c", ".exe")
            Clang $FilePaths.C -o $OutputFile -O2 -Wall -static
            Cmd /c "$OutputFile < $($FilePaths.Input)"
        }
        1 {
            Cmd /c "python -W ignore $($FilePaths.Python) < $($FilePaths.Input)"
        }
    }
} else {
    if ((Test-Path -Path $Path)) { return }

    New-Item -Path "./" -Name $Name -ItemType "Directory"
    New-Item -Path $Path -Name $FileNames.Input -ItemType "File"
    New-Item -Path $Path -Name $FileNames.C -ItemType "File" -Value "$(Get-Content -Path "./template/main.c" -Raw)"
    New-Item -Path $Path -Name $FileNames.Python -ItemType "File" -Value "$(Get-Content -Path "./template/main.py" -Raw)"
}
