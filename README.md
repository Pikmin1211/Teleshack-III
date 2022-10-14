
# Teleshack III

## Build Instructions (for Windows 10/11)

- Install [WSL](https://learn.microsoft.com/en-us/windows/wsl/install)
	- Check current version of WSL using ``wsl -l -v``
	- Open command prompt as administrator and use ``wsl --install``
- Shift + Right Click in project directory
- From the context menu select "Open Linux shell here"
	- Use ``$sudo apt update`` followed by ``$sudo apt upgrade`` to ensure you are up to date
- Install [GNU Make](https://www.gnu.org/software/make/)
	- Check current version of Make using ``$make -version``
	- Install Make using ``$sudo apt install make``
- Install [Python3](https://www.python.org/)
	- Check current version of Python3 using ``$python3 --version``
	- Install Python3 using ``$sudo apt install python3``
- Install [DotNet](https://dotnet.microsoft.com/en-us/)
	- Check current version of DotNet using ``$dotnet --info``
	- [Download the install script](https://dot.net/v1/dotnet-install.sh) and copy it to the project directory
	- Run the script using ``$sudo ./dotnet-install.sh --install-dir /usr/share/dotnet -c 5.0 --runtime dotnet``
	- Delete the script from the project directory
	- Add DotNet to PATH using ``export PATH=$PATH:/usr/share/dotnet``
- Run Make using ``$make hack``

## Credits

### Project Director
- Pandan

### Tech Director
- Pikmin1211
