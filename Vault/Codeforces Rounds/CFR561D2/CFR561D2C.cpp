#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

#define y0 holdtheflower
#define y1 enjoythecolorandscent
#define yn walkthroughthesoulgarden
#define j1 feelthewarmbreathofkindnessandsalvation

#define endl '\n'
mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rng64(chrono::steady_clock::now().time_since_epoch().count());

int n; vector<int> a;

void Input() {
	cin >> n; a.resize(n);
	for (auto &z: a) {cin >> z; z = abs(z);}
}

void Solve() {
	long long ans = 0;
	sort(a.begin(), a.end());
	for (int i=0; i<n; i++) {
		int j = upper_bound(a.begin(), a.end(), a[i] * 2) - a.begin();
		ans += max(0, j - i - 1);
	}
	cout << ans << endl;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	Input(); Solve(); return 0;
}

/******************************************\
 *  Thuy-Trang Tran, #Team4T's Leader     *
 *  #Team4T Primary Flagship - Salvation  *
\******************************************/