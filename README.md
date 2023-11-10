# Function-in-C-language
Function:- Function is a set of instructions or indepandent program that performs a specific task.

# Advantage of function:

1. The complex program will be easier to understand, maintain and debug.

2. Reusable codes that can be used in other programs

3. Avoid rewriting same logic/code again and again in a program.

4. Reduce the size of program

# Types of function

1. Standard library functions: The standard library functions are built-in functions whose code is already define in C library. Example: printf, scanf, gets etc.

2. User-defined functions: This is created by the user according to their need.

# Three constructs of function:

1. Function prototype 2. Function calling

3. Function definition

1. Functionprototype: The prototype describes the function interface to the compiler by giving details such as the number and type of arguments and the type of return values.

When a function is called, the compiler uses the prototype template to ensurethat proper arguments are passed, and the return value is treated correctly.

# Syntax:

datatype function-name(argument-list); //formal arguments

int fun 1 (int,int);

Variable names in the argument list of prototype are optional.

2. Functioncalling: While creating a function, you give a definition of what the function has to do. To use a function, you will have to call that function to perform the defined task.

When a program calls a function, the program control is transferred to the called function. A called function performs a defined task and when its return statement is executed or when its function-ending closing brace is reached, it returns the

program control back to the main program.

To call a function, you simply need to pass the required parameters along with the function name, and if the function returns a value, then you can store the returned value.

Syntax: function-name(arguments); //actual arguments

funl(a,b):

3. Function definition : Function header with function body

The function body contains a collection of statements that define what the function does.

# Syntax: 

type function-name(argument-list) //variable names are compulsory
{ 
=====||=||=====
}
int fun1 (int a, int b)
(.......)


# What is main() function?

main() is a user defined function which return a value of type int(by default). Every C program has exactly one main() function. main() is compulsory and it is starting point for the execution of program.

int main(){
===||===

return 0;
}

Return 0 means the program was successfully executed and non zero value means there is a problem.

Compiler will gives error or warning (function should return a value) if there is no return statement.


# Recursion-in-C-language
Recursion:- Recursion means occurs again and again. A recursive functions is a function that calls itself to solve the problem.


