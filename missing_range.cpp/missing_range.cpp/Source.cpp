#include <iostream>
#include <array>

int arr[] = { 0, 1, 3, 50, 75 };
using namespace std;

int main() {
	int end = 0, begin = 0;
	int i = 0;

	while(end<=100){
		while (begin != arr[i]) {
			begin++;
		}
		end = begin;
		cout << begin;
		if (end != arr[i + 1]) {
			i++;
			while (end +1 <= arr[i]) {
				end++;
			}
			cout << "->" << end << endl;
		}
		else
			cout << "," << endl;		
	}


	cin >> end;
	return 0;
}