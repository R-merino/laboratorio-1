#include<stdlib.h>	
#include<stdio.h>

typedef struct listanumeros{
	int cantidad;
	int max;
	int *arreglo;
}lista;


lista *crearlistanumerosvacia(int tam){ 
	
	lista *unalista = malloc(sizeof( lista));
	
	unalista->max = tam;
	unalista->cantidad = 0;
	unalista->arreglo = malloc(sizeof(int) * tam);
	return(unalista);
}




lista *crearlistanumerosllena(lista *unalista, int tam, int max){ 
	int i;
	
	
	while(i<tam){
		unalista->arreglo[i] = rand() %(tam+1);//numeros random
		i++;
	}
	return(unalista);
}

int eliminalistanumeros(lista *unalista){ //Libera la memoria 
	free(unalista);
}

int buscanumerosenlistanumeros(lista *unalista, int numero){ 
	int i=0;
	while(unalista->max>i){
		if(unalista->arreglo[i] == numero){
			return 0;// si encontraramos el numero

		}
		else{
			i++;
		}
	}
	return -1;

	} 









