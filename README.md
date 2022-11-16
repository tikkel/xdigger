[![C/C++ CI](https://github.com/tikkel/xdigger/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/tikkel/xdigger/actions/workflows/c-cpp.yml)
[![CodeQL](https://github.com/tikkel/xdigger/actions/workflows/codeql.yml/badge.svg)](https://github.com/tikkel/xdigger/actions/workflows/codeql.yml)

# XDigger is a game for UNIX-XWindows.

 xdigger is the X-version of the (KC85-)Digger game.
 You are a little (digger-)man and have to collect diamonds.

Digger was originally developed for the KC 85/3 and KC 85/4.
The program code was by Alexander Lang, the graphics were by Martin Guth, the titlegraphic by Stefan Dahlke.
The levels were developed by Thomas Carstens, Andrea Ernert, Martin Guth, Alexander Lang and Heiko Schade.

The arrow keys will move the man
Esc or C-b restarts the level
x returns to the main menu
q exits the game
+ and - will change the size of the window

-------------------------------------------------------------------------------

e.g. on Ubuntu - Install the following dependencies:
* xutils-dev libx11-dev libxext-dev
* make
* gcc
* libfuse2 osspd osspd-pulseaudio (for local sound)

Now you can compile and run the game:
* xmkmf
* sed -i 's/-D_BSD_SOURCE -D_SVID_SOURCE/-D_DEFAULT_SOURCE/g' Makefile (Imake bug workaround)
* make
* ./xdigger -h
* ./xdigger -3 -vert240 -d
* make install (as root)
* make install.man (as root)

If you want to use NAS (Network Audio System) or RPlay, edit first the 
configure.h file.

-------------------------------------------------------------------------------

Levels created by:
 1 Heiko Schade
 2 Heiko Schade
 3 Heiko Schade
 4 Martin Guth
 5 Martin Guth
 6 Martin Guth
 7
 8
 9
10
11
12
13 ?2
14
15 Heiko Schade
16 Thomas Carstens
17 Alexander Lang
18
19 Alexander Lang
20
21 Alexander Lang
22 Martin Guth
23
24 Alexander Lang
25 Alexander Lang
26 Martin Guth
27 Martin Guth
28
29 Alexander Lang
30 Alexander Lang


Original programmed by:
* Alexander Lang (lang@mueritz-comp.de)
* Jan Fricke (fricke@rz.uni-greifswald.de) (KC85-sound emulation)

