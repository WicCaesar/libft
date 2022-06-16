#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	test_ft_strlen(void)
{
	printf("---------------------------------------------------\n\v");
	printf("ft_strlen\n");
	printf("Your lucky number is… %zu\n", 	 strlen("Your lucky number is…"));
	printf("Your lucky number is… %zu\n", ft_strlen("Your lucky number is…"));
	printf("Papi, o camelo tem %zu corcundas\n", 	strlen("Papi"));
	printf("Papi, o camelo tem %zu corcundas\n", ft_strlen("Papi"));
	printf("%zu mandamentos\n",    strlen("mandamento"));
	printf("%zu mandamentos\n", ft_strlen("mandamento"));
	printf("%zu pecados\n",    strlen("pecados"));
	printf("%zu pecados\n", ft_strlen("pecados"));
	printf("dois e quarenta e %zu\n", 	 strlen("dois e quarenta e "));
	printf("dois e quarenta e %zu\n", ft_strlen("dois e quarenta e "));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memcpy(void)
{
	char	memcpy_ruivo[] = "Ruivo";
	char	memcpy_morena[] = "Morena";
	char	memcpy_galinha[] = "A galinha choca";
	char	memcpy_dst0[] = "Loira do Tchan";
	char	memcpy_dst1[] = "Loira do Tchan";
	char	memcpy_dst2[20];
	char	memcpy_dst3[] = "Loira do Tchan";
	char	memcpy_dst4[] = "chocou um ovo";
	
	printf("ft_memcpy\n");
	printf("%s\n", memcpy(memcpy_dst0, memcpy_ruivo, 5));
	printf("%s\n", memcpy(memcpy_dst1, memcpy_ruivo, 4));
	printf("%s\n", memcpy(memcpy_dst2, memcpy_morena, 6));
	printf("%s\n", memcpy(memcpy_dst3, memcpy_ruivo, 6)); // até NUL-byte
	printf("%s\n", memcpy(memcpy_dst4, memcpy_galinha, 10));

	char	memcpy_ruivo2[] = "Ruivo";
	char	memcpy_morena2[] = "Morena";
	char	memcpy_galinha2[] = "A galinha choca";
	char	memcpy_dst02[] = "Loira do Tchan";
	char	memcpy_dst12[] = "Loira do Tchan";
	char	memcpy_dst22[20];
	char	memcpy_dst32[] = "Loira do Tchan";
	char	memcpy_dst42[] = "chocou um ovo";

	printf("%s\n", ft_memcpy(memcpy_dst02, memcpy_ruivo2, 5));
	printf("%s\n", ft_memcpy(memcpy_dst12, memcpy_ruivo2, 4));
	printf("%s\n", ft_memcpy(memcpy_dst22, memcpy_morena2, 6));
	printf("%s\n", ft_memcpy(memcpy_dst32, memcpy_ruivo2, 6)); // até NUL-byte
	printf("%s\n", ft_memcpy(memcpy_dst42, memcpy_galinha2, 10));
	
	char	memcpy_dst03[] = "Loira do Tchan";
	char	memcpy_dst13[] = "Loira do Tchan";
	char	memcpy_dst23[20];
	char	memcpy_dst33[] = "Loira do Tchan";

	printf("%s\n", ft_memcpy(memcpy_dst03, "Ruivo", 5));
	printf("%s\n", ft_memcpy(memcpy_dst13, "Ruivo", 4));
	printf("%s\n", ft_memcpy(memcpy_dst23, "Morena", 6));
	printf("%s\n", ft_memcpy(memcpy_dst33, "Ruivo", 6)); // até NUL-byte
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memset(void)
{
	char	memset_word1[] = "ciência";
	char	memset_word2[] = "combate";
	char	memset_word3[] = "caipirosca";
	char	memset_word4[] = "extraviado";
	char	memset_word5[] = "adotado";

	printf("ft_memset\n");
	printf("%s\n", 	  memset(memset_word1, '*', 1));
	printf("%s\n", ft_memset(memset_word1, '*', 1));
	printf("%s\n", 	  memset(memset_word2, '$', 3));
	printf("%s\n", ft_memset(memset_word2, '$', 3));
	printf("%s\n", 	  memset(memset_word3, '%', 5));
	printf("%s\n", ft_memset(memset_word3, '%', 5));
	printf("%s\n", 	  memset(memset_word4, '.', 8));
	printf("%s\n", ft_memset(memset_word4, '.', 8));
	printf("%s\n", 	  memset(memset_word5, '!', 1));
	printf("%s\n", ft_memset(memset_word5, '!', 1));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_bzero(void)
{
	char	bzero_maeloura[] = "22002";
	char	bzero_maeloura2[] = "22002";

	printf("ft_bzero\n");
	printf("%s\n", bzero_maeloura);
	bzero(bzero_maeloura, 4);
	printf("%s\n", bzero_maeloura);

	printf("%s\n", bzero_maeloura2);
	ft_bzero(bzero_maeloura2, 4);
	printf("%s\n", bzero_maeloura2);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memmove(void)
{
	char	memmove_ruivo[] = "Ruivo";
	char	memmove_morena[] = "Morena";
	char	memmove_dst0[] = "Loira do Tchan";
	char	memmove_dst1[] = "Loira do Tchan";
	char	memmove_dst2[20];
	char	memmove_dst3[] = "Loira do Tchan";
	
	printf("ft_memmove\n");
	printf("%s\n", memmove(memmove_dst0, memmove_ruivo, 4));
	printf("%s\n", memmove(memmove_dst1, memmove_ruivo, 4));
	printf("%s\n", memmove(memmove_dst2, memmove_morena, 6));
	printf("%s\n", memmove(memmove_dst3, memmove_ruivo, 6)); // até NUL-byte
	
	char	memmove_ruivo2[] = "Ruivo";
	char	memmove_morena2[] = "Morena";
	char	memmove_dst02[] = "Loira do Tchan";
	char	memmove_dst12[] = "Loira do Tchan";
	char	memmove_dst22[20];
	char	memmove_dst32[] = "Loira do Tchan";

	printf("%s\n", ft_memmove(memmove_dst02, memmove_ruivo2, 4));
	printf("%s\n", ft_memmove(memmove_dst12, memmove_ruivo2, 4));
	printf("%s\n", ft_memmove(memmove_dst22, memmove_morena2, 6));
	printf("%s\n", ft_memmove(memmove_dst32, memmove_ruivo2, 6)); // até NUL-byte
	
	char	memmove_dst03[] = "Loira do Tchan";
	char	memmove_dst13[] = "Loira do Tchan";
	char	memmove_dst23[20];
	char	memmove_dst33[] = "Loira do Tchan";

	printf("%s\n", ft_memmove(memmove_dst03, "Ruivo", 4));
	printf("%s\n", ft_memmove(memmove_dst13, "Ruivo", 4));
	printf("%s\n", ft_memmove(memmove_dst23, "Morena", 6));
	printf("%s\n", ft_memmove(memmove_dst33, "Ruivo", 6)); // até NUL-byte
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memcmp(void)
{
	const char	memcmp_s1[] = "Vaga-lume";
	const char	memcmp_s2[] = "Vaga-lume";
	const char	memcmp_s3[] = "Vagalume";
	const char	memcmp_s4[] = "vagabume";
	const char	memcmp_s5[] = "25696969";
	const char	memcmp_s6[] = "25696969";
	const char	memcmp_s7[] = "25808080";
	const char	memcmp_s8[] = "22737373";

	printf("ft_memcmp\n");
	printf("%i\t",    memcmp(memcmp_s1, memcmp_s2, 6));
	printf("%i\n", ft_memcmp(memcmp_s1, memcmp_s2, 6));
	printf("%i\t",    memcmp(memcmp_s1, memcmp_s3, 6));
	printf("%i\n", ft_memcmp(memcmp_s1, memcmp_s3, 6));
	printf("%i\t",    memcmp(memcmp_s1, memcmp_s4, 6));
	printf("%i\n", ft_memcmp(memcmp_s1, memcmp_s4, 6));
	printf("%i\t",    memcmp(memcmp_s1, memcmp_s2, 4));
	printf("%i\n", ft_memcmp(memcmp_s1, memcmp_s2, 4));
	printf("%i\t",    memcmp(memcmp_s1, memcmp_s3, 4));
	printf("%i\n", ft_memcmp(memcmp_s1, memcmp_s3, 4));
	printf("%i\t",    memcmp(memcmp_s1, memcmp_s4, 4));
	printf("%i\n", ft_memcmp(memcmp_s1, memcmp_s4, 4));
	printf("%i\t",    memcmp(memcmp_s5, memcmp_s6, 8));
	printf("%i\n", ft_memcmp(memcmp_s5, memcmp_s6, 8));
	printf("%i\t",    memcmp(memcmp_s5, memcmp_s7, 8));
	printf("%i\n", ft_memcmp(memcmp_s5, memcmp_s7, 8));
	printf("%i\t",    memcmp(memcmp_s5, memcmp_s7, 2));
	printf("%i\n", ft_memcmp(memcmp_s5, memcmp_s7, 2));
	printf("%i\t",    memcmp(memcmp_s5, memcmp_s8, 0));
	printf("%i\n", ft_memcmp(memcmp_s5, memcmp_s8, 0));
	printf("%i\t",    memcmp("Insetisan", "Insetfone", 8));
	printf("%i\n", ft_memcmp("Insetisan", "Insetfone", 8));
	printf("%i\t",    memcmp("Insetisan", "Insetfone", 5));
	printf("%i\n", ft_memcmp("Insetisan", "Insetfone", 5));
	printf("%i\t",    memcmp("Fone", "Fone", 4));
	printf("%i\n", ft_memcmp("Fone", "Fone", 4));
	printf("%i\t",    memcmp("25696969", "25696969", 6));
	printf("%i\n", ft_memcmp("25696969", "25696969", 6));
	printf("%i\t",    memcmp("25696969", "25808080", 4));
	printf("%i\n", ft_memcmp("25696969", "25808080", 4));
	printf("%i\t",    memcmp("25696969", "25808080", 2));
	printf("%i\n", ft_memcmp("25696969", "25808080", 2));
	printf("%i\t",    memcmp("Sanitas", "25808080", 10));
	printf("%i\n", ft_memcmp("Sanitas", "25808080", 10));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memchr(void)
{
	char	memchr_s[] = "Perereca";

	printf("ft_memchr\n");
	printf("%s\t", 	  memchr(memchr_s, 'e', 8));
	printf("%s\n", ft_memchr(memchr_s, 'e', 8));
	printf("%s\t", 	  memchr(memchr_s, 'c', 6));
	printf("%s\n", ft_memchr(memchr_s, 'c', 6));
	printf("%s\t", 	  memchr(memchr_s, 'p', 8));
	printf("%s\n", ft_memchr(memchr_s, 'p', 8));
	printf("%s\t", 	  memchr("Pererê", 'e', 8));
	printf("%s\n", ft_memchr("Pererê", 'e', 8));
	printf("%s\t", 	  memchr("Perereca", 'c', 6));
	printf("%s\n", ft_memchr("Perereca", 'c', 6));
	printf("%s\t", 	  memchr("Pererê", 'p', 8));
	printf("%s\n", ft_memchr("Pererê", 'p', 8));
	printf("%s\t", 	  memchr("Pererê", 'e', 6));
	printf("%s\n", ft_memchr("Pererê", 'e', 6));
	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

void	test_ft_isalpha(void)
{
	printf("\n");
	printf("ft_isalpha\n");
	printf("W %d\t", 	isalpha('W'));
	printf("%d\n", 	 ft_isalpha('W'));
	printf("i %d\t", 	isalpha('i'));
	printf("%d\n", 	 ft_isalpha('i'));
	printf("0 %d\t", 	isalpha('0'));
	printf("%d\n", 	 ft_isalpha('0'));
	printf("& %d\t", 	isalpha('&'));
	printf("%d\n", 	 ft_isalpha('&'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isdigit(void)
{
	printf("ft_isdigit\n");
	printf("V %d\t", 	isdigit('V'));
	printf("%d\n", 	 ft_isdigit('V'));
	printf("1 %d\t", 	isdigit('1'));
	printf("%d\n", 	 ft_isdigit('1'));
	printf("4 %d\t", 	isdigit('4'));
	printf("%d\n", 	 ft_isdigit('4'));
	printf("O %d\t", 	isdigit('O'));
	printf("%d\n", 	 ft_isdigit('O'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isalnum(void)
{
	printf("ft_isalnum\n");
	printf("P %d\t", 	isalnum('P'));
	printf("%d\n", 	 ft_isalnum('P'));
	printf("h %d\t", 	isalnum('h'));
	printf("%d\n", 	 ft_isalnum('h'));
	printf("& %d\t", 	isalnum('&'));
	printf("%d\n", 	 ft_isalnum('&'));
	printf("4 %d\t", 	isalnum('4'));
	printf("%d\n", 	 ft_isalnum('4'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isascii(void)
{
	printf("ft_isascii\n");
	printf("T %d\t", 	isascii('T'));
	printf("%d\n", 	 ft_isascii('T'));
	printf("h %d\t", 	isascii('h'));
	printf("%d\n", 	 ft_isascii('h'));
	printf("4 %d\t", 	isascii('4'));
	printf("%d\n", 	 ft_isascii('4'));
	printf("[129] %d\t", 	isascii(129));
	printf("%d\n", 		 ft_isascii(129));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isprint(void)
{
	printf("ft_isprint\n");
	printf("[HT]\\t %d\t", 	isprint(9));
	printf("%d\n", 		 ft_isprint(9));
	printf("[HT]\\v %d\t", 	isprint(11));
	printf("%d\n", 		 ft_isprint(11));
	printf("+ %d\t", 	isprint(43));
	printf("%d\n", 	 ft_isprint(43));
	printf("[DEL] %d\t", 	isprint(127));
	printf("%d\n", 		 ft_isprint(127));
	printf("[NUL] %d\t", 	isprint(0));
	printf("%d\n", 		 ft_isprint(0));
	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

void	test_ft_toupper(void)
{
	printf("ft_toupper\n");
	printf("w %c\t", 	toupper('w'));
	printf("%c\n", 	 ft_toupper('w'));
	printf("I %c\t", 	toupper('I'));
	printf("%c\n", 	 ft_toupper('I'));
	printf("4 %c\t", 	toupper('4'));
	printf("%c\n", 	 ft_toupper('4'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_tolower(void)
{
	printf("ft_tolower\n");
	printf("w %c\t", 	tolower('w'));
	printf("%c\n", 	 ft_tolower('w'));
	printf("I %c\t", 	tolower('I'));
	printf("%c\n", 	 ft_tolower('I'));
	printf("4 %c\t", 	tolower('4'));
	printf("%c\n", 	 ft_tolower('4'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strchr(void)
{
	char	strchr_word[] = "Funk do Yudi";
	char	strchr_word2[] = "40028922";

	printf("ft_strchr\n");
	printf("u %s\t",  strchr(strchr_word, 'u'));
	printf("%s\n", ft_strchr(strchr_word, 'u'));
	printf("%p\t", 	  strchr(strchr_word, 'u'));
	printf("%p\n", ft_strchr(strchr_word, 'u'));
	printf("e %s\t",  strchr("Plesteixon", 'e'));
	printf("%s\n", ft_strchr("Plesteixon", 'e'));
	printf("%p\t", 	  strchr("Plesteixon", 'e'));
	printf("%p\n", ft_strchr("Plesteixon", 'e'));
	printf("y %s\t",  strchr(strchr_word, 'y'));
	printf("%s\n", ft_strchr(strchr_word, 'y'));
	printf("%p\t", 	  strchr(strchr_word, 'y'));
	printf("%p\n", ft_strchr(strchr_word, 'y'));
	printf("y %s\t",  strchr("Plesteixon", 'y'));
	printf("%s\n", ft_strchr("Plesteixon", 'y'));
	printf("%p\t", 	  strchr("Plesteixon", 'y'));
	printf("%p\n", ft_strchr("Plesteixon", 'y'));
	printf("o %s\t",  strchr("", 'o'));
	printf("%s\n", ft_strchr("", 'o'));
	printf("%p\t", 	  strchr("", 'o'));
	printf("%p\n", ft_strchr("", 'o'));
	printf("\\0 %s\t",strchr(strchr_word, '\0'));
	printf("%s\n", ft_strchr(strchr_word, '\0'));
	printf("%p\t", 	  strchr(strchr_word, '\0'));
	printf("%p\n", ft_strchr(strchr_word, '\0'));
	printf("2 %s\t",  strchr(strchr_word2, '2'));
	printf("%s\n", ft_strchr(strchr_word2, '2'));
	printf("%p\t", 	  strchr(strchr_word2, '2'));
	printf("%p\n", ft_strchr(strchr_word2, '2'));
	printf("2 %s\t",  strchr("40028922", '2'));
	printf("%s\n", ft_strchr("40028922", '2'));
	printf("%p\t", 	  strchr("40028922", '2'));
	printf("%p\n", ft_strchr("40028922", '2'));
	printf("3 %s\t",  strchr(strchr_word2, '3'));
	printf("%s\n", ft_strchr(strchr_word2, '3'));
	printf("%p\t", 	  strchr(strchr_word2, '3'));
	printf("%p\n", ft_strchr(strchr_word2, '3'));
	printf("3 %s\t",  strchr("40028922", '3'));
	printf("%s\n", ft_strchr("40028922", '3'));
	printf("%p\t", 	  strchr("40028922", '3'));
	printf("%p\n", ft_strchr("40028922", '3'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strrchr(void)
{
	char	strrchar_word[] = "Funk do Yudi";
	char	strrchar_word2[] = "40028922";

	printf("ft_strrchr\n");
	printf("F %s\t",  strrchr(strrchar_word, 'F'));
	printf("%s\n", ft_strrchr(strrchar_word, 'F'));
	printf("%p\t", 	  strrchr(strrchar_word, 'F'));
	printf("%p\n", ft_strrchr(strrchar_word, 'F'));
	printf("u %s\t",  strrchr(strrchar_word, 'u'));
	printf("%s\n", ft_strrchr(strrchar_word, 'u'));
	printf("%p\t", 	  strrchr(strrchar_word, 'u'));
	printf("%p\n", ft_strrchr(strrchar_word, 'u'));
	printf("e %s\t",  strrchr("Plesteixon", 'e'));
	printf("%s\n", ft_strrchr("Plesteixon", 'e'));
	printf("%p\t", 	  strrchr("Plesteixon", 'e'));
	printf("%p\n", ft_strrchr("Plesteixon", 'e'));
	printf("y %s\t",  strrchr(strrchar_word, 'y'));
	printf("%s\n", ft_strrchr(strrchar_word, 'y'));
	printf("%p\t", 	  strrchr(strrchar_word, 'y'));
	printf("%p\n", ft_strrchr(strrchar_word, 'y'));
	printf("y %s\t",  strrchr("Plesteixon", 'y'));
	printf("%s\n", ft_strrchr("Plesteixon", 'y'));
	printf("%p\t", 	  strrchr("Plesteixon", 'y'));
	printf("%p\n", ft_strrchr("Plesteixon", 'y'));
	printf("o %s\t",  strrchr("", 'o'));
	printf("%s\n", ft_strrchr("", 'o'));
	printf("%p\t", 	  strrchr("", 'o'));
	printf("%p\n", ft_strrchr("", 'o'));
	printf("\\0 %s\t",strrchr(strrchar_word, '\0'));
	printf("%s\n", ft_strrchr(strrchar_word, '\0'));
	printf("%p\t", 	  strrchr(strrchar_word, '\0'));
	printf("%p\n", ft_strrchr(strrchar_word, '\0'));
	printf("2 %s\t",  strrchr(strrchar_word2, '2'));
	printf("%s\n", ft_strrchr(strrchar_word2, '2'));
	printf("%p\t", 	  strrchr(strrchar_word2, '2'));
	printf("%p\n", ft_strrchr(strrchar_word2, '2'));
	printf("2 %s\t",  strrchr("40028922", '2'));
	printf("%s\n", ft_strrchr("40028922", '2'));
	printf("%p\t", 	  strrchr("40028922", '2'));
	printf("%p\n", ft_strrchr("40028922", '2'));
	printf("3 %s\t",  strrchr(strrchar_word2, '3'));
	printf("%s\n", ft_strrchr(strrchar_word2, '3'));
	printf("%ptn", 	  strrchr(strrchar_word2, '3'));
	printf("%p\n", ft_strrchr(strrchar_word2, '3'));
	printf("3 %s\t",  strrchr("40028922", '3'));
	printf("%s\n", ft_strrchr("40028922", '3'));
	printf("%p\t",	  strrchr("40028922", '3'));
	printf("%p\n", ft_strrchr("40028922", '3'));
	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

void	test_ft_strlcat(void)
{
	char	strlcat_src[] = " ella ella";
	char	strlcat_dest[] = "Under my umbrella";

	printf("ft_strlcat\n");
	printf("%zu\t",    strlcat(strlcat_dest, strlcat_src, 15));
	printf("%zu\n", ft_strlcat(strlcat_dest, strlcat_src, 15));
	printf("%zu\t",    strlcat(strlcat_dest, strlcat_src, 10));
	printf("%zu\n", ft_strlcat(strlcat_dest, strlcat_src, 10));
	printf("%lu\t",    strlcat(strlcat_dest, strlcat_src, 9));
	printf("%zu\n", ft_strlcat(strlcat_dest, strlcat_src, 9));
	printf("%lu\t",    strlcat(strlcat_dest, strlcat_src, 4));
	printf("%zu\n", ft_strlcat(strlcat_dest, strlcat_src, 4));
	printf("%lu\t",    strlcat(strlcat_dest, strlcat_src, 0));
	printf("%zu\n", ft_strlcat(strlcat_dest, strlcat_src, 0));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strlcpy(void)
{
	char	strlcpy_src3[] = "Cabelo";
	char	strlcpy_src4[] = "Cabeleira";
	char	strlcpy_src5[] = "Cabeluda";
	char	strlcpy_dst4[] = "Descabelada";
	char	strlcpy_dst5[20];
	char	strlcpy_dst6[] = "Cabe";

	printf("ft_strlcpy\n");
	printf("%zu\n", strlcpy(strlcpy_dst4, strlcpy_src3, 8));
	printf("%s\n", strlcpy_dst4);
	printf("%zu\n", strlcpy(strlcpy_dst5, strlcpy_src4, 10));
	printf("%s\n", strlcpy_dst5);
	printf("%zu\n", strlcpy(strlcpy_dst6, strlcpy_src5, 3));
	printf("%s\n", strlcpy_dst6);
	printf("%zu\n", strlcpy(strlcpy_dst5, strlcpy_src4, 8));
	printf("%s\n", strlcpy_dst5);
	printf("%zu\n", strlcpy(strlcpy_dst5, strlcpy_src4, 15));
	printf("%s\n", strlcpy_dst5);

	char	strlcpy_src32[] = "Cabelo";
	char	strlcpy_src42[] = "Cabeleira";
	char	strlcpy_src52[] = "Cabeluda";
	char	strlcpy_dst42[] = "Descabelada";
	char	strlcpy_dst52[20];
	char	strlcpy_dst62[] = "Cabe";

	printf("%zu\n", ft_strlcpy(strlcpy_dst42, strlcpy_src32, 8));
	printf("%s\n", strlcpy_dst42);
	printf("%zu\n", ft_strlcpy(strlcpy_dst52, strlcpy_src42, 10));
	printf("%s\n", strlcpy_dst52);
	printf("%zu\n", ft_strlcpy(strlcpy_dst62, strlcpy_src52, 3));
	printf("%s\n", strlcpy_dst62);
	printf("%zu\n", ft_strlcpy(strlcpy_dst52, strlcpy_src42, 8));
	printf("%s\n", strlcpy_dst52);
	printf("%zu\n", ft_strlcpy(strlcpy_dst52, strlcpy_src42, 15));
	printf("%s\n", strlcpy_dst52);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_atoi(void)
{
	char	atoi_string1[] = "2342";
	char	atoi_string2[] = "2147483647";
	char	atoi_string3[] = "-2147483647";
	char	atoi_string4[] = "2147483647";
	char	atoi_string5[] = "-2147483647";

	printf("ft_atoi\n");
	printf("%i\n", 	  atoi(atoi_string1));
	printf("%i\n", ft_atoi(atoi_string1));
	printf("%i\n", 	  atoi(atoi_string2));
	printf("%i\n", ft_atoi(atoi_string2));
	printf("%i\n", 	  atoi(atoi_string3));
	printf("%i\n", ft_atoi(atoi_string3));
	printf("%i\n", 	  atoi(atoi_string4));
	printf("%i\n", ft_atoi(atoi_string4));
	printf("%i\n", 	  atoi(atoi_string5));
	printf("%i\n", ft_atoi(atoi_string5));
	printf("%i\n", 	  atoi("481516"));
	printf("%i\n", ft_atoi("481516"));
	printf("%i\n", 	  atoi("-2342"));
	printf("%i\n", ft_atoi("-2342"));
	printf("%i\n", 	  atoi(" -2342 "));
	printf("%i\n", ft_atoi(" -2342 "));
	printf("%i\n", 	  atoi("--2342"));
	printf("%i\n", ft_atoi("--2342"));
	printf("%i\n", 	  atoi("\n-+-2342\n"));
	printf("%i\n", ft_atoi("\n-+-2342\n"));
	printf("%i\n", 	  atoi("\t---2342\t"));
	printf("%i\n", ft_atoi("\t---2342\t"));
	printf("%i\n", 	  atoi("23p42 "));
	printf("%i\n", ft_atoi("23p42 "));
	printf("%i\n", 	  atoi("42ç9"));
	printf("%i\n", ft_atoi("42ç9"));
	printf("%i\n", 	  atoi("ç23"));
	printf("%i\n", ft_atoi("ç23"));
	printf("%i\n", 	  atoi("~23"));
	printf("%i\n", ft_atoi("~23"));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strnstr(void)
{
	printf("ft_strnstr\n");
	printf("%s\n", 	  strnstr("Toatoa ukulele", "ku", 14));
	printf("%s\n", ft_strnstr("Toatoa ukulele", "ku", 14));
	printf("%s\n", 	  strnstr("Toatoa ukulele", "ke", 14));
	printf("%s\n", ft_strnstr("Toatoa ukulele", "ke", 14));
	printf("%s\n", 	  strnstr("Huehuecoyotl", "Hue", 12));
	printf("%s\n", ft_strnstr("Huehuecoyotl", "Hue", 12));
	printf("%s\n", 	  strnstr("Huehuecoyotl", "hue", 12));
	printf("%s\n", ft_strnstr("Huehuecoyotl", "hue", 12));
	printf("%s\n", 	  strnstr("Huehuecoyotl", "ue", 12));
	printf("%s\n", ft_strnstr("Huehuecoyotl", "ue", 12));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strncmp(void)
{
	char	strncmp_word1[] = "Eu sou voc3.";
	char	strncmp_word2[] = "Eu sou voc3.";
	char	strncmp_word3[] = "Eu sou voz3.";
	char	strncmp_word4[] = "Eu sou pav3.";

	printf("ft_strncmp\n");
	printf("%d\t", 	  strncmp(strncmp_word1, strncmp_word2, 12));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word2, 12));
	printf("%d\t", 	  strncmp(strncmp_word1, strncmp_word2, 10));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word2, 10));
	printf("%d\t", 	  strncmp(strncmp_word1, strncmp_word2, 8));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word2, 8));
	printf("%d\t", 	  strncmp(strncmp_word1, strncmp_word3, 12));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word3, 12));
	printf("%d\t", 	  strncmp(strncmp_word1, strncmp_word3, 10));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word3, 10));
	printf("%d\t", 	  strncmp(strncmp_word1, strncmp_word3, 8));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word3, 8));
	printf("%d\t", 	  strncmp(strncmp_word1, strncmp_word4, 12));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 12));
	printf("%d\t", 	  strncmp(strncmp_word1, strncmp_word4, 10));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 10));
	printf("%d\t", 	  strncmp(strncmp_word1, strncmp_word4, 8));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 8));
	printf("%d\t", 	  strncmp(strncmp_word1, strncmp_word4, 6));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 6));
	printf("%d\t", 	  strncmp("Pav8", "Pacom8", 8));
	printf("%d\n", ft_strncmp("Pav8", "Pacom8", 8));
	printf("%d\t", 	  strncmp("Pav8", "Pacom8", 6));
	printf("%d\n", ft_strncmp("Pav8", "Pacom8", 6));
	printf("%d\t", 	  strncmp("Pav8", "Pacom8", 4));
	printf("%d\n", ft_strncmp("Pav8", "Pacom8", 4));
	printf("%d\t", 	  strncmp("Pav8", "Pacom8", 2));
	printf("%d\n", ft_strncmp("Pav8", "Pacom8", 2));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_calloc(void)
{
	int	*calloc_test;

	printf("ft_calloc jocardos\n");
	calloc_test = ft_calloc(6, sizeof(int));
	for(int i = 0; i < 6; i++)
		printf("%d", calloc_test[i]);
	printf("\n");
	free(calloc_test);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strdup(void)
{
	char strdup_str[] = "Inaraí";
	char *strdup_str2;
	
	printf("ft_strdup\n");
	strdup_str2 = ft_strdup(strdup_str);
	printf("%s, %s\n", strdup_str, strdup_str2);
	free(strdup_str2);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_substr(void)
{
	char	substr_word1[] = "ocupado";
	char	substr_word2[] = "";

	printf("ft_substr\n");
	printf("%s\n", ft_substr(substr_word1, 0, 1));
	printf("%s\n", ft_substr("ocupado",    0, 1));
	printf("%s\n", ft_substr(substr_word1, 1, 2));
	printf("%s\n", ft_substr("ocupado",    1, 2));
	printf("%s\n", ft_substr(substr_word1, 0, 0));
	printf("%s\n", ft_substr("ocupado",    0, 0));
	printf("%s\n", ft_substr(substr_word2, 0, 0));
	printf("%s\n", ft_substr("",    	   0, 0));
	printf("%s\n", ft_substr(substr_word1, 4, 3));
	printf("%s\n", ft_substr(substr_word1, 4, 1));
	printf("%s\n", ft_substr("ocupado",    4, 3));
	printf("%s\n", ft_substr("",    	   4, 2));
	printf("%s\n", ft_substr(substr_word2, 1, 4));
	printf("%s\n", ft_substr("",    	   1, 4));
	printf("%s\n", ft_substr(substr_word2, 2, 1));
	printf("%s\n", ft_substr("",    	   2, 1));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strjoin(void)
{
	char	strjoin_s1[] = "Cause this is thriller ";
	char	strjoin_s2[] = "Thriller night ";
	char	strjoin_s3[] = "";

	printf("ft_strjoin\n");
	printf("%s\n", ft_strjoin(strjoin_s1, strjoin_s2));
	printf("%s\n", ft_strjoin(strjoin_s2, strjoin_s1));
	printf("%s\n", ft_strjoin(strjoin_s1, strjoin_s3));
	printf("%s\n", ft_strjoin(strjoin_s2, strjoin_s3));
	printf("%s\n", ft_strjoin(strjoin_s3, strjoin_s1));
	printf("%s\n", ft_strjoin(strjoin_s3, strjoin_s2));
	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

void	test_ft_putchar_fd(void)
{
	char	putchar_c = 'W';

	printf("ft_putchar_fd\n");
	ft_putchar_fd(putchar_c, 1);
	printf("\n");
	printf("---------------------------------------------------\n\v");
}

void	test_ft_putstr_fd(void)
{
	char	*putstr_s = "Sirva-me, messalina!";

	printf("ft_putstr_fd\n");
	ft_putstr_fd(putstr_s, 1);
	printf("\n");
	printf("---------------------------------------------------\n\v");
}

void	test_ft_putendl_fd(void)
{
	char	*putendl_s = "Que anciã lasciva!";

	printf("ft_putendl_fd\n");
	ft_putendl_fd(putendl_s, 1);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_putnbr_fd(void)
{
	int	putnbr_i1 = -2147483648;
	int	putnbr_i2 = -2147483647;
	int	putnbr_i3 = -0;
	int	putnbr_i4 = 0;
	int	putnbr_i5 = 2147483647;

	printf("ft_putnbr_fd\n");
	ft_putnbr_fd(putnbr_i1, 1);
	printf("\n");
	ft_putnbr_fd(putnbr_i2, 1);
	printf("\n");
	ft_putnbr_fd(putnbr_i3, 1);
	printf("\n");
	ft_putnbr_fd(putnbr_i4, 1);
	printf("\n");
	ft_putnbr_fd(putnbr_i5, 1);
	printf("\n");
	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

char function_strmapi(unsigned int i, char c)
{
	i = 1;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

void	test_ft_strmapi(void)
{
	void	*pointertofunction;
	char	*string_strmapi;

	pointertofunction = function_strmapi;
	string_strmapi = ft_strmapi("Passarinho!\n", pointertofunction);
	printf("ft_strmapi\n");
	printf("%s", string_strmapi);
	printf("---------------------------------------------------\n\v");
}

void function_striteri(unsigned int i, char *c)
{
	i = 1;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
	return ;
}

// Preciso fazer strdup pois, se passar direto ou através de uma variável própria,
// não compila, dá bus error ou não executa a função.
void	test_ft_striteri(void)
{
	void	*pointertofunction2;
	char	*string_iteri;

	pointertofunction2 = function_striteri;
	string_iteri = ft_strdup("que som é esse?");
	ft_striteri(string_iteri, pointertofunction2);
	printf("ft_striteri\n");
	printf("%s\n", string_iteri);
	free(string_iteri);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strtrim(void)
{
	printf("ft_strtrim\n");
	char	strtrim_string1[] = "desbundes";
	char	strtrim_string2[] = "desbundesbundes";
	char	strtrim_string3[] = "imundes";
	char	strtrim_forbidden1[] = "des";
	char	strtrim_string4[] = "    ---despacio---   ";
	char	strtrim_string5[] = "    ---despacio";
	char	strtrim_forbidden2[] = " -";

	printf("%s\n", ft_strtrim(strtrim_string1, strtrim_forbidden1));
	printf("%s\n", ft_strtrim(strtrim_string2, strtrim_forbidden1));
	printf("%s\n", ft_strtrim(strtrim_string3, strtrim_forbidden1));
	printf("%s\n", ft_strtrim("desbundes", "des"));
	printf("%s\n", ft_strtrim("imundes", "des"));
	printf("%s\n", ft_strtrim(strtrim_string4, strtrim_forbidden2));
	printf("%s\n", ft_strtrim(strtrim_string5, strtrim_forbidden2));
	printf("%s\n", ft_strtrim("    ---despacio", " -")); 
	printf("%s\n", ft_strtrim("despacio   ------   ", " -"));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_split(void)
{

	int		i = 0;
	char	altogether[] = "O PINTO DO MEU PAI";
	char	forbidden = 'P';
	char	**shard;

	printf("ft_split\n");
	shard = ft_split(altogether, forbidden);
	while (shard[i] != 0)
	{
		printf("%s", shard[i]);
		printf("\n");
		i++;
	}
	printf("---------------------------------------------------\n\v");
}

void	test_ft_itoa(void)
{
	int	itoa_int1 = 2342;
	int	itoa_int2 = -2147483648;
	int	itoa_int3 = -2147483647;
	int	itoa_int4 = 2147483647;
	int	itoa_int5 = 481516;
	int	itoa_int6 = -2342;
	int	itoa_int7 =  -2342 ;
	int	itoa_int8 = -+-2342;
	int	itoa_int9 = -1234567890;
	int	itoa_int10 = 1234567890;
	int	itoa_int11 = -1073741823;
	int	itoa_int12 = 1073741823;
	int	itoa_int13 = 0;
	int	itoa_int14 = -0;
	int	itoa_int15 = 1;

	printf("ft_itoa\n");
	printf("%s\n", ft_itoa(itoa_int1));
	printf("%s\n", ft_itoa(itoa_int2));
	printf("%s\n", ft_itoa(itoa_int3));
	printf("%s\n", ft_itoa(itoa_int4));
	printf("%s\n", ft_itoa(itoa_int5));
	printf("%s\n", ft_itoa(itoa_int6));
	printf("%s\n", ft_itoa(itoa_int7));
	printf("%s\n", ft_itoa(itoa_int8));
	printf("%s\n", ft_itoa(itoa_int9));
	printf("%s\n", ft_itoa(itoa_int10));
	printf("%s\n", ft_itoa(itoa_int11));
	printf("%s\n", ft_itoa(itoa_int12));
	printf("%s\n", ft_itoa(itoa_int13));
	printf("%s\n", ft_itoa(itoa_int14));
	printf("%s\n", ft_itoa(itoa_int15));

/*int    g_n[] = {\
                -2147483648, \
                -1234567890, \
                -10, \
                -8, \
                -7, \
                -1, \
                0, \
                1, \
                2, \
                3, \
                1234567890, \
                2147483647, \
            };

{
    int    i;

    i = 0;
    while (i < ((int) sizeof(g_n) / (int) sizeof(g_n[0])))
    {
        printf("%s \n", ft_itoa(g_n[i]));
        i++;
    }
    return (0);
}*/

	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

// bonus

int	main(void)
{
	test_ft_strlen();
	test_ft_memcpy();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memmove();
	test_ft_memcmp();
	test_ft_memchr();
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strlcat();
	test_ft_strlcpy();
	test_ft_atoi();
	test_ft_strnstr();
	test_ft_strncmp();
	test_ft_calloc();
	test_ft_strdup();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	// bonus
	return (0);
}
