#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	test_ft_strlen(void)
{
	printf("---------------------------------------------------\n\v");
	printf("ft_strlen\n");
	printf("Your lucky number is… %zu\n", strlen("Your lucky number is…"));
	printf("Your lucky number is… %zu\n", ft_strlen("Your lucky number is…"));
	printf("Papi, o camelo tem %zu corcundas\n", strlen("Papi"));
	printf("Papi, o camelo tem %zu corcundas\n", ft_strlen("Papi"));
	printf("%zu mandamentos\n", strlen("mandamento"));
	printf("%zu mandamentos\n", ft_strlen("mandamento"));
	printf("%zu pecados\n", strlen("pecados"));
	printf("%zu pecados\n", ft_strlen("pecados"));
	printf("dois e quarenta e %zu\n", strlen("dois e quarenta e "));
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

	printf("%s\n", ft_memcpy("Loira do Tchan", "Ruivo", 4));
	printf("%s\n", ft_memcpy("Loira do Tchan", "Ruivo", 4));
	printf("%s\n", ft_memcpy("", "Morena", 6));
	printf("%s\n", ft_memcpy("Loira do Tchan", "Ruivo", 6)); // até NUL-byte

	// main do jocardos
	printf("\n---- memcpy jocardos ----\n");
	char src_real1[50];
	char src_test1[50];
	char dest_real1[50];
	char dest_test1[50];
	strcpy(src_real1, "Lorem ipsum dolor sit amet");
	strcpy(src_test1, "Lorem ipsum dolor sit amet");
	strcpy(dest_real1, "consectetur adipiscing");
	strcpy(dest_test1, "consectetur adipiscing");
	printf("src content : %s, dest content : %s\n", src_real1, dest_real1);
	memcpy(dest_real1, src_real1, 6);
	ft_memcpy(dest_test1, src_test1, 6);
	printf("memcpy (dest, src, 6) : %s, real : %s\n", dest_test1, dest_real1);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memset(void)
{
	char	memset_word[] = "ciência";
	char	memset_word2[] = "combate";
	char	memset_word3[] = "caipirosca";
	char	memset_word4[] = "extraviado";
	char	memset_word5[] = "adotado";

	printf("ft_memset\n");
	printf("%s\n", memset(memset_word, '*', 1));
	printf("%s\n", ft_memset(memset_word, '*', 1));
	printf("%s\n", memset(memset_word2, '$', 3));
	printf("%s\n", ft_memset(memset_word2, '$', 3));
	printf("%s\n", memset(memset_word3, '%', 5));
	printf("%s\n", ft_memset(memset_word3, '%', 5));
	printf("%s\n", memset(memset_word4, '.', 8));
	printf("%s\n", ft_memset(memset_word4, '.', 8));
	printf("%s\n", memset(memset_word5, '!', 1));
	printf("%s\n", ft_memset(memset_word5, '!', 1));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_bzero(void)
{
	char	bzero_maeloura[] = "22002";

	printf("ft_bzero\n");
	printf("%s\n", bzero_maeloura);
	bzero(bzero_maeloura, 4);
	printf("%s\n", bzero_maeloura);

	char	bzero_maeloura2[] = "22002";
	printf("%s\n", bzero_maeloura2);
	ft_bzero(bzero_maeloura2, 4);
	printf("%s\n", bzero_maeloura2);

	// main do jocardos
	printf("\n---- bzero jocardos ----\n");
	char str_real2[50];
	strcpy(str_real2, "Hello 42");
	bzero(str_real2, 6);
	char str_test2[50];
	strcpy(str_test2, "Hello 42");
	ft_bzero(str_test2, 6);
	printf("\"Hello 42\" bzero (6) : %s seventh char : %c, real : %s seventh char : %c\n", str_test2, str_test2[6], str_real2, str_real2[6]);
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
	
	char	memmove_ruivo2[6] = "Ruivo";
	char	memmove_morena2[7] = "Morena";
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

	// main do jocardos
	printf("\n---- memmove jocardos ----\n");
	char str_test7[] = "memmove can be very useful......";
	char str_real7[] = "memmove can be very useful......";
	ft_memmove(str_test7 + 20, str_test7 + 15, 11);
	memmove(str_real7 + 20, str_real7 + 15, 11);
	printf("Real : %s\n", str_real7);
	printf("Test : %s\n", str_test7);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memcmp(void)
{
	const char	memcmp_s[] = "Vaga-lume";
	const char	memcmp_s2[] = "Vaga-lume";
	const char	memcmp_s3[] = "Vagalume";
	const char	memcmp_s4[] = "vagabume";
	const char	memcmp_s5[] = "25696969";
	const char	memcmp_s6[] = "25696969";
	const char	memcmp_s7[] = "25808080";
	const char	memcmp_s8[] = "22737373";

	printf("ft_memcmp\n");
	printf("%i\n", memcmp(memcmp_s, memcmp_s2, 6));
	printf("%i\n", ft_memcmp(memcmp_s, memcmp_s2, 6));
	printf("%i\n", memcmp(memcmp_s, memcmp_s3, 6));
	printf("%i\n", ft_memcmp(memcmp_s, memcmp_s3, 6));
	printf("%i\n", memcmp(memcmp_s, memcmp_s4, 6));
	printf("%i\n", ft_memcmp(memcmp_s, memcmp_s4, 6));
	printf("%i\n", memcmp(memcmp_s, memcmp_s2, 4));
	printf("%i\n", ft_memcmp(memcmp_s, memcmp_s2, 4));
	printf("%i\n", memcmp(memcmp_s, memcmp_s3, 4));
	printf("%i\n", ft_memcmp(memcmp_s, memcmp_s3, 3));
	printf("%i\n", memcmp(memcmp_s, memcmp_s4, 4));
	printf("%i\n", ft_memcmp(memcmp_s, memcmp_s4, 4));
	printf("%i\n", memcmp(memcmp_s5, memcmp_s6, 8));
	printf("%i\n", ft_memcmp(memcmp_s5, memcmp_s6, 8));
	printf("%i\n", memcmp(memcmp_s5, memcmp_s7, 8)); //-2
	printf("%i\n", ft_memcmp(memcmp_s, memcmp_s7, 8)); //36
	printf("%i\n", memcmp(memcmp_s5, memcmp_s7, 2)); //0
	printf("%i\n", ft_memcmp(memcmp_s, memcmp_s7, 2)); //36
	printf("%i\n", memcmp(memcmp_s5, memcmp_s8, 0));
	printf("%i\n", ft_memcmp(memcmp_s, memcmp_s8, 0));
	printf("%i\n", memcmp("Insetisan", "Insetfone", 8)); //1
	printf("%i\n", ft_memcmp("Insetisan", "Insetfone", 8)); //3
	printf("%i\n", memcmp("Insetisan", "Insetfone", 5));
	printf("%i\n", ft_memcmp("Insetisan", "Insetfone", 5));
	printf("%i\n", memcmp("Fone", "Fone", 4));
	printf("%i\n", ft_memcmp("Fone", "Fone", 4));
	printf("%i\n", memcmp("25696969", "25696969", 6));
	printf("%i\n", ft_memcmp("25696969", "25696969", 6));
	printf("%i\n", memcmp("25696969", "25808080", 4));//-1
	printf("%i\n", ft_memcmp("25696969", "25808080", 4));//-2
	printf("%i\n", memcmp("25696969", "25808080", 2));
	printf("%i\n", ft_memcmp("25696969", "25808080", 2));
	printf("%i\n", memcmp("Sanitas", "25808080", 10));//1
	printf("%i\n", ft_memcmp("Sanitas", "25808080", 10));//33
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memchr(void)
{
	char	memchr_s[] = "Perereca";

	printf("ft_memchr\n");
	printf("%s\n", memchr(memchr_s, 'e', 8));
	printf("%s\n", ft_memchr(memchr_s, 'e', 8));
	printf("%s\n", memchr(memchr_s, 'c', 6));
	printf("%s\n", ft_memchr(memchr_s, 'c', 6));
	printf("%s\n", memchr(memchr_s, 'p', 8));
	printf("%s\n", ft_memchr(memchr_s, 'p', 8));
	printf("%s\n", memchr("Pererê", 'e', 8));
	printf("%s\n", ft_memchr("Pererê", 'e', 8));
	printf("%s\n", memchr("Perereca", 'c', 6));
	printf("%s\n", ft_memchr("Perereca", 'c', 6));
	printf("%s\n", memchr("Pererê", 'p', 8));
	printf("%s\n", ft_memchr("Pererê", 'p', 8));
	printf("%s\n", memchr("Pererê", 'e', 6));
	printf("%s\n", ft_memchr("Pererê", 'e', 6));
	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

void	test_ft_isalpha(void)
{
	printf("\n");
	printf("ft_isalpha\n");
	printf("W %d\n", isalpha('W'));
	printf("W %d\n", ft_isalpha('W'));
	printf("i %d\n", isalpha('i'));
	printf("i %d\n", ft_isalpha('i'));
	printf("0 %d\n", isalpha('0'));
	printf("0 %d\n", ft_isalpha('0'));
	printf("& %d\n", isalpha('&'));
	printf("& %d\n", ft_isalpha('&'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isdigit(void)
{
	printf("ft_isdigit\n");
	printf("V %d\n", isdigit('V'));
	printf("V %d\n", ft_isdigit('V'));
	printf("1 %d\n", isdigit('1'));
	printf("1 %d\n", ft_isdigit('1'));
	printf("4 %d\n", isdigit('4'));
	printf("4 %d\n", ft_isdigit('4'));
	printf("O %d\n", isdigit('O'));
	printf("O %d\n", ft_isdigit('O'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isalnum(void)
{
	printf("ft_isalnum\n");
	printf("P %d\n", isalnum('P'));
	printf("P %d\n", ft_isalnum('P'));
	printf("h %d\n", isalnum('h'));
	printf("h %d\n", ft_isalnum('h'));
	printf("& %d\n", isalnum('&'));
	printf("& %d\n", ft_isalnum('&'));
	printf("4 %d\n", isalnum('4'));
	printf("4 %d\n", ft_isalnum('4'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isascii(void)
{
	printf("ft_isascii\n");
	printf("T %d\n", isascii('T'));
	printf("T %d\n", ft_isascii('T'));
	printf("h %d\n", isascii('h'));
	printf("h %d\n", ft_isascii('h'));
	printf("4 %d\n", isascii('4'));
	printf("4 %d\n", ft_isascii('4'));
	printf("[129] %d\n", isascii(129));
	printf("[129] %d\n", ft_isascii(129));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isprint(void)
{
	printf("ft_isprint\n");
	printf("[HT]\\t %d\n", isprint(9));
	printf("[HT]\\t %d\n", ft_isprint(9));
	printf("[HT]\\v %d\n", isprint(11));
	printf("[HT]\\v %d\n", ft_isprint(11));
	printf("+ %d\n", isprint(43));
	printf("+ %d\n", ft_isprint(43));
	printf("[DEL] %d\n", isprint(127));
	printf("[DEL] %d\n", ft_isprint(127));
	printf("[NUL] %d\n", isprint(0));
	printf("[NUL] %d\n", ft_isprint(0));
	printf("jocardos: ¡ isprint : %d, real : %d\n", ft_isprint(0xA1), isprint(0xA1));
	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

void	test_ft_toupper(void)
{
	printf("ft_toupper\n");
	printf("w %c\n", toupper('w'));
	printf("w %c\n", ft_toupper('w'));
	printf("I %c\n", toupper('I'));
	printf("I %c\n", ft_toupper('I'));
	printf("4 %c\n", toupper('4'));
	printf("4 %c\n", ft_toupper('4'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_tolower(void)
{
	printf("ft_tolower\n");
	printf("w %c\n", tolower('w'));
	printf("w %c\n", ft_tolower('w'));
	printf("I %c\n", tolower('I'));
	printf("I %c\n", ft_tolower('I'));
	printf("4 %c\n", tolower('4'));
	printf("4 %c\n", ft_tolower('4'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strchr(void)
{
	char	strchr_word[] = "Funk do Yudi";
	char	strchr_word2[] = "40028922";

	printf("ft_strchr\n");
	printf("u %s\n", strchr(strchr_word, 'u'));
	printf("u %s\n", ft_strchr(strchr_word, 'u'));
	printf("%p\n", strchr(strchr_word, 'u'));
	printf("%p\n", ft_strchr(strchr_word, 'u'));
	printf("e %s\n", strchr("Plesteixon", 'e'));
	printf("e %s\n", ft_strchr("Plesteixon", 'e'));
	printf("%p\n", strchr("Plesteixon", 'e'));
	printf("%p\n", ft_strchr("Plesteixon", 'e'));
	printf("y %s\n", strchr(strchr_word, 'y'));
	printf("y %s\n", ft_strchr(strchr_word, 'y'));
	printf("%p\n", strchr(strchr_word, 'y'));
	printf("%p\n", ft_strchr(strchr_word, 'y'));
	printf("y %s\n", strchr("Plesteixon", 'y'));
	printf("y %s\n", ft_strchr("Plesteixon", 'y'));
	printf("%p\n", strchr("Plesteixon", 'y'));
	printf("%p\n", ft_strchr("Plesteixon", 'y'));
	printf("o %s\n", strchr("", 'o'));
	printf("o %s\n", ft_strchr("", 'o'));
	printf("%p\n", strchr("", 'o'));
	printf("%p\n", ft_strchr("", 'o'));
	printf("\\0 %s\n", strchr(strchr_word, '\0'));
	printf("\\0 %s\n", ft_strchr(strchr_word, '\0'));
	printf("%p\n", strchr(strchr_word, '\0'));
	printf("%p\n", ft_strchr(strchr_word, '\0'));
	printf("2 %s\n", strchr(strchr_word2, '2'));
	printf("2 %s\n", ft_strchr(strchr_word2, '2'));
	printf("%p\n", strchr(strchr_word2, '2'));
	printf("%p\n", ft_strchr(strchr_word2, '2'));
	printf("2 %s\n", strchr("40028922", '2'));
	printf("2 %s\n", ft_strchr("40028922", '2'));
	printf("%p\n", strchr("40028922", '2'));
	printf("%p\n", ft_strchr("40028922", '2'));
	printf("3 %s\n", strchr(strchr_word2, '3'));
	printf("3 %s\n", ft_strchr(strchr_word2, '3'));
	printf("%p\n", strchr(strchr_word2, '3'));
	printf("%p\n", ft_strchr(strchr_word2, '3'));
	printf("3 %s\n", strchr("40028922", '3'));
	printf("3 %s\n", ft_strchr("40028922", '3'));
	printf("%p\n", strchr("40028922", '3'));
	printf("%p\n", ft_strchr("40028922", '3'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strrchr(void)
{
	char	strrchar_word[] = "Funk do Yudi";
	char	strrchar_word2[] = "40028922";

	printf("ft_strrchr\n");
	printf("u %s\n", strrchr(strrchar_word, 'u'));
	printf("u %s\n", ft_strrchr(strrchar_word, 'u'));
	printf("%p\n", strrchr(strrchar_word, 'u'));
	printf("%p\n", ft_strrchr(strrchar_word, 'u'));
	printf("e %s\n", strrchr("Plesteixon", 'e'));
	printf("e %s\n", ft_strrchr("Plesteixon", 'e'));
	printf("%p\n", strrchr("Plesteixon", 'e'));
	printf("%p\n", ft_strrchr("Plesteixon", 'e'));
	printf("y %s\n", strrchr(strrchar_word, 'y'));
	printf("y %s\n", ft_strrchr(strrchar_word, 'y'));
	printf("%p\n", strrchr(strrchar_word, 'y'));
	printf("%p\n", ft_strrchr(strrchar_word, 'y'));
	printf("y %s\n", strrchr("Plesteixon", 'y'));
	printf("y %s\n", ft_strrchr("Plesteixon", 'y'));
	printf("%p\n", strrchr("Plesteixon", 'y'));
	printf("%p\n", ft_strrchr("Plesteixon", 'y'));
	printf("o %s\n", strrchr("", 'o'));
	printf("o %s\n", ft_strrchr("", 'o'));
	printf("%p\n", strrchr("", 'o'));
	printf("%p\n", ft_strrchr("", 'o'));
	printf("\\0 %s\n", strrchr(strrchar_word, '\0'));
	printf("\\0 %s\n", ft_strrchr(strrchar_word, '\0'));
	printf("%p\n", strrchr(strrchar_word, '\0'));
	printf("%p\n", ft_strrchr(strrchar_word, '\0'));
	printf("2 %s\n", strrchr(strrchar_word2, '2'));
	printf("2 %s\n", ft_strrchr(strrchar_word2, '2'));
	printf("%p\n", strrchr(strrchar_word2, '2'));
	printf("%p\n", ft_strrchr(strrchar_word2, '2'));
	printf("2 %s\n", strrchr("40028922", '2'));
	printf("2 %s\n", ft_strrchr("40028922", '2'));
	printf("%p\n", strrchr("40028922", '2'));
	printf("%p\n", ft_strrchr("40028922", '2'));
	printf("3 %s\n", strrchr(strrchar_word2, '3'));
	printf("3 %s\n", ft_strrchr(strrchar_word2, '3'));
	printf("%p\n", strrchr(strrchar_word2, '3'));
	printf("%p\n", ft_strrchr(strrchar_word2, '3'));
	printf("3 %s\n", strrchr("40028922", '3'));
	printf("3 %s\n", ft_strrchr("40028922", '3'));
	printf("%p\n", strrchr("40028922", '3'));
	printf("%p\n", ft_strrchr("40028922", '3'));
	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

void	test_ft_strlcat(void)
{
	char	strlcat_src[] = " ella ella";
	char	strlcat_dest[] = "Under my umbrella";
	
	printf("ft_strlcat\n");
	printf("%s\n", ft_strcat(strlcat_dest, strlcat_src, 15));
	printf("%s\n", ft_strcat(strlcat_dest, strlcat_src, 10));
	printf("%s\n", ft_strcat(strlcat_dest, strlcat_src, 9));
	printf("%s\n", ft_strcat(strlcat_dest, strlcat_src, 4));
	printf("%s\n", ft_strcat(strlcat_dest, strlcat_src, 0));
	printf("%s\n", ft_strcat("we shine together", "When the sun shine ", 20));
	printf("%s\n", ft_strcat("we shine together", "When the sun shine ", 15));
	printf("%s\n", ft_strcat("we shine together", "When the sun shine ", 8));
	printf("%s\n", ft_strcat("we shine together", "When the sun shine ", 0));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strlcpy(void)
{
	char	strlcpy_src3[] = "Cabelo";
	char	strlcpy_src4[] = "Cabeleira";
	char	strlcpy_src5[] = "Cabeluda";
	char	strlcpy_dst4[] = "Descabelada";
	char	strlcpy_dst5[20] = "";
	char	strlcpy_dst6[] = "Cabe";

	printf("ft_strlcpy\n");
	printf("%zu\n", strlcpy(strlcpy_dst4, strlcpy_src3, 8));
	printf("%s\n", strlcpy_dst4);
	printf("%zu\n", strlcpy(strlcpy_dst5, strlcpy_src4, 10));
	printf("%s\n", strlcpy_dst5);
	printf("%zu\n", strlcpy(strlcpy_dst6, strlcpy_src5, 3));
	printf("%s\n", strlcpy_dst6);

	char	strlcpy_src32[] = "Cabelo";
	char	strlcpy_src42[] = "Cabeleira";
	char	strlcpy_src52[] = "Cabeluda";
	char	strlcpy_dst42[] = "Descabelada";
	char	strlcpy_dst52[20] = "";
	char	strlcpy_dst62[] = "Cabe";

	printf("%zu\n", ft_strlcpy(strlcpy_dst42, strlcpy_src32, 8));
	printf("%s\n", strlcpy_dst42);
	printf("%zu\n", ft_strlcpy(strlcpy_dst52, strlcpy_src42, 10));
	printf("%s\n", strlcpy_dst52);
	printf("%zu\n", ft_strlcpy(strlcpy_dst62, strlcpy_src52, 3));
	printf("%s\n", strlcpy_dst62);

	// main da Internet
	char strlcpy_string[] = "Hello there, Venus";
    char strlcpy_buffer[19];
    int r;

    r = strlcpy(strlcpy_buffer, strlcpy_string, 9);
    printf("Copied %s into %s, length %d\n", strlcpy_string, strlcpy_buffer, r);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_atoi(void)
{
	char	atoi_string[] = "2342";

	printf("ft_atoi\n");
	printf("%i\n", atoi(atoi_string));
	printf("%i\n", ft_atoi(atoi_string));
	printf("%i\n", atoi("481516"));
	printf("%i\n", ft_atoi("481516"));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strnstr(void)
{
	printf("%s\n", strnstr("Toatoa ukulele", "ku", 14));
	printf("%s\n", ft_strnstr("Toatoa ukulele", "ku", 14));
	printf("%s\n", strnstr("Toatoa ukulele", "ke", 14));
	printf("%s\n", ft_strnstr("Toatoa ukulele", "ke", 14));
	printf("%s\n", strnstr("Huehuecoyotl", "Hue", 12));
	printf("%s\n", ft_strnstr("Huehuecoyotl", "Hue", 12));
	printf("%s\n", strnstr("Huehuecoyotl", "hue", 12));
	printf("%s\n", ft_strnstr("Huehuecoyotl", "hue", 12));
	printf("%s\n", strnstr("Huehuecoyotl", "ue", 12));
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
	printf("%d\n", strncmp(strncmp_word1, strncmp_word2, 12));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word2, 12));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word2, 10));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word2, 10));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word2, 8));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word2, 8));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word3, 12));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word3, 12));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word3, 10));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word3, 10));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word3, 8));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word3, 8));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word4, 12));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 12));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word4, 10));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 10));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word4, 8));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 8));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word4, 6));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 6));
	printf("%d\n", strncmp("Pav8", "Pacom8", 8));
	printf("%d\n", ft_strncmp("Pav8", "Pacom8", 8));
	printf("%d\n", strncmp("Pav8", "Pacom8", 6));
	printf("%d\n", ft_strncmp("Pav8", "Pacom8", 6));
	printf("%d\n", strncmp("Pav8", "Pacom8", 4));
	printf("%d\n", ft_strncmp("Pav8", "Pacom8", 4));
	printf("%d\n", strncmp("Pav8", "Pacom8", 2));
	printf("%d\n", ft_strncmp("Pav8", "Pacom8", 2));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_calloc(void)
{
	// main do jocardos
	printf("\n---- calloc jocardos ----\n");
	int	*calloc_test;
	calloc_test = (int *)ft_calloc(6, sizeof(int));
	printf("Calloc an array of 6 int\n    ");
	for(int i = 0; i < 6; i++)
		printf("%d ", calloc_test[i]);
	printf("\n");
	free(calloc_test);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strdup(void)
{
	// main do jocardos
	printf("\n---- strdup jocardos ----\n");
	char *str9 = "Hello 42";
	char *str10;
	str10 = ft_strdup(str9);
	printf("Original : %s, Dup : %s\n", str9, str10);
	free(str10);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_substr(void)
{
	char	substr_word[] = "ocupado";
	char	substr_word2[] = "";

	printf("ft_substr\n");
	printf("%s\n", substr(substr_word, 1, 2));
	printf("%s\n", ft_substr(substr_word, 1, 2));
	printf("%s\n", substr("ocupado", 1, 2));
	printf("%s\n", ft_substr("ocupado", 1, 2));
	printf("%s\n", substr(substr_word2, 1, 4));
	printf("%s\n", ft_substr(substr_word2, 1, 4));
	printf("%s\n", substr("", 1, 4));
	printf("%s\n", ft_substr("", 1, 4));
	printf("%s\n", substr(substr_word2, 0, 0));
	printf("%s\n", ft_substr(substr_word2, 0, 0));
	printf("%s\n", substr("", 0, 0));
	printf("%s\n", ft_substr("", 0, 0));
	printf("%s\n", substr(substr_word2, 0, 1));
	printf("%s\n", ft_substr(substr_word2, 0, 1));
	printf("%s\n", substr("", 0, 1));
	printf("%s\n", ft_substr("", 0, 1));
	printf("%s\n", substr(substr_word, 1, 2));
	printf("%s\n", ft_substr(substr_word, 1, 2));
	printf("%s\n", substr("ocupado", 4, 2));
	printf("%s\n", ft_substr("ocupado", 4, 2));
	printf("%s\n", substr(substr_word2, 4, 2));
	printf("%s\n", ft_substr(substr_word2, 4, 4));
	printf("%s\n", substr("", 4, 1));
	printf("%s\n", ft_substr("", 4, 1));
	printf("%s\n", substr(substr_word2, 1, 0));
	printf("%s\n", ft_substr(substr_word2, 1, 0));
	printf("%s\n", substr("", 1, 0));
	printf("%s\n", ft_substr("", 1, 0));
	printf("%s\n", substr(substr_word2, 2, 1));
	printf("%s\n", ft_substr(substr_word2, 2, 1));
	printf("%s\n", substr("", 2, 1));
	printf("%s\n", ft_substr("", 2, 1));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strjoin(void)
{
	strjoin_s1[] = "Cause this is thriller";
	strjoin_s2[] = "Thriller night";
	strjoin_s3[] = "";

	printf("ft_strjoin\n");
	printf("%s\n", strjoin(strjoin_s1, strjoin_s2));
	printf("%s\n", ft_strjoin(strjoin_s1, strjoin_s2));
	printf("%s\n", strjoin(strjoin_s2, strjoin_s1));
	printf("%s\n", ft_strjoin(strjoin_s2, strjoin_s1));
	printf("%s\n", strjoin(strjoin_s1, strjoin_s3));
	printf("%s\n", ft_strjoin(strjoin_s1, strjoin_s3));
	printf("%s\n", strjoin(strjoin_s2, strjoin_s3));
	printf("%s\n", ft_strjoin(strjoin_s2, strjoin_s3));
	printf("%s\n", strjoin(strjoin_s3, strjoin_s1));
	printf("%s\n", ft_strjoin(strjoin_s3, strjoin_s1));
	printf("%s\n", strjoin(strjoin_s3, strjoin_s2));
	printf("%s\n", ft_strjoin(strjoin_s3, strjoin_s2));
	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

// putchar_fd

// putstr_fd

// putendl_fd

// putnbr_fd

// strmapi

// striteri

// strtrim

void	test_ft_split(void)
{

	int		i = 0;
	char	altogether[] = "123P567P91011AIPIM131415IP171819IM";
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
	int	itoa_int = 2342;

	printf("ft_itoa\n");
	printf("%s\n", itoa(itoa_int));
	printf("%s\n", ft_itoa(itoa_int));
	printf("%s\n", itoa(481516));
	printf("%s\n", ft_itoa(481516));
	printf("%s\n", itoa("481516")); // if I send a string
	printf("%s\n", ft_itoa("481516"));
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
	// putchar_fd
	// putstr_fd
	// putendl_fd
	// putnbr_fd
	// strmapi
	// striteri
	// strtrim
	test_ft_split();
	test_ft_itoa();
	// bonus
	return (0);
}
