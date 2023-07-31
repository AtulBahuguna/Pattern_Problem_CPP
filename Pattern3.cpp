#include<bits/stdc++.h>
using namespace std;
//GFG problem link :- https://practice.geeksforgeeks.org/problems/double-triangle-pattern/1

/*

************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************


*/

void PrintPattern(int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			cout << '*';
		}
		for (int j = 0; j < 2 * i; j++) {
			cout << " ";
		}
		for (int j = 0; j < n - i; j++) {
			cout << '*';
		}
		cout << endl;
	}
	int nice = 2 * n - 2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << '*';
		}
		for (int j = 0; j < nice; j++) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << '*';
		}
		cout << endl;
		nice -= 2;

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