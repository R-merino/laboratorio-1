#include<stdlib.h>	
#include<stdio.h>
#include"lab1.h"


void main(){
	lista *unalista;
	int i,tam,numero,*j,max;
	printf("\n\n\t Ingrese tamano de la lista  ");
	scanf("%i",&tam);

	unalista = crearlistanumerosvacia(tam);

	unalista = crearlistanumerosllena(unalista,tam, max);


	printf("\n\tEsta es la lista:\n\n\t\t-");
	while(i< unalista->max){
		printf(" %d -",unalista->arreglo[i]);
		i++;
	}

	
	printf("\n\n\t Ingrese numero a buscar -> ");
	scanf("%i",&numero);
	
	
	int buscar = buscanumerosenlistanumeros(unalista, numero);

	if(buscar == 0){
		printf("\n\t Numero encontrado : %i ",numero);
	}else{
		printf("\n\t Numero no encontrado ");
	}

	
	
	eliminalistanumeros(unalista);

	printf("\n\n\t---> La lista se a eliminado <---");
}
