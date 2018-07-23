//Balanced.cpp
//Simple program that uses the implementation of StackInterface.h in MyStack.cpp

/*
        This program uses a stack object to parse a user inputted string that emulates a C++ program
        that is composed of "nested" blocks of code. A syntactically correct C++ program must have each
        block of code encased in an open { and a closed }. This simple program uses a stack to check the
        user inputted string for balanced braces.

        Although this is certainly not the most efficient way to check for balanced braces, it is a fairly
        good exercise in the stack data structure.

*/

#include<iostream>
#include <cstring>
#include "StackInterface.h"
using namespace std;
int main()
{
     //Declares a char array that will be filled with user input.
     char input[1000000];
     char c;
     //The boolean flag will be used to track whether or not the braces in the user input are balanced.
     bool flag = true;
     //Creates a stack of type char.
     StackInterface<char> stack;
     //Get user input.
     cout << "Enter a string that simulates a C++ program." << endl;
     cout << "Your program will then be evaluated for balanced braces." << endl;
     cout << ">> ";
     cin >> input;

     //Iterate through each character of the user input.
     for(int i = 0; i<strlen(input); i++) {
        c = input[i];
        //If the character is an open brace, push that brace onto the stack.
        if (c == '{')
                stack.push (c);
        //If the character is a closed brace...
        if (c == '}'){
             //... first check to see if there is an open brace that it can close.
             //If there is, remove a previously added open brace from the stack.
             if (!stack.isEmpty()){
                stack.pop();
             }
             //... but if there is not an open brace on the stack for the closed brace to close,
             //the braces are automatically unbalanced.
             //Set flag to false.
             else {
                flag = false;
             }
        }
     }
     //If we make it to the end of the user inputted program and flag is still true,
     //we must be sure that all open braces have been closed by ensuring the stack is empty.
     //If both flag is true and the stack is empty, the braces are balanced.
     //If either one of these conditions is not true, the braces are not balanced.
     if(flag && stack.isEmpty())
        cout << "Braces are balanced." << endl;
     else
        cout << "Braces are not balanced." << endl;
     //Demonstration of peek.
     //Because peek throws an exception, this exception must be handled.
     try{
       cout << "Peek demonstration: " << stack.peek () << endl;
     } catch (exception e){
       cout << "Stack is empty." << endl;
     }
     return 0;
 }
