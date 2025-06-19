# Libft - A Custom C Library

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)](https://opensource.org/licenses/MIT)

## 📋 Table of Contents

1.  [About The Project](#-about-the-project)
2.  [Getting Started](#-getting-started)
    -   [Prerequisites](#prerequisites)
    -   [Installation & Compiling](#installation--compiling)
3.  [Usage Example](#-usage-example)
4.  [Function Reference](#-function-reference)
5.  [License](#-license)
6.  [Contact](#-contact)

## 🚀 About The Project

This project is a custom implementation of many standard C library functions, built from the ground up. The primary goal was to gain a deep understanding of C's core mechanics, memory management, and fundamental algorithms without relying on pre-existing libraries.

The result is a static library, `libft.a`, that serves as a versatile toolkit for C programming.

## 🛠 Getting Started

To get a local copy up and running, follow these simple steps.

### Prerequisites

You need a C compiler (like `gcc` or `clang`) and `make` installed on your system. This project is designed for UNIX-like operating systems.

### Installation & Compiling

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/beratbosnak/Libft.git
    cd Libft
    ```

2.  **Compile the library using `make`:**
    The following commands are available to manage the project:

    *   `make` or `make all`
        > Compiles the source files and creates the static library `libft.a`.
    *   `make clean`
        > Removes the temporary object files (`.o`).
    *   `make fclean`
        > Removes the object files and the `libft.a` library.
    *   `make re`
        > Re-compiles the library from scratch by running `fclean` and `all` sequentially.

### ✨ Usage Example

Here's a simple example of how to use the `libft` library in your own project.

1.  Create a `main.c` file in the same directory as `libft.a` and `libft.h`:

    ```c
    #include "libft.h"
    #include <unistd.h> // For write's STDOUT_FILENO
    #include <stdlib.h> // For free

    int main(void)
    {
        char *str1 = "Building my own ";
        char *str2 = "library is fun!";
        char *joined_str;

        // Using ft_strjoin to concatenate two strings
        joined_str = ft_strjoin(str1, str2);

        // Using ft_putendl_fd to print the result
        if (joined_str)
        {
            ft_putendl_fd(joined_str, STDOUT_FILENO);
            free(joined_str); // Don't forget to free allocated memory
        }
        return (0);
    }
    ```

2.  Compile your project and link it with the `libft` library:

    ```bash
    cc main.c -L. -lft -o my_program
    ```

3.  Run your program:
    ```bash
    ./my_program
    ```

    **Expected Output:**
    ```
    Building my own library is fun!
    ```

## 📚 Function Reference

All functions are prefixed with `ft_` and behave like their standard C counterparts where applicable.

| Function | Description | Function | Description |
| :--- | :--- | :--- | :--- |
| `ft_atoi` | Converts a string to an integer. | `ft_putendl_fd` | Outputs a string and a newline to a file descriptor. |
| `ft_bzero` | Writes zeroes to a byte string. | `ft_putnbr_fd` | Outputs an integer to a file descriptor. |
| `ft_calloc` | Allocates and zeroes out memory. | `ft_putstr_fd` | Outputs a string to a file descriptor. |
| `ft_isalnum` | Checks for an alphanumeric character. | `ft_split` | Splits a string by a delimiter into an array of strings. |
| `ft_isalpha` | Checks for an alphabetic character. | `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_isascii` | Checks for a valid ASCII character. | `ft_strdup` | Duplicates a string. |
| `ft_isdigit` | Checks for a digit. | `ft_striteri` | Applies a function to each character of a string, with index. |
| `ft_isprint` | Checks for a printable character. | `ft_strjoin` | Concatenates two strings. |
| `ft_itoa` | Converts an integer to a string. | `ft_strlcat` | Size-bounded string concatenation. |
| `ft_memchr` | Scans memory for a character. | `ft_strlcpy` | Size-bounded string copying. |
| `ft_memcmp` | Compares two memory blocks. | `ft_strlen` | Calculates the length of a string. |
| `ft_memcpy` | Copies a memory area. | `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_memmove` | Safely copies an overlapping memory area. | `ft_strncmp` | Compares two strings up to a given length. |
| `ft_memset` | Fills a memory block with a value. | `ft_strnstr` | Locates a substring in a string, with a length limit. |
| `ft_putchar_fd` | Outputs a character to a file descriptor. | `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strtrim` | Trims specified characters from the beginning and end of a string. | `ft_substr` | Returns a substring from a string. |
| `ft_tolower` | Converts an upper-case letter to lower-case. | `ft_toupper` | Converts a lower-case letter to upper-case. |

## 📄 License

This project is distributed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## 📬 Contact

**Berat Boşnak**

*   **LinkedIn:** [linkedin.com/in/beratbosnak](https://www.linkedin.com/in/beratbosnak)

---
