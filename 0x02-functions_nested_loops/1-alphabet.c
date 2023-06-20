#include "main.h"

void print_alphabet(void);
	/**
	 * print_alphabet - print all alphabet in lowercase
   * Return: 0 
	 */


	void print_alphabet(void)
	{
		char alphabet;


		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);


		_putchar('\n');
	}
