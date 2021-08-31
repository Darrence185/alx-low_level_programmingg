#include "holberton.h"

/**
 *  * print_alphabet - Prints the alphabet in lowercase.
 *   *
 *    * Return: Always 0
 *     */

void print_alphabet(void)
{
        char c;

            c = 'a';

                while (c <= 'z')
                        {
                                    _putchar (c);
                                            c++;
                                                }
                    _putchar('\n');
}
