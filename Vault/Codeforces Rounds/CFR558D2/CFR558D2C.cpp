/********************************************************
*||  Code written by Akikaze                          ||*
*||  Duy-Bach Le, #Team4T's Chief Executor            ||*
*||  #Team4T Tertiary Flagship - Oblivion             ||*
*||                                                   ||*
*||  Written by a random fan of momocashew and Chiho  ||*
********************************************************/

/***********************************************
** File name: CFR558D2C.cpp
** Time created: Thu May 09 2019 14:33
***********************************************/

/************** [OPTIMIZATION PROTOCOL] **************/
#pragma GCC optimize("Ofast")
/*****************************************************/

/************** [LIBRARY PROTOCOL] **************/
#include <bits/stdc++.h>
using namespace std;
/************************************************/

/************** [GNU OMISSIONS] **************/
#define y0 withindarkness
#define y1 apinklotusbloomed
#define yn carryingapurplesoul
#define j1 togetherformingtheTeam
/*********************************************/

/************** [LEGENDS/CONSTANTS] **************/
#define endl '\n'
#define i64 long long
#define ld long double
const long long Mod = 1000000007LL, INF = 1e9, LINF = 1e18;
const long double Pi = 3.141592653589793116L;
const long double EPS = 0.000000001L, Gold = ((1.0L+sqrt(5.0L))/2.0L);
long long keymod[] = {1000000007LL, 1000000009LL, 1000000021LL, 1000000033LL};
mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rng64(chrono::steady_clock::now().time_since_epoch().count());
/*************************************************/

/************** [MASTER CONTROLS - PHASE 1] **************/
int OImode = 0;
int MultiTest = 0;
int Interactive = 0;

void ConfigMonitor();
char infile[] = "FILE.IN";
char outfile[] = "FILE.OUT";
/*********************************************************/

/************** [GLOBAL VARIABLES] **************/
int n; vector<int> x, y;
map<pair<i64, i64>, set<i64>> Map;
/************************************************/

/************** [FUNCTIONS] **************/
void ProcessLine(int i, int j) {
	int vx = (x[j] - x[i]);
	int vy = (y[j] - y[i]);
	i64 a = INT_MIN, b = INT_MIN, c = INT_MIN;
	if (vx == 0) {a = 1; b = 0;}
	else if (vy == 0) {a = 0; b = 1;}
	else {
		int g = __gcd(abs(vx), abs(vy));
		vx /= g; vy /= g; vy = -vy;
		if (vy < 0) {vx = -vx; vy = -vy;}
		a = vy; b = vx;
	}
	c = -(1LL * a * x[i] + 1LL * b * y[i]);
	Map[make_pair(a, b)].insert(c);
}

void Input() {
	cin >> n; x.resize(n); y.resize(n);
	for (int i=0; i<n; i++) cin >> x[i] >> y[i];
}

void Solve() {
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			ProcessLine(i, j);
		}
	}
	int lineCnt = 0;
	for (auto it=Map.begin(); it!=Map.end(); it++) {
		lineCnt += (it->second).size();
	}
	i64 intersectingPair = 0;
	for (auto it=Map.begin(); it!=Map.end(); it++) {
		int classSize = (it->second).size();
		int intersectible = lineCnt - (it->second).size();
		intersectingPair += 1LL * classSize * intersectible;
	}
	cout << (intersectingPair / 2) << endl;
}
/*****************************************/

/************** [MAIN] **************/
int main(int argc, char* argv[]) {
	ConfigMonitor();
	ios_base::sync_with_stdio(false);
	if (!Interactive) cin.tie(NULL);
	
	int T = 1; if (MultiTest) cin >> T;
	while(T--) {Input(); Solve();}
	
	return 0;
}
/************************************/

/************** [MASTER CONTROLS - PHASE 2] **************/
void ConfigMonitor() {
	#ifdef Akikaze
		cout << "Source code by #Team4T-Akikaze.\n";
		cout << "Input: " << ((OImode) ? infile : "stdin");
		cout << " | Output: " << ((OImode) ? outfile : "stdout") << endl << endl;
		cout << "MultiTest-Mode: " << ((MultiTest) ? "ON\n" : "OFF\n");
		cout << "Interactive-Mode: " << ((Interactive) ? "ON\n\n" : "OFF\n\n");
	#else
		if (OImode) {
			freopen(infile, "r", stdin);
			freopen(outfile, "w", stdout);
		}
	#endif
}
/*********************************************************/