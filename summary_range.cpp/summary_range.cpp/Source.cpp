#include <iostream>
#include <array>
using namespace std;

int arr[] = { 1,2,3,4,5,6,8,9,10,12 };
int range(int begins);

int main() {
	int end = 0, begin = 0;
	while (begin<=10) {
		cout << arr[begin] << "->";
		end = range(begin);
		cout << arr[end] << endl;
		begin = end + 1;
	}
	cin >> end;
	return 0;
}
int range(int begins) {
	while (begins + 1 <= 10 && arr[begins] == arr[begins + 1] - 1) {
		begins = begins + 1;
	}
	return begins;
}
