#!/bin/bash
wget -P /tmp https://github.com/JenMora/alx-low_level_programming
export LD_PRELOAD=/tmp/libtest.so
