#!/bin/bash


if (test "$1" = "build"); then
	gcc -O3 -fPIC $(pkg-config --cflags --libs librsvg-2.0 fribidi x11 gio-2.0 gobject-2.0 xft xrender xpm xext xmu xinerama libpng libjpeg) -I. -lm -DLOCALEDIR=\"/usr/share/locale\" src/{action,background,binding,border,button,client,clientlist,clock,color,command,confirm,cursor,debug,default,desktop,dock,event,error,font,grab,gradient,group,help,hint,icon,image,lex,main,match,menu,misc,move,outline,pager,parse,place,popup,render,resize,root,screen,settings,spacer,status,swallow,taskbar,timing,tray,traybutton,winmenu}.c -o jwm.elf || exit 1
elif (test "$1" = "install"); then
	cp -f jwm.elf /bin/jwm || exit 1
fi
