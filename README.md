*This project has been created as part of the 42 curriculum by johtadro.*

# Libft - 42 Prague Project

# Description

**Libft** is the very first project in the 42 curriculum. The goal is to build a personal C library containing recreated standard C library functions (`libc`), essential utility functions for string and memory manipulation, and a comprehensive data structure module for **linked lists**.


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

---
# Instructions
## Compilation & Rules

Compile the library using the standard Makefile rules:

### Build the library `libft.a`:
* **`make`** or **`make all`**: Compiles source files and archives them into `libft.a`.
### Remove object files `.o`:
* **`make clean`**: Removes compiled object files (`.o`).
### Remove object files `.o` and `libft.a`:
* **`make fclean`**: Removes object files and the generated library (`libft.a`).
### Full rebuild:
* **`make re`**: Executes `fclean` followed by `all` for a fresh rebuild.

---

## Usage & Linking
To use this library in an external C program:
### 1. Include the header file:
```c
#include "libft.h"
```
### 2. Compile your source files with the library archive:
Include the header file `libft.h` in your source code:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o my_program 
&& ./my_program
```
---
# Resources

### References & Documentation
* **Linux Programmer's Manual (`man` pages):** Consulted for official function prototypes, expected return values, parameter specifications, and standard libc behaviors.
* **W3Schools (C Reference & Sandbox):** Used to test native library functions, observe baseline behavior, and run edge-case scenarios before beginning independent implementations.

### AI Usage
In accordance with 42 academic integrity guidelines, Artificial Intelligence was used strictly as a learning and organizational aid:
* **Conceptual Clarification:** Explaining theoretical concepts behind complex behaviors (such as pointer indirection and overlapping memory safety in buffer functions).
* **Documentation & Formatting:** Structuring and generating the layout for this `README.md` file to align with the curriculum's subject requirements.
* **Implementation Note:** All source code, logic, and Makefile configurations were written, tested, and debugged manually.