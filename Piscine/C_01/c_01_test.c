#include <stdio.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int main() {
	// Exercise 05
	ft_putstr("Hello World!\n\n");

	// Exercise 00
	int x = 0;
	printf("%d\n", x);
	ft_ft(&x);
	printf("%d\n\n", x);

	// Exercise 01
	x = 0;
	printf("%d\n", x);
	int *p1 = &x;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	ft_ultimate_ft(&p8);
	printf("%d\n\n", x);

	// Exercise 02
	int a = 3, b = 7;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d\n\n", a, b);

	// Exercise 03
	int div = 0, mod = 0;
	printf("%d %d\n", div, mod);
	ft_div_mod(42, 5, &div, &mod);
	printf("%d %d\n\n", div, mod);

	// Exercise 04
	a = 42, b = 5;
	printf("%d %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n\n", a, b);

	// Exercise 06
	int len = ft_strlen("Hello World!");
	printf("%d\n\n", len);

	// Exercise 07
	int arr[5] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	ft_rev_int_tab(arr, 5);
	for (int i = 0; i < 5; ++i)
		printf("%d ", arr[i]);
	printf("\n\n");

	// Exercise 08
	int brr[10] = {4, 1, 0, 9, 7, 2, 8, 3, 5, 6};
	for (int i = 0; i < 10; ++i)
		printf("%d ", brr[i]);
	printf("\n");
	ft_sort_int_tab(brr, 10);
	for (int i = 0; i < 10; ++i)
		printf("%d ", brr[i]);
	printf("\n");
	return 0;
}
