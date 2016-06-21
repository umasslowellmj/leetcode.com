#include <iostream>
#include <vector>
using namespace std;

vector<int> foo(int n) {
	vector<int> sum;
	if (n == 2) {
		sum.push_back(2);
		return sum;
	}
	int currTotal = 0, l = 1;
	while (currTotal<=n) {
		if ( 2*l+1 <= n - currTotal) {
			currTotal = currTotal + l;
			sum.push_back(l);
			//cout << l;
		}else{
			sum.push_back(n - currTotal);
			currTotal = n+1;
			return sum;
		}	
		l++;
	}	
}

int main() {
	int n;
	cin >> n;
	cout << n << endl;
	vector<int> haha;
	haha = foo(n);
	cout << haha.size()<<endl;
	for (int i = 0; i<haha.size(); ++i) {
		//cout << "inside for"<<endl;
		cout << haha[i] << " ";
	}

	return 0;
}