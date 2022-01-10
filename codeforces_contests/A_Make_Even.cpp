/*
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int getSum(ll n){
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int countDigit(ll n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int evenDigit(ll n){
    int even_count=0;
    while(n!=0){
        n=n/10;
        if(n%2==0){
            even_count++;
            break;
        }
    }
    return even_count;
}

int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main(){
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            cout<<"0"<<endl;
        }
        ll total=getSum(n);
        ll n_len=countDigit(n);
        ll even_no = evenDigit(n);
        ll reverse_num = reversDigits(n);
        // ll remain = total%4;
        // if(remain==0){
        //     cout<<"0"<<endl;
        // }else if(n_len==1 && n_len%2!=0){
        //     cout<<"-1"<<endl;
        // }
        // else{
        //     cout<<remain<<endl;
        // }
        if(reverse_num%2==0){
            cout<<"1"<<endl;
        }else if(even_no>=1){
            cout<<"2"<<endl;
        }else if(even_no==0){
            cout<<"-1"<<endl;
        }
    }
    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    string n;
    while(t--){
        cin>>n;
        int even_last = n[n.size()-1]; //if last digit is even -> do nothing -> ans=0
        int even_first=n[0]; //if first digit is even -> reverse once -> ans=1
        if(even_last%2==0){
            cout<<"0"<<endl;
        }else if(even_first%2==0){
            cout<<"1"<<endl;
        }
        //if even digit is between first and last(not inclusive) -> first bring that even digit to first place -> then reverse -> ans=2
        else{
            int even_count=0;
            for(int i=1; i<n.size()-1; i++){
                if(n[i]%2==0){
                    even_count+=1;
                    break;
                }
            }
            if(even_count>0){
                cout<<"2"<<endl;
            }
            //if even_count=0 i.e. the number doesn't contain any even no, then it cannot be made even -> ans= -1
            else{
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}

