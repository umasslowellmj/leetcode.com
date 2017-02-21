#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void) {
	int a=0, max = 0, length = 0;
	int arr[100];
	scanf("%d", &a);
	int b=0;

	while (a > 0) {
		arr[length] = a % 10;
		a = a/10;
		length++;
	};
//	printf("%d\n", length);

	for (int j = 0; j<length; j++) {

		if (arr[j] == arr[j + 1]){
			b = 0;
		for (int k = length; k >=0 ; k--) {
			if (k != j)
				b = arr[k] + b * 10;
		}
	//	printf("%d\n", b);
			if (b>max){
				max = b;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}

