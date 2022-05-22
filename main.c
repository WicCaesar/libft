#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

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
	printf("43 %s\n", isprint(43));
	printf("43 %s\n", ft_isprint(43));
	printf("[DEL] %s\n", isprint(127));
	printf("[DEL] %s\n", ft_isprint(127));
	printf("[NUL] %s\n", isprint(0));
	printf("[NUL] %s\n", ft_isprint(0));
	printf("---------------------------------------------------\n\v");
}
void	test_ft_strlen(void)
{
	printf("ft_strlen\n");
	printf("Your lucky number is… %zu\n", strlen("Your lucky number is…"));
	printf("Your lucky number is… %zu\n", ft_strlen("Your lucky number is…"));
	printf("Papi, o camelo tem %zu corcundas\n", strlen("Papi, o camelo tem"));
	printf("Papi, o camelo tem %zu corcundas\n", ft_strlen("Papi, o camelo tem"));
	printf("%zu mandamentos\n", strlen("mandamentos"));
	printf("%zu mandamentos\n", ft_strlen("mandamentos"));
	printf("%zu pecados\n", strlen("pecados"));
	printf("%zu pecados\n", ft_strlen("pecados"));
	printf("quarenta e dois %zu\n", strlen("quarenta e dois"));
	printf("quarenta e dois %zu\n", ft_strlen("quarenta e dois"));
	printf("---------------------------------------------------\n\v");
}
	
void	test_ft_memset(void)
{
	char	memset_word[20] = "ciência";
	void	memset_void[20] = "experiência";

	printf("ft_memset\n");
	printf("%s\n", memset(memset_word, '*' , 1));
	printf("%s\n", ft_memset(memset_word, '*', 1));
	printf("%s\n", memset(memset_void, '*' , 5));
	printf("%s\n", ft_memset(memset_void, '*', 5));	
	printf("%s\n", memset("combate", '%' , 3));
	printf("%s\n", ft_memset("combate", '*', 3));
	printf("%s\n", memset("caipirosca", '%' , 5));
	printf("%s\n", ft_memset("caipirosca", '%' , 5));
	printf("%s\n", memset("extraviado", '#' , 8));
	printf("%s\n", ft_memset("extraviado", '#' , 8));
	printf("%s\n", memset("extraviado", '@' , 5));
	printf("%s\n", ft_memset("extraviado", '@' , 5));
	printf("%s\n", memset("adotado", '!' , 1));
	printf("%s\n", ft_memset("adotado", '!' , 1));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_bzero(void)
{
	char bzero_word[] = "loiradotchan";

	printf("ft_memset\n");
	printf("%s\n", bzero(bzero_word, 5);
	printf("%s\n", ft_bzero(bzero_word, 5);
	printf("%s\n", bzero("loiradotchan", 5);
	printf("%s\n", ft_bzero("loiradotchan", 5);
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memcpy(void)
{
	char src[] = "Ruiva";
	char src2[] = "Morena";
	char dst0[20] = "Loira do Tchan";
	char dst1[20] = "Loira do Tchan";
	char dst2[20];
	char dst3[20] = "Loira do Tchan";

	printf("ft_memcpy\n");
	printf("%s\n", memcpy(dst0, src, 5));
	printf("%s\n", memcpy(dst1, src, 5));
 	printf("%s\n", memcpy(dst2, src2, 6));
	printf("%s\n", memcpy(dst3, src, 6)); // se mandar até NUL-byte

	char src[] = "Ruiva";
	char src2[] = "Morena";
	char dst0[20] = "Loira do Tchan";
	char dst1[20] = "Loira do Tchan";
	char dst2[20];
	char dst3[20] = "Loira do Tchan";

	printf("ft_memcpy\n");
	printf("%s\n", ft_memcpy(dst0, src, 5));
	printf("%s\n", ft_memcpy(dst1, src, 5));
 	printf("%s\n", ft_memcpy(dst2, src2, 6));
	printf("%s\n", ft_memcpy(dst3, src, 6)); // se mandar até NUL-byte
	printf("---------------------------------------------------\n\v");

}
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

	char src3[] = "Maracujá";
	char src4[] = "Marajá";
	char src5[] = "Maravilha";
	char dst4[20] = "Tem gente!";
	char dst5[20] = "";
	char dst6[20] = "Mara";

	printf("ft_strlcpy\n");
	printf("%zu\n", ft_strlcpy(dst4, src3, 8));
 	printf("%zu\n", ft_strlcpy(dst5, src4, 4));
	printf("%zu\n", ft_strlcpy(dst6, src5, 10));
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
	printf("ç %c\n", tolower('ç'));
 	printf("ç %c\n", ft_tolower('ç'));
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
	printf("%s\n", strchr("Felipe", 'e'));
 	printf("%s\n", ft_strchr("Felipe", 'e'));
	printf("%p\n", strchr("Felipe", 'e'));
 	printf("%p\n", ft_strchr("Felipe", 'e'));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_strrchr(void)
{
	char strrchar_word[] = "Ei, cadê você?";

	printf("ft_strrchr\n");
	printf("%s\n", strrchr(strchar_word, 'c'));
 	printf("%s\n", ft_strrchr(strchar_word, 'c'));
	printf("%p\n", strrchr(strchar_word, 'c'));
 	printf("%p\n", ft_strrchr(strchar_word, 'c'));
	printf("%s\n", strrchr("Felipe", 'e'));
 	printf("%s\n", ft_strrchr("Felipe", 'e'));
	printf("%p\n", strrchr("Felipe", 'e'));
 	printf("%p\n", ft_strrchr("Felipe", 'e'));
	printf("---------------------------------------------------\n\v");
}

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
	printf("%d\n", strncmp("Pavê", "Pacumê", 8));
	printf("%d\n", ft_strncmp("Pavê", "Pacumê", 8));
	printf("%d\n", strncmp("Pavê", "Pacumê", 6));
	printf("%d\n", ft_strncmp("Pavê", "Pacumê", 6));
	printf("%d\n", strncmp("Pavê", "Pacumê", 4));
	printf("%d\n", ft_strncmp("Pavê", "Pacumê", 4));
	printf("%d\n", strncmp("Pavê", "Pacumê", 2));
	printf("%d\n", ft_strncmp("Pavê", "Pacumê", 2));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memchr(void)
{
	char s[] = "Felipe";
	char s2[] = "Felipe";
	
	printf("ft_memchr\n");
	printf("\t%s <-    memchr(felipe, 'l', 6)\n",    memchr(s, 'i', 6));
	printf("\t%s <- ft_memchr(felipe, 'l', 6)\n", ft_memchr(s2, 'i', 6));
	printf("---------------------------------------------------\n\v");
}

void	test_ft_memcmp(void)
{
	char s[] = "Felipe";
	char s2[] = "felipe";
	char s3[] = "Felipe";
	char s4[] = "Felipe";
	printf("ft_memcmp\n");
	printf("\t%i <-    memcmp(felipe, felipe, 2)\n",    memcmp(s, s2, 2));
 	//printf("\t%i <- ft_memcmp(felipe, felipe, 2)\n", ft_memcmp(s3, s4, 2));
	printf("---------------------------------------------------\n\v");
}

int	main(void)
{
	test_ft_isalpha(void);
	test_ft_isdigit(void);
	test_ft_isalnum(void);
	test_ft_isascii(void);
	test_ft_strlen(void);
	test_ft_memset(void);
	test_ft_memcpy(void);
	test_ft_strlcpy(void);
	test_ft_bzero(void);
	test_ft_toupper(void);
	test_ft_tolower(void);
	test_ft_strchr(void);
	test_ft_strrchr(void);
	test_ft_strncmp(void);
	test_ft_memchr(void);
	test_ft_memcmp(void);
	return (0);
}
