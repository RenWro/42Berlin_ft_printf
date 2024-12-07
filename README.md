# 42Berlin_ft_printf

---
<h1>What is ft_printf?</h1>
The third project at 42 programming school. It consists of a static library that contains ft_printf - a function that mimics the real printf - and another library (Libft, the first project at 42) with recoded standard functions in C to support the project's development. It's an extremely useful function that does a series of base conversions (decimal and hexadecimal) and makes the output much easier - especially when compared to its predecessor in 42 - the system call write. The function can be used in future projects.
---
<h1>How does it work?</h1>
For this project we were introduced to the concept of variadic functions 

The printf function is one of the most known and used in the C language to give an output. It takes a string as an argument, this string may contain some placeholders (like %c for characters or %s for strings) whose original values are passed as arguments. The ft_printf has variable arguments, the only one being mandatory is the string that will be printed, otherwise it depends on how many placeholders are passed in this string. The function's return is the number of characters printed or -1 for error.

To create with a function like this, it must be a variadic function (with variable number of arguments), which is possible to achieve using the header <stdarg.h> and parameters like va_arg for the list arguments in order of occurrence or va_start and va_end to start and end the use of the argument list. For each conversion required by the subject, there's a function that converts the argument and returns the numer of bytes writed:

• %c print a single character.

• %s print a string of characters.

• %p The void * pointer argument is printed in hexadecimal.

• %d print a decimal (base 10) number.

• %i print an integer in base 10.

• %u print an unsigned decimal (base 10) number.

• %x print a number in hexadecimal (base 16).

• %% print a percent sign.

How do I use the library?
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

How do I test it?
To test the code we're going to be using @jgambard's Printf Tester. There are some good others but I'll only be covering this one.

To test the code in this repo Clone this repo and cd into it:

git clone https://github.com/augustobecker/ft_printf ft_printf
  
cd ft_printf/
Now, clone @jgambard's Libft Tester

git clone https://github.com/Tripouille/printfTester.git printfTester
Go into the test folder and run the mandatory test:

cd printfTester
make m
In case that your project or another project you are going to evaluate has a bonus, run the bonus test too:

make b
