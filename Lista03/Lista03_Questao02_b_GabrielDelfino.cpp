#include <stdio.h>
#include <stdlib.h>

#define TAM 11

int ValidaCPF(int CPF[]) {
	int Mult = 10, Soma = 0, DC1, DC2;
	
	for (int i = 0; i < TAM-2; i++){
		Soma += CPF[i] * Mult;
		Mult--;
	}
	DC1 = Soma%11;
	
	if(DC1 < 2){
		DC1 = 0;
	} else {
		DC1 = 11 - DC1;
	}
	
	Mult = 11;
	Soma = 0;
	for (int i = 0; i < TAM-2; i++){
		Soma += CPF[i] * Mult;
		Mult--;
	}
	
	Soma += DC1*2;
	
	DC2 = Soma%11;
	if(DC2 < 2){
		DC2 = 0;
	} else {
		DC2 = 11 - DC2;
	}
	
	if (DC1 == CPF[TAM-2] && DC2 == CPF[TAM-1]){
		return 0;
	} else {
		return 1;
	}
	
}

int main(){
	int CPF[TAM] = {7,0,7,5,5,6,8,5,1,5,6};
	int Retorno;
	
	Retorno = ValidaCPF(CPF);
	printf("%i\n", Retorno);
	
}