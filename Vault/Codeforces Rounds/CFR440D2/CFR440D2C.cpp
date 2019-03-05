// Template by proptit_4t41
// Applied for C++11/C++14
// Add -std=c++14 to your IDE.

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define i64 long long
#define u64 unsigned long long
#define ld long double
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define MOD 1000000007LL
#define INF 1e9
#define LINF 1e18
#define EPS 1e-9
#define GOLD ((1+sqrt(5))/2)
#define REcheck cout << "RE here?\n"
#define tracker1(i) cout << "working at " << i << endl;
#define tracker2(i,j) cout << "working at " << i << "-" << j << endl;
#define tracker3(i,j,k) cout << "working at " << i << "-" << j << "-" << k << endl;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
typedef pair<i64, i64> pii;
typedef tuple<i64, i64> tii;
typedef tuple<i64, i64, i64> tiii;

// custom typedef here


// global variables here


// functions here
bool notComp(i64 z) {
	if (z < 4) return true;
	for (i64 i=2; i<=sqrt(z); i++) {
		if (z % i == 0) return false;
	}
	return true;
}

int main() {
	//freopen("FILE.INP", "r", stdin);
	//freopen("FILE.OUT", "w", stdout);
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	// code here
	int q; cin >> q;
	while (q--) {
		i64 n; cin >> n;
		if (n < 4 || (n % 4 == 2 && n < 6) || (n % 4 == 1 && n < 9) || (n % 4 == 3 && n < 15)) {
			cout << -1 << endl; continue;
		}
		i64 ans = n / 4, tmp = n % 4;
		if (n % 4 == 0) {
			cout << n/4 << endl; continue;
		}
		if (n % 4 == 1) {
			cout << (n-9)/4+1 << endl; continue;
		}
		if (n % 4 == 2) {
			cout << (n-6)/4+1 << endl; continue;
		}
		if (n % 4 == 3) {
			cout << (n-15)/4+2 << endl; continue;
		}
	}
	return 0;
}