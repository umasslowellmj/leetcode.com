#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm> 

using namespace std;

bool compare_as_ints(double i, double j)
{
	return (int(i)<int(j));
}

int main() {
	vector <int> vect;
	int N, k, temp;
	
	scanf_s("%d", &N);
	scanf_s("%d", &k);
	for (int i = 0; i < N; i++ ) {
		temp = 0;
		scanf_s("%d", &temp);
		vect.push_back(temp);
		//printf("%d\n", vect[i]);
	}

	stable_sort(vect.begin(), vect.end(), compare_as_ints);
	
	//for (int i = 0; i < N; i++) {
		
	//	printf("%d\n", vect[i]);
	//}

	int min_index = 0, min;
	for (int j = 0; j < N-k-1 ;j++) {
		if (vect[j + k-1] - vect[j] << vect[min_index+k-1] - vect[min_index])
			min_index = j;
	}

	printf("%d\n", min_index);
/*
	int sum = 0;
	for (int l = min_index; l < min_index+k; l++) {
		if (min_index+k == l)
			sum = sum + abs(vect[min_index+k] - vect[l]);
		sum = sum + abs(vect[l] - vect[l+1]);
	}

	printf("%d\n", sum);*/

	scanf_s("%d", &N);

	return 0;
}