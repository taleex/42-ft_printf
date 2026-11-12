*This project has been created as part of the 42 curriculum by jorgferr.*

# ft_printf

## Description

`ft_printf` is a C static library that recreates the mandatory part of the
standard `printf` function. It parses a format string, writes ordinary
characters directly to standard output, and dispatches supported conversion
specifiers to dedicated functions.

The project supports `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
It uses the companion `libft` library for basic output and string utilities.
Format flags, field width, precision, and length modifiers are not implemented.

## Features

| Specifier | Behavior |
| --- | --- |
| `%c` | Writes one character. |
| `%s` | Writes a string; a null string pointer is displayed as `(null)`. |
| `%p` | Writes a pointer in lowercase hexadecimal with a `0x` prefix; a null pointer is displayed as `(nil)`. |
| `%d`, `%i` | Writes a signed decimal integer. |
| `%u` | Writes an unsigned decimal integer. |
| `%x`, `%X` | Writes an unsigned integer in lowercase or uppercase hexadecimal. |
| `%%` | Writes a literal percent sign. |

## Project layout

| Path | Purpose |
| --- | --- |
| `ft_printf.c` | Main format-string parser and conversion dispatch. |
| `ft_printf.h` | Public declaration and shared project includes. |
| `src/ft_prtstr.c` | `%s` conversion. |
| `src/ft_prtnbr.c` | `%d` and `%i` conversions. |
| `src/ft_prtunsigned.c` | `%u` conversion. |
| `src/ft_prthex.c` | `%x` and `%X` conversions. |
| `src/ft_prtptr.c` | `%p` conversion. |
| `libft/` | Supporting library, included in the generated archive. |
| `test/main.c` | Local test program used by the Makefile's test targets. |

## Instructions

### Build

Run these commands from the repository root:

```sh
make
```

This creates `libftprintf.a`. The build uses `cc` with `-Wall -Wextra -Werror`.
The Makefile targets are:

| Command | Purpose |
| --- | --- |
| `make` or `make all` | Build `libftprintf.a`. |
| `make clean` | Remove object files from this project and `libft`. |
| `make fclean` | Remove object files and generated static libraries. |
| `make re` | Clean and rebuild the static library. |

### Run the included test

```sh
make main
./test/test
```

`make main` rebuilds the library and compiles `test/main.c`; it does not run the
resulting executable. `make rb` performs a clean rebuild and compiles the same
test program, which must also be run with `./test/test`.

### Use the library

Include `ft_printf.h` and link the generated archive when compiling a program:

```c
#include "ft_printf.h"

int main(void)
{
	ft_printf("Hello, %s! Number: %d\n", "42", 42);
	return (0);
}
```

For example, if the program above is saved as `example.c`:

```sh
cc -Wall -Wextra -Werror -I. example.c libftprintf.a -o example
./example
```

## Resources

- [`printf(3)` manual page](https://man7.org/linux/man-pages/man3/printf.3.html) — reference behavior and conversion specifiers.
- [`stdarg(3)` manual page](https://man7.org/linux/man-pages/man3/stdarg.3.html) — variadic argument handling.
- [`write(2)` manual page](https://man7.org/linux/man-pages/man2/write.2.html) — writing output to a file descriptor.
- [cppreference: `va_arg`](https://en.cppreference.com/w/c/variadic/va_arg) — C variadic argument access and type requirements.

### AI usage

AI assistants (including Claude, Gemini, and Copilot) were used as learning and
review aids: to clarify the project requirements and C concepts, discuss
debugging and edge cases, review implementation behavior, and organize
validation checklists. They were also used to help structure and edit this
README.
