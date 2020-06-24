#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	int a[100], n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		while(a[i] != a[i+1]) {
			a[i]++;
			cnt++;
		}
		i++;
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
