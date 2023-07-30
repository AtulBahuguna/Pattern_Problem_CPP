#include<bits/stdc++.h>
using namespace std;
//GFG problem link :- https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_12

/*

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1


*/

void PrintPattern(int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << j + 1 << " ";
		}
		for (int j = i + 1; j <= 2 * n - i - 2 ; j++) {
			cout << ' ' << " ";
		}
		for (int j = i; j >= 0; j--) {
			cout << j + 1 << " ";
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