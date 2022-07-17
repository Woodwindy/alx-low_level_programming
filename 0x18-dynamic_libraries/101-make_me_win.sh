#!/bin/bash
wget -P /tmp https://github.com/woodwindy/alx-low_level_programming/tree/master/0x18-dynamic_libraries/winlib.so
export LD_PRELOAD=/tmp/winlib.so
