<h1 align="center"> 42Berlin_ft_printf </h1>

---
<h1 align="center">>What is ft_printf?</h1>
The third project at 42 programming school. It consists of a static library that contains ft_printf - a function that mimics the real printf - and another library (Libft, the first project at 42) with recoded standard functions in C to support the project's development. It's an extremely useful function that does a series of base conversions (decimal and hexadecimal) and makes the output much easier - especially when compared to its predecessor in 42 - the system call write. The function can be used in future projects.
---
<h1 align="center">>How does it work?</h1>
For this project we were introduced to the concept of variadic functions 

The printf function is one of the most known and used in the C language to give an output. It takes a string as an argument, this string may contain some placeholders (like %c for characters or %s for strings) whose original values are passed as arguments. The ft_printf has variable arguments, the only one being mandatory is the string that will be printed, otherwise it depends on how many placeholders are passed in this string. The function's return is the number of characters printed or -1 for error.

To create with a function like this, it must be a variadic function (with variable number of arguments), which is possible to achieve using the header <stdarg.h> and parameters like va_arg for the list arguments in order of occurrence or va_start and va_end to start and end the use of the argument list. For each conversion required by the subject, there's a function that converts the argument and returns the numer of bytes writed:

<h2>Mandatory Conversions</h2>

%c → single character.
%s → string.
%p → pointer in hexadecimal format.
%d, %i → integers (base 10).
%u → unsigned integers (base 10).
%x, %X → numbers in hexadecimal (lowercase/uppercase).
%% → percent symbol.

<h2>Variadic Functions</h2>

To handle the variable number of arguments, use the following functions:

va_start: Initializes the list of arguments.
va_arg: Retrieves the next argument from the list.
va_copy (if necessary): Copies the current state of the argument list.
va_end: Cleans up the memory used for the argument list.

<h2 align="center">>How do I use the library?</h2>
It aims to create a library called libftprintf.a from the source files.
To create this library, clone the project:

	git clone https://github.com/augustobecker/ft_printf ft_printf
 
Enter the repository:

	cd ft_printf
 
Run Make (to run the Makefile that will compile the source code and create the library):

	make
 
You should see a libftprintf.a file and some object files (.o).

Now to clean up (removing the .o files), call make clean:

	make clean
 
Now you just have to add this header at your .c files and use the ft_printf function or any other from the library:

	#include "library/ft_printf.h"
 
If you try to compile your .c files with clang using "clang example.c" you will get an undefined symbol error for Libftprintf functions.

You have to tell the file which library it's using:

	clang example.c libftprintf.a
 
That's it. Now run it using ./a.out

<h2 align="center">>How do I test it?</h2>
To test the code we're going to be using @jgambard's Printf Tester. There are some good others but I'll only be covering this one.

To test the code in this repo Clone this repo and cd into it:

	git clone https://github.com/renwro/42Berlin_ft_printf ft_printf
  
	cd ft_printf/
 
Now, clone @jgambard's Libft Tester

git clone https://github.com/Tripouille/printfTester.git printfTester
Go into the test folder and run the mandatory test:

	cd printfTester
	make m
 
In case that your project or another project you are going to evaluate has a bonus, run the bonus test too:

	make b
