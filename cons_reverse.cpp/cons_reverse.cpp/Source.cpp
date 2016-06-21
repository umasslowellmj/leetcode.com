#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


void reverse(string str);

int main() {
	int n;
	cin >> n;
	for (int i = 0; i<n; i++) {
		string str;
		cin.ignore();
		
		while (getline(cin, str)) {
				
			reverse(str);		
		}
	}
	cin >> n;
	return 0;
}

void reverse(string str) {
	int i = 0, size = str.length(), posl = 0, start = 0;
	vector<int> pos;
	
	while (i<size) {
		if (str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u')
			i++;
		else {
			pos.push_back(i);
			i++;
			posl = posl + 1;
		}		
	}
		

	while (start < posl) {
	//	char temp;
	//	temp = str[pos[start]];
	//	str[pos[start]] = str[pos[posl] - 1];
	//	str[pos[posl] - 1] = temp;
		swap(str[pos[start]], str[pos[posl]-1]);
		
		cout << "after swap" << endl;
		//    cout<<str[pos.at(start)]<<endl;
		//    cout<<str[pos.at(posl)]<<endl;
		start++;
		posl--;
	}
	cout << str << endl;
}