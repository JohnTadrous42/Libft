# Libft - 42 School Project

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg](https://img.shields.io/badge/Language-C-blue.svg" alt="Language C" />
  <img src="https://img.shields.io/badge/School-42-black.svg](https://img.shields.io/badge/School-42-black.svg" alt="School 42" />
  <img src="https://img.shields.io/badge/Makefile-Passing-brightgreen.svg](https://img.shields.io/badge/Makefile-Passing-brightgreen.svg" alt="Makefile" />
</p>

## Description

**Libft** is the very first project in the 42 curriculum. The goal is to build a personal C library containing recreated standard C library functions (`libc`), essential utility functions for string and memory manipulation, and a comprehensive data structure module for **singly linked lists**.

This static library serves as the core foundation for subsequent projects at 42 (such as *ft_printf*, *get_next_line*, and *push_swap*).

---

## Functions Overview

### Part 1: Libc Functions
Standard C library functions recoded from scratch conforming to their original behaviors:

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Check for alphabetic character |
| `ft_isdigit` | Check for digit (0 through 9) |
| `ft_isalnum` | Check for alphanumeric character |
| `ft_isascii` | Check for ASCII character |
| `ft_isprint` | Check for printable character |
| `ft_strlen` | Calculate length of a string |
| `ft_memset` | Fill memory with a constant byte |
| `ft_bzero` | Zero a byte string |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory area with overlap handling |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Convert character to uppercase |
| `ft_tolower` | Convert character to lowercase |
| `ft_strchr` | Locate character in string (first occurrence) |
| `ft_strrchr` | Locate character in string (last occurrence) |
| `ft_strncmp` | Compare two strings up to `n` characters |
| `ft_memchr` | Scan memory for a character |
| `ft_memcmp` | Compare memory areas |
| `ft_strnstr` | Locate a substring in a string |
| `ft_atoi` | Convert ASCII string to integer |
| `ft_calloc` | Allocate and zero-initialize memory |
| `ft_strdup` | Duplicate a string using dynamic allocation |

### Part 2: Additional Functions
Custom utility functions for strings, character output, and numbers:

| Function | Description |
| :--- | :--- |
| `ft_substr` | Extract substring from string |
| `ft_strjoin` | Concatenate two strings into a new allocated string |
| `ft_strtrim` | Trim specified characters from beginning and end of string |
| `ft_split` | Split string into an array of strings using a delimiter |
| `ft_itoa` | Convert integer to ASCII string |
| `ft_strmapi` | Apply function to each character of string to create new string |
| `ft_striteri` | Apply function to each character of string by reference |
| `ft_putchar_fd` | Output character to given file descriptor |
| `ft_putstr_fd` | Output string to given file descriptor |
| `ft_putendl_fd` | Output string followed by a newline to file descriptor |
| `ft_putnbr_fd` | Output integer to given file descriptor |

### Part 3: Linked List Functions
A collection of functions to manipulate and navigate singly linked lists:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Create a new list node |
| `ft_lstadd_front` | Add node at the beginning of the list |
| `ft_lstsize` | Count the number of nodes in the list |
| `ft_lstlast` | Return the last node of the list |
| `ft_lstadd_back` | Add node at the end of the list |
| `ft_lstdelone` | Delete a single node using a custom function |
| `ft_lstclear` | Delete and free an entire list |
| `ft_lstiter` | Iterate list and apply function to content of each node |
| `ft_lstmap` | Apply function to list elements and create a new mapped list |

---

## Compilation & Rules

Compile the library using the standard Makefile rules:

* **`make`** or **`make all`**: Compiles source files and archives them into `libft.a`.
* **`make clean`**: Removes compiled object files (`.o`).
* **`make fclean`**: Removes object files and the generated library (`libft.a`).
* **`make re`**: Executes `fclean` followed by `all` for a fresh rebuild.

---

## Getting Started & Usage

### 1. Build the library
```bash
git clone https://github.com/JohnTadrous42/Libft.git libft
cd libft
make
```

### 2. Include in your C project
Include the header file `libft.h` in your source code:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "hello 42";
    printf("Length: %zu\n", ft_strlen(str));
    return (0);
}
```

### 3. Compile with the library
Link `libft.a` during your build step:

```bash
cc main.c -L. -lft -o program
./program
```
