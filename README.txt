Assignment 3 by Benson Gathee & Thabani Dube

This folder contains 2 source files
    (1.) translator.ml - COMPILER-IMPLEMENTATION (main file) and 
    (2.) translator2.ml - An attempt at a complete solution before running into bugs last minute 

    Our code has 0 imperative features/fully functional code

How to Run the programs?
    ocaml translator.ml 

What the programs do?
    1. Builds the syntax tree
    2. Translates the program to C (but not fully)

Why 2 programs?
    Both programs build the syntax tree(complete) and translate the program to "C" with a caveat(incomplete)
    Program 1 shows the translation of the program to C with no semantic error checking
    Program 2 shows our attempt at an incomplete translation of the program (very close to complete) with semantic error checking
    Program 2 does not produce the correct .c file with this translation but it prints the symbol table
        This is because we run into a few issues a few minutes before the submission deadline


EXTRA CREDIT
    If we didn't experience the bug in last minute, the following extra features could be tested 
    - Extending the grammar to include nested scope
    - Generate warning messages when a variable is assigned a value but the previous value has not yet been used
    - Track the location (line, column) of tokens in the calculator program so you can generate better semantic error messages 