#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void	test_ft_strlen(void)
{
	printf("ft_strlen\n");
	printf("Your lucky number is… %zu\n", strlen("Your lucky number is…"));
	printf("Your lucky number is… %zu\n", ft_strlen("Your lucky number is…"));
	printf("Papi, o camelo tem %zu corcundas\n", strlen("Papi"));
	printf("Papi, o camelo tem %zu corcundas\n", ft_strlen("Papi"));
	printf("%zu mandamentos\n", strlen("mandamento"));
	printf("%zu mandamentos\n", ft_strlen("mandamento"));
	printf("%zu pecados\n", strlen("pecados"));
	printf("%zu pecados\n", ft_strlen("pecados"));
	printf("dois e quarenta %zu\n", strlen("dois e quarenta"));
	printf("dois e quarenta %zu\n", ft_strlen("dois e quarenta"));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memcpy(void)
{
	char memcpy_ruiva[] = "Ruiva";
	char memcpy_morena[] = "Morena";
	char dst0[20] = "Loira do Tchan";
	char dst1[20] = "Loira do Tchan";
	char dst2[20];
	char dst3[20] = "Loira do Tchan";

	printf("ft_memcpy\n");
	printf("%s\n", memcpy(dst0, memcpy_ruiva, 5));
	printf("%s\n", memcpy(dst1, memcpy_ruiva, 5));
 	printf("%s\n", memcpy(dst2, memcpy_morena, 6));
	printf("%s\n", memcpy(dst3, memcpy_ruiva, 6)); // se mandar até NUL-byte

	memcpy_ruiva[] = "Ruiva";
	memcpy_morena[] = "Morena";
	dst0[20] = "Loira do Tchan";
	dst1[20] = "Loira do Tchan";
	dst2[20];
	dst3[20] = "Loira do Tchan";

	printf("%s\n", ft_memcpy(dst0, memcpy_ruiva, 5));
	printf("%s\n", ft_memcpy(dst1, memcpy_ruiva, 5));
 	printf("%s\n", ft_memcpy(dst2, memcpy_morena, 6));
	printf("%s\n", ft_memcpy(dst3, memcpy_ruiva, 6)); // se mandar até NUL-byte

	dst0[20] = "Loira do Tchan";
	dst1[20] = "Loira do Tchan";
	dst2[20];
	dst3[20] = "Loira do Tchan";

	printf("%s\n", ft_memcpy(dst0, Ruiva, 5));
	printf("%s\n", ft_memcpy(dst1, Ruiva, 5));
 	printf("%s\n", ft_memcpy(dst2, Morena, 6));
	printf("%s\n", ft_memcpy(dst3, Ruiva, 6)); // se mandar até NUL-byte
	printf("---------------------------------------------------\n\v");

}

void	test_ft_memset(void)
{
	char	memset_word[20] = "ciência";

	printf("ft_memset\n");
	printf("%s\n", memset(memset_word, '*' , 1));
	printf("%s\n", ft_memset(memset_word, '*', 1));
	printf("%s\n", memset("ciência", '*' , 1));
	printf("%s\n", ft_memset("ciência", '*', 1));
	printf("%s\n", memset("combate", '$' , 3));
	printf("%s\n", ft_memset("combate", '$', 3));
	printf("%s\n", memset("caipirosca", '%' , 5));
	printf("%s\n", ft_memset("caipirosca", '%' , 5));
	printf("%s\n", memset("extraviado", '#' , 8));
	printf("%s\n", ft_memset("extraviado", '#' , 8));
	printf("%s\n", memset("adotado", '!' , 1));
	printf("%s\n", ft_memset("adotado", '!' , 1));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_bzero(void)
{
	char bzero_maeloura[] = "22002";

	printf("ft_memset\n");
	printf("%s\n", bzero(bzero_maeloura, 5);
	printf("%s\n", ft_bzero(bzero_maeloura, 5);
	printf("%s\n", bzero("22002", 5);
	printf("%s\n", ft_bzero("22002", 5);
	printf("---------------------------------------------------\n\v");
}

// memmove

void	test_ft_memcmp(void)
{
	char s[] = "Vaga-lume";
	char s2[] = "Vaga-lume";
	char s3[] = "Vagalume";
	char s4[] = "Caçarola";
	printf("ft_memcmp\n");
	printf("%i\n", memcmp(s, s2, 6));
 	printf("%i\n", ft_memcmp(s, s2, 6));
	printf("%i\n", memcmp(s, s3, 6));
 	printf("%i\n", ft_memcmp(s, s3, 6));
	printf("%i\n", memcmp(s, s4, 6));
 	printf("%i\n", ft_memcmp(s, s4, 6));
	printf("%i\n", memcmp(s, s2, 4));
 	printf("%i\n", ft_memcmp(s, s2, 4));
	printf("%i\n", memcmp(s, s3, 4));
 	printf("%i\n", ft_memcmp(s, s3, 4));
	printf("%i\n", memcmp(s, s4, 4));
 	printf("%i\n", ft_memcmp(s, s4, 4));
	printf("%i\n", memcmp(Vagalume, Vagalume, 6));
 	printf("%i\n", ft_memcmp(Vagalume, Vagalume, 6));
	printf("%i\n", memcmp(Vagalume, Vagalume, 6));
 	printf("%i\n", ft_memcmp(Vagalume, Vagalume, 6));
	printf("%i\n", memcmp(Vagalume, vagabundo, 6));
 	printf("%i\n", ft_memcmp(Vagalume, vagabundo, 6));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memchr(void)
{
	char s[] = "Perereca";
	
	printf("ft_memchr\n");
	printf("%s\n", memchr(s, 'e', 8));
	printf("%s\n", ft_memchr(s, 'e', 8));
	printf("%s\n", memchr(s, 'c', 6));
	printf("%s\n", ft_memchr(s, 'c', 6));
	printf("%s\n", memchr(s, 'p', 8));
	printf("%s\n", ft_memchr(s, 'p', 8));
	printf("%s\n", memchr("Pererê", 'e', 8));
	printf("%s\n", ft_memchr("Pererê", 'e', 8));
	printf("%s\n", memchr("Perereca", 'c', 6));
	printf("%s\n", ft_memchr("Perereca", 'c', 6));
	printf("%s\n", memchr("Pererê", 'p', 8));
	printf("%s\n", ft_memchr("Pererê", 'p', 8));
	printf("%s\n", memchr("Pererê", 'ê', 6));
	printf("%s\n", ft_memchr("Pererê", 'ê', 6));
	printf("%s\n", memchr("Perereca", '', 8));
	printf("%s\n", ft_memchr("Perereca", '', 8));
	printf("---------------------------------------------------\n\v");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isalpha(void)
{
	printf("\n");
	printf("ft_isalpha\n");
	printf("W %s\n", isalpha('W'));
	printf("W %s\n", ft_isalpha('W'));
	printf("i %s\n", isalpha('i'));
	printf("i %s\n", ft_isalpha('i'));
	printf("ç %s\n", isalpha('ç'));
	printf("ç %s\n", ft_isalpha('ç'));
	printf("0 %s\n", isalpha('0'));
	printf("0 %s\n", ft_isalpha('0'));
	printf("& %s\n", isalpha('&'));
	printf("& %s\n", ft_isalpha('&'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isdigit(void)
{
	printf("ft_isdigit\n");
	printf("V %s\n", isdigit('V'));
	printf("V %s\n", ft_isdigit('V'));
	printf("1 %s\n", isdigit('1'));
	printf("1 %s\n", ft_isdigit('1'));
	printf("4 %s\n", isdigit('4'));
	printf("4 %s\n", ft_isdigit('4'));
	printf("Ð %s\n", isdigit('Ð'));
	printf("Ð %s\n", ft_isdigit('Ð'));
	printf("O %s\n", isdigit('O'));
	printf("O %s\n", ft_isdigit('O'));
 	printf("---------------------------------------------------\n\v");
}	

void	test_ft_isalnum(void)
{
	printf("ft_isalnum\n");
	printf("P %s\n", isalnum('P'));
	printf("P %s\n", ft_isalnum('P'));
	printf("h %s\n", isalnum('h'));
	printf("h %s\n", ft_isalnum('h'));
	printf("& %s\n", isalnum('&'));
	printf("& %s\n", ft_isalnum('&'));
	printf("ÿ %s\n", isalnum('ÿ'));
	printf("ÿ %s\n", ft_isalnum('ÿ'));
	printf("4 %s\n", isalnum('4'));
	printf("4 %s\n", ft_isalnum('4'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isascii(void)
{
	printf("ft_isascii\n");
	printf("T %s\n", isascii('T'));
	printf("T %s\n", ft_isascii('T'));
	printf("ç %s\n", isascii('ç'));
	printf("ç %s\n", ft_isascii('ç'));
	printf("h %s\n", isascii('h'));
	printf("h %s\n", ft_isascii('h'));
	printf("4 %s\n", isascii('4'));
	printf("4 %s\n", ft_isascii('4'));
	printf("ñ %s\n", isascii('ñ'));
	printf("ñ %s\n", ft_isascii('ñ'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_isprint(void)
{
	printf("ft_isprint\n");
	printf("[HT]\t %s\n", isprint(9));
	printf("[HT]\t %s\n", ft_isprint(9));
	printf("[HT]\v %s\n", isprint(11));
	printf("[HT]\v %s\n", ft_isprint(11));
	printf("+ %s\n", isprint(43));
	printf("+ %s\n", ft_isprint(43));
	printf("[DEL] %s\n", isprint(127));
	printf("[DEL] %s\n", ft_isprint(127));
	printf("[NUL] %s\n", isprint(0));
	printf("[NUL] %s\n", ft_isprint(0));
	printf("---------------------------------------------------\n\v");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\v");
}

void	test_ft_toupper(void)
{
	printf("ft_toupper\n");
	printf("w %c\n", toupper('w'));
	printf("w %c\n", ft_toupper('w'));
	printf("I %c\n", toupper('I'));
	printf("I %c\n", ft_toupper('I'));
	printf("ç %c\n", toupper('ç'));
	printf("ç %c\n", ft_toupper('ç'));
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
	printf("ç %c\n", tolower('Ç'));
 	printf("ç %c\n", ft_tolower('Ç'));
	printf("4 %c\n", tolower('4'));
 	printf("4 %c\n", ft_tolower('4'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strchr(void)
{
	char strchar_word[] = "Ei, cadê você?";

	printf("ft_strchr\n");
	printf("%s\n", strchr(strchar_word, 'c'));
 	printf("%s\n", ft_strchr(strchar_word, 'c'));
	printf("%p\n", strchr(strchar_word, 'c'));
 	printf("%p\n", ft_strchr(strchar_word, 'c'));
	printf("%s\n", strchr("Beleza!", 'e'));
 	printf("%s\n", ft_strchr("Beleza!", 'e'));
	printf("%p\n", strchr("Beleza!", 'e'));
 	printf("%p\n", ft_strchr("Beleza!", 'e'));
	printf("%s\n", strchr(strchar_word, 'u'));
 	printf("%s\n", ft_strchr(strchar_word, 'u'));
	printf("%p\n", strchr(strchar_word, 'u'));
 	printf("%p\n", ft_strchr(strchar_word, 'u'));
	printf("%s\n", strchr("Beleza!", 'o'));
 	printf("%s\n", ft_strchr("Beleza!", 'o'));
	printf("%p\n", strchr("Beleza!", 'o'));
 	printf("%p\n", ft_strchr("Beleza!", 'o'));
	printf("%s\n", strchr(strchar_word, ''));
 	printf("%s\n", ft_strchr(strchar_word, ''));
	printf("%p\n", strchr(strchar_word, ''));
 	printf("%p\n", ft_strchr(strchar_word, ''));
	printf("%s\n", strchr("Beleza!", ''));
 	printf("%s\n", ft_strchr("Beleza!", ''));
	printf("%p\n", strchr("Beleza!", ''));
 	printf("%p\n", ft_strchr("Beleza!", ''));
	printf("%s\n", strchr("", 'o'));
 	printf("%s\n", ft_strchr("", 'o'));
	printf("%p\n", strchr("", 'o'));
 	printf("%p\n", ft_strchr("", 'o'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strrchr(void)
{
	char strrchar_word[] = "Ei, cadê você?";

	printf("ft_strrchr\n");
	printf("%s\n", strrchr(strrchar_word, 'c'));
 	printf("%s\n", ft_strrchr(strrchar_word, 'c'));
	printf("%p\n", strrchr(strrchar_word, 'c'));
 	printf("%p\n", ft_strrchr(strrchar_word, 'c'));
	printf("%s\n", strrchr("Beleza", 'e'));
 	printf("%s\n", ft_strrchr("Beleza", 'e'));
	printf("%p\n", strrchr("Beleza", 'e'));
 	printf("%p\n", ft_strrchr("Beleza", 'e'));
	printf("%s\n", strrchr(strrchar_word, 'u'));
 	printf("%s\n", ft_strrchr(strrchar_word, 'u'));
	printf("%p\n", strrchr(strrchar_word, 'u'));
 	printf("%p\n", ft_strrchr(strrchar_word, 'u'));
	printf("%s\n", strrchr("Beleza", 'o'));
 	printf("%s\n", ft_strrchr("Beleza", 'o'));
	printf("%p\n", strrchr("Beleza", 'o'));
 	printf("%p\n", ft_strrchr("Beleza", 'o'));
	printf("%s\n", strrchr(strrchar_word, ''));
 	printf("%s\n", ft_strrchr(strrchar_word, ''));
	printf("%p\n", strrchr(strrchar_word, ''));
 	printf("%p\n", ft_strrchr(strrchar_word, ''));
	printf("%s\n", strrchr("Beleza", ''));
 	printf("%s\n", ft_strrchr("Beleza", ''));
	printf("%p\n", strrchr("Beleza", ''));
 	printf("%p\n", ft_strrchr("Beleza", ''));
	printf("%s\n", strrchr("", 'o'));
 	printf("%s\n", ft_strrchr("", 'o'));
	printf("%p\n", strrchr("", 'o'));
 	printf("%p\n", ft_strrchr("", 'o'));
	printf("---------------------------------------------------\n\v");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\n");
	printf("---------------------------------------------------\n\v");
}

// strlcat

void	test_ft_strlcpy(void)
{
	char src3[] = "Maracujá";
	char src4[] = "Marajá";
	char src5[] = "Maravilha";
	char dst4[20] = "Tem gente!";
	char dst5[20] = "";
	char dst6[20] = "Mara";

	printf("ft_strlcpy\n");
	printf("%zu\n", strlcpy(dst4, src3, 8));
 	printf("%zu\n", strlcpy(dst5, src4, 4));
	printf("%zu\n", strlcpy(dst6, src5, 10));

	src3[] = "Maracujá";
	src4[] = "Marajá";
	src5[] = "Maravilha";
	dst4[20] = "Tem gente!";
	dst5[20] = "";
	dst6[20] = "Mara";

	printf("%zu\n", ft_strlcpy(dst4, src3, 8));
 	printf("%zu\n", ft_strlcpy(dst5, src4, 4));
	printf("%zu\n", ft_strlcpy(dst6, src5, 10));
	printf("---------------------------------------------------\n\v");
}

// atoi

// strnstr

void	test_ft_strncmp(void)
{
	char strncmp_word1[] = "Eu sou você.";
	char strncmp_word2[] = "Eu sou você.";
	char strncmp_word3[] = "Eu sou voçê.";
	char strncmp_word4[] = "Eu sou pavê.";
	
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
	printf("%d\n", strncmp(strncmp_word1, strncmp_word3, 10));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 10));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word3, 8));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 8));
	printf("%d\n", strncmp(strncmp_word1, strncmp_word3, 6));
	printf("%d\n", ft_strncmp(strncmp_word1, strncmp_word4, 6));
	printf("%d\n", strncmp("Pavê", "Pacomê", 8));
	printf("%d\n", ft_strncmp("Pavê", "Pacomê", 8));
	printf("%d\n", strncmp("Pavê", "Pacomê", 6));
	printf("%d\n", ft_strncmp("Pavê", "Pacomê", 6));
	printf("%d\n", strncmp("Pavê", "Pacomê", 4));
	printf("%d\n", ft_strncmp("Pavê", "Pacomê", 4));
	printf("%d\n", strncmp("Pavê", "Pacomê", 2));
	printf("%d\n", ft_strncmp("Pavê", "Pacomê", 2));
	printf("---------------------------------------------------\n\v");
}

// calloc

// strdup

// substr

// strjoin

// putchar_fd

// putstr_fd

// putendl_fd

// putnbr_fd

// strmapi

// striteri

// strtrim

// split

// itoa

// bonus

int	main(void)
{
	test_ft_strlen(void);
	test_ft_memcpy(void);
	test_ft_memset(void);
	test_ft_bzero(void);
	// memmove
	test_ft_memcmp(void);
	test_ft_memchr(void);
	test_ft_isalpha(void);
	test_ft_isdigit(void);
	test_ft_isalnum(void);
	test_ft_isascii(void);
	test_ft_isprint(void);
	test_ft_toupper(void);
	test_ft_tolower(void);
	test_ft_strchr(void);
	test_ft_strrchr(void);
	// strlcat
	test_ft_strlcpy(void);
	// atoi
	// strnstr
	test_ft_strncmp(void);
	// calloc
	// strdup
	// substr
	// strjoin
	// putchar_fd
	// putstr_fd
	// putendl_fd
	// putnbr_fd
	// strmapi
	// striteri
	// strtrim
	// split
	// itoa
	// bonus
	return (0);
}
