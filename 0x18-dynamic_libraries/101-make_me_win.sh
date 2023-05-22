#!/bin/bash
wget -q --output-document=$HOME/101-make_me_win.so https://github.com/MennaAnwar/alx-low_level_programming/tree/main/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=$HOME/101-make_me_win.so
