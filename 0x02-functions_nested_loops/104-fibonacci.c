#include <stdio.h>


/**

 * main - fibonacci <3

 *

 * Purpose - no hardcode

 *

 * Return:  (Success)

 */


int main(void)

{

        unsigned long int i;

        unsigned long int bef = 1;

        unsigned long int aft = 2;

        unsigned long int l = 1000000000;

        unsigned long int bef1;

        unsigned long int bef2;

        unsigned long int aft1;

        unsigned long int aft2;


        printf("%lu", bef);


        for (i = 1; i < 91; i++)

        {

                printf(", %lu", aft);

                aft += bef;

                bef = aft - bef;

        }


        bef1 = (bef / l);

        bef2 = (bef % l);

        aft1 = (aft / l);

        aft2 = (aft % l);


        for (i = 92; i < 99; ++i)

        {

                printf(", %lu", aft1 + (aft2 / l));

                printf("%lu", aft2 % l);

                aft1 = aft1 + bef1;

                bef1 = aft1 - bef1;

                aft2 = aft2 + bef2;

                bef2 = aft2 - bef2;

        }

        printf("\n");

        return (0);

}



_putchar.c


#include "main.h"

#include <unistd.h>

/**

 * _putchar - writes the character c to stdout

 * @c: The character to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int _putchar(char c)

{

        return (write(1, &c, 1));

}



main.h


#ifndef main_h

#define main_h


int _putchar(char);

void print_alphabet(void);

void print_alphabet_x10(void);

int _islower(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);

void print_times_table(int n);


#endif
