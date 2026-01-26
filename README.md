*This project has been created as part of the 42 curriculum by nyramana*

# Libft:

## **Description:**
The Libft is a custom library that contains a variety of functions that will be useful in the 42 school. The goal is to recreate a set of function in the library `libc.h` and other utility function that we can use

## **Compilation:**
The easiest way to compile the library is to use the `make` command in the root directory of the project. This will generate the `libft.a` file in the root directory

## **Usage:**
To use the library in your project, simply add the `libft.a` file to your project and include the `libft.h` header file in your source files. Then your can compile your program using:
```bash
gcc main.c libft.a
```
you can also use this command:

```bash
gcc main.c -L. -lft
```

## **Functions:**
Part 1:

| Function | Description |
| -------------- | --------------- |
| ft_isalpa | check is the character is an alphabet|
| ft_isdigit | check is the character is a digit|
| ft_isalnum | check is the character is an alphabet or digit|
| ft_isascii | check is the character is an ascii|
| ft_isprint | check is the character is printable|
| ft_strlen | return the length of the string|
| ft_memset | fill a block of memory with a specific value|
| ft_bzero | fill a block of memory with zeros|
| ft_memcpy | copy a block of memory to another block of memory|
| ft_memmove | copy a block of memory to another block of memory without overwriting the destination|
| ft_strlcpy | copy a string to another string|
| ft_strlcat | append a string to another string|
| ft_toupper | convert a lowercase letter to uppercase|
| ft_tolower | convert an uppercase letter to lowercase|
| ft_strchr | find the first occurrence of a character in a string|
| ft_strrchr | find the last occurrence of a character in a string|
| ft_strncmp | compare two strings|
| ft_memchr | find the first occurrence of a byte in a block of memory|
| ft_memcmp | compare two blocks of memory|
| ft_strnstr | find the first occurrence of a substring in a string|
| ft_atoi | convert a string to an integer|
| ft_calloc | allocate a block of memory and initialize it to zero|
| ft_strdup | duplicate a string|


Part 2:

| Function | Description |
| -------------- | --------------- |
| ft_substr | get a substring from a string|
| ft_strjoin | join two strings|
| ft_strtrim | trim whitespace from the beginning and end of a string|
| ft_split | split a string into an array of strings|
| ft_itoa | convert an integer to a string|
| ft_strmapi | apply a function to each character of a string and return a new string|
| ft_striteri | apply a function to each character of a string|
| ft_putchar_fd | write a character to a file descriptor|
| ft_putstr_fd | write a string to a file descriptor|
| ft_putendl_fd | write a string followed by a newline to a file descriptor|
| ft_putnbr_fd | write a number to a file descriptor|

Part 3:

| Function | Description |
| -------------- | --------------- |
| ft_lstnew | create a new node|
| ft_lstadd_front | add a new node to the beginning of a list|
| ft_lstsize | get the size of a list|
| ft_lstlast | get the last node of a list|
| ft_lstadd_back | add a new node to the end of a list|
| ft_lstdelone | delete a node from a list|
| ft_lstclear | delete all nodes from a list|
| ft_lstiter | apply a function to each node of a list|
| ft_lstmap | apply a function to each node of a list and return a new list|
<details>
<summary><b>Gestion de la Mémoire</b></summary>

- `ft_memset` : Remplit la mémoire avec un octet constant.
- `ft_bzero` : Met à zéro une zone mémoire.
- `ft_calloc` : Alloue et initialise la mémoire.
</details>
