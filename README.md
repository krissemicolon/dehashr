<p align="center">
  <img src="res/logo.png" width="256"/>
  <h1>dehashr</h1>
</p>

![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/krissemicolon/dehashr?style=plastic)
![Lines of code](https://img.shields.io/tokei/lines/github/krissemicolon/dehashr?style=plastic)
![GitHub](https://img.shields.io/github/license/krissemicolon/dehashr?style=plastic)
![GitHub all releases](https://img.shields.io/github/downloads/krissemicolon/dehashr/total?style=plastic)

### Building from source:
```
meson setup build
cd build
meson compile
```
### Dependencies:
- libgcrypt
- meson
- ninja

#### Installation of libgcrypt:
Gentoo: ```emerge libgcrypt```\
Void: ```xbps-install libgcrypt```\
Arch: ```pacman -S libgcrypt```\
Debian: ```apt install libgcrypt20```
