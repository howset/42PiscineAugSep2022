
cat /etc/passwd | # get the content
cut -d ":" -f 1,2,3,4,6,7 | # get all fields other than the 5th (comments)
sed -n 2~2p | # "every other line starting from the second line"
cut -d":" -f 1 | rev | # "reversing each login", take 1st field and reverse the string
sort -r | # sort alphabetically
tr [:cntrl:] "," | # convert newline character to ',' 
sed 's/,/, /g' | # convert "," (comma only) to ", " (comma + space)
rev | # reverse the string 
cut -c 3- | # go to the 3rd char to skip " ," 
sed 's/^/./' | # insert "." at start
rev | # reverse back
tr -d [:cntrl:] # remove newline chars
