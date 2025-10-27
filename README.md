# 0x1A. C - Sorting algorithms & Big O

## Description
This project implements basic sorting algorithms in C and analyzes
their time complexities using Big O notation.

## Learning Objectives
- Understand at least four different sorting algorithms.
- Understand Big O notation and time complexity analysis.
- Choose the best algorithm for different input cases.
- Understand what makes a sorting algorithm stable.

## Files and Tasks

### 0. Bubble sort
File: 0-bubble_sort.c
- Sorts an array of integers in ascending order using Bubble sort.
- Prints the array after each swap.
- Time complexity: see 0-O.

### 1. Insertion sort
File: 1-insertion_sort_list.c
- Sorts a doubly linked list of integers in ascending order using Insertion sort.
- Prints the list after each swap.
- Time complexity: see 1-O.

### Helper Files
- sort.h: Header file with all prototypes.
- print_array.c: Function to print arrays.
- print_list.c: Function to print doubly linked lists.

## Compilation
gcc -Wall -Wextra -Werror -pedantic *.c -o sort
