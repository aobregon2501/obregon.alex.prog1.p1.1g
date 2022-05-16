

#include <stdio.h>
#include <stdlib.h>

//ej1
float aplicarDescuento(float p);

//ej2
int contarCaracteres(char cadena[], char caracter);
#define TAM 5

//ej3
typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;
} eNotebook;

#define TAM_LISTA 5

int ordenarLista(eNotebook vec[], int tam);


int main(void) {

	// ej1
	float precio = 1234.7;
	float precioConDescuento;

	precioConDescuento = aplicarDescuento(precio);
	printf("%f", precioConDescuento);


	//ej2
	char palabra[TAM] = {'a','b','a','f','a'};
	char letra = 'a';
	int cantidadLetras;

	cantidadLetras = contarCaracteres(palabra, letra, TAM);
	printf("%d", cantidadLetras);


	//ej3

	eNotebook lista[TAM_LISTA];


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


int ordenarLista(eNotebook vec[], int tam)
{

}
