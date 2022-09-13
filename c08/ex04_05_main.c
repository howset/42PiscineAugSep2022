#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

// cc -Wall -Werror -Wextra ex04_ft_strs_to_tab.c ex05_ft_show_tab.c ex04_05_main.c

int					ft_strlen(char *str);
char				*ft_strdup(char *src);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
void				ft_show_tab(struct s_stock_str *par);
void				ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char	*strs[3];
	int		size;

	strs[0] = "Test1";
	strs[1] = "Test20";
	strs[2] = "Test300";
	size = 3;
	ft_show_tab(ft_strs_to_tab(size, strs));
}
