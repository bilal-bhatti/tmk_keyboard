#!/bin/sh

make clean && make KEYMAP=spacefn_tkl && DEV=/dev/cu.usbmodem5d11 make program
