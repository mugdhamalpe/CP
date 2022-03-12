#include <bits/stdc++.h>

using namespace std;
/*
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define for1(i, n) for(int i = 1; i <= int(n); ++i)
#define ford(i, n) for(int i = int(n) - 1; i >= 0; --i)
#define fore(i, l, r) for(int i = int(l); i < int(r); ++i)
#define forit(i, v) for(typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define X first
#define Y second
#define mp make_pair
template<typename T> inline T abs(T a){ return ((a < 0) ? -a : a); }
template<typename T> inline T sqr(T a){ return a * a; }
 
typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;
 
const int INF = (int)1E9 + 7;
const ld EPS = 1E-9;
const ld PI = 3.1415926535897932384626433832795;
*/

using namespace std;
 
#define FOREACH(i, c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
#define FORE(i, a, n) for (i = (a); i < (int)(n); ++i)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
#define ll long long
#define pb push_back
#define error(x) cout << #x << " = " << (x) << endl;
#define ull unsigned long long
#define pii pair<int, int>
//#define pii pair<ll, ll>
#define pll pair<ll, ll>
#define pdd pair<double, double>
#define point complex<double>
#define X real()
#define Y imag()
//#define X first
//#define Y second
#define EPS 1e-10
//#define endl "\n"
#define pdd pair<double, double>
#define mk make_pair








#include <bits/stdc++.h>
using namespace std;
//--------------------------------------------------
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define ld long double
#define ull= unsigned long long;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

//-------------------CONSTANTS-------------------
const ld pi= 3.141592653589793238;
const ll INF= LLONG_MAX;
const ll mod=1e9+7;

//-------------------DEFINE-------------------
#define forn(n) for (int i = 0; i < n; i++)
#define fora(i, a, n) for (int i = a; i < n; i++)
#define foral(i, a, n) for (ll i = a; i < n; i++)
#define rep(i, a, n) for (int i = a; i > 0; i--)
#define repl(i, a, n) for (ll i = a; i > 0; i--)
 
#define t     \
    ll x;     \
    cin >> x; \
    while (x--) // use curly braces
#define endl '\n'
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).begin(), (c).end(), greater<int>()
#define oset tree<int, null_type, less, rb_tree_tag, tree_order_statistics_node_update>
#define br " " // space abbr
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define inf INT_MAX;
#define neginf INT_MIN;
#define input(a) cin >> a;                                       // single input abbr
#define input2(a, b) cin >> a >> b;                              //...
#define input3(a, b, c) cin >> a >> b >> c;                      //...
#define input4(a, b, c, d) cin >> a >> b >> c >> d;              //...
#define print(a) cout << a << endl;                              // set output
#define print2(a, b) cout << a << br << b << endl;               //...
#define print3(a, b, c) cout << a << br << b << br << c << endl; //...

//-------------------TYPEDEFS-------------------
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
typedef vector<int> vecu;
typedef vector<long long> vll;
typedef vector<pair<long, long>> vpll;
typedef vector<pair<int, int>> vpii;
 
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef set<int> si;
typedef set<long long> sll;
typedef set<string> ss;
#include <unordered_set>
typedef unordered_set<int> usi;
typedef unordered_set<string> uss;

//-----------------------------------------------------------------
 
// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// Utility functions
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
template<typename T>
void printvec(vector<T>v){ll n=v.size();fl(i,n)cout<<v[i]<<" ";cout<<"\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;fl(i,n)s+=v[i];return s;}

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
 
//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
 
//Check
bool isPrime(ll n){if(n==1)return true;if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

int getmx(vector<int> &vec) { return *max_element(all(vec)); }
int getmn(vector<int> &vec) { return *min_element(all(vec)); }
int mnind(vector<int> &vec) { return min_element(all(vec)) - vec.begin(); }
int mxind(vector<int> &vec) { return max_element(all(vec)) - vec.begin(); }
// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

//--------------------------------------------------------------------------------------------------------------------------