#!/bin/sh
#ls -l | sed G 
ls -l | sed '0~2d'
