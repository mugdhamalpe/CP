#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll h, l, result;
    cin>>h>>l;
    cout<<fixed << setprecision(13)<<(((l*l)-(h*h))/(2.0*h));
    return 0;
}