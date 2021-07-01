<h1 align="center">dehashr</br>
    <img alt="Lines of code" src="https://img.shields.io/tokei/lines/github/krissemicolon/dehashr?label=lines&style=flat-square&labelColor=ffffff&color=ffffff">
    <img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/krissemicolon/dehashr?label=size&style=flat-square&labelColor=ffffff&color=ffffff">
    <img alt="GitHub" src="https://img.shields.io/github/license/krissemicolon/dehashr?style=flat-square&labelColor=ffffff&color=ffffff">
    <img alt="GitHub issues" src="https://img.shields.io/github/issues/krissemicolon/dehashr?style=flat-square&labelColor=ffffff&color=ffffff">
</h1> </br>

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
- pthread

### Planned
- [ ] Multithreading support
- [ ] Wordlist Mode

#### Installation of libgcrypt:
Gentoo: ```emerge libgcrypt```\
Void: ```xbps-install libgcrypt```\
Arch: ```pacman -S libgcrypt```\
Debian: ```apt install libgcrypt20```
