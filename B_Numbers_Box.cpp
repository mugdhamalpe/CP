#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,count=0, mini=10000;
		cin>>n>>m;
		int arr[n][m];
		ll res=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j]<0)
					count++;
				mini=min(mini,abs(arr[i][j]));
                //cout<<mi<<endl;
				res+=abs(arr[i][j]);
			}
		}
        //cout<<s<<endl;
        // cout<<res-2*mini<<endl;
        if(count%2==0){
            cout<<res<<endl;
        }
		else{
            cout<<res-2*mini<<endl;
        }
	}
    return 0;
}