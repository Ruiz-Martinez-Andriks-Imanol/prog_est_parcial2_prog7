/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 31/03/2022
Escuela: Universidad del Valle de México Campus Villahermosa 
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programación Estructurada<br>
Muestra el uso de:
 
    -Variables enteras y en cadena
    -printf para mostrar mensajes y variables
    -fgets
    -El uso de include para las librerías
    -Librerías de la función string.h
    -Uso de condicionales
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
#include<string.h>
int main(){
	//Declaración de cadenas
	char nombre[]="Andriks Imanol Ruiz Martinez";
	char *carrera="Ing. en Sistemas Computacionales";
	char nombre2[30];
	int longitud;
	//Entrada por teclado de cadenas con scanf no lee espacios
	printf("Introduce el nombre: ");
//	scanf("%s", &nombre2);
//Usando gets, funciona, lee todo, pero no verifica el tamaño de la cadena
//gets(nombre2);
	fgets(nombre2,30,stdin); //Lee bien, y solamente lo que cabe en la cadena
	printf("Nombre2: [%s]\n", nombre2);
	printf("Nombre: [%s]\n", nombre);
	printf("Carrera: [%s]\n", carrera);
	printf("La longitud de nombre 2 es %d\n", longitud);
	if (strlen(nombre)>strlen(nombre2)){ //Condicional
		printf("Nombre tiene mas caracteres\n");
	}
	strcpy(nombre2, "Hola mundo!!!");//Función de string
	printf("Nombre2= [%s]\n", nombre2); //Salida
	return 0;
}
