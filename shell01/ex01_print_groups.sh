#!/bin/bash
#FT_USER=bocal
id -G -n $FT_USER | tr " " "," | sed "s/\n//"
