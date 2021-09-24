/*
 * utn.c
 *
 *  Created on: 3 sep. 2021
 *      Author: viard
 */
#include <stdio.h>
#include <stdlib.h>

// brief: Explicar que pide la funcion
// param: Argumentos
// return: Lo que devuelve la funcion
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
int division(float* pResultado, int num1,int num2)
{
	float aux;
	int retorno = 1;
	if(num2!=0)
	{
		aux=(float)num1/num2;
		retorno=0;
		*pResultado=aux;
	}
	return retorno;
}
int factorial(int *pResultado, int num)
{
	int aux = 1;
	int retorno = 1;
	if(num>0)
	{
		for(int i=1; i<=num; i++)
		{
			aux = aux*i;
		}
	*pResultado=aux;
	retorno=0;
	}
	return retorno;
}
int utn_pedirNumero(int* pResultado, char* mensaje)
{
	int aux;
	int retorno = 1;
	if(pResultado!=NULL&&mensaje!=NULL)
	{
		printf("%s",mensaje);
		scanf("%d",&aux);
		*pResultado=aux;
		retorno=0;
	}
	return retorno;
}
