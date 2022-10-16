
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
	- Add DotNet to PATH using ``$export PATH=$PATH:/usr/share/dotnet``
- Install [devkitPro](https://devkitpro.org/wiki/)
	- Install [devkitPro pacman](https://devkitpro.org/wiki/devkitPro_pacman)
		- Download the install script using ``$wget https://apt.devkitpro.org/install-devkitpro-pacman``
		- Give the script execution permissions using ``$chmod +x ./install-devkitpro-pacman``
		- Run the script using ``$sudo ./install-devkitpro-pacman``
		- Delete the script from the directory
	- Use pacman to install devkitPro using ``$sudo dkp-pacman -S gba-dev``
		- Press Enter without typing to install with defaults
- Run Make using ``$make hack``
	- Make will return ``make: Nothing to be done for 'hack'.`` if it does not find any changes in dependant files.
	- In this case you can force make to recompile by deleting ``Teleshack-III.gba`` from the project directory. 

## Credits

### Project Director
- Pandan

### Tech Director
- Pikmin1211
