#!/bin/bash

if [ -n "$1" ] && [ -n "$2" ]
then
	x=$1
	y=$2
	echo "($x,$y)"
else
	x=5
	y=5
	echo "(x,y) defaults to (5,5)."
fi

sed -i "s/rush(5, 5)/rush($x, $y)/" "main.c" #Initial cond for the rush func in main.c is (5,5)
for RUSH in rush00.c rush01.c rush02.c rush03.c rush04.c
do
	#norminette -R CheckHeaderSources $RUSH
	cc -Wall -Wextra -Werror ft_putchar.c main.c $RUSH
	./a.out
done
sed -i "s/rush($x, $y)/rush(5, 5)/" "main.c"
