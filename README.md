# Libft - A Custom C Library

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)](LICENSE)
[![School](https://img.shields.io/badge/School-42-black?style=for-the-badge&logo=42)](https://www.42.fr)
![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)

This project is a fundamental part of the 42 curriculum, where I recreated a wide range of standard C library functions from scratch. The goal is to gain a deep understanding of C's core mechanics, low-level memory management, and fundamental algorithms without relying on any pre-existing libraries.

---

## 📋 Table of Contents

1.  [Key Features & Challenges](#-key-features--challenges)
2.  [Getting Started](#-getting-started)
3.  [Usage Example](#-usage-example)
4.  [Testing](#-testing)
5.  [Function Reference](#-function-reference)
6.  [License](#-license)
7.  [Contact](#-contact)

---

## ✨ Key Features & Challenges

This library was built under the strict standards of the 42 school, demonstrating proficiency in key areas of software development:

* **Written from Scratch:** Every function is implemented using only the most basic C features, with no external libraries allowed.
* **Norm-Compliant:** The entire codebase adheres to the `Norminette`, a strict coding standard enforced at 42. This ensures high readability, consistency, and maintainability.
* **Memory Safe:** All functions that allocate memory (`malloc`) are paired with appropriate deallocation logic, ensuring there are no memory leaks.
* **Robust & Reliable:** The project is compiled with the `-Wall -Wextra -Werror` flags, guaranteeing that the code is free from common errors and warnings. Functions are designed to handle edge cases gracefully without unexpected crashes (e.g., `segmentation fault`).

---

## 🛠 Getting Started

To get a local copy up and running, follow these simple steps.

### Prerequisites

You need a C compiler (like `gcc` or `clang`), `make`, and `ar` installed on your system. This project is designed for UNIX-like operating systems.

### Installation & Compiling

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/beratbosnak/Libft.git
    cd Libft
    ```

2.  **Compile the library using `make`:**
    The following commands are available:
    * `make` or `make all`: Compiles source files and creates the static library `libft.a`.
    * `make clean`: Removes temporary object files (`.o`).
    * `make fclean`: Removes object files and the `libft.a` library.
    * `make re`: Re-compiles the library by running `fclean` and `all` sequentially.

---

## 🚀 Usage Example

Here's a simple example of how to use the `libft` library in your own project.

1.  Create a `main.c` file in the same directory as `libft.a` and `libft.h`:

    ```c
    #include "libft.h"
    #include <unistd.h> // For the STDOUT_FILENO constant
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
---

## 🧪 Testing

To ensure the robustness and correctness of all functions, especially for edge cases, the project was rigorously validated. For this purpose, I used the comprehensive `libftTester` created by [Tripouille](https://github.com/Tripouille/libftTester). My implementation successfully passes all tests.

---

## 📚 Function Reference

This library includes the mandatory functions as required by the project. The functions are grouped by category for clarity.

**Note on Memory Management:** Functions that return a new string, substring, or an array of strings allocate the necessary memory with `malloc`. The caller is responsible for freeing this memory to prevent leaks.

| Category      | Function      | Description                                                    |
| :------------ | :------------ | :------------------------------------------------------------- |
| **Character** | `ft_isalpha`  | Checks for an alphabetic character.                            |
|               | `ft_isdigit`  | Checks for a digit.                                            |
|               | `ft_isalnum`  | Checks for an alphanumeric character.                          |
|               | `ft_isascii`  | Checks for a valid ASCII character.                            |
|               | `ft_isprint`  | Checks for a printable character.                              |
|               | `ft_toupper`  | Converts a lower-case letter to upper-case.                    |
|               | `ft_tolower`  | Converts an upper-case letter to lower-case.                   |
| **Memory** | `ft_memset`   | Fills a memory block with a constant byte.                     |
|               | `ft_bzero`    | Writes zeroes to a byte string.                                |
|               | `ft_memcpy`   | Copies a memory area.                                          |
|               | `ft_memmove`  | Safely copies overlapping memory areas.                        |
|               | `ft_memchr`   | Scans memory for a character.                                  |
|               | `ft_memcmp`   | Compares two memory blocks.                                    |
|               | `ft_calloc`   | Allocates and zeroes out memory for an array.                  |
| **String** | `ft_strlen`   | Calculates the length of a string.                             |
|               | `ft_strdup`   | Duplicates a string.                                           |
|               | `ft_strlcpy`  | Size-bounded string copying.                                   |
|               | `ft_strlcat`  | Size-bounded string concatenation.                             |
|               | `ft_strchr`   | Locates the first occurrence of a character in a string.       |
|               | `ft_strrchr`  | Locates the last occurrence of a character in a string.        |
|               | `ft_strncmp`  | Compares two strings up to a given length.                     |
|               | `ft_strnstr`  | Locates a substring in a string, with a length limit.          |
|               | `ft_substr`   | Returns a substring from a string.                             |
|               | `ft_strjoin`  | Concatenates two strings into a new string.                    |
|               | `ft_strtrim`  | Trims specified characters from the start and end of a string. |
|               | `ft_split`    | Splits a string by a delimiter into an array of strings.       |
|               | `ft_strmapi`  | Creates a new string by applying a function to each character, passing its index. |
|               | `ft_striteri` | Applies a function to each character of a string, with index.  |
| **Conversion**| `ft_atoi`     | Converts a string to an integer.                               |
|               | `ft_itoa`     | Converts an integer to a string.                               |
| **File I/O** | `ft_putchar_fd`| Outputs a character to a given file descriptor.                |
|               | `ft_putstr_fd` | Outputs a string to a given file descriptor.                 |
|               | `ft_putendl_fd`| Outputs a string and a newline to a given file descriptor.     |
|               | `ft_putnbr_fd` | Outputs an integer to a given file descriptor.                 |

---

## 📄 License

This project is distributed under the MIT License. See the [LICENSE](LICENSE) file for more details.

---

## 📬 Contact

**Berat Boşnak**

* **Portfolio:** [beratbosnak.com](https://beratbosnak.com)
* **LinkedIn:** [linkedin.com/in/beratbosnak](https://www.linkedin.com/in/beratbosnak)
* **GitHub:** [github.com/beratbosnak](https://github.com/beratbosnak)
