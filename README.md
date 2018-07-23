# Balanced Braces

balanced-braces is a small three file program that incorporates the common stack data structure, templatized classes, and abstraction. 
The program, written in C++, is an exercise in some of the more commonly used techniques of object oriented programming. It is implemented 
using a header file and an implementation file, and comes with a simple program to test the implementation - all with extensive
documentation. 

# What Balanced Braces Does

The test program is incredibly simple: simply input a block of code or a string which simulates a block of code, and the program will 
determine whether or not the program has "balanced braces." 

However, the heart of the project is not in the test program, but in the structure and implementation of a stack. Because all the methods 
in the stack are templatized, this program can be used as an array implementation of a stack for any type of object. Complete with 
documentation to explain the purpose of each method and exception handling, the stack implementation can be used for far more than simply 
checking a program for balanced braces. 

# Notes for Running the Program

Should you decide to run the program as-is, note that when compiling the program, only MyStack.cpp and Balanced.cpp need to be compiled.
As long as StackInterface.h is in the same location, it will be included by MyStack.cpp and the program will run.

Because this program is open-source, feel free to modify or use any part of this project in your own project!
