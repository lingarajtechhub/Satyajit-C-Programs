/*

Why Extern?

Basically, the extern keyword extends the visibility of the C variables and C functions. That’s probably the
reason why it was named extern. Though most people probably understand the difference between the
“declaration” and the “definition” of a variable or function, for the sake of completeness, I would
like to clarify them.

Declaration: of a variable or function simply declares that the variable or function exists somewhere in
the program, but the memory is not allocated for them. The declaration of a variable or function serves
an important role–it tells the program what its type is going to be. In case of function declarations,
it also tells the program the arguments, their data types, the order of those arguments, and the return
type of the function. So that’s all about the declaration. Coming to the definition, when we define a
variable or function, in addition to everything that a declaration does, it also allocates memory
for that variable or function. Therefore, we can think of definition as a superset of the declaration
(or declaration as a subset of definition). Extern is a short name for external.
used when a particular files need to access a variable from another file.

#include <stdio.h>

extern int a;	# int var; -> declaration and definition
                # extern int var; -> declaration

int main()
{
    printf("%d", a);

return 0;
}

When we write extern some_data_type some_variable_name;  no memory is allocated. Only property of
variable is announced. Multiple declarations of extern variable is allowed within the file. This
is not the case with automatic variables. Extern variable says to compiler  ” go outside my scope
and you will find the definition of the variable that I declared.”

Compiler believes that whatever that extern variable said is true and produce no error. Linker
throws an error when it finds no such variable exists. When an extern variable is initialized,
then memory for this is allocated and it will be considered defined. A variable or function can
be declared any number of times, but it can be defined only once. (Remember the basic principle
that you can’t have two locations of the same variable or function).
Now back to the extern keyword. First, Let’s consider the use of extern in functions.
It turns out that when a function is declared or defined, the extern keyword is implicitly assumed.
When we write.

Ex:
int foo(int arg1, char arg2);

The compiler treats it as:

extern int foo(int arg1, char arg2);

Since the extern keyword extends the function’s visibility to the whole program, the function can
be used (called) anywhere in any of the files of the whole program, provided those files contain
a declaration of the function. (With the declaration of the function in place, the compiler knows
the definition of the function exists somewhere else and it goes ahead and compiles the file).
So that’s all about extern and functions.

Now let’s consider the use of extern with variables. To begin with, how would you declare a variable
without defining it? You would do something like this:

extern int var;

Here, an integer type variable called var has been declared (it hasn’t been defined yet, so no memory
allocation for var so far). And we can do this declaration as many times as we want. So far so good. 🙂
Now, how would you define var? You would do this:

int var = 10;
In this line, an integer type variable called var has been both declared and defined
(remember that definition is the superset of declaration). Since this is a definition,
the memory for var is also allocated. Now here comes the surprise. When we declared/defined
a function, we saw that the extern keyword was present implicitly. But this isn’t the case
with variables. If it were, memory would never be allocated for them. Therefore, we need
to include the extern keyword explicitly when we want to declare variables without defining
them. Also, as the extern keyword extends the visibility to the whole program, by using the
extern keyword with a variable, we can use the variable anywhere in the program provided we
include its declaration the variable is defined somewhere.
Now let us try to understand extern with examples.

*/

// Here implement extern keyword after defination or defining of variable.
/*

      CODE	                    DECLARE	DEFINE	 INITIALIZE
        ;	                    No	      No	     No
extern int opengenus;	        Yes	      No	     No
int opengenus;	                Yes	      Yes	     No
int opengenus = 1;	            Yes	      Yes	     Yes

*/

#include <stdio.h>
#include "extern.h"
int sum(int x, int y);

int sum(int x, int y)
{
    return (x + y);
}

int main()
{
    int var = 10;
    printf("Sum=%d\n", sum(2, 3));
    printf("%d", var);
    return 0;
}
