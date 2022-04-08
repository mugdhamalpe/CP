#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int soda=(k*l)/(nl); 
    int limes=(c*d); 
    int res1=min(soda, limes);
    int salt=p/(np); 
    int res2=min(res1, salt);
    cout<<res2/n<<endl;
    return 0;
}