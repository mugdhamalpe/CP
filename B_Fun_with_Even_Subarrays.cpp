#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t, n;
    cin >> t;
    while(t--){
        cin>>n;
        vector<ll> arr(n+1);
        for(ll i=1; i<=n; i++)
            cin>>arr[i];
        vector<ll> arrB = arr;
        reverse(arrB.begin()+1,arrB.end());
        ll result = 0, count = 1;
        while(count<n){
            if(arrB[count+1]==arrB[1]){
                count+=1;
                continue;
            }
            result+=1;
            count*=2;
        }
        cout<<result<<endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        // for(int i=0; i<n; i++){
        //     if(arr[i]==arr[i+1]){
        //         cout<<"0"<<endl;
        //     }
        // }
        ll l=-1;
        ll k=n-1;
        ll lastEle=arr[n-1];
        //int count=0;
        for(ll i=0; i<n; i++){
            if(arr[i]!=lastEle){
                l=i;
                break;
            }
        }
        if(l==1){
            cout<<"0"<<endl;
        }else{
            for(ll m=n-2; m>=0; m--){
                if(arr[m]!=lastEle){
                    k=m;
                    break;
                }
            }
            if(l==k){
                cout<<"1"<<endl;
            }
            ll last=n-k-1;
            ll begun=k-l+1;
            ll count=1;
            while (begun>last){
                count+=1;
                begun-=last;
                last*=2;
            }
            cout<<count<<endl;
        }
            // if(arr[i]==arr[i+k]){
            //     count=count;
            // }else{
            //     arr[l+k+i]=arr[l+i];
            //     count+=1;
            // }
        //cout<<count<<endl;
    }
    return 0;
}
*/