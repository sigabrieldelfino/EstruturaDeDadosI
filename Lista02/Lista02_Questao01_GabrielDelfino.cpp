#include <stdio.h>
#include <stdlib.h>

int Potencia(int x, int y) {
	if(y > 0) {
		return x * Potencia(x, y-1);
	}
	
	return 1;
}

int main() {
	
	int x, y, z;
	
	x = 2;
	y = 3;
	
	z = Potencia(x,y);
	
	printf("%i\n",z);
	
	system("pause");
}