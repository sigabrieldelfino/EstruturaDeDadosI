#include <stdio.h>
#include <stdlib.h>

void Imprimir(int x, int y) {
	if (x >= y) {
		printf("%i - ", y);
		Imprimir(x, y+2);
	}
}

int main() {
	int x;
	
	x = 10;
	
	Imprimir(x,0);
	
	system("pause");
}