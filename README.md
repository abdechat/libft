*This project has been created as part of the 42 curriculum by achancha.*

## Description

Libft is a C library that reimplements several standard C library functions, along with additional utility functions and linked list operations. The goal of this project is to understand how these functions work and to build a reusable library for future C projects.

## Instructions

### Build the library

To compile the library, run:

```bash
make
```

The Makefile provides the following rules:

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild the library from scratch
```

After successful compilation, the static library `libft.a` will be generated.

### Usage

To use Libft in your own C project, include `libft.h` and link the compiled library.

1. Include the header in your source file:

```c
#include "libft.h"
```

2. Compile your program by linking `libft.a`:

```bash
cc -Wall -Wextra -Werror -I./libft main.c -L./libft -lft -o main
```

3. Run the executable:

```bash
./main
```

Make sure that `libft.h` and `libft.a` are located in the `libft/` directory, as shown in the example above.

## Resources

- [W3Schools — C Pointers](https://www.w3schools.com/c/c_pointers.php) — Used to understand pointers and memory addresses in C.
- [W3Schools — C Memory Address](https://www.w3schools.com/c/c_memory_address.php) — Used to understand memory addresses and how variables are stored in memory.
- [GeeksforGeeks — C Programming](https://www.geeksforgeeks.org/c/getting-started-with-c/) — Used to understand C fundamentals and structures (`struct`).
- [Stack Overflow](https://stackoverflow.com/) — Used to research programming questions and troubleshoot errors encountered during development.
- `man` pages — Used to understand the behavior of standard C library functions.
- The 42 Libft subject — Used as the project specification.

### AI Usage

AI was used to help generate additional test cases and review function prototypes in the header file. It was also used to help identify potential edge cases and improve the understanding of some implementations. All code was reviewed and tested by the student.

## Detailed Description

### Character Functions

These functions classify characters or convert their case.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII character range. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### Memory and String Functions

These functions manipulate memory blocks and null-terminated strings.

| Function | Description |
|---|---|
| `ft_strlen` | Returns the length of a string, excluding the terminating null character. |
| `ft_memset` | Fills a memory block with a specified byte value. |
| `ft_bzero` | Sets a specified number of bytes to zero. |
| `ft_memcpy` | Copies bytes between non-overlapping memory regions. |
| `ft_memmove` | Copies bytes between memory regions, including overlapping regions. |
| `ft_strlcpy` | Copies a string into a size-limited destination buffer. |
| `ft_strlcat` | Appends a string to a size-limited destination buffer. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_memchr` | Finds the first occurrence of a byte in a memory block. |
| `ft_memcmp` | Compares two memory blocks byte by byte. |
| `ft_strnstr` | Finds a substring within a specified search length. |
| `ft_atoi` | Converts the initial numeric portion of a string to an integer. |
| `ft_calloc` | Allocates memory for an array and initializes all allocated bytes to zero. |
| `ft_strdup` | Creates a dynamically allocated duplicate of a string. |

### Additional String Functions

These functions provide additional string manipulation and transformation utilities.

| Function | Description |
|---|---|
| `ft_substr` | Creates a new string containing a substring of the original string. |
| `ft_strjoin` | Creates a new string by concatenating two strings. |
| `ft_strtrim` | Removes specified characters from both ends of a string. |
| `ft_split` | Splits a string into an allocated array of substrings using a delimiter character. |
| `ft_itoa` | Converts an integer into a dynamically allocated string. |
| `ft_strmapi` | Creates a new string by applying a function to each character and its index. |
| `ft_striteri` | Applies a function to each character and its index, modifying the original string. |

### File Descriptor Output Functions

These functions write characters, strings, and integers to a specified file descriptor.

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Linked List Functions

The library provides a singly linked list implementation using the `t_list` structure. Each node stores a `content` pointer and a `next` pointer to the following node.

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and initializes a new list node. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstsize` | Returns the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstdelone` | Deletes a node and frees its content using a supplied deletion function. |
| `ft_lstclear` | Deletes all nodes in a list and resets the list pointer. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Creates a new list by applying a function to the content of each node. |
