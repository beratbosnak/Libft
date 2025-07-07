# Libft - Your First C Library

[![License: MIT](https://img.shields.io/badge/license-MIT-green?style=for-the-badge)](LICENSE)
[![Language C](https://img.shields.io/badge/language-C-blue?style=for-the-badge)](https://en.wikipedia.org/wiki/C_(programming_language))
[![42 Kocaeli](https://img.shields.io/badge/42-Kocaeli-black?style=for-the-badge)](https://www.42kocaeli.com.tr)
[![Status](https://img.shields.io/badge/status-completed-green?style=for-the-badge)](https://github.com/beratbosnak/Libft)

This project is about creating a personal C library, `libft`. It contains a collection of re-implemented standard C functions and other useful utilities. The goal is to gain a deep understanding of how these functions work and to create a versatile tool that will be used in many future C projects at the school.

## 📖 Table of Contents
* [About The Project](#-about-the-project)
* [Functions Included](#-functions-included)
  * [Standard C Library Functions](#standard-c-library-functions)
  * [Custom Utility Functions](#custom-utility-functions)
* [How To Use](#-how-to-use)
  * [Prerequisites](#prerequisites)
  * [Compilation](#compilation)
  * [Usage in Your C Project](#usage-in-your-c-project)
* [License](#-license)
* [Author](#-author)

## 🎯 About The Project

This project is a fundamental part of the curriculum at **42, a globally recognized software engineering school known for its rigorous, project-based learning model.** It challenges you to re-create many general-purpose functions that you would normally have access to in the standard C library. This process is crucial for learning the details of C programming, memory management, and creating robust, error-free code.

This project adheres to a rigorous coding standard known as the **[Norminette](https://github.com/42School/norminette)**. This standard, enforced throughout the 42 curriculum, ensures the code is exceptionally clean, readable, and maintainable. Furthermore, the project must be compiled using the `-Wall`, `-Wextra`, and `-Werror` flags, and its `Makefile` must contain the `all`, `clean`, `fclean`, and `re` rules.

## 📚 Functions Included

The library contains a variety of useful functions, grouped into two main categories:

### Standard C Library Functions
These are re-implementations of a set of functions from the `libc`. Their behaviors are designed to be identical to the originals.

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_strlen`
* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_toupper`
* `ft_tolower`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_memchr`
* `ft_memcmp`
* `ft_strnstr`
* `ft_atoi`
* `ft_calloc`
* `ft_strdup`

### Custom Utility Functions
This section contains custom functions that are either not in the standard library or are implemented in a different form to provide additional utility.

* `ft_substr`: Allocates and returns a substring from a string.
* `ft_strjoin`: Concatenates two strings into a new, allocated string.
* `ft_strtrim`: Trims specified characters from the beginning and end of a string.
* `ft_split`: Splits a string into an array of strings using a delimiter.
* `ft_itoa`: Converts an integer into a string.
* `ft_strmapi`: Applies a function to each character of a string to create a new string.
* `ft_striteri`: Applies a function to each character of a string, allowing in-place modification.
* `ft_putchar_fd`: Outputs a character to a given file descriptor.
* `ft_putstr_fd`: Outputs a string to a given file descriptor.
* `ft_putendl_fd`: Outputs a string to a file descriptor, followed by a newline.
* `ft_putnbr_fd`: Outputs an integer to a given file descriptor.

## 🚀 How To Use

### Prerequisites

To use this library, you need a C compiler (like `cc`) and the `ar` command-line tool.

### Compilation

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/beratbosnak/Libft.git](https://github.com/beratbosnak/Libft.git)
    cd Libft
    ```

2.  **Compile the library:**
    ```bash
    make
    ```

### Usage in Your C Project

1.  **Create an example file:**
    Create a file named `example.c` and place the `libft.h` file in the same directory.
    ```c
    #include "libft.h"
    #include <stdio.h>

    int main(void)
    {
        char *str = "hello world";
        printf("Length of string: %zu\n", ft_strlen(str));
        return (0);
    }
    ```

2.  **Compile your program:**
    Link your program with the `libft.a` library file.
    ```bash
    cc example.c -L. -lft -o my_program
    ```
    -   **Note:** `cc` is used here to represent the system's default C compiler (e.g., `gcc` or `clang`).
    -   `-L.` tells the compiler to look for libraries in the current directory.
    -   `-lft` tells the compiler to link with the `libft` library.

3.  **Run and See the Output:**
    Execute the compiled program to see the result.
    ```bash
    ./my_program
    ```
    **Expected Output:**
    ```
    Length of string: 11
    ```

## ⚖ License

This project is licensed under the MIT License. See the [`LICENSE`](LICENSE) file for more details.

## ✍ Author

👤 **Berat Boşnak**

* **GitHub:** [@beratbosnak](https://github.com/beratbosnak)
* **LinkedIn:** [linkedin.com/in/beratbosnak](https://www.linkedin.com/in/beratbosnak)
