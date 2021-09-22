/*
 ============================================================================
 Name        : TP_[1].c
 Author      : Lautaro Emmanuel Viard
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout,NULL);
	int numero;

	utn_pedirNumero(&numero, "Ingrese un numero\n", "ERROR\n", 0, 10, 3);

	printf("%d",numero);
	return EXIT_SUCCESS;
}

