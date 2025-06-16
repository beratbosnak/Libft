# Libft

Reimplementation of essential C standard library functions as part of the 42 school curriculum. This project reinforces pointer handling, memory management, and string processing skills.

## Quick Start

Clone and build in one step:

```bash
git clone https://github.com/beratbosnak/libft.git && cd libft && make
```

## Usage

Include the header and link against `libft.a`:

```c
#include "libft.h"

int main(void) {
    char *msg = ft_strjoin("Hello, ", "Libft!");
    write(1, msg, ft_strlen(msg));
    write(1, "\n", 1);
    free(msg);
    return 0;
}
```

Compile:

```bash
cc main.c -L. -lft -I . -o program
```

**Sample Output:**

```
Hello, Libft!
```

## Features

### String Functions

Manipulate null-terminated strings:

* `ft_strlen` — length of a string
* `ft_strlcpy`, `ft_strlcat` — safe string copy/concatenation with size limits
* `ft_strchr`, `ft_strrchr` — search for a character
* `ft_strncmp`, `ft_strnstr` — compare or search with length limit
* `ft_strdup`, `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_split`
* `ft_strmapi`, `ft_striteri`

### Memory Functions

Operate on raw memory blocks:

* `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
* `ft_memchr`, `ft_memcmp`, `ft_calloc`

### Character & Conversion

Check and convert individual characters:

* `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* `ft_toupper`, `ft_tolower`, `ft_atoi`, `ft_itoa`

### I/O Functions

Write data to file descriptors:

* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Project Structure

```
libft/
├── ft_*.c    # Source files
├── libft.h   # Header file with prototypes
├── Makefile  # Build script (all, clean, fclean, re)
└── README.md # Project documentation
```

## License

MIT License. See [LICENSE](LICENSE) for details.

## Contact

GitHub: [https://github.com/beratbosnak](https://github.com/beratbosnak)
