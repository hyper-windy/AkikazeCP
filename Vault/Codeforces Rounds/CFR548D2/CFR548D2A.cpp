#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

#define y0 takethescythe
#define y1 reapyourenemies
#define yn feedontheirflesh
#define j1 ascendthroughtheirblood

#define endl '\n'
mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rng64(chrono::steady_clock::now().time_since_epoch().count());

int n; string s;

void Input() {
	cin >> n >> s;
}

void Solve() {
	long long ans = 0;
	for (int i=0; i<n; i++) {
		if (s[i] % 2 != 0) continue;
		ans += (i + 1);
	}
	cout << ans << endl;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	Input(); Solve(); return 0;
}

/**********************************************\
 *  Ngoc-Mai Ngo, #Team4T's Deputy Leader     *
 *  #Team4T Secondary Flagship - Destruction  *
\**********************************************/