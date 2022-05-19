SOURCES	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
            ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c
            ft_strmapi.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
# .c=.o implicitly compiles the source-code into binary objects.
OBJECTS	= ${SOURCES:.c=.o}
LIBNAME	= libft.a
COMPILE	= cc -std=c99
REMOVE	= rm -f
FLAGS		= -Wall -Wextra -Werror -I ${HEADERDIR}

# Compiles from open-source to binary, but doesn't link. Necessary to run flags.
.c.o:	${OBJECTS}
	${COMPILE} ${FLAGS} -c $< -o ${<:.c=.o}

# Calling its name acts as its own makefile. Will compile only if the object dependencies are fulfilled.
# ar creates an archive (here, library) from the files member (objects), replacing them as needed.
# ranlib simply indexes every function in the library.
${LIBNAME}:	${OBJECTS}
	ar rc ${LIBNAME} ${OBJECTS}
	ranlib libft.a

all:  ${LIBNAME}

# Removes only compiled objects.
clean:
      ${REMOVE} ${OBJECTS}

# Removes compiled objects first, then proceeds to remove the library itself.
fclean:     clean
      ${REMOVE} ${LIBNAME}
 
# Forces the recompilation even if everything is up to date.
re:         fclean all
 
# Ignores files that could eventually be named after any of these parameters.
.PHONY:     all clean fclean re
