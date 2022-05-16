

#include <stdio.h>
#include <stdlib.h>

//ej1
float aplicarDescuento(float p);

int contarCaracteres(char cadena[], char caracter);
#define TAM 5

int main(void) {

	// ej1
	float precio = 1234.7;
	float precioConDescuento;

	precioConDescuento = aplicarDescuento(precio);


	//ej2
	char palabra[TAM] = {'a','b','a','f','a'};
	char letra = 'a';

	contarCaracteres(palabra, letra, TAM);


	return EXIT_SUCCESS;
}

//ej1
float aplicarDescuento(float p)
{
	p = p * (1 - 0.05);
	return p;
}


//ej2
int contarCaracteres(char cadena[], char caracter, int tam)
{
	int cont = 0;

	for(i = 0; i < tam; i++)
	{
		if(cadena[i] == caracter)
		{
			cont++;
		}
	}

	return cont;
}


