# Make test
# str1="\'?"
# str2='"\"'
# str3="'"
# str4='\'
# FT_NBR1=$str1$str2$str3$str4 #
# FT_NBR2="rcrdmddd" # 

echo $FT_NBR1 + $FT_NBR2 | # form the vaiables from above
sed "s/'/0/g" | tr '\\"?!' 1234 | # convert FT_NBR1 to numeral system
tr mrdoc 01234 | # convert FT_NBR2 to numeral system
xargs echo 'obase=13; ibase=5;' | # define that input is 5 base system, output is 13
bc | # calculator
tr 0123456789ABC 'gtaio luSnemf' # convert output to this notation 
