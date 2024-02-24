# 42 Piscine August-September 2022

So this is a repo of the projects I did during the Piscine. I managed to work on 2 out of 2 shell projects and 9 out of 14 c projects. However not all exercises in each project passed evaluation and not all projects were successfully completed by the end of the piscine period. At some point I had to decide whether it was worth it to fix/do all the exercises considering the evaluation points, time, and energy I have left. And by the end of the piscine, some projects still did not pass because I was already running out of time and points. And obviously, the energy too. 

Some worthy notes are mentioned in each project. And some c functions are already prepared with the main function commented out in the bottom of the files for the convenience of the evaluation, as is the agreed and unwritten norm in our Piscine cohort. Some later modifications did not take into account the check by norminette, because by this time, access to the intra network was already gone, and I have no intention to get a different way to access norminette. 

Compilation can be done by 

```shell
$ cc -Wall -Werror -Wextra file.c
```
And execute by
```shell
$ ./a.out
```

## Notes:
~1. Let's see if I can make more exercises after the Piscine although there is already a lot of solutions going around the interwebs and I don't know if I will be able to verify my solutions.~ Not gonna happen

## Content
```
42PiscineAugSep2022
├── c00
│   ├── C00_en.subject.pdf
│   ├── ex00_ft_putchar.c
│   ├── ex01_ft_print_alphabet.c
│   ├── ex02_ft_print_reverse_alphabet.c
│   ├── ex03_ft_print_numbers.c
│   ├── ex04_ft_is_negative.c
│   ├── ex05_ft_print_comb.c
│   ├── ex06_ft_print_comb2.c
│   ├── ex07_ft_putnbr.c
│   └── README.md
├── c01
│   ├── C01_en.subject.pdf
│   ├── ex00_ft_ft.c
│   ├── ex01_ft_ultimate_ft.c
│   ├── ex02_ft_swap.c
│   ├── ex03_ft_div_mod.c
│   ├── ex04_ft_ultimate_div_mod.c
│   ├── ex05_ft_putstr.c
│   ├── ex06_ft_strlen.c
│   ├── ex07_ft_rev_int_tab.c
│   ├── ex08_ft_sort_int_tab.c
│   └── README.md
├── c02
│   ├── C02_en.subject.pdf
│   ├── ex00_ft_strcpy.c
│   ├── ex01_ft_strncpy.c
│   ├── ex02_ft_str_is_alpha.c
│   ├── ex03_ft_str_is_numeric.c
│   ├── ex04_ft_str_is_lowercase.c
│   ├── ex05_ft_str_is_uppercase.c
│   ├── ex06_ft_str_is_printable.c
│   ├── ex07_ft_strupcase.c
│   ├── ex08_ft_strlowcase.c
│   ├── ex09_ft_strcapitalize.c
│   ├── ex10_ft_strlcpy.c
│   ├── ex11_ft_putstr_non_printable.c
│   └── README.md
├── c03
│   ├── C03_en.subject.pdf
│   ├── ex00_ft_strcmp.c
│   ├── ex01_ft_strncmp.c
│   ├── ex02_ft_strcat.c
│   ├── ex03_ft_strncat.c
│   ├── ex04_ft_strstr.c
│   ├── ex05_ft_strlcat.c
│   └── README.md
├── c04
│   ├── C04_en.subject.pdf
│   ├── ex00_ft_strlen.c
│   ├── ex01_ft_putstr.c
│   ├── ex02_ft_putnbr.c
│   ├── ex03_ft_atoi.c
│   └── README.md
├── c05
│   ├── C05_en.subject.pdf
│   ├── ex00_ft_iterative_factorial.c
│   ├── ex01_ft_recursive_factorial.c
│   ├── ex02_ft_iterative_power.c
│   ├── ex03_ft_recursive_power.c
│   ├── ex04_ft_fibonacci.c
│   ├── ex05_ft_sqrt.c
│   ├── ex06_ft_is_prime.c
│   ├── ex07_ft_find_next_prime.c
│   └── README.md
├── c06
│   ├── C06_en.subject.pdf
│   ├── ex00_ft_print_program_name.c
│   ├── ex01_ft_print_params.c
│   ├── ex02_ft_rev_params.c
│   └── README.md
├── c07
│   ├── C07_en.subject.pdf
│   ├── ex00_ft_strdup.c
│   ├── ex01_ft_range.c
│   ├── ex02_ft_ultimate_range.c
│   ├── ex03_ft_strjoin.c
│   └── README.md
├── c08
│   ├── C08_en.subject.pdf
│   ├── ex00_ft.h
│   ├── ex01_ft_boolean_main.c
│   ├── ex01_ft_boolean.h
│   ├── ex02_ft_abs_main.c
│   ├── ex02_ft_abs.h
│   ├── ex03_ft_point_main.c
│   ├── ex03_ft_point.h
│   ├── ex04_05_main.c
│   ├── ex04_ft_strs_to_tab.c
│   ├── ex05_ft_show_tab.c
│   ├── ft_stock_str.h
│   └── README.md
├── c09
│   └── ex00
│       ├── c00_ex00_ft_putchar.c
│       ├── c01_ex02_ft_swap.c
│       ├── c01_ex05_ft_putstr.c
│       ├── c01_ex06_ft_strlen.c
│       ├── c03_ex00_ft_strcmp.c
│       ├── libft_creator.sh
│       └── libft.a
├── rush00
│   ├── ft_putchar.c
│   ├── loopover.sh
│   ├── main.c
│   ├── README.md
│   ├── Rush00_en.subject.pdf
│   ├── rush00.c
│   ├── rush01.c
│   ├── rush02.c
│   ├── rush03.c
│   └── rush04.c
├── rush01
│   ├── rush01_en.subject.pdf
│   └── rush01.c
├── shell00
│   ├── ex00_z
│   ├── ex01_testShell00.tar
│   ├── ex02_exo2.tar
│   ├── ex03_id_rsa_pub
│   ├── ex04_midLS
│   ├── ex05_git_commit.sh
│   ├── ex06_git_ignore.sh
│   ├── ex07_b
│   ├── ex08_clean
│   ├── ex09_ft_magic
│   ├── README.md
│   └── Shell00_en.subject.pdf
├── shell01
│   ├── ex01_print_groups.sh
│   ├── ex02_find_sh.sh
│   ├── ex03_count_files.sh
│   ├── ex04_MAC.sh
│   ├── ex05_"\?$*'MaRViN'*$?\"
│   ├── ex06_skip.sh
│   ├── ex07_r_dwssap.sh
│   ├── ex08_add_chelou.sh
│   ├── README.md
│   └── Shell01_en.subject.pdf
└── README.md
```
