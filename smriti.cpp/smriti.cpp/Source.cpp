#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm> 
#include <string>  

using namespace std;
string maximum(string str);
int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string str, max ="\0" ;
		unsigned int num, length, pos;

		if (cin >> str >> num) {
			
			cout<< maximum(str);	
		}
	}
	cin >> T;
	return 0;
}

string maximum(string str) {
	unsigned int length = str.size();
	string max = "\0";
	for (int j = 0; j < length - 2; j++) {
		string temp1 = str;
		temp1.erase(j);

		for (int k = j + 1; k< length - 1; k++) {
			temp1.erase(k);

			for (int m = k + 1; m < length; m++) {
				temp1.erase(m);
				if (max < temp1)
					max = temp1;
			}
		}
	}
	return max;
}