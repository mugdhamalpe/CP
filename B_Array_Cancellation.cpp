#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        ll count = 0;
		for (int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]>0){
                count+=arr[i];
            }else{
                count-=min(count, abs(arr[i]));
            }
		}
		cout<<count<<endl;
    }
    return 0;
}