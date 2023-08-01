#include<bits/stdc++.h>
using namespace std;
//GFG problem link :-https://practice.geeksforgeeks.org/problems/square-pattern-1662666141/1

/*

	5  5 5 5 5 5 5 5  5

	5  4 4 4 4 4 4 4  5
	5  4 3 3 3 3 3 4  5
	5  4 3 2 2 2 3 4  5
	5  4 3 2 1 2 3 4  5
	5  4 3 2 2 2 3 4  5
	5  4 3 3 3 3 3 4  5
	5  4 4 4 4 4 4 4  5

	5  5 5 5 5 5 5 5  5



*/

void PrintPattern(int n) {

	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			cout << n - min({i, j, (2 * n - 2) - i, (2 * n - 2) - j}) << " ";
		}
		cout << endl;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE

	int n;
	cin >> n;
	PrintPattern(n);
	return 0;
}