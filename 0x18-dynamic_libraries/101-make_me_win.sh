#!/bin/bash
wget -P ../ https://github.com/MennaAnwar/alx-low_level_programming/raw/main/0x18-dynamic_libraries/makemewin.so
export LD_PRELOAD=../makemewin.so
