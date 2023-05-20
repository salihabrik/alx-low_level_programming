
# Don't hate the hacker, hate the code
<p><img align="left" src=https://camo.githubusercontent.com/19be9442a7ba75a623c9dce30f4bf5e4a96f018e169d1abd32e755e0d50d1d8f/68747470733a2f2f692e706f7374696d672e63632f7270724853684a312f432d636f6d70696c6174696f6e2d70726f636573732e676966
[<img align="right" alt="coding" width="400" src=](https://user-images.githubusercontent.com/105589308/194294270-87239719-6279-4c5a-8c81-f5a6b533fc26.png)https://user-images.githubusercontent.com/105589308/194294270-87239719-6279-4c5a-8c81-f5a6b533fc26.png
https://github.com/alx-low_level_programming-2#why-to-learn-c-programming
https://user-images.githubusercontent.com/105589308/194294270-87239719-6279-4c5a-8c81-f5a6b533fc26.png
 <p align="center">  
<img src ="https://assets.imaginablefutures.com/media/images/ALX_Logo.max-200x150.png">
</p>

<h1 align="center">
	C is FUN
</h1>

>Learning C right now, been wanting to get on this. It's going to be FUN !!.




----

## About
- This repository consists of all the C programming projects done with [ALX Africa](https://www.alxafrica.com/) Full stack Software Engineering course in partnership with [Holberton School](https://www.holbertonschool.com/).
- All main.c files are prewritten by the school. We build functions that produce a specific output while also taking into consideration edge cases.

----


## Content table

- [0x00](./0x00-hello_world) : Hello, World.
- [0x01](./0x01-variables_if_else_while) : Variables,if,else,while.
- [0x02](./0x02-functions_nested_loops) : Functions, nested loops.
- [0x03](./0x03-debugging) : Debugging.
- [0x04](./0x04-more_functions_nested_loops) : More Functions and nested loops.
- [0x05](./0x05-pointers_arrays_strings) : Pointers, arrays and strings.
- [0x06](./0x06-pointers_arrays_strings) : More pointers, arrays and strings.
- [0x07](./0x07-pointers_arrays_strings) : Even more pointers, arrays and strings.
- [0x08](./0x08-recursion) : Recursion.
- [0x09](./0x09-static_libraries) : Static libraries.
- [0x0A](./0x0A-argc_argv) : argc, argv[].
- [0x0B](./0x0B-malloc_free) : Malloc, free.
- [0x0C](./0x0C-more_malloc_free) : More malloc, free.
- [0x0D](./0x0D-preprocessor) : Preprocessor.
- [0x0E](./0x0E-structures_typedef) : Structures, typedef.
- [0x0F](./0x0F-function_pointers) : Function pointers.
- [0x10](./0x10-variadic_functions) : Variadic functions.
- [0x11](https://github.com/iAmG-r00t/printf) : Write our own printf project.
- [0x12](./0x12-singly_linked_lists) : Singly linked lists.
- [0x13](./0x13-more_singly_linked_lists) : More singly linked lists.
- [0x14](./0x14-bit_manipulation) : Bit manipulation.
- [0x15](./0x15-file_io) : File I/O.
- [0x1C](./0x1C-makefiles) : Makefiles.
- [0x1D](https://github.com/iAmG-r00t/binary_trees) : Binary trees.
- [0x1E](./0x1E-search_algorithms) : Search Algorithms.

----

## C Program Compilation

<p align="center">
  <img src="https://i.postimg.cc/rprHShJ1/C-compilation-process.gif" />
</p>

The compilation process has four different steps:
1. The preprocessing stage
2. The compiling stage
3. The assembling stage
4. The linking stage
    
### Step 1: Preprocessing `-E`
The preprocessor reads the source code and performs various transformations to it:
- Expanding macros (replacing all of the macros with their values)
- Handling include files (replaces the #include macro with the content of the header file specified in <>)
- Removing comments
- The results in a new file called a translation unit stored in a file with `.i` extension (intermediate)
    
### Step 2: Compiling `-S`
The build phase provides us with assembly code that is unique to the target architecture.

In this step the compiler takes action by taking a preprocessed file which checks for syntax or structure errors (in case of errors the compilation process stops and displays the corresponding errors). After compiling it, it generates an intermediate code in assembly language `file.s`.

### Step 3: Assembing `-c`
In the third stage of compilation, an assembler is used to convert assembly language into machine code. The assembler takes the code and generates an object file `file.o`, which contains machine code that is not yet executable because it needs to be mapped to a specific memory address. The linker combines all the object files, resolves references between modules, and corrects the addresses, creating an executable file.

### Step 4: Linking
The linker is an important tool in compilation that performs two tasks: resolution and relocation of symbols. It arranges the pieces of object code so that functions in one piece can successfully call functions in others. The linker also adds parts that contain the instructions for the library functions used by the program. The result of this stage is the executable file. usually `a.out` if `-o` is not specified.

---

## Resource

- C [Books and PDF's](./references) to check out and use as a reference.
- [Pointers and Arrays](./PointerArrays) : Code snippets and notes on Pointers and Arrays from Concept Page.
- [Data Structures](./DataStructures) : Code snippets and notes on data structures.
- [Dynamic Memory Allocation](./dynamic_memory_alloc) : Code snippets and notes on how dynamic memory allocation works with `malloc` and `free`.
- [Heap vs Stack](./heap_stack) : Code snippets and notes on what is a heap, a stack and how they work.
- [Simple Shell Concepts](./simple_shell_concepts) : Code snippets and notes on the concept for the simple shell project.

---
# alx-low_level_programming
# Low-level programming & Algorithm

Module of **Low-level programming** and **algorithm**, carried out during **Full Stack Software Engineering studies** at [ALX Software Engineering School](https://www.alxafrica.com/)**.

## Technologies
* Scripts written in Bash 4.3.11(1)
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 20.04 LTS

## Projects
All of the following folders are projects done during the studies:

| Project name | Description |
| ------------ | ----------- |
| [`0x00-hello_world`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/main/0x00-hello_world) | It aims to learn about what is entry point, basics commands (puts, printf, putchar), compilation process with gcc in **C language** |
| [`0x01-variables_if_else_while`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/main/0x01-variables_if_else_while) | It aims to learn about arithmetic operators, relational operators, boolean operators, comments, declaring variables and loops in **C language** |
| [`0x02-functions_nested_loops`](https://github.com/Timex19/alx-low_level_programming/tree/main/0x02-functions_nested_loops) | It aims to learn about header files, functions, loops and nested loops in **C language** |
| [`0x03-debugging`](https://github.com/Timex19/alx-low_level_programming/tree/main/0x03-debugging) | It aims to learn how to debug in **C language** |
| [`0x04-more_functions_nested_loop`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/main/0x04-more_functions_nested_loop) | It aims to learn about nested loops in **C language** |
| [`0x05-pointers_arrays_strings`](https://github.com/Timex19/alx-low_level_programming/tree/main/0x05-pointers_arrays_strings) | It aims to learn about pointers and arrays in **C language** |
| [`0x06-pointers_arrays_strings`](https://github.com/Timex19/alx-low_level_programming/tree/main/0x06-pointers_arrays_strings) | It aims to learn about pointers and arrays in **C language** |
| [`0x07-pointers_arrays_strings`](https://github.com/Timex19/alx-low_level_programming/tree/main/0x07-pointers_arrays_strings) | It aims to learn about pointers and arrays in **C language** |
| [`0x08-recursion`](https://github.com/Timex19/alx-low_level_programming/tree/main/0x08-recursion) | It aims to learn about recursion and how to implement it in **C language** |
| [`0x09-static_libraries`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/master/0x09-static_libraries) | It aims to learn about static libraries in **C language** |
| [`0x0A-argc_argv`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/main/0x0A-argc_argv) | It aims to learn about how to use arguments passed to a program in **C language** |
| [`0x0B-malloc_free`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/main/0x0B-malloc_free) | It aims to learn about automatic and dynamic allocation in **C language** |
| [`0x0C-more_malloc_free`](https://github.com/Timex19/alx-low_level_programming/tree/main/0x0C-more_malloc_free) | It aims to learn about how to use `malloc`, `calloc`, `realloc` and `exit` functions in **C language** |
| [`0x0D-preprocessor`](https://github.com/Timex19/alx-low_level_programming/tree/main/0x0D-preprocessor) | It aims to learn about how to include guard in the header files and macros in **C language** |
| [`0x0E-structures_typedef`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/main/0x0E-structures_typedef) | It aims to learn about structures and `typedef` in **C language** |
| [`0x0F-function_pointers`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/master/0x0F-function_pointers) | It aims to learn about function pointers in **C language** |
| [`0x10-variadic_functions`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/master/0x10-variadic_functions) | It aims to learn about variadic functions in **C language** |
| [`0x12-singly_linked_lists`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/master/0x12-singly_linked_lists) | It aims to learn about linked lists in **C language** |
| [`0x13-more_singly_linked_lists`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/master/0x13-more_singly_linked_lists) | It aims to learn about singly linked lists in **C language** |
| [`0x14-bit_manipulation`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/master/0x14-bit_manipulation) | It aims to learn about how to manipulate bits and use bitwise operators in **C language** |
| [`0x15-file_io`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/master/0x15-file_io) | It aims to learn about how to handle files (open, close, read and write), file descriptors, system calls and file permissions in **C language** |
| [`0x17-doubly_linked_lists`](https://github.com/Timex19/alx-low_level_programming/tree/master/0x17-doubly_linked_lists) | It aims to learn about doubly linked list in **C language** |
| [`0x18-dynamic_libraries`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/master/0x18-dynamic_libraries) | It aims to learn about dynamic and shared libraries in **C language** |
| [`0x19-stacks_queues_lifo_fifo`](https://github.com/ElijahLawal-7/monty) | Submodule of **monty**, an interpreter of Monty ByteCode files written with **C language** |
| [`0x1A-hash_tables`](https://github.com/ElijahLawal-7/alx-low_level_programming/tree/master/0x1A-hash_tables) | It aims to learn how to implement Hash Tables with **C language** |
## Author

- [`@salihabrik`]() | Software Engineer Student
