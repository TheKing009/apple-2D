Write-Host > Setup required Environment
Write-Host -------------------------------------
$RAYLIB_PATH="C:\raylib"
$COMPILER_PATH="C:\raylib\MinGW\bin"
$PATH=$COMPILER_PATH | Get-Member
$LDFLAGS="-lraylib -lopengl32 -lgdi32 -lwinmm"
$CFLAGS=($(RAYLIB_PATH)|Get-Member).toString() + "\raylib\src\raylib.rc.data -s -static -O2 -std=c99  -Wall -Iexternal -I" + ($(RAYLIB_PATH)|Get-Member).toString() + "/src -DPLATFORM_DESKTOP"
cd $(Get-location)
Write-Host Get-location
Write-Host > Clean latest build
Write-Host ------------------------
if (Test-Path main.exe) {Remove-Item main.exe -force}
Write-Host
Write-Host > Saving Current File
Write-Host -------------------------
Write-Host
Write-Host > Compile program
Write-Host -----------------------
./g++ -o main.exe main.cpp $(CFLAGS)|Get-Member $(LDFLAGS)|Get-Member
Write-Host
Write-Host > Reset Environment
Write-Host --------------------------
Write-Host
Write-Host > Execute program
Write-Host -----------------------
cmd /c IF EXIST main.exe main.exe
