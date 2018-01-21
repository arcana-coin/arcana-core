
Debian
====================
This directory contains files used to package arcanad/arcana-qt
for Debian-based Linux systems. If you compile arcanad/arcana-qt yourself, there are some useful files here.

## bitcoin: URI support ##


arcana-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install arcana-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your arcana-qt binary to `/usr/bin`
and the `../../share/pixmaps/bitcoin128.png` to `/usr/share/pixmaps`

arcana-qt.protocol (KDE)

