# cc ***.c -L. -libft.a

rm -f libft.a # remove existing libtf.a if it exists.
find . -name "*.c" -type f -exec cc -Wall -Werror -Wextra -c {} \; # c-create an object file rather than an executable. {file to execute on}. \; stop the operation of -exec
ar rcs libft.a *.o # create .a files. r-insert the files, c-create archive, s-add index. https://randu.org/tutorials/c/libraries.php
find . -name "*.o" -type f -delete # delete object files.