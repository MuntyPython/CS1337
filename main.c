/*
Author: Muntasir Khaleque
Compiler: GNU GCC
Date: 10/26/2018
Purpose of program: The program asks for an input from the user, which defines
the base, and then asks for a number, which is put into a string
The program converts the string into integers, and subsequently turns it
into decimal form.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convertToDecimal (char string[], int, int);
int trackingCounter (char string[]);

int main()
{

int base;
int counter = 0;
int sum = 0;

char string[40];

printf("Input the Base value, -1 to quit: ");
scanf("%d/n", &base);

while (base > 10 ) {
    printf("Input the Base value, -1 to quit: ");
    scanf("%d/n", &base);
}

while (base != -1) {

    printf("Type your string, max 10 digits: ");
    scanf("%10s/n", string);

    counter = trackingCounter(string);

    sum = convertToDecimal (string, counter, base);

    counter = counter + 1;
    printf("b = %d, string is %s, # of chars typed = %d, number in decimal is %d \n\n", base, string, counter, sum);

    printf("Input the Base value, -1 to quit: ");
    scanf("%d/n", &base);

    }

puts("Exiting");
return 0;
}

int convertToDecimal (char string[], int counter, int base) {
    int sum = 0;
    int power = 1;
    int val;

    for (counter = counter - 1; counter >= 0; counter--)
    {
    char *stringPtr = &string[counter];
    int val = *stringPtr - '0';
    sum = sum + (val * power);
    power = power * base;
    }

    return sum;

}

int trackingCounter (char string[]) {
    int j = 0;
    int counter = 0;

        while (string[j] != '\0') {
        counter++;
        j++;
        }

    return counter;
}
