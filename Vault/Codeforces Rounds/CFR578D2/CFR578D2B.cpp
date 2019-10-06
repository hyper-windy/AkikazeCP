/**********************************************
*||  Code written by Akikaze                ||*
*||  Duy-Bach Le, #Team4T's Chief Executor  ||*
**********************************************/

// File name: CFR578D2B.cpp
// Time created: Sun Aug 11 2019 12:31

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
int MultiTest = 1;
int Interactive = 0;

const char infile[] = "FILE.IN";
const char outfile[] = "FILE.OUT";
/*********************************************************/

/************** [GLOBAL VARIABLES] **************/
int n, m, k; vector<int> h;
/************************************************/

/************** [FUNCTIONS] **************/


void Input() {
	cin >> n >> m >> k; h.clear(); h.resize(n);
	for (auto &z: h) cin >> z;
}

void Solve() {
	for (int i=1; i<n; i++) {
		int MaxH = h[i] + k, MinH = max(0, h[i] - k);
		if (h[i-1] + m < MinH) {cout << "NO\n"; return;}
		if (h[i-1] > MinH) m += (h[i-1] - MinH);
		else m -= (MinH - h[i-1]);
	}
	cout << "YES\n";
}
/*****************************************/

/************** [MAIN] **************/
int main(int argc, char* argv[]) {
	#ifdef Akikaze
		cout << "Source code by #Team4T-Akikaze.\n";
		cout << "Input: " << ((OImode) ? infile : "stdin");
		cout << " | Output: " << ((OImode) ? outfile : "stdout") << endl << endl;
		cout << "MultiTest-Mode: " << ((MultiTest) ? "ON\n" : "OFF\n");
		cout << "Interactive-Mode: " << ((Interactive) ? "ON\n\n" : "OFF\n\n");
	#else
		if (OImode) {
			assert(freopen(infile, "r", stdin));
			assert(freopen(outfile, "w", stdout));
		}
	#endif
	
	ios_base::sync_with_stdio(false);
	if (!Interactive) cin.tie(NULL);
	
	int T = 1; if (MultiTest) {cin >> T; cin.ignore();}
	while(T--) {Input(); Solve();}
	
	return 0;
}
/************************************/

/*********************************************************************************************************************************
*                                                                                                                                *
*                                                                                                                                *
*                                                               ...                                                              *
*                                                        :jfGG######GGLt.                                                        *
*                                               tG.    LG################GL     Gf.                                              *
*                                            tGGt   ;GG###################G Gi   iGGf:                                           *
*                                         iG##G   .G######################G G#G;   G##Gt                                         *
*                                       tG###L   f########################G G###f   L####f                                       *
*                                     LG####G  .G#########################G G##GGG,  L####GL                                     *
*                                   ;G#####L  ,############################G###GG##t  f######j                                   *
*                                  G######G  t#################################GG###t  f######G;      G                          *
*                                G#######G  i##################################GG####L  G#######G.    G#.                        *
*                              jG#######G  ;###################################GG#####t  G########G   ##G:                       *
*                             G#########   ####################################GG######:  #########G  ####:                      *
*                            L#########G  G####################################GG#####f.  L#########G ####G                      *
*                           G##########  i############GGG######################GG#####f :  G#########i#####G                     *
*                         ,G##########f  G###########j   G#####################GG#####G G  t#########i######G                    *
*                        ,G###########  L############j   G#####################GG#####G GG  G########i#######G                   *
*                       i############f  #############j   G#####################GG#####G G#. i########i########G                  *
*                      t#############  f#############j   G#####################GG#####G G#L  ########i#########j                 *
*                     ;#############G  G#############j   G#####################GG#####G G#G  L#######iG########G.                *
*                    ,G#############i i##############j   G#####################GG#####L G##j ,#######i##########G                *
*                    G##############  G##############j   G#####################GG#####G G##G  G######i#######GG##L               *
*                   G##############G  G##############j   G#####################GG#####G G###  G######i######G  G##,              *
*                  G###############G ,###############j   G#####################GG#####G G###, j######i#######. G##G              *
*                 f################t t###############j   G#####################GG#####L,####L :######;#######: G###j             *
*                .G################. L###############j   G#####################GG###########G  ######iG###Gff. G###G             *
*                G#################  G###############j   G#####################GG###########G  G#####iG###G    G###G             *
*               L##################  G###############j   G#####################GG###########G  G#####i####G    G###G             *
*              .##################G  G###############j   G#####################GG###########G  G#####i####G    G###G             *
*              G##################G  G###############j   G#####################GG###########G  G#####i####G    G###G             *
*             t###################G  G################GGG######################GG###########G  G#####i####G    G###G             *
*             G####################  G#########################################GG###########G  G#####;####G    G####.            *
*            j#####################  G######################################################G  G#####i####G    G####G            *
*            G#####################  L######################################################G  ######iG###G    G#####            *
*           f######################. L######################################################G .######i#######: G#####L           *
*           G######################L ,######################################################f  ######i#######: G#####Gf          *
*          G#######################G  G#####################################################.  :G####i#######: G######G          *
*          G#######################G  G####################################################G   :G####i#######: G#######,         *
*         i#########################, j####################################################f  .:G####i#######: G#######,         *
*         G#########################L  G###################################################:  t:G####i#######: G#######,         *
*         ##########################G  G##################################################G  jL:G####i#######: G#######,         *
*        ;###########################: j##################################################L .G#:G####i#######: G#######,         *
*        G###########################G  G#################################################  f##:G####i#######tiG#######,         *
*        G############################  ;################################################j  G##j#####i#################,.        *
*       .#############################G  G##############################################G  L#########i#################j:f       *
*       t##########GG##################; .##############################################; :##########i#################i.G       *
*       G##########i:##################G  f############################################L  G##########i#################j:G       *
*       G##########i:###################L  L##########################################G  j###########i#################t,#       *
*       ###########i:####################;  G########################################G  ;############i####################i      *
*      .###########i:#####################;  G######################################G  :#############i####################L      *
*      i###########i:#####################G:  G####################################G   G#############i####################G      *
*      f###########i:#######################:  L##################################G   G##############i####################G      *
*      G###########i:#######################G:  ;G##############################Gj  :G###############i####################G      *
*      G###########i:#########################j   G##############GGG###########G   i#################i##########LG########G      *
*      G###########i:##########################G   .G############t ,#########Gi   L##################i##########fG########G:     *
*      G###########i:############################i    LG#########t ,######GL.   ,##########.                   ;tG########G:     *
*      G###########i:#############################G;    :LG######t ,###GG;    ,G#####GttG##,                   .tG#########i     *
*      G###########i:###############################Gt       fLLLi .f       ,G#######G  G##,                   :fG#########i     *
*      G###########i:##################################GL                fG##########G  G##,                   :jG#########i     *
*      G###########i:#####################################GGLti     jLGG#############G  G##,                   ;tG#########i     *
*      G###########i:############################################t ,#################G  G##:GGGGGGGGGGGGGGGGGGGGjG#########;     *
*      G###########i:############################################t ,#################G  G##:G########GG#########fG########G:     *
*      G###########i:############################################t ,#################G  G##,G########GG#########GG########G:     *
*      G###########i:############################################t ,#################G  G##,G########GG###################G      *
*      G###########i:############################################t ,#################G  G##,G########GG######GL###G.######G      *
*      f###########i:############################################t ,#################G  G##,G########GG######G.###G ######G      *
*      j###########i:##########Ljj###############################t ,#################G  G##,G########GG######G.###G #######      *
*      ;###########i:##########;  G##############################t ,#################G  G##,G########GG######G.###G ######G      *
*       ###########i:##########;  G##############################t ,#################GttG##;#########GG######G.###G ######f      *
*       ###########jt##########,  G##############################t ,#######################;#########GG######G.###G G#####i      *
*       G######################G: G##############################t ,#######################;#########GG######G.####  G####       *
*       L#######################: G##############################t ,#######################;#########GG######G.###G  G###G       *
*       ,#######################: G##############################t ,#######################;#########GG######G.###G  G###G       *
*       .#######################: G##############################t ,#######################;#########G G#####G.###G  G###t       *
*        G######################: G##########G;;;i###############t ,#######################;#########G G#####G.###G  G##G.       *
*        f######################: G##########G   :###############LfL#######################;#########G G#####G.###G  G##G        *
*         ######################: G##########G   :#########################################;#########G G#####G.###G  G##f        *
*         G#####################: G##########G   :#########################################;########LL G#####G.###G  G##         *
*         j#####################: G##########G   :#########################################;########   G#####G.###G  G#G         *
*          #####################: G##########G   :#########################################;########   G#####G.###G  G#i         *
*          G####################: G##########G   :#######################################f#;########   G#####G.###G  GG          *
*          ,G###################j ###########G   :#######################################i#;########   G#####G.###G  GL          *
*           L################################G   :##############G t#######G;;G###########i#;########   G#####G.###G  G.          *
*            ################################G   :##############G i#######G  G###########i#;########   G#####G.###G  .           *
*            L###############################G   :##############G i#######G  G###########i#;########   G#####G.###G              *
*             G############GGG###############G   :############### i#######G  G###########i#;########   G#####G.###G              *
*             L###########G   G##############G   :###############ti#######G  G####G######i#;########   G#####G.###G              *
*              G##########G   G##############G   :###GGLLLL######ti#######G  G###G.######i#;########   G#####G.###G              *
*              i##########G   G##############G   :###L     G#####ti#######G  G###G.######i#;########   G#####G.###L              *
*               G#########G   G##############G   :###L     G#####ti#######G  G###G.######i#;########   G#####G.##G               *
*                #########G   G##############G   :###L     G#####ti#######G  G###G.######i#;########   G#####G.##;               *
*                j########G   G#########jj###G   :###L     G#####ti#######G  G###G.######i#;########   G#####G.#L                *
*                 G#######G   G#########  G##G   :###L     G#####ti#######G  G##GG.######i#;########   G#####G.G                 *
*                  G######G   G#########  G##G   :###L     G#####ti############# G.######i#;########   G#####G .                 *
*                  .G#####G   G#########  G##G   :###L     G#####GG############# G.####G#i#;#####G:.   G#####G                   *
*                   ;#####G   G#########  G##G   :###L     G#################### G.####.Gi#;#####L     G#####L                   *
*                    G####G,,,G#########  G##G   :###L     G#################### G.#### Gi#;#####L     G####G                    *
*                     G#################  G##G   :###G:::    G##################.G.#### G:#;#####L     G###G                     *
*                      G################  G##G   :#######:   G########GGGGGG####.G.#### Gi#;#####L     G##G                      *
*                       G###############  G##G   :#######:   G########;    L####.GL#### GG#;#####L     G##                       *
*                        G##############  G##G   :#######: L G########j    G####.###### G##;#####L     GG                        *
*                         ##############  G##G   :#######: G G#######,.    G####.###### G##,G####L     G                         *
*                          G############  G##G   :#######: G G#######      G####.###### G##,G####L                               *
*                          G############  G##G   :#######: G G#######      iG###.######fG##,G####L                               *
*                          G############  G##G   :#######: G G#######      iG###.##########,G####L                               *
*                          G##:G########  G##G   :#######: G G#######      L####.##########,G####L                               *
*                          G##. ;G######  G###jjjf######f  G G#######    itG#### G#########,G####L                               *
*                          G##.   j#####  G#############i  G G#######    L######f##########;#####L                               *
*                          G##.     G###  G#############i  G G#######    L#################;#####L                               *
*                          G##.      .G#  G#############i  G G#######    L#################;#####L                               *
*                          G##.        :  G##############: G G#######    L################i G##G;                                *
*                          G##.           fG#############: G G####### .  L#############G;   #Gf                                  *
*                          G##.             iG###########: G G####### G, L##########Gt.     G                                    *
*                          L##.                fGG#######: G G####### G, L#######Gf:                                             *
*                           :G.                   ,G#####: G G####### G, L###GG;                                                 *
*                                                   #####: G G######G G, L###;                                                   *
*                                                   #####: G  ......  G, L###i                                                   *
*                                                   #####: G          G, G###i                                                   *
*                                                   #####GGG          G, G###i                                                   *
*                                                   #####,.:          G, G###i                                                   *
*                                                   #####:            G, G###i                                                   *
*                                                   #####:            G, G###i                                                   *
*                                                   #####:            G, GGGGi                                                   *
*                                                   #####:            G, G.                                                      *
*                                                   G####:            G, G.                                                      *
*                                                      G#:            G, G.                                                      *
*                                                      G#:            .  G.                                                      *
*                                                      GG:               G.                                                      *
*                                                                        G.                                                      *
*                                                                        G.                                                      *
*                                                                        G.                                                      *
*                                                                        G.                                                      *
*                                                                        G.                                                      *
*                                                                        G.                                                      *
*                                                                                                                                *
*                                                                                                                                *
*                                                                                                                                *
*                                                                                                                                *
*********************************************************************************************************************************/