#!/bin/bash
cp gm_win.so /tmp/gm_win.so
export LD_PRELOAD=/tmp/gm_win.so
./gm 9 8 10 24 75 9
rm /tmp/gm_win.so
