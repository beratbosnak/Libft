# Libft - Custom C Standard Library Implementation

[![License: MIT](https://img.shields.io/badge/license-MIT-green?style=for-the-badge)](LICENSE)
[![Language C](https://img.shields.io/badge/language-C-blue?style=for-the-badge)](https://en.wikipedia.org/wiki/C_(programming_language))
[![42 Kocaeli](https://img.shields.io/badge/42-Kocaeli-black?style=for-the-badge)](https://www.42kocaeli.com.tr)

> A comprehensive C library built from scratch, reimplementing standard C library functions and additional utilities. This project demonstrates strong fundamentals in C programming, memory management, and low-level system operations.

## 📖 Table of Contents
* [About The Project](#-about-the-project)
* [Key Features & Technical Skills](#-key-features--technical-skills)
* [Functions Included](#-functions-included)
  * [Standard C Library Functions (Part 1)](#standard-c-library-functions-part-1)
  * [Additional Utility Functions (Part 2)](#additional-utility-functions-part-2)
* [Technical Implementation](#-technical-implementation)
* [How To Use](#-how-to-use)
  * [Prerequisites](#prerequisites)
  * [Compilation](#compilation)
  * [Usage Example](#usage-example)
* [What I Learned](#-what-i-learned)
* [Project Requirements](#-project-requirements)
* [License](#-license)
* [Contact](#-contact)

## 🎯 About The Project

Libft is a foundational project from **42 School's curriculum**, where I rebuilt essential C standard library functions from scratch. This project goes beyond simple copying—it requires deep understanding of string manipulation, memory allocation, pointer arithmetic, and system-level programming.

**Why This Project Matters:**
- Demonstrates proficiency in **low-level C programming** fundamentals
- Shows ability to work with **manual memory management** (malloc/free)
- Develops strong understanding of **algorithm implementation** and optimization
- Serves as foundation for all future C projects in the 42 curriculum

This library has been used in multiple subsequent projects, serving as a reliable toolkit for string operations, memory management, and data manipulation.

## 🔧 Key Features & Technical Skills

This project demonstrates proficiency in:

| Technical Skill | Implementation |
|----------------|----------------|
| **Memory Management** | Dynamic allocation, proper freeing, zero memory leaks |
| **String Manipulation** | Parsing, tokenization, substring extraction, trimming |
| **Pointer Arithmetic** | Low-level memory operations, efficient data handling |
| **Algorithm Design** | String search algorithms, conversion algorithms |
| **Error Handling** | Robust edge case management, null pointer checks |
| **Build Systems** | Comprehensive Makefile with multiple compilation rules |
| **Code Standards** | Strict adherence to [Norminette](https://github.com/42School/norminette) coding style |
| **Type Conversions** | Integer to string, character classification |

**Code Quality Standards:**
- ✅ Zero memory leaks (verified with Valgrind)
- ✅ Compiled with `-Wall -Wextra -Werror` flags
- ✅ No segmentation faults or undefined behavior
- ✅ Norminette compliant (42's strict coding standard)
- ✅ Comprehensive Makefile with proper dependency management

## 📚 Functions Included

The library contains **34 functions** organized into two main categories:

### Standard C Library Functions (Part 1)
Re-implementations of standard C library functions with identical behavior to their libc counterparts.

**Character Classification & Conversion:**
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

**String Operations:**
- `ft_strlen` - Calculate string length
- `ft_strlcpy` - Size-bounded string copy
- `ft_strlcat` - Size-bounded string concatenation
- `ft_strchr` - Locate character in string
- `ft_strrchr` - Locate character in string (from end)
- `ft_strncmp` - Compare strings up to n bytes
- `ft_strnstr` - Locate substring in string
- `ft_strdup` - Duplicate string (with malloc)

**Memory Operations:**
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero a byte string
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlap)
- `ft_memchr` - Scan memory for character
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and zero-initialize memory

**Type Conversions:**
- `ft_atoi` - Convert ASCII string to integer

### Additional Utility Functions (Part 2)
Custom implementations providing enhanced functionality for common operations.

**String Manipulation:**
- `ft_substr` - Extract substring with dynamic allocation
- `ft_strjoin` - Concatenate two strings into new string
- `ft_strtrim` - Trim characters from both ends of string
- `ft_split` - Tokenize string into array by delimiter

**Conversions:**
- `ft_itoa` - Convert integer to string (handles negatives)

**Function Application:**
- `ft_strmapi` - Apply function to each character (with index)
- `ft_striteri` - Iterate through string with function (in-place)

**File Descriptor Output:**
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string with newline to fd
- `ft_putnbr_fd` - Output integer to file descriptor

## 🔍 Technical Implementation

### Notable Implementation Challenges

**1. `ft_split` - String Tokenization**
- Dynamically allocates array of strings
- Handles multiple consecutive delimiters
- Properly frees memory on allocation failure
- Returns NULL-terminated array

**2. `ft_itoa` - Integer to String Conversion**
- Handles negative numbers and INT_MIN edge case
- Calculates digit count for precise allocation
- Converts from least significant digit

**3. `ft_memmove` - Overlapping Memory Copy**
- Detects memory overlap direction
- Copies forward or backward to prevent data corruption
- Essential for safe memory operations

**4. Memory Management Strategy**
- All allocations checked for NULL
- Functions return appropriate error values
- No memory leaks under any circumstance
- Proper cleanup on partial allocation failures

### Build System
The Makefile includes:
- `make` or `make all` - Compiles the library
- `make clean` - Removes object files
- `make fclean` - Removes object files and library
- `make re` - Recompiles everything from scratch

## 🚀 How To Use

### Prerequisites

- C compiler (gcc or clang)
- Make build automation tool
- ar archiver utility

### Compilation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/beratbosnak/Libft.git
   cd Libft
   ```

2. **Compile the library:**
   ```bash
   make
   ```
   This creates `libft.a` static library file.

3. **Clean build artifacts (optional):**
   ```bash
   make clean    # Remove object files
   make fclean   # Remove object files and library
   ```

### Usage Example

**Example 1: Basic String Operations**
```c
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = "Hello, World!";
    char **words;
    
    // String length
    printf("Length: %zu\n", ft_strlen(str));
    
    // Substring extraction
    char *sub = ft_substr(str, 0, 5);
    printf("Substring: %s\n", sub);
    free(sub);
    
    // String splitting
    words = ft_split("one two three", ' ');
    for (int i = 0; words[i]; i++)
    {
        printf("Word %d: %s\n", i, words[i]);
        free(words[i]);
    }
    free(words);
    
    return (0);
}
```

**Example 2: Memory Operations**
```c
#include "libft.h"
#include <stdlib.h>

int main(void)
{
    // Memory allocation
    char *str = (char *)ft_calloc(10, sizeof(char));
    
    // Memory copy
    ft_memcpy(str, "test", 4);
    
    // Safe string copy with size limit
    ft_strlcpy(str, "hello", 10);
    
    free(str);
    return (0);
}
```

**Compilation with libft:**
```bash
cc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
./your_program
```

## 💡 What I Learned

This project was instrumental in developing a deep understanding of several critical programming concepts:

### Core Technical Skills
- **Manual Memory Management**: Developed strong proficiency in `malloc()`, `free()`, and preventing memory leaks
- **Pointer Manipulation**: Improved skills in pointer arithmetic, double pointers, and function pointers
- **Low-Level String Operations**: Gained deep understanding of how strings work at the byte level without relying on standard library
- **Buffer Overflow Prevention**: Implementing size-bounded functions like `ft_strlcpy` and `ft_strlcat`
- **Edge Case Handling**: Dealing with NULL pointers, empty strings, integer overflow (INT_MIN), and overlapping memory

### Software Engineering Practices
- **Code Organization**: Structuring a library with clear interfaces and modular design
- **Build Automation**: Creating comprehensive Makefiles with proper dependencies
- **Testing & Debugging**: Extensively testing each function with edge cases and using Valgrind for leak detection
- **Code Standards**: Following strict coding conventions (Norminette) for consistency and readability
- **Documentation**: Writing clear, maintainable code that serves as a foundation for future projects

### Problem-Solving Approaches
- **Algorithm Implementation**: Designing efficient algorithms for string searching, splitting, and conversion
- **Error Handling**: Implementing robust error checking and graceful failure handling
- **Optimization**: Writing efficient code while maintaining readability

**Impact**: This library has been successfully integrated into subsequent 42 School projects, proving its reliability and practical value.

## 📋 Project Requirements

This project was developed according to 42 School's strict requirements:

### Mandatory Constraints
- ✅ Written entirely in C
- ✅ Follows [Norminette](https://github.com/42School/norminette) coding standard (42's style guide)
- ✅ No global variables allowed
- ✅ Helper functions must be static
- ✅ Compiled with `-Wall -Wextra -Werror` flags
- ✅ No crashes (segfaults, bus errors, double free)
- ✅ Zero memory leaks
- ✅ Makefile with rules: `$(NAME)`, `all`, `clean`, `fclean`, `re`
- ✅ Library created using `ar` command (not `libtool`)
- ✅ All .c files compile without warnings or errors

### Additional Notes
- **Bonus Part**: Not implemented (focused on perfect mandatory implementation)
- **Testing**: Thoroughly tested with various test suites and edge cases
- **Reusability**: Designed to be integrated into future C projects

## ⚖ License

This project is licensed under the MIT License. See the [`LICENSE`](LICENSE) file for more details.

## 📫 Contact

**Berat Boşnak**

- 💼 LinkedIn: [linkedin.com/in/beratbosnak](https://www.linkedin.com/in/beratbosnak)
- 🐙 GitHub: [@beratbosnak](https://github.com/beratbosnak)

---

<div align="center">

*This project is part of the 42 School curriculum - a peer-to-peer learning environment that emphasizes practical skills, problem-solving, and collaboration.*

**42 School** | **Kocaeli Campus** | **2024**

</div>
