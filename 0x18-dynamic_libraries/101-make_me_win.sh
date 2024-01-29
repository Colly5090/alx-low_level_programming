#!/bin/bash
wget -P /tmp/ https://raw.github.com/Colly5090/alx-low_level_programming/master/0x18-dynamic_libraries/libthewinner.so
export LD_PRELOAD=/tmp/libthewinner.so
