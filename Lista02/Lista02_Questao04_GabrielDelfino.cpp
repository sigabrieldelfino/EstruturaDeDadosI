#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void Preenche(int Vetor[], int Contador) {
	if (Contador < TAM) {
		Vetor[Contador] = Contador;
		Preenche(Vetor,Contador + 1);
	}
}

void Imprime(int Vetor[], int Contador) {
	if (Contador < TAM) {
		printf("%i:%i - ", Vetor[Contador],Contador);
		Imprime(Vetor,Contador + 1);
	}
}

void Inverte(int Vetor[], int VetorDois[], int Contador) {
	   	if (Contador < TAM) {
			   VetorDois[TAM-Contador-1] = Vetor[Contador];
			   Inverte(Vetor, VetorDois, Contador + 1);
		   }
}

int main(){
	int Vetor[TAM], VetorDois[TAM];
	
	Preenche(Vetor,0);
	
	Imprime(Vetor,0);
	
	Inverte(Vetor, VetorDois, 0);
	
	printf("\n\n\n");
	
	Imprime(VetorDois,0);
	
	system("pause");
}