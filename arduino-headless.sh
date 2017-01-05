#!/bin/bash
killall -9 Xvfb
sleep 3s
Xvfb :1 -nolisten tcp -screen :1 1280x800x24 &
xvfb="$!"
sleep 3s
DISPLAY=:1 arduino "$@"
kill -9 $xvfb
