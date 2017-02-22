#include <stdio.h>
#include <string.h>

void rev(char* x, int n);
void swap(char*, char*);

int main(void) {
	char A[] = "hello world"; 
	int n = sizeof(A)-1;
	printf("%s\n %d\n" , A, n);

	rev(A, n);

	printf("%s\n" , A);
	return 0;
}

void rev(char* x, int n){
	int i = 0;
	n = n-1;
	while(i<n){
		swap(&x[i], &x[n]);
		i++;	
		n--;
	//		printf("in rev\n");
	};

}

void swap(char* a, char* b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
//	printf("in swap\n");
}

