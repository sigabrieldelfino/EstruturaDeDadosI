#include <stdio.h>
#include <stdlib.h>

#define TAM 9

void ValidaCPF(int CPF[], int *DC1, int *DC2) {
	int Mult = 10, Soma = 0;
	
	for (int i = 0; i < TAM; i++){
		Soma += CPF[i] * Mult;
		Mult--;
	}
	
	*DC1 = Soma%11;
	if(*DC1 < 2){
		*DC1 = 0;
	} else {
		*DC1 = 11 - *DC1;
	}
	
	Mult = 11;
	Soma = 0;
	for (int i = 0; i < TAM; i++){
		Soma += CPF[i] * Mult;
		Mult--;
	}
	
	Soma += *DC1*2;
	
	*DC2 = Soma%11;
	if(*DC2 < 2){
		*DC2 = 0;
	} else {
		*DC2 = 11 - *DC2;
	}
	
}

int main(){
	int CPF[TAM] = {7,0,7,5,5,6,8,5,1};
	int DC1, DC2, *PontDC1, *PontDC2;
	
	PontDC1 = &DC1;
	PontDC2 = &DC2;
	
	ValidaCPF(CPF, PontDC1, PontDC2);
	printf("CPF: ");
	for(int i = 0; i < TAM; i++){
		printf("%i", CPF[i]);
	}
	printf("\n");
	printf("DC1: %i \nDC2: %i", DC1, DC2);
	
}