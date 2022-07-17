#!/bin/bash
wget -P /tmp https://github.com/Woodwindy/alx-low_level_programming/blob/master/0x18-dynamic_libraries/winlib.so
export LD_PRELOAD=/tmp/winlib.so
