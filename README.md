# FACTORIAL TELLER
Description
The Factorial Teller is a simple C program that computes the factorial of a given non-negative integer ( n ). The program uses a recursive function to perform the calculation and displays the result to the user.

Features
Prompts the user to enter a non-negative integer.
Uses a recursive function to calculate the factorial of the input number.
Displays the calculated factorial to the user.
How It Works
The program starts by displaying a welcome message.
It prompts the user to enter a non-negative integer ( j ).
The program reads the input and calls the fact function, which calculates the factorial recursively:
If ( n ) is equal to 0, the function returns 1 (since ( 0! = 1 )).
Otherwise, it calls itself with the argument ( n-1 ) and multiplies the result by ( n ).
The final factorial is printed to the console.
