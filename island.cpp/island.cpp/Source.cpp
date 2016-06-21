#include <iostream>
#include <vector>
using namespace std;
int N = 4, M = 4;
vector< vector<int> > map(N, vector<int>(M, 0));

void zerout(int x, int y) {
	map[x][y] = 0;
	while (x <= M - 2 && map[x + 1][y] == 1) {

		map[x + 1][y] = 0;
		zerout(x + 1, y);
	}

	while (y <= N - 2 && map[x][y+1] == 1) {

		map[x][y+1] = 0;
		zerout(x, y+1);
	}
	while (x >= 1 && map[x - 1][y] == 1) {

		map[x - 1][y] = 0;
		zerout(x - 1, y);
	}
	while (y >= 1 && map[x][y-1] == 1) {

		map[x][y-1] = 0;
		zerout(x, y-1);
	}




}


int main() {

	map[0][0] = 1;
	map[1][0] = 1;
	map[0][1] = 1;
	map[3][3] = 1;
	map[2][0] = 1;
	map[3][0] = 1;
	for (int i = 0; i<4; i++) {
		for (int j = 0; j<4; j++) {
			cout << map[i][j];
		}
		cout << "\n";
	}
	int count = 0;
	for (int i = 0; i < M; i++ ) {
		for (int k = 0; k < N; k++) {
			if (map[i][k] == 1) {
				count++;
				zerout(i,k);
			}			
		}
	}

	zerout(0, 0);
	cout << "\n";
	for (int i = 0; i<4; i++) {
		for (int j = 0; j<4; j++) {
			cout << map[i][j];
		}
		cout << "\n";
	}

	cout << "Number of island is " << count << "\n";
	int n;
	cin >> n;
	return 0;
}


