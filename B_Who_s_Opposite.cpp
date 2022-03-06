#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
	cin >> t;
	while (t--){
		ll a, b, c;
		cin >> a >> b >> c;

		ll n = 2*abs(a - b);
		if (a > n || b > n || c > n){
            cout << "-1" << endl;
        }
		else{
			ll res = n / 2 + c;
			while (res > n) {
                res -= n;
            }
			cout << res << endl;
		}
	}
    return 0;
}