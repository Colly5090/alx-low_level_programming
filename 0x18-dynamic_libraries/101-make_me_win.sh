#!/bin/bash
wget -O libwinner.so https://raw.github.com/Colly5090/alx-low_level_programming/master/0x18-dynamic_libraries/libwinner.so
export LD_PRELOAD=$PWD/libwinner.so
