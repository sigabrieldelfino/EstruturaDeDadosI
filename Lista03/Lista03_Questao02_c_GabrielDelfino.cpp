#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
	
	if (DC1 == CPF[9] && DC2 == CPF[10]){
		return 0;
	} else {
		return 1;
	}
	
}

void Inserir(int CPF[]){
	for(int i = 0; i < TAM; i++){
		printf("Digite o digito o Nº %i do seu CPF: ", i+1);
		scanf("%i", &CPF[i]);
	}
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int CPF[TAM], Retorno;
	
	Inserir(CPF);
	
	Retorno = ValidaCPF(CPF);
	
	if (Retorno == 0){
		printf("CORRETO\n");
	} else {
		printf("INCORRETO\n");
	}
	
}