Final Burn Alpha for Raspberry Pi
---------------------------------

Final Burn Alpha is a multi-system emulator. This particular port is
essentially the SDL version of the emulator with native GLES-based
rendering for the Raspberry Pi.

Source is based on
[FBA for OpenDingux](https://github.com/dmitrysmagin/fba-sdl), sans the
OpenDingux-specific stuff.

I've also made some minor changes to make the SDL version compilable (though
not necessarily usable) on OS X.

Compiling
---------

To compile on a Raspberry Pi, run `make pi` and grab a :coffee: - it's
going to be a while.

To compile on a Mac, run `make sdl`. You will also need the SDL libraries:
you can get them via [Homebrew](http://brew.sh/) by running `brew install sdl`.

Quitting
--------

To exit the emulator, press `F12`.

Supported Games
---------------

See [gamelist.txt](gamelist.txt).

Credits
-------------

Parts of code are from [fba-sdl](https://github.com/dmitrysmagin/fba-sdl)
by Dmitry Smagin.

FinalBurn Alpha is written by the
[FB Alpha Team](http://www.barryharris.me.uk/).
