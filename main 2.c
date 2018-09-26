/*
Author: Muntasir Khaleque
Compiler: GNU GCC
Date: 9/11/2018
Purpose of program: To output the ASCII table, including Octal, Decimal, Hexadecimal
and Characters

The program simply spits out the ASCII table and requires no input from the user
The table is spaced out accordingly
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("--------------------------------- ");   //Here we are printing the two columns of the table
    printf("---------------------------------\n");
    printf("[  Binary  | Oct | Dec |Hex|Char] ");
    printf("[  Binary  | Oct | Dec |Hex|Char]\n");

    int x; // an integer is declared for the for loop
    int y; // an integer is declared for the for loop

    char symbol[] = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNO"; // created a array in the string
    char *symbolPtr; // created pointer for string
    symbolPtr = symbol; // assigned pointer to string
    int i = 0; // starting point of the array for symbol


    char symbol_two[] = "PQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";// created a array in the string
    char *symbol_twoPtr; // created pointer for string
    symbol_twoPtr = symbol_two;// assigned pointer to string
    int j = 0;// starting point of the array for symbol_two

    for ( x = 32; x <= 79; x = x + 1)
    {
        printf("--------------------------------- ---------------------------------\n");
        if ( x != 79)
            {
            printf("[ -------- |%4o |  %d |%x |  %c ] ", x, x, x, symbolPtr[i]); // this statement is for all ASCII values except for when decimal equals 79
            }

        if ( x == 79)
            {
            printf("[ -------- |%4o |  %d |%x |  %c ]", x, x, x, symbolPtr[i]);// this if statement is to add an extra dashed line after the decimal value equals 79
            printf("\n---------------------------------\n\n");                 // correct spacing
            }

        i = i + 1; // increment i to change locations in the string

        y = x + 48; // increment the second column by 48, so as to have the columns start
                    // side by side

        if ( y == 127)
        {
            break;// this if statement is used to break out of the for loop and not print
        }         // the statement below when decimal value equals 127

        printf("[ -------- | %o |%4d |%x |  %c ]\n", y, y, y, symbol_twoPtr[j]);

        j = j + 1;// increment j to change locations in the string
    }

    return 0;
}
