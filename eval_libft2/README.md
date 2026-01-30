*This project has been created as part of the 42 curriculum by tokinirr.*

# Description

Libft is a C library.
It provides basic functions used in many 42 projects.
Goal, understand how standard C functions work, handle memory, strings, and simple data structures.

The project requires reimplementing parts of the standard C library, then adding extra utility functions.

## Library Details

The project generates a static library file named libft.a.

### Part 1: reimplemented libc functions

#### Memory functions

| Function   | Role                                    | Return                        |
| ---------- | --------------------------------------- | ----------------------------- |
| ft_memset  | Fills a memory area with a byte         | Pointer to the memory area    |
| ft_bzero   | Sets a memory area to zero              | None                          |
| ft_memcpy  | Copies n bytes from one area to another | Pointer to dest               |
| ft_memmove | Copies n bytes safely handling overlap  | Pointer to dest               |
| ft_memchr  | Searches for a byte in memory           | Pointer to found byte or NULL |
| ft_memcmp  | Compares two memory areas               | Difference between bytes      |

#### String functions

| Function   | Role                                             | Return                               |
| ---------- | ------------------------------------------------ | ------------------------------------ |
| ft_strlen  | Calculates the length of a string                | Length of the string (size_t)        |
| ft_strlcpy | Copies a string into another with size limit     | Length of the source string          |
| ft_strlcat | Concatenates a string to another with size limit | Total length of the resulting string |
| ft_strchr  | Searches for a character in a string             | Pointer to the character or NULL     |
| ft_strrchr | Searches for the last occurrence of a character  | Pointer to the character or NULL     |
| ft_strncmp | Compares two strings up to n characters          | Difference between bytes             |
| ft_strnstr | Searches for a substring within n characters     | Pointer to the substring or NULL     |
| ft_strdup  | Duplicates a string                              | Pointer to the new string            |

#### Character checks and conversion

| Function   | Role                                      | Return                          |
| ---------- | ----------------------------------------- | ------------------------------- |
| ft_isalpha | Checks if a character is a letter         | Non-zero if true, 0 if false    |
| ft_isdigit | Checks if a character is a digit          | Non-zero if true, 0 if false    |
| ft_isalnum | Checks if a character is alphanumeric     | Non-zero if true, 0 if false    |
| ft_isascii | Checks if a character is ASCII            | Non-zero if true, 0 if false    |
| ft_isprint | Checks if a character is printable        | Non-zero if true, 0 if false    |
| ft_toupper | Converts a lowercase letter to uppercase  | Converted character or original |
| ft_tolower | Converts an uppercase letter to lowercase | Converted character or original |

#### Numbers and allocation

| Function  | Role                                 | Return                      |
| --------- | ------------------------------------ | --------------------------- |
| ft_atoi   | Converts a string to an integer      | Integer value of the string |
| ft_calloc | Allocates memory and sets it to zero | Pointer to allocated memory |

### Part 2: Additional functions

#### String utilities

| Function    | Role                                                               | Return                        |
| ----------- | ------------------------------------------------------------------ | ----------------------------- |
| ft_substr   | Extracts a substring from a string                                 | Pointer to the new substring  |
| ft_strjoin  | Joins two strings into a new string                                | Pointer to the new string     |
| ft_strtrim  | Trims characters from the start and end                            | Pointer to the trimmed string |
| ft_split    | Splits a string by a delimiter                                     | Array of strings (char **)    |
| ft_itoa     | Converts an integer to a string                                    | Pointer to the new string     |
| ft_strmapi  | Applies a function to each char of a string, creating a new string | Pointer to the new string     |
| ft_striteri | Applies a function to each char of a string (in-place)             | None                          |

#### File descriptor output
ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

### part 3: linked lists

Structure used
```c 
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

#### List functions

| Function        | Role                                               | Return                   |
| --------------- | -------------------------------------------------- | ------------------------ |
| ft_lstnew       | Creates a new node                                 | Pointer to the new node  |
| ft_lstadd_front | Adds a node at the beginning of a list             | None                     |
| ft_lstsize      | Counts nodes in a list                             | Number of nodes, int     |
| ft_lstlast      | Gets the last node of a list                       | Pointer to the last node |
| ft_lstadd_back  | Adds a node at the end of a list                   | None                     |
| ft_lstdelone    | Deletes one node using a delete function           | None                     |
| ft_lstclear     | Deletes and frees all nodes of a list              | None                     |
| ft_lstiter      | Applies a function to each node content            | None                     |
| ft_lstmap       | Applies a function to each node, builds a new list | Pointer to the new list  |

These functions handle singly linked lists, insertion, deletion, iteration, and mapping.

# Instructions

## Build the library

make

## Available rules

| Command    | Syntax        | Action performed                         |
| ---------- | ------------- | ---------------------------------------- |
| Build      | `make`        | Compiles all files and generates libft.a |
| Clean objs | `make clean`  | Deletes all object files .o              |
| Full clean | `make fclean` | Deletes .o files and libft.a             |
| Rebuild    | `make re`     | Runs fclean, then rebuilds the project   |

## Use it in a project

cc main.c libft.a


Include the header in your files

#include "libft.h"

Example
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *s = ft_strdup("42");
    printf("%s\n", s);
    free(s);
    return (0);
}
```

# Resources

![C](https://img.shields.io/badge/Language-C-blue)  
C language used for the whole project.

![Docs](https://img.shields.io/badge/Documentation-C%20Docs-green)  
Official C documentation for standard functions.

![Man Pages](https://img.shields.io/badge/Linux-Man%20Pages-orange)  
Linux manual pages used as behavior reference.

![YouTube](https://img.shields.io/badge/YouTube-EvoluNoob-red)  
Video explanations that helped understand concepts.

![Tests](https://img.shields.io/badge/Tester-Tripouille-yellow)  
Tripouille tester used to validate function behavior.

# AI usage
Used for code review help, logic verification, the difference between each functions and test ideas.
