#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> vecu;
	for (int i=0; i<n; i++) {
		int arr[n];
		cin>>arr[i];
		if (find(vecu.begin(), vecu.end(), arr[i]) == vecu.end())//id not found
        {
			if (int(vecu.size())>=k){
                vecu.pop_back();
            }
			vecu.insert(vecu.begin(), arr[i]);
		}
	}
	cout<<vecu.size()<<endl;
	for(auto ele: vecu){
        cout<<ele<< " ";
    }cout<<endl;
    return 0;
}

//find-Returns an iterator to the first element in the range [first,last) that compares equal to val. If no such element is found, the function returns last.