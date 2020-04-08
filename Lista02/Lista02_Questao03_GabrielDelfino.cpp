#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int x) {
	if (x > 0) {
		if(x == 1 || x == 2) {
		   	return 1;
		} else {
			return Fibonacci(x - 1) + Fibonacci(x - 2);   	
	   	}
	}
	return 0;
}

int main() {
	
	int x, z;
	
	x = 7;
	
	z = Fibonacci(x);
	
	printf("%i\n",z);
	
	system("pause");
}