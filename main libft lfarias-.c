#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include "libft.h"
#include "string.h"

void	del_content(void *pointer)
{
	printf("deleted %p\n", pointer);
}

char get_upper(unsigned int i, char c)
{
	i = 0;
	if (ft_isalpha(c))
	{
		return (ft_toupper(c));
	}
	return (c);
}

char get_lower(unsigned int i, char c)
{
	i = 0;
	if (ft_isalpha(c))
	{
		return (ft_tolower(c));
	}
	return (c);
}

char *get_upper_str(unsigned int i, char *c)
{
	*c = get_upper(i, *c);
	return (c);
}

char *get_lower_str(unsigned int i, char *c)
{
	*c = get_lower(i, *c);
	return (c);
}

void make_upper(void *sqnc)
{
	char *str;

	str = (char *) sqnc;
	while(*str != '\0')
	{
		*str = get_upper(0, *str);
		str++;
	}
}

void *make_upper_2(void *sqnc)
{
	char *str;

	str = (char *) sqnc;
	make_upper(str);
	return (str);
}

int	main(void)
{

	printf("=== ft_isdigit ===\n");
	for (int i = 45; i < 65; i++) {
		printf("is '%c' a digit? %d\n", i, ft_isdigit(i));
	}

	printf("=== ft_isalnum ===\n");
	for (int i = 32; i < 127; i++)
	{
		printf("is '%c' an alphanum char? %d\n", i, ft_isalnum(i));
	}

	printf("\n=== ft_toupper ===\n");
	for (int i = 32; i < 126; i++) {
		printf("char '%c' in uppercase is: '%c'\n", i, ft_toupper(i));
	}
	printf("\n");

	printf("\n=== ft_isascii ===\n");
	printf("is '237' an ascii value? %d\n", ft_isascii(237));
	printf("is '128' an ascii value? %d\n", ft_isascii(128));
	printf("is '0' an ascii value? %d\n", ft_isascii(0));
	printf("is '-48' an ascii value? %d\n", ft_isascii(-48));

	printf("\n === ft_isprint ===\n");
	printf("is '\\n' printable? %d\n", ft_isprint('\n'));

	printf("\n=== ft_strlen ===\n");
	char *str1 = "Hello World!";
	char *str2 = "H";
	char *str3 = "awesome";
	printf("'%s' size is: %zu\n", str1, ft_strlen(str1));
	printf("'%s' size is: %zu\n", str2, ft_strlen(str2));
	printf("'%s' size is: %zu\n", str3, ft_strlen(str3));
	printf("'%s' size is: %zu\n", " ", ft_strlen(" "));

	printf("\n=== ft_memset === \n");
	char arr[11] = "-----+++++\0";
	printf("'%s'\n", arr);
	ft_memset(arr, '5', 11);
	printf("'%s'\n", arr);

	printf("\n=== ft_bzero ===\n");
	char arr1[11] = "-----+++++\0";
	ft_bzero(arr1, 11);
	for (int i = 0; i < 11; i++) {
		printf("%d", arr1[i]);
	}
	printf("\n");
	ft_memset(arr1, 1, 11);
	ft_bzero(arr1, 5);
	for (int i = 0; i < 11; i++) {
		printf("%d", arr1[i]);
	}
	printf("\n");

	printf("\n=== ft_memcpy ===\n");
	char src[6] = {48, 49, 50, 51, 52, 0};
	char dest[6] = {55, 55, 55, 55, 55, 0};
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	ft_memcpy(dest, src, 5);
	printf("after ft_memcpy dest: ");
	for (int i = 0; i < 5; i++) {
		printf("%c", dest[i]);
	}
	printf("\n");
	char src1[6] = {65, 65, 65, 65, 65, 0};
	printf("bf memcpy: %s\n", src1);
	memcpy(src1 + 2, src, 3);
	printf("with memcpy: %s\n", src1);

	printf("\n=== ft_memmove ===\n");
	// TO-DO

	printf("\n === ft_memchr ===\n");
	char *haystack = "Just find this! please!";
	printf("%s\n", haystack);
	char *substr = ft_memchr(haystack, 'p', ft_strlen(haystack));
	printf("the letter 'p' first occurs at: '%s'\n", substr);
	char *test = ft_memchr(haystack, 'f', (ft_strlen(haystack) * -1));
	printf("'%s'\n", test);
	//char *test1 = memchr(0, 'f', 1);
	//printf("'%s'\n", test1);

	printf("\n === ft_memcmp ===\n");
	char *foo = "Hello";
	char *cloo = "Hello";
	printf("memcmp: are '%s' and '%s' equal? %d\n", foo, cloo, memcmp(foo, cloo, 0));
	//printf("memcmp (with null): are '%s' and '%s' equal? %d\n", "\0", cloo, memcmp(0, 0, 5));


	printf("ft_memcmp: are '%s' and '%s' equal? %d\n", foo, cloo, memcmp(foo, cloo, 0));
	//printf("ft_memcmp (with null): are '%s' and '%s' equal? %d\n", "\0", cloo, memcmp(0, cloo, 5));
	char *dod = "Hf";
	char *ded = "Ha";
	printf("memcmp: are %s and %s equal? %d\n", dod, ded, memcmp(dod, ded, 2));
	printf("ft_memcmp: are %s and %s equal? %d\n", dod, ded, ft_memcmp(dod, ded, 2));

	printf("\n=== ft_strchr === \n");
	char *haystack1 = "giberrish jibriosh brish";
	printf("%s\n", haystack1);
	printf("trying to find the first occurence of: %c\n", 'j');
	printf("%s\n", ft_strchr(haystack1, 'j'));

	printf("\n=== ft_strncmp ===\n");
	char *strA = "In a Galaxy Far Far Away!";
	char *strB = "In a 42 Far Far Away!";
	printf("Are '%s' and '%s' equal? %d\n", strA, strB, ft_strncmp(strA, strB, ft_strlen(strA)));
	char *strAb = "Jeez";
	char *strBb = "Jeez";
	printf("Are '%s' and '%s' equal? %d\n", strAb, strBb, ft_strncmp(strAb, strBb, ft_strlen(strAb)));
	printf("\n=== ft_strrchr === \n");
	printf("%s\n", strA);
	printf("the first reverse occurrence of char '%c' is at: %s", 'A', ft_strrchr(strA, 'A'));

	printf("\n === ft_strlcpy ===\n");
	char strC[] = "Hello";
	char destC[30] = "World 42----        ";
	printf("strC before cpy: %s\n", strC);
	printf("destC before cpy: %s\n", destC);
	int size = ft_strlcpy(destC, strC, 5);
	printf("after cpy, destC: %s\n", destC);
	printf("chars copied: %d\n", size);

	printf("\n === ft_strlcat ===\n");
	char srcD[] = "Annie?";
	char dstD[30] = "Are you Okay ";
	printf("before cat: %s\n", srcD);
	printf("before cat: %s\n", dstD);
	int size_cat = ft_strlcat(dstD, srcD, 20);
	printf("after cat %s\n", dstD);
	printf("size after cat: %d\n", size_cat);

	printf("\n === ft_strnstr == \n");

	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	ptr = ft_strnstr(largestring, smallstring, 5);
	printf("%s\n", ptr);

	printf("\n === ft_atoi === \n");
	char *str = "  +1234";
	printf("%s\n", str);
	printf("ft_atoi: %d\n", ft_atoi(str));
	printf("atoi: %d\n", atoi(str));

	printf("\n === ft_calloc === \n");
	char *ptr1 = ft_calloc(sizeof(char), 10);
	ft_memset(ptr1, 5, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", ptr1[i]);
	}
	free(ptr1);

	printf("\n === ft_strdup === \n");
	char *ptr2 = "Hello Darkness My Old Friend";
	char *ptr2a = ft_strdup(ptr2);
	printf("original: %s\n", ptr2);
	printf("dup: %s\n", ptr2a);

	printf("\n === ft_substr === \n");
	char *stringona = "F*! I Won't Do What you tell me!";
	char *sub_stringona = ft_substr(stringona, 5, 10);
	printf("%s\n", stringona);
	printf("substring from 5 to 15 pos:>%s\n", sub_stringona);

	printf("\n === ft_strjoin === \n");
	char *hello = "Hello";
	char *world = " World!";
	char *helloworld = ft_strjoin(hello, world);
	printf("%s\n", hello);
	printf("%s\n", world);
	printf("%s\n", helloworld);

	printf("\n === ft_strtrim === \n");
	char trimmable[] = "xxxEverybody Dances Now!";
	char to_trim[] = "xxx";
	char *n_str = ft_strtrim(trimmable, to_trim);
	printf("%s\n", trimmable);
	printf("%s\n", to_trim);
	printf("%s\n", n_str);

	char trim_target[] = "hey joe";
	char to_trim1[] = "xxx";
	char *n_str1 = ft_strtrim(trim_target, to_trim);
	printf("%s\n", trim_target);
	printf("%s\n", to_trim1);
	printf("%s\n", n_str1);

	printf("\n === ft_split === \n");
	char *to_split = "xabxcd";
	char c = 'x';
	char **strings = ft_split(to_split, c);
	printf("%s\n", to_split);
	for (int i = 0; i < 2; i++)
	{
		printf("%d\n", i);
		printf("%s\n", strings[i]);
	}

	printf("\n === ft_itoa === \n");
	char *c_nbr = ft_itoa(-500);
	for (int i = 0; i < 12; i++) {
		printf("%c ", c_nbr[i]);
	}
	printf("\n");
	char *zero = ft_itoa(0);
	printf("%s\n", zero);
	int max_int = 2147483647;
	int min_int = -2147483648;
	printf("%s\n", ft_itoa(max_int));
	printf("%s\n", ft_itoa(min_int));
	printf("%s\n", ft_itoa(-42));

	printf("\n === ft_strmapi === \n");
	char *upperSTR = ft_strmapi("hEy DuDE", get_upper);
	printf("%s\n", upperSTR);
	char *lowerSTR = ft_strmapi(upperSTR, get_lower);
	printf("%s\n", lowerSTR);

	printf("\n === ft_strteri === \n");
	char sparta[] = "this is sparta!";
	printf("original: %s\n", sparta);
	ft_striteri(sparta, (void *) get_upper_str);
	printf("after striteri with get_upper: %s\n", sparta);
	char sit_down[] = "SIT DOWN! BE HUMBLE!";
	printf("original: %s\n", sit_down);
	ft_striteri(sit_down, (void *) get_lower_str);
	printf("after striteri with get_lower: %s\n", sit_down);

	printf("\n === ft_putchar_fd === \n");
	int test_fd = open("test.txt", O_RDWR);
	ft_putchar_fd('4', test_fd);
	ft_putchar_fd('2', test_fd);
	lseek(test_fd, -2, SEEK_CUR);
	char *buffer = malloc(1 * sizeof(char));
	read(test_fd, buffer, 1);
	char c1 = *buffer;
	printf("%c", c1);
	read(test_fd, buffer, 1);
	char c2 = *buffer;
	printf("%c\n", c2);
	close(test_fd);
	free(buffer);

	printf("\n === ft_putstr_fd === \n");
	int test_fd1 = open("test.txt", O_RDWR);
	char *s1test = "This is me writing into a text a file\n";
	char *s2test = "And this is me reading from a text file\n";
	ft_putstr_fd(s1test, test_fd1);
	ft_putstr_fd(s2test, test_fd1);
	lseek(test_fd, (ft_strlen(s1test) + ft_strlen(s2test)) * -1, SEEK_CUR);
	buffer = ft_calloc(ft_strlen(s1test) + ft_strlen(s2test), sizeof(char));
	read(test_fd, buffer, ft_strlen(s1test));
	printf("%s", buffer);
	read(test_fd, buffer, ft_strlen(s2test));
	printf("%s", buffer);
	close(test_fd);
	free(buffer);

	printf("\n === ft_putendl_fd === \n");
	int test_fd2 = open("test1.txt", O_RDWR);
	char *s3test = "This is me writing into a text a file";
	char *s4test = "And this is me reading from a text file";
	ft_putendl_fd(s3test, test_fd2);
	ft_putendl_fd(s4test, test_fd2);
	int total = ft_strlen(s3test) + ft_strlen(s4test) + 2;
	lseek(test_fd2, total * -1, SEEK_CUR);
	buffer = ft_calloc(total, sizeof(char));
	read(test_fd2, buffer, ft_strlen(s3test) + 1);
	printf("%s", buffer);
	read(test_fd2, buffer, ft_strlen(s4test) + 1);
	printf("%s", buffer);
	close(test_fd2);
	free(buffer);

	printf("\n === ft_putnbr_fd === \n");
	ft_putnbr_fd(1, 450);
	ft_putchar_fd(1, '\n');

	printf("\n === ft_lstnew === \n");
	t_list *lst[5];
	char *strs[5];
	strs[0] = "Hey";
	strs[1] = "This";
	strs[2] = "Is";
	strs[3] = "A";
	strs[4] = "List";
	for (int i = 0; i < 5; i++)
	{
		lst[i] = ft_lstnew(strs[i]);
		if (i > 0)
			lst[i - 1]->next = lst[i];
	}
	t_list *node = lst[0];
	for (int i = 0; i < 5; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
		node = node->next;
	}

	printf("\n === ft_lstadd_front === \n");
	t_list *new_node = ft_lstnew("42!");
	printf("new node | addr: %p | content: %s | next: %p\n", new_node, new_node->content, new_node->next);
	printf("Adding new node to the front of the list\n");
	ft_lstadd_front(lst, new_node);
	node = lst[0];
	for (int i = 0; i < 6; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
		node = node->next;
	}

	printf("\n === ft_lstsize === \n");
	t_list *f1_drivers = ft_lstnew("Ayrton Senna");
	f1_drivers->next = ft_lstnew("Max Verstappen");
	f1_drivers->next->next = ft_lstnew("Charles Leclerc");
	f1_drivers->next->next->next = ft_lstnew("Lewis Hamilton");
	node = f1_drivers;
	for (int i = 0; i < 4; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
		node = node->next;
	}
	printf("The list size is: %d\n", ft_lstsize(f1_drivers));

	printf("\n === ft_lstlast === \n");
	t_list *cs_players = ft_lstnew("Fallen");
	cs_players->next = ft_lstnew("Gaules");
	cs_players->next->next = ft_lstnew("Fnx");
	node = cs_players;
	for (int i = 0; i < 3; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
		node = node->next;
	}
	printf("The list size is: %d\n", ft_lstsize(cs_players));
	t_list *last_node = ft_lstlast(cs_players);
	printf("LAST ITEM | addr: %p | content: %s | next: %p\n", last_node, last_node->content, last_node->next);

	printf("\n === ft_lstadd_back === \n");
	node = cs_players;
	printf("\n --- before adding more elements\n");
	for (int i = 0; i < 3; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
		node = node->next;
	}
	ft_lstadd_back(&cs_players, ft_lstnew("s1mple"));
	ft_lstadd_back(&cs_players, ft_lstnew("coldZer0"));
	int cs_len = ft_lstsize(cs_players);
	node = cs_players;
	printf("\n --- after adding more elements\n");
	for (int i = 0; i < cs_len; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
		node = node->next;
	}

	printf("\n === ft_lstclear === \n");
	node = cs_players;
	printf("\n --- before clearing the list\n");
	for (int i = 0; i < cs_len; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
		node = node->next;
	}
	ft_lstclear(&cs_players, del_content);
	node = cs_players;
	printf("%p\n", &cs_players);

	printf("\n === ft_lstiter === \n");
	printf("\n --- Before ft_lstiter\n");
	t_list *metal_bands = ft_lstnew(ft_strdup("Metallica"));
	metal_bands->next = ft_lstnew(ft_strdup("Megadeath"));
	metal_bands->next->next = ft_lstnew(ft_strdup("Judas Priest"));
	metal_bands->next->next->next = ft_lstnew(ft_strdup("Pantera"));

	t_list *band = metal_bands;
	int bands_size = ft_lstsize(metal_bands);
	for (int i = 0; i < bands_size; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, band, band->content, band->next);
		band = band->next;
	}
	ft_lstiter(metal_bands, make_upper);
	printf("\n --- After ft_lstiter\n");
	band = metal_bands;
	bands_size = ft_lstsize(metal_bands);
	for (int i = 0; i < bands_size; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, band, band->content, band->next);
		band = band->next;
	}

	printf("\n === ft_lstmap === \n");
	printf("\n --- Before ft_lstmap \n");
	t_list *thinkers = ft_lstnew(strdup("Aristoteles"));
	thinkers->next = ft_lstnew(strdup("Socrates"));
	thinkers->next->next = ft_lstnew(ft_strdup("Plato"));
	thinkers->next->next->next = ft_lstnew(ft_strdup("Seneca"));

	t_list *thinker = thinkers;
	for (int i = 0; i < bands_size; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, thinker, thinker->content, thinker->next);
		thinker = thinker->next;
	}

	printf("\n --- After ft_lstmap \n");
	thinker = ft_lstmap(thinkers, make_upper_2, del_content);
	for (int i = 0; i < bands_size; i++)
	{
		printf("node [%d] | addr: %p | content: %s | next: %p\n", i, thinker, thinker->content, thinker->next);
		thinker = thinker->next;
	}
}