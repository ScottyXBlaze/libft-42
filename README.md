*This project has been created as part of the 42 curriculum by nyramana*

# libft

## **Description:**

This project is a library of functions that are used in the 42 curriculum. It reimplement a set of functions from the C library like string manipulation, memory management and structure especially linked list.

## **Instructions:**

### **Compilation:**
To compile the project, you need to use the Makefile provided in the repository. Just type `make` in the root repository and it will create the `libft.a`. Just by doing that, you will have a static library that you can use in your project.

### Usage: 
to use the library, you need to include the header file `libft.h` in your project. Then compile your project with the library using the following command:

**Warning:** *Make sure to have the `libft.a` and `libft.h` files in the same directory as your project to make the compilation easier*

```bash
gcc -o  project project.c -L. -lft
# You can also use the following command to compile your program
gcc project.c libft.a -o project
```

## **Example:** 
```c
#include "libft.h"

int main(int argc, char **argv)
{
    int integer;

    integer = ft_atoi("   +833783");
    printf("%d", integer);
    return (0);
}
```
## **Functions:**

*remember to add the `ft_` prefix before the name.* 


| Categories | Functions | Description |
| :--- | :--- | :--- |
| **Memory** | `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc` | Set and manipulate memory. |
| **Character** | `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower` | Test et convert individual characters (ASCII). |
| **String** | `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup` | Standards function to manipulate strings. |
| **Transformation** | `substr`, `strjoin`, `strtrim`, `split`, `itoa`, `atoi`, `strmapi` | Advanced Function to cut, join or convert data. |
| **Input/Output** | `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd` | Simplified writing to file descriptors (`fd`). |
| **Lists** | `lstnew`, `lstadd_front`, `lstsize`, `lstlast`, `lstadd_back`, `lstdelone`... | Management of linked list data structures|


## **Resources:** 

### references
* The libft subject given by 42 
* `man` pages

### AI Usage

IA was used to create a program to test all the subject (before I found the libftTester by Tripouille) and help with the README. In some case like the strlcat, AI helps me to understand what the function do and their limitation.


### Test
This Project was tested by [Libfttester](https://github.com/Tripouille/libftTester/) originally created by Tripouille to test this project and everything was OK.
