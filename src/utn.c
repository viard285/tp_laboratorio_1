/*
 * utn.c
 *
 *  Created on: 3 sep. 2021
 *      Author: viard
 */
#include <stdio.h>
#include <stdlib.h>

int suma(int num1,int num2)
{
	int retorno;
	retorno=num1+num2;
	return retorno;
}
int resta(int num1,int num2)
{
	int retorno;
	retorno=num1-num2;
	return retorno;
}
int multiplicacion(int num1,int num2)
{
	int retorno;
	retorno=num1*num2;
	return retorno;
}
float division(float* resultado, int num1,int num2)
{
	int retorno = 1;
	if(num2!=0)
	{
		*resultado=(float)num1/num2;
		retorno=0;

	}
	return retorno;
}
int modulo(int num1,int num2)
{
	int retorno;
	retorno=num1%num2;
	return retorno;
}
