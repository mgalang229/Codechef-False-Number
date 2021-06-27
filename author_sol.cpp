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
			if (s[0] == '1') {
				// if the first digit of the string is 1, then replace it with 0
				s[0] = '0';
			}
			// add 1 to the beginning of the string
			cout << "1" + s << '\n';
		}
		return 0;
	}
