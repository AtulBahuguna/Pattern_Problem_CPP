#include<bits/stdc++.h>
using namespace std;
//GFG problem link :- https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_17

/*

		A
	   ABA
	  ABCBA
	 ABCDCBA
	ABCDEDCBA

*/

void PrintPattern(int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		char ch = 'A';
		int point = (2 * i + 1) / 2;
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << ch;
			if (j >= point) {
				ch--;
			} else {
				ch++;
			}
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