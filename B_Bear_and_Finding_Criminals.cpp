#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, a;
	cin>>n>>a;
    int arr[1005];
	for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
	int count = 0;
	for(int i =1; i<=n; i++) {
        if(arr[i]){
            int dist=i-a;
            int othercity=a-dist;
            if(othercity<1 || othercity>n || arr[i]==arr[othercity]){
                count+=1;
            }
        }
    }
	cout<<count<<endl;
	return 0;
}