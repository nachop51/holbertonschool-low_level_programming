#!/bin/bash
wget -P /tmp https://github.com/Nachop51/holbertonschool-low_level_programming/tree/main/0x18-dynamic_libraries/libfix.so
export LD_PRELOAD=/tmp/libfix.so
