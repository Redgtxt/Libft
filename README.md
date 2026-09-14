# Libft

![42 School](https://img.shields.io/badge/42-Lisboa-000000?style=flat-square&logo=42&logoColor=white)
![Language](https://img.shields.io/badge/language-C-00599C?style=flat-square&logo=c&logoColor=white)
![Norm](https://img.shields.io/badge/norminette-passing-success?style=flat-square)
![Flags](https://img.shields.io/badge/flags-Wall%20%7C%20Wextra%20%7C%20Werror-critical?style=flat-square)

> My own C standard library — rebuilt from scratch, function by function, with no external dependencies beyond `write`, `read`, `malloc` and `free`.

`libft` is the first project of the 42 curriculum and the foundation every later project is built on. The goal is simple to state and unforgiving in practice: reimplement a slice of the C standard library yourself, so that you understand what actually happens behind `strlen`, `memmove` or `malloc` instead of trusting them blindly.

The repository has since grown past that original scope. **`ft_printf`** and **`get_next_line`** are projects of their own — they belong to Milestone 2, not to Libft — but they turn out to be needed by almost everything that comes afterwards, so once they were done I folded them in here rather than dragging three separate repositories into every new project. A single `libft.a` now covers the whole toolbox.

---

## Table of contents

- [What's inside](#whats-inside)
- [Building](#building)
- [Using it in a project](#using-it-in-a-project)
- [Function reference](#function-reference)
- [Design notes](#design-notes)
- [What I took away from it](#what-i-took-away-from-it)

---

## What's inside

```
Libft/
└── libft/
    ├── Makefile                 # builds libft.a (mandatory) / bonus (linked list)
    ├── libft.h                  # single public header
    ├── ft_is*.c  ft_to*.c       # character classification & conversion
    ├── ft_mem*.c                # raw memory manipulation
    ├── ft_str*.c                # string manipulation
    ├── ft_put*_fd.c             # file-descriptor output
    ├── ft_lst*.c                # singly linked list (bonus)
    ├── ft_printf.c              # variadic formatted output      (Milestone 2)
    ├── ft_printf_utils.c        # base conversion helpers        (Milestone 2)
    ├── get_next_line.c          # line-by-line reading from a fd (Milestone 2)
    └── get_next_line_utils.c    # helpers for get_next_line      (Milestone 2)
```

## Building

```bash
cd libft
make          # builds libft.a with the mandatory part + ft_printf + get_next_line
make bonus    # same, plus the linked-list functions
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean + all
```

Objects are kept out of the way in an `obj/` directory, so the source tree stays readable. Everything compiles under `-Wall -Wextra -Werror`.

`get_next_line` reads through a buffer whose size is set at compile time and defaults to `10`:

```bash
cc -D BUFFER_SIZE=4096 ...
```

## Using it in a project

```c
#include "libft.h"

int main(void)
{
    char **words = ft_split("42 Lisboa rocks", ' ');

    ft_printf("first word: %s\n", words[0]);
    ft_printf("as hex: %x | pointer: %p\n", 255, words);
    return (0);
}
```

```bash
cc main.c -L. -lft -I. -o demo
```

## Function reference

### Part 1 — libc reimplementations

| Function | What it does |
| --- | --- |
| `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` | Character classification |
| `ft_toupper` `ft_tolower` | Case conversion |
| `ft_strlen` | Length of a null-terminated string |
| `ft_memset` `ft_bzero` | Fill a memory block |
| `ft_memcpy` `ft_memmove` | Copy memory (`memmove` handles overlap) |
| `ft_memchr` `ft_memcmp` | Search and compare raw memory |
| `ft_strlcpy` `ft_strlcat` | Size-bounded copy and concatenation |
| `ft_strchr` `ft_strrchr` `ft_strnstr` | Search inside strings |
| `ft_strncmp` | Bounded string comparison |
| `ft_atoi` | String → `int`, with sign handling |
| `ft_strdup` `ft_calloc` | Allocating helpers |

### Part 2 — additional utilities

| Function | What it does |
| --- | --- |
| `ft_substr` | Extract a substring from an index |
| `ft_strjoin` | Concatenate two strings into a fresh one |
| `ft_strtrim` | Strip a set of characters from both ends |
| `ft_split` | Split a string by a delimiter into a `NULL`-terminated array |
| `ft_itoa` | `int` → string, `INT_MIN` included |
| `ft_strmapi` `ft_striteri` | Apply a function to each character (copy / in place) |
| `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` | Write to a file descriptor |

### Bonus — linked lists

Built around a deliberately minimal node:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | What it does |
| --- | --- |
| `ft_lstnew` | Allocate a node |
| `ft_lstadd_front` `ft_lstadd_back` | Insert at either end |
| `ft_lstsize` `ft_lstlast` | Traversal helpers |
| `ft_lstdelone` `ft_lstclear` | Free one node / the whole list |
| `ft_lstiter` | Apply a function to every node |
| `ft_lstmap` | Build a new list from the results of a function |

### ft_printf

> Milestone 2 project, added to this library after the fact.

A variadic formatted-output function returning the number of characters printed.

| Specifier | Output |
| --- | --- |
| `%c` | A single character |
| `%s` | A string (`(null)` when `NULL`) |
| `%p` | A pointer as `0x…` (`(nil)` when null) |
| `%d` `%i` | A signed decimal integer |
| `%u` | An unsigned decimal integer |
| `%x` `%X` | Lowercase / uppercase hexadecimal |
| `%%` | A literal percent sign |

### get_next_line

> Milestone 2 project, added to this library after the fact.

```c
char *get_next_line(int fd);
```

Returns the next line of a file descriptor, newline included, or `NULL` when there is nothing left to read. The caller owns the returned string and must `free` it.

---

## Design notes

A few decisions worth spelling out, since they shaped the rest of the code:

- **Everything is bounded and explicit.** The `libc` functions I reimplemented are the ones people get wrong in production: `memcpy` vs `memmove`, `strlcpy`'s return value, `atoi`'s overflow edge cases. Writing them by hand is what makes those differences stick.
- **One header, one archive.** `ft_printf` and `get_next_line` were written later, as standalone Milestone 2 projects, and each one normally lives in its own repository. Keeping them separate meant copying two more folders into every project that needed them — and essentially every project does. Merging them into Libft means later work adds a single `-lft` and gets the whole toolbox, at the cost of this library no longer being a pure Milestone 1 deliverable. Worth it.
- **Recursion where it reads better.** `printbase` and `ft_putptr_base` in `ft_printf` convert numbers to an arbitrary base recursively — digits come out in the right order without a reversal buffer, and the symbol table is just a string passed in, so decimal, hex lowercase and hex uppercase are one function with three arguments.
- **`get_next_line` holds a static buffer.** State survives between calls so a partial read is not lost, and the leftover of the previous call is consumed before touching `read` again.
- **Objects out of the source tree.** The `Makefile` compiles into `obj/` and rebuilds only what changed, which keeps `make re` cycles cheap during the norminette-and-fix loop.

## What I took away from it

- Manual memory management without a safety net: every `malloc` has an owner, every error path frees what it allocated.
- Pointer arithmetic and `void *` as the real interface of C — `ft_lstmap` and `ft_split` are where that becomes concrete.
- Variadic functions and `va_list`, and why `%p` cannot be treated like `%x`.
- Writing to the 42 Norm (no `for`, no ternaries, 25 lines and 5 variables per function) — restrictive on purpose, and a good lesson in decomposing a function until each piece does one thing.
- How a static library is actually assembled with `ar`, and why the linker cares about the order of your flags.

---

**Author** — Hugo Pinto ([`hguerrei`](https://profile.intra.42.fr/users/hguerrei) · [@Redgtxt](https://github.com/Redgtxt))
