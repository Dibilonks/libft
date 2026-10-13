*This project has been created as part of the 42 curriculum by pedpared.*

## Description

libft is the first project of the 42 common core. The goal is to
rewrite a selection of functions from the C standard library (libc),
plus a set of additional utility functions, in order to build our own
static library: libft.a.

This library will be reused in all upcoming 42 projects. Beyond the
functions themselves, the project is an introduction to dynamic memory
allocation, pointer manipulation, string handling, and writing a
Makefile that respects the 42 norm.

The project implements 43 functions in total:
- 23 functions from libc (isalpha, strlen, memset, atoi, calloc, ...)
- 11 additional functions (substr, split, itoa, putchar_fd, ...)
- 9 linked-list fonctions (lstnew, lstadd_front, lstsize, lstmap, ...)

## Instructions

The project is compiled with make. It produces the static library
libft.a.

- make        compiles the library
- make clean  removes the object files
- make fclean removes the object files and the library
- make re     recompiles everything from scratch

To compile a program using the library:

    cc main.c -L. -lft

## Resources

- The 42 subject: Libft.pdf
- libc documentation: man pages (`man 3 <function>`)
- cppreference.com — C reference
- The C Programming Language — Kernighan & Ritchie
- Python Tutor (pythontutor.com) — execution visualizer used for debugging

An AI assistant was used as a supporting tool only: to help
structure this README. Python Tutor was used to visualize function
execution while debugging. All the algorithms and the logic of the
functions themselves were written by the student, from their own
reasoning.
