#include <stdio.h>
int fib(int a);

int main(void) {
	int n;
	scanf("%d", &n);
	printf("here %d\n", fib(n));
	
	return 0;
}

int fib(int a){
	if (a<2)
	return 1;
	else 
	return (fib(a-1)+fib(a-2));
}

