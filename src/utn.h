/*
 * utn.h
 *
 *  Created on: 3 sep. 2021
 *      Author: viard
 */

#ifndef UTN_H_
#define UTN_H_

int suma(int num1,int num2);
// brief: Pide dos numeros para sumarlos.
// param: num1, primer operando.
// param: num2, segundo operando.
// return: El resultado de la suma.
int resta(int num1,int num2);
// brief: Pide dos numeros para restarlos.
// param: num1, primer operando.
// param: num2, segundo operando.
// return: El resultado de la resta.
int multiplicacion(int num1,int num2);
// brief: Pide dos numeros para multiplicarlos.
// param: num1, primer operando.
// param: num2, segundo operando.
// return: El resultado de la multiplicacion.
int division(float* pResultado,int num1, int num2);
// brief: Pide dos numeros para dividirlos y una variable para pasarle el resultado por direccion de memoria.
// param: *pResultado, resultado de la division a asignar a una variable.
// param: num1, primer operando.
// param: num2, segundo operando.
// return: 0 si la division se pudo realizar correctamente, 1 si el valor de num2 es 0 y no se puede realizar la division.
int factorial(int* pResultado, int num);
// brief: Pide un numero para calcular su factuorial y una variable para pasarle el resultado por direccion de memoria.
// param: *pResultado, resultado del factorial a asignar a una variable
// param: num, numero a calcucar su factorial
// return: 0 si el factorial se pudo calcular correctamente, 1 si el valor de num es negativo y no se puede hacer el calculo.
int utn_pedirNumero(int* pResultado, char* mensaje);
// brief: Pide al usuario un numero mediante un mensaje y almacena ese numero con la direccion de memoria de la primer variable.
// param: *pResultado, almacena el valor ingresado en una variable por direccion de memoria.
// param: mensaje, Un mensaje para que el usuario se entere que debe ingresar un numero.
// return: 0 si salio todo bien, 1 si los parametros estan mal.

#endif /* UTN_H_ */
