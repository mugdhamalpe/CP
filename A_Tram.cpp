#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int left_ppl=0;
    int ppl=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        ppl-=a;
        ppl+=b;
        left_ppl=max(left_ppl,ppl);

    }
    cout<<left_ppl;

	return 0;
}