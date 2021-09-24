/*
 ============================================================================
 Name        : TP_[1].c
 Author      : Lautaro Emmanuel Viard DIV H
 ============================================================================
1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
2 Cómo realizar y entregar el trabajo práctico
El trabajo práctico deberá ser entregado en el repositorio de GIT correspondiente al TP1 de la
materia.
El mismo consistirá en el proyecto de CodeBlocks con el programa funcionando y comentado,
respetando las reglas de estilo de la cátedra. La compilación no deberá arrojar mensajes de
error ni de warnings.
El proyecto deberá contar con la biblioteca descripta en la sección número dos, y se deberá
hacer uso de dichas funciones para resolver la lógica del programa.
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h" // Llamo a la bibilioteca con mis funciones

int main(void)
{
	setbuf(stdout,NULL);
	//Declarar variables
	int opcion;
	int numeroUno;
	int numeroDos;
	int flagOperandoIngresado=0;
	int flagCalculos=0;
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	float resultadoDivision;
	int resultadoFactorialUno;
	int resultadoFactorialDos;
	int respuestaDivision;
	int respuestaFactorialUno;
	int respuestaFactorialDos;

	do //Usamos do while para que se ejecute sin tener que inicializar la variable opcion.
	{
		switch(flagOperandoIngresado)//Tres casos, para mostrar el menu inicial con "x" e "y", con el primer operando e "y" y con los dos operandos.
		{

		case 0:
			printf("Bienvenidos al menu de la calculadora de la UTN.\n\n");
			printf("1. Ingrese el primer operando. (A=x)\n");
			printf("2. Ingrese el segundo operando. (B=y)\n");
			printf("3. Calcular los operando en suma, resta, multiplicacion, division y factorial.\n");
			printf("4. Mostrar los resultados\n");
			printf("5. Salir.\n");
			break;
		case 1:
			printf("Bienvenidos al menu de la calculadora de la UTN.\n\n");
			printf("1. Ingrese el primer operando.(A=%d)\n",numeroUno);
			printf("2. Ingrese el segundo operando.(B=y)\n");
			printf("3. Calcular los operando en suma, resta, multiplicacion, division y factorial.\n");
			printf("4. Mostrar los resultados.\n");
			printf("5. Salir.\n");
			break;
		case 2:
			printf("Bienvenidos al menu de la calculadora de la UTN.\n\n");
			printf("1. Ingrese el primer operando.(A=%d)\n",numeroUno);
			printf("2. Ingrese el segundo operando.(B=%d)\n",numeroDos);
			printf("3. Calcular los operando en suma, resta, multiplicacion, division y factorial.\n");
			printf("4. Mostrar los resultados.\n");
			printf("5. Salir.\n");
			break;
		}

		if(utn_pedirNumero(&opcion, "Ingrese la opcion que usted desee:\n")==0)//Esta funcion pide al usuario el numero de la opcion a ingresar en el menu
		{
			switch(opcion)//Un switch para validar cada caso del uno al cinco
			{
				case 1:
					if(utn_pedirNumero(&numeroUno, "Ingrese el primer operando:\n")==0)
					{
						flagOperandoIngresado=1;//Le aviso al programa que ya se ingreso el primer operando, para poder entrar en el case 2 y mostrar el primer numero en el menu.
					}
					break;
				case 2:
					if(flagOperandoIngresado==1)
					{
						if(utn_pedirNumero(&numeroDos, "Ingrese el segundo operando:\n")==0)

						{
							flagOperandoIngresado=2;//Le aviso al programa que ya se pueden hacer los calculos y puedo mostrar los dos numeros ingresados en el menu.
						}
					}
					else
					{
						printf("Error. Primero debe ingresar el primer operando.\n");
						break;
					}
					break;
				case 3:
					if(flagOperandoIngresado==2)
					{
						//Hago los calculos
						resultadoSuma = suma(numeroUno, numeroDos);
						resultadoResta = resta(numeroUno, numeroDos);
						resultadoMultiplicacion = multiplicacion(numeroUno, numeroDos);
						respuestaDivision = division(&resultadoDivision, numeroUno, numeroDos);//Le paso por punteros el resultado de la division y los factoriales.
						respuestaFactorialUno = factorial(&resultadoFactorialUno, numeroUno);
						respuestaFactorialDos = factorial(&resultadoFactorialDos, numeroDos);
						flagCalculos=1;//Le aviso al programa que ya se pueden mostrar los resultados
					}
					else
					{
						printf("Error. Primero debe ingresar los dos operandos.\n");
						break;
					}
					break;
				case 4:
					if(flagCalculos==1)
					{
						//Muestro los resultados
						printf("El resultado de la suma es: %d\n",resultadoSuma);
						printf("El resultado de la resta es: %d\n",resultadoResta);
						printf("El resultado de la multiplicacion es: %d\n",resultadoMultiplicacion);

						//En la division y los factoriales, me aseguro con un condicional de no hacer operaciones que sean invalidas
						//y le aviso al usuario que no se puede mostrar los resultados

						if(respuestaDivision==0)
						{
							printf("El resultado de la division es: %f\n",resultadoDivision);
						}
						else
						{
							printf("No se puede calcular una division por 0.\n");
						}
						if(respuestaFactorialUno==0)
						{
							printf("El resultado del primer factorial es: %d\n",resultadoFactorialUno);
						}
						else
						{
							printf("No se puede calcular un factorial negativo.\n");
						}
						if(respuestaFactorialDos==0)
						{
							printf("El resultado del segundo factorial es: %d\n\n",resultadoFactorialDos);
						}
						else
						{
							printf("No se puede calcular un factorial negativo.\n\n");
						}
					}
					else
					{
						printf("Error. Primero debe hacer los calculos.\n");
					}
					break;
				case 5:
					//Si el usuario ingresa la opcion 5 el programa finaliza y se lo hacemos saber imprimiendo este mensaje.
					printf("Usted selecciono la opcion de finalizar el proceso.\n");
					break;
				default:
					//Le mostramos el error al usuario en el caso de que ingrese un numero que no sea del uno al cinco.
					printf("Error. Opcion invalida. Asegurese de ingresar un numero entre 1 y 5.\n");
					break;
			}
		}
	}while(opcion!=5);//Condicion de do while para poder salir del bucle.
	printf("FIN DEL PROGRAMA.");//Un mensaje para confirmar que estamos afuera del bucle.
	return EXIT_SUCCESS;
}
