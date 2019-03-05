#include <iostream>
using namespace std;

long long strtoll(string z) {
	long long result = 0, sign = 1, i = 0;
	if (z[0] == '-') {
		i = 1; sign = -1;
	}
	for (; i<z.size(); i++) {
		result *= 10;
		result += (z[i] - '0');
	}
	return result * sign;
}

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
        int n, m;
        cin >> n >> m;
        int ans = (n / 3) * (m / 3);
        cout << ans << endl;
	}
	return 0;
}