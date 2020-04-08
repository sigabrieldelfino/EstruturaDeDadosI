#include <stdio.h>
#include <stdlib.h>

int Imprimir(int x) {
	if (x >= 0) {
		printf("%i - ", x);
		Imprimir(x-2);
	}
}

int main() {
	int x;
	
	x = 10;
	
	Imprimir(x);
	
	system("pause");
}