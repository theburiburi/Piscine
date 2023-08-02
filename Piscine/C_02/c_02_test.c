#include <stdio.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"

int main() {
	// Exercise 11
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putstr_non_printable("\r\t\b\f\v\177");
	printf("\n\n");

	// Exercise 00
	char s1[20];
	printf("%s", ft_strcpy(s1, "Hello World!\n"));
	printf("%s\n", ft_strcpy(s1, ""));

	// Exercise 01
	for (int i = 0; i < 19; ++i)
		s1[i] = '#';
	s1[19] = '\0';
	printf("%s\n", ft_strncpy(s1, "Hello World!\n", 13));
	printf("%s", ft_strncpy(s1, "Hello World!\n", 17));
	for (int i = 0; i < 20; ++i)
		printf("%d ", s1[i]);
	printf("\n\n");

	// Exercise 02
	printf("%d ", ft_str_is_alpha(""));
	printf("%d ", ft_str_is_alpha("A"));
	printf("%d ", ft_str_is_alpha("a"));
	printf("%d ", ft_str_is_alpha("Z"));
	printf("%d ", ft_str_is_alpha("z"));
	printf("%d ", ft_str_is_alpha("A@a"));
	printf("%d ", ft_str_is_alpha("z[Z"));
	printf("%d ", ft_str_is_alpha("A`a"));
	printf("%d\n\n", ft_str_is_alpha("z{Z"));

	// Exercise 03
	printf("%d ", ft_str_is_numeric(""));
	printf("%d ", ft_str_is_numeric("0"));
	printf("%d ", ft_str_is_numeric("9"));
	printf("%d ", ft_str_is_numeric("0/9"));
	printf("%d\n\n", ft_str_is_numeric("9:0"));

	// Exercise 04
	printf("%d ", ft_str_is_lowercase(""));
	printf("%d ", ft_str_is_lowercase("a"));
	printf("%d ", ft_str_is_lowercase("z"));
	printf("%d ", ft_str_is_lowercase("a`z"));
	printf("%d\n\n", ft_str_is_lowercase("z{a"));

	// Exercise 05
	printf("%d ", ft_str_is_uppercase(""));
	printf("%d ", ft_str_is_uppercase("A"));
	printf("%d ", ft_str_is_uppercase("Z"));
	printf("%d ", ft_str_is_uppercase("A@Z"));
	printf("%d\n\n", ft_str_is_uppercase("Z[A"));

	// Exercise 06
	printf("%d ", ft_str_is_printable("")); 
	char s2[100];
	for (int i = 32; i < 127; ++i)
		s2[i - 32] = i;
	s2[95] = s2[96] = '\0';
	printf("%d ", ft_str_is_printable(s2));
	s2[95] = 31;
	printf("%d ", ft_str_is_printable(s2));
	s2[95] = 127;
	printf("%d\n\n", ft_str_is_printable(s2));

	// Exercise 07
	ft_strcpy(s2, "");
	printf("%s ", ft_strupcase(s2));
	ft_strcpy(s2, "AaZz");
	printf("%s ", ft_strupcase(s2));
	ft_strcpy(s2, "AaZz@[`{AaZz");
	printf("%s\n\n", ft_strupcase(s2));

	// Exercise 08
	ft_strcpy(s2, "");
	printf("%s ", ft_strlowcase(s2));
	ft_strcpy(s2, "AaZz");
	printf("%s ", ft_strlowcase(s2));
	ft_strcpy(s2, "AaZz@[`{AaZz");
	printf("%s\n\n", ft_strlowcase(s2));

	// Exercise 09
	ft_strcpy(s2, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	printf("%s\n\n", ft_strcapitalize(s2));

	// Exercise 10
	int len = ft_strlcpy(s1, "Hello World!\n", 6);
	printf("%s %d\n", s1, len);
	for (int i = 0; i < 20; ++i)
		s1[i] = '#';
	len = ft_strlcpy(s1, "Hello World!\n", 20);
	printf("%s %d\n", s1, len);
	len = ft_strlcpy(s1, "Hello World!\n", 0);
	printf("%s %d\n", s1, len);
	for (int i = 0; i < 20; ++i)
		printf("%d ", s1[i]);
	printf("\n");
	return 0;
}
