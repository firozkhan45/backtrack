# backtrack
Description of the C Program (Backtracking Parser)

This C program demonstrates a simple backtracking parser for a given grammar. The program checks whether an input string can be parsed successfully according to the following grammar rules:

S → c A d
A → ab | a

Explanation of Grammar

S (start symbol) must begin with the character c, followed by A, and end with d.

A can be either:

the sequence "ab", or

the single character "a".

Thus, valid strings must follow the structure:

"cad$" or "cabd$" (where $ denotes end of string).

Working of the Program

Main Function

Reads a string from the user.

Calls the function S(str) to attempt parsing.

Prints “Successfully Parsed” if the string matches the grammar, otherwise prints “Invalid”.

Function S

Starts parsing from the beginning of the string.

Checks if the first character is 'c'.

Calls A(str, i) to process the substring according to the rule of A.

Finally, checks whether the string ends with 'd' followed by $.

Function A

Implements the production rules of A.

If the current position matches "ab", it advances the index by 2.

If it matches "a", it advances the index by 1.

Otherwise, it returns the same index, signaling failure.

Sample Input and Output

Input 1:

cabd$


Output:

Successfully Parsed


Input 2:

cad$


Output:

Successfully Parsed


Input 3:

ccd$


Output:

Invalid
