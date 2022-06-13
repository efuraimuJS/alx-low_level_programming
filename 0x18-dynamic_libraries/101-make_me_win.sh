#!bin/bash
wget -P /tmp https://github.com/efuraimuJS/alx-low_level_programming/blob/844ec4ffb606231f1b1e67b10c3ba3151c0ccdc9/0x18-dynamic_libraries/gigamillions.so
export LD_PRELOAD/tmp/gigamillions.so