#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void VerificaOrdem(int Vetor[], int Num, int Verifica) {
	
	
	if(Num < TAM-1) {
		if(Vetor[Num] < Vetor[Num + 1]){
			Verifica++;
			VerificaOrdem(Vetor, Num+1, Verifica);
		}
		if(Vetor[Num] > Vetor[Num + 1]){
			Verifica--;
			VerificaOrdem(Vetor, Num+1, Verifica);
		}
	} else {
		if(Verifica == 9){
			printf("Lista em ordem crescente!\n");
		} else {
			if(Verifica == -9){
				printf("Lista em ordem decrescente!\n");
			} else {
				printf("Lista não ordenada!\n");
			}
		}
	}
}

void Copia(int Vetor[], int VetorCopia[], int Num) {
	if(Num < TAM){
		VetorCopia[Num] = Vetor[Num];
		Copia(Vetor, VetorCopia, Num + 1);
	}
}

void CopiaSeletiva(int Vetor[], int VetorCopia[]) {
	
}

void CopiaInvertida(int Vetor[], int VetorCopiaInvertida[], int Num){
	if(Num < TAM){
		VetorCopiaInvertida[TAM-(Num+1)] = Vetor[Num];
		CopiaInvertida(Vetor, VetorCopiaInvertida, Num + 1);
	}
}

void CopiaInvertida2(int Vetor[], int Num){
	int Auxiliar;
	if(Num <= TAM/2){
		Auxiliar = Vetor[Num];
		Vetor[Num] = Vetor[TAM-(Num+1)];
		Vetor[TAM-(Num+1)] = Auxiliar;
		CopiaInvertida2(Vetor, Num + 1);
	}
}

void Intercalar(int Vetor[], int Vetor2[], int Vetor3[]) {
	int V1 = 0, V2 = 0, V3 = 0;
	for(int i = 0; i < TAM*2; i++){
		Vetor3[i] = Vetor[V1];
		V1++;
		i++;
	}
	for(int i = 1; i < TAM*2; i++){
		Vetor3[i] = Vetor2[V2];
		V2++;
		i++;
	}
}

void Excluir(int Vetor[], int Retirar) {
	int Auxiliar = 0;
	for(int i = 0; i < TAM; i++){
		if(Vetor[i] != Retirar){
			Vetor[Auxiliar] = Vetor[i];
			Auxiliar++;
		}
	}
}

void Imprimir(int Vetor[], int Num){
	if(Num < TAM) {
		printf("%i - ", Vetor[Num]);
		Imprimir(Vetor, Num + 1);
	}
}

int main() {
	
	int Vetor[TAM] = {1,5,9,10,11,21,22,83,84,95};
	int Vetor2[TAM] = {90,84,82,80,70,60,50,40,30,10};
	int VetorCopia[TAM], Vetor3[TAM*2];
	int VetorCopiaSeletiva[TAM], VetorCopiaInvertida[TAM];
	
	int Num = 0;
	
	Imprimir(Vetor, Num);
	
	// VerificaOrdem(Vetor, Num, Num);
	
	// Copia(Vetor, VetorCopia, Num);
	
	// CopiaSeletiva(Vetor, VetorCopiaSeletiva, Num);
	
	// CopiaInvertida(Vetor, VetorCopiaInvertida, Num);
	
	// CopiaInvertida2(Vetor, Num);
	
	Intercalar(Vetor, Vetor2, Vetor3);
	
	Excluir(Vetor, 10);
	
	printf("\n");
	
	Imprimir(Vetor, Num);
	
	printf("\n");
	
	// for(int i = 0; i < TAM*2; i++){
	// 	printf("%i - ", Vetor3[i]);
	// }
}