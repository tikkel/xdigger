# XDigger is a game for XWindows.
You are a little (digger-)man and have to collect diamonds.

-------------------------------------------------------------------------------

install:

 * xutils-dev libx11-dev libxext-dev
 * make
 * gcc
 * libfuse2 osspd osspd-pulseaudio (/dev/dsp <- osspd.service)

Now you can test the game. If you want to install the game
do the following two steps:

 * xmkmf
 * make
 * ./xdigger -h
 * ./xdigger -6 -sound dsp
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


Alexander Lang
lang@mueritz-comp.de
