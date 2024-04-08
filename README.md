# GNL - personal getline() implementation in C

## 2nd project in my 42 cursus
The goal of this project is to write a personal implementation of the GNU C library getline() in C.<br> The result is a get_next_line function in C that serves as a utility for reading line by line from a file descriptor without prior knowledge of its size. Through this project, we aim to explore the concept of static variables in C programming and gain insight into dynamic memory allocations, buffer manipulation, reallocation of memory, and the lifecycle of buffers.

|    Project Name    |                                                                       get_next_line                                                                 |
| :----------------: | :-------------------------------------------------------------------------------------------------------------------------------------------------: |
|    Description     |                                             My implementation of a function written in C that reads a line from a file descriptor function          |
|    Technologies    | <a href="#"><img alt="C" src="https://custom-icon-badges.demolab.com/badge/C-03599C.svg?logo=c-in-hexagon&logoColor=white&style=for-the-badge"></a> |
| Allowed utilities  |     malloc(), free(), read()                                                                                                                        |

## Usage

```bash
  git clone https://github.com/GSantoine/get_next_line.git
  cd get_next_line
```

No makefile for this time :( You can simply compile .c files with the provided testing main.c file like so :
```bash
gcc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c 
```

Basic test samples are provided in the tests/ directory. To use it :
```bash
./a.out tests/<test_file>
```

and voila !
