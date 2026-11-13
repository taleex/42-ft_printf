*This project has been created as part of the 42 curriculum by jorgferr.*

# ft_printf

## Description

`ft_printf` is a C static library that recreates the mandatory part of the
standard `printf` function. It parses a format string, writes ordinary
characters directly to standard output, and dispatches supported conversion
specifiers to dedicated functions.

The project supports `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
It uses the companion [`libft`](libft/) library for basic output and string
utilities.

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

## Project structure

| Path | Purpose |
| --- | --- |
| [`ft_printf.c`](ft_printf.c) | Main function: reads the format string and dispatches each conversion. |
| [`ft_printf.h`](ft_printf.h) | Header with the `ft_printf` prototype and the helper prototypes. |
| [`Makefile`](Makefile) | Builds `libftprintf.a` (rules: `all`, `clean`, `fclean`, `re`). |
| [`src/`](src/) | Folder with the helper functions, one file per conversion type. |
| [`src/ft_prthex.c`](src/ft_prthex.c) | Hexadecimal output (`%x`, `%X`). |
| [`src/ft_prtnbr.c`](src/ft_prtnbr.c) | Signed integer output (`%d`, `%i`). |
| [`src/ft_prtptr.c`](src/ft_prtptr.c) | Pointer output (`%p`). |
| [`src/ft_prtstr.c`](src/ft_prtstr.c) | String output (`%s`). |
| [`src/ft_prtunsigned.c`](src/ft_prtunsigned.c) | Unsigned integer output (`%u`). |
| [`libft/`](libft/) | Companion library, compiled by its own Makefile. |

## Instructions

### Build

Run this command from the repository root (see the [`Makefile`](Makefile)):

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

## Resources

- [`printf(3)` manual page](https://man7.org/linux/man-pages/man3/printf.3.html) — reference behavior and conversion specifiers.
- [`stdarg(3)` manual page](https://man7.org/linux/man-pages/man3/stdarg.3.html) — variadic argument handling.
- [cppreference: `va_arg`](https://en.cppreference.com/w/c/variadic/va_arg) — C variadic argument access and type requirements.

### AI usage

AI assistants (including Claude, Gemini, and Copilot) were used as learning and
review aids: to clarify the project requirements and C concepts, discuss
debugging and edge cases, review implementation behavior, and organize
validation checklists. They were also used to help structure and edit this
README.
