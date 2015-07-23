#!/bin/sh

make clean && make KEYMAP=bilal && DEV=/dev/cu.usbmodem5d11 make program
