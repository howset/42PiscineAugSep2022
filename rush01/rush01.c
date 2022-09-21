/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: howset <howset@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:58:16 by hsetyamu          #+#    #+#             */
/*   Updated: 2022/09/16 21:52:10 by howset           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int **cr_sol(void)
{
    int **sol;
    int i;
    int j;
    int arr[4][4] =     {1,2,3,4,
                        2,3,4,1,
                        3,4,1,2,
                        4,1,2,3};
    
    sol = (int**)malloc(sizeof(int*)*4);
    i = 0;
    while (i < 4)
    {
        sol[i] = (int*)malloc(sizeof(int)*4);
        j = 0;
        while (j < 4)
        {
            sol[i][j] = arr[i][j];
            j++;
        }
        i++;
    }
    return (sol);
}
void pr_sol(int **sol)
{
    int i;
    int j;

    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            printf("%d", sol[i][j]);
            printf("pr_sol");
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(void)
{
    int **sol;

    sol = cr_sol();
    pr_sol(sol);
    free(sol);
    return (0);
}