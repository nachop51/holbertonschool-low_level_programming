#!/bin/bash
wget -P /tmp https://github.com/Nachop51/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/libfix.so?raw=true
export LD_PRELOAD=/tmp/libfix.so
