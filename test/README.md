This is the test folder to run and check if the code is working smoothly
Why a test folder? 
Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use: mainc 
To avoid issues with compilation of our code 

This _printf.c is working fine for Task0 but the checkers 12 15 21 24 and 26 are failing 
