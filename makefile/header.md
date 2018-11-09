The final mystery of C that needs to be discussed is the header file. This started off as a simple idea, a convenience to make programming easier. If you have a standard set of instructions that you want to insert in a lot of programs that you are writing then you can do it using the #include statement.

The # symbol at the start indicates that this isn't a C statement but one for the C pre-processor which looks at the text file before the compiler gets it. The #include tells the pre-processor to read in a text file and treat it as if it was part of the program's text. For example:

#include "copy.txt"

could be used to include a copyright notice stored in the file copy.txt. However the most common use of the #include is to define constants and macros. The C pre-processor is almost a language in its own right For example, if you define the identifier NULL as:

#define NULL 0

then whenever you use NULL in your program the pre-processor substitutes 0. In most cases you want these definitions to be included in all your programs and so the obvious thing to do is to create a separate file that you can #include.

This idea of using standard include files has spiralled out of all proportions. Now such include files are called header files and they are distinguished by ending in the extension .h. A header file is generally used to define all of the functions, variables and constants contained in any function library that you might want to use. The header file stdio.h should be used if you want to use the two standard I/O functions printf and scanf. The standard libraries have been covered in a previous section.
