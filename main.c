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
	char	memcpy_ruiva[] = "Ruiva";
	char	memcpy_morena[] = "Morena";
	char	dst0[] = "Loira do Tchan";
	char	dst1[] = "Loira do Tchan";
	char	dst2[20];
	char	dst3[] = "Loira do Tchan";
	
	printf("ft_memcpy\n");
	printf("%s\n", memcpy(dst0, memcpy_ruiva, 5));
	printf("%s\n", memcpy(dst1, memcpy_ruiva, 5));
	printf("%s\n", memcpy(dst2, memcpy_morena, 6));
	printf("%s\n", memcpy(dst3, memcpy_ruiva, 6)); // se mandar até NUL-byte
	
	char	memcpy_ruiva2[6] = "Ruiva";
	char	memcpy_morena2[7] = "Morena";
	char	dst02[] = "Loira do Tchan";
	char	dst12[] = "Loira do Tchan";
	char	dst22[20];
	char	dst32[] = "Loira do Tchan";

	printf("%s\n", ft_memcpy(dst02, memcpy_ruiva2, 5));
	printf("%s\n", ft_memcpy(dst12, memcpy_ruiva2, 5));
	printf("%s\n", ft_memcpy(dst22, memcpy_morena2, 6));
	printf("%s\n", ft_memcpy(dst32, memcpy_ruiva2, 6)); // se mandar até NUL-byte
	
	char	dst03[] = "Loira do Tchan";
	char	dst13[] = "Loira do Tchan";
	char	dst23[20];
	char	dst33[] = "Loira do Tchan";

	printf("%s\n", ft_memcpy(dst03, "Ruiva", 5));
	printf("%s\n", ft_memcpy(dst13, "Ruiva", 5));
	printf("%s\n", ft_memcpy(dst23, "Morena", 6));
	printf("%s\n", ft_memcpy(dst33, "Ruiva", 6)); // se mandar até NUL-byte
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
	printf("%s\n", memset(memset_word4, '#', 8));
	printf("%s\n", ft_memset(memset_word4, '#', 8));
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
	printf("---------------------------------------------------\n\v");
}

// memmove

/*void	test_ft_memcmp(void)
{
	char	s[] = "Vaga-lume";
	char	s2[] = "Vaga-lume";
	char	s3[] = "Vagalume";
	char	s4[] = "Caçarola";

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
	printf("%i\n", memcmp("Vagalume", "Vagalume", 6));
	printf("%i\n", ft_memcmp("Vagalume", "Vagalume", 6));
	printf("%i\n", memcmp("Vagalume", "Vagalume", 6));
	printf("%i\n", ft_memcmp("Vagalume", "Vagalume", 6));
	printf("%i\n", memcmp("Vagalume", "vagabundo", 6));
	printf("%i\n", ft_memcmp("Vagalume", "vagabundo", 6));
	printf("---------------------------------------------------\n\v");
}*/

void	test_ft_memchr(void)
{
	char	s[] = "Perereca";

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
	char	strchar_word[] = "Ei, cadê você?";

	printf("ft_strchr\n");
	printf("c %s\n", strchr(strchar_word, 'c'));
	printf("c %s\n", ft_strchr(strchar_word, 'c'));
	printf("%p\n", strchr(strchar_word, 'c'));
	printf("%p\n", ft_strchr(strchar_word, 'c'));
	printf("e %s\n", strchr("Beleza!", 'e'));
	printf("e %s\n", ft_strchr("Beleza!", 'e'));
	printf("%p\n", strchr("Beleza!", 'e'));
	printf("%p\n", ft_strchr("Beleza!", 'e'));
	printf("u %s\n", strchr(strchar_word, 'u'));
	printf("u %s\n", ft_strchr(strchar_word, 'u'));
	printf("%p\n", strchr(strchar_word, 'u'));
	printf("%p\n", ft_strchr(strchar_word, 'u'));
	printf("o %s\n", strchr("Beleza!", 'o'));
	printf("o %s\n", ft_strchr("Beleza!", 'o'));
	printf("%p\n", strchr("Beleza!", 'o'));
	printf("%p\n", ft_strchr("Beleza!", 'o'));
	printf("o %s\n", strchr("", 'o'));
	printf("o %s\n", ft_strchr("", 'o'));
	printf("%p\n", strchr("", 'o'));
	printf("%p\n", ft_strchr("", 'o'));
	printf("\\0 %s\n", strchr(strchar_word, '\0'));
	printf("\\0 %s\n", ft_strchr(strchar_word, '\0'));
	printf("%p\n", strchr(strchar_word, '\0'));
	printf("%p\n", ft_strchr(strchar_word, '\0'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strrchr(void)
{
	char	strrchar_word[] = "Ei, cadê você?";

	printf("ft_strrchr\n");
	printf("c %s\n", strrchr(strrchar_word, 'c'));
	printf("c %s\n", ft_strrchr(strrchar_word, 'c'));
	printf("%p\n", strrchr(strrchar_word, 'c'));
	printf("%p\n", ft_strrchr(strrchar_word, 'c'));
	printf("e %s\n", strrchr("Beleza", 'e'));
	printf("e %s\n", ft_strrchr("Beleza", 'e'));
	printf("%p\n", strrchr("Beleza", 'e'));
	printf("%p\n", ft_strrchr("Beleza", 'e'));
	printf("u %s\n", strrchr(strrchar_word, 'u'));
	printf("u %s\n", ft_strrchr(strrchar_word, 'u'));
	printf("%p\n", strrchr(strrchar_word, 'u'));
	printf("%p\n", ft_strrchr(strrchar_word, 'u'));
	printf("o %s\n", strrchr("Beleza", 'o'));
	printf("o %s\n", ft_strrchr("Beleza", 'o'));
	printf("%p\n", strrchr("Beleza", 'o'));
	printf("%p\n", ft_strrchr("Beleza", 'o'));
	printf("o %s\n", strrchr("", 'o'));
	printf("o %s\n", ft_strrchr("", 'o'));
	printf("%p\n", strrchr("", 'o'));
	printf("%p\n", ft_strrchr("", 'o'));
	printf("\\0 %s\n", strrchr(strrchar_word, '\0'));
	printf("\\0 %s\n", ft_strrchr(strrchar_word, '\0'));
	printf("%p\n", strrchr(strrchar_word, '\0'));
	printf("%p\n", ft_strrchr(strrchar_word, '\0'));
	printf("---------------------------------------------------\n\v\v\v\v\v\v");
}

// strlcat

void	test_ft_strlcpy(void)
{
	char	src3[] = "Maracujá";
	char	src4[] = "Marajá";
	char	src5[] = "Maravilha";
	char	dst4[] = "Tem gente!";
	char	dst5[20] = "";
	char	dst6[] = "Mara";

	printf("ft_strlcpy\n");
	printf("%zu\n", strlcpy(dst4, src3, 8));
	printf("%zu\n", strlcpy(dst5, src4, 4));
	printf("%zu\n", strlcpy(dst6, src5, 4));

	char	src32[] = "Maracujá";
	char	src42[] = "Marajá";
	char	src52[] = "Maravilha";
	char	dst42[] = "Tem gente!";
	char	dst52[20] = "";
	char	dst62[] = "Mara";

	printf("%zu\n", ft_strlcpy(dst42, src32, 8));
	printf("%zu\n", ft_strlcpy(dst52, src42, 4));
	printf("%zu\n", ft_strlcpy(dst62, src52, 10));
	printf("---------------------------------------------------\n\v");
}

// atoi

// strnstr

void	test_ft_strncmp(void)
{
	char	strncmp_word1[] = "Eu sou voc8.";
	char	strncmp_word2[] = "Eu sou voc8.";
	char	strncmp_word3[] = "Eu sou voz8.";
	char	strncmp_word4[] = "Eu sou pav8.";

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

/* strnstr
int	main(void)
{
    printf("Original: %s\n",    strnstr("Toatoa ukulele", "ku", 14));
    printf(" Destino: %s\n", ft_strnstr("Toatoa ukulele", "ku", 14));
    printf("Original: %s\n",    strnstr("Toatoa ukulele", "ke", 14));
    printf(" Destino: %s\n", ft_strnstr("Toatoa ukulele", "ke", 14));
    printf("Original: %s\n",    strnstr("Huehuecoyotl", "Hue", 12));
    printf(" Destino: %s\n", ft_strnstr("Huehuecoyotl", "Hue", 12));
    printf("Original: %s\n",    strnstr("Huehuecoyotl", "hue", 12));
    printf(" Destino: %s\n", ft_strnstr("Huehuecoyotl", "hue", 12));
}*/
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
	test_ft_strlen();
	test_ft_memcpy();
	test_ft_memset();
	test_ft_bzero();
	// memmove
	// test_ft_memcmp();
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
	// strlcat
	test_ft_strlcpy();
	// atoi
	// strnstr
	test_ft_strncmp();
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
