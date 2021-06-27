#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		if (s[0] != '1') {
			// if the first digit is not equal to 1, then add 1 to the beginning of the number
			cout << 1 << s;
		} else {
			// otherwise, add the 0 digit after the number 1 (1st digit) and print the remaining
			cout << s[0] << '0' << s.substr(1, (int) s.size() - 1);
		}
		cout << '\n';
	}
	return 0;
}
