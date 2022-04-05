#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string a = "";
    string ra = "";
    int ans1 = 0, ans2 = n, l = 0;
    int k1 = 0;
    bool f = 1;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            k1++;
        } else {
            k1--;
        }
        if(k1 < 0)
            f = 0;
        a += s[i];
        ra = s[i] + ra;
        if((a == ra && a.size() >= 2) || (k1 == 0 && f)) {
            ans1++;
            ans2 -= i - l + 1;
            l = i + 1;
            a.clear();
            ra.clear();
            f = 1;
            k1 = 0;
        }
    }
    cout << ans1 << ' ' << ans2 << endl;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}