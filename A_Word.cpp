#include<bits/stdc++.h>

using namespace std;

int main() {
    char ip_string[100];
	cin>>ip_string;
    char charac;
	int upper_count=0,lower_count=0;

	for(int i=0;i<strlen(ip_string);i++){
	    if(isupper(ip_string[i])){
	        upper_count++;
	    }else if((islower(ip_string[i]))){
	        lower_count++;
	    }
	}

	if(upper_count>lower_count){
	    for(int i=0;i<strlen(ip_string);i++){
	        charac=toupper(ip_string[i]);
	        cout<<charac;
	    }
	}else{
	    for(int i=0;i<strlen(ip_string);i++){
	        charac=tolower(ip_string[i]);
	        cout<<charac;
	    }
	}
	return 0;
}


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     string ip_string;
//     cin>>ip_string;
//     int upper_count=0;
//     int lower_count=0;
//     for(int i=0; i<ip_string.size(); i++){
//         if(isupper(ip_string[i])){
//             upper_count+=1;
//         }
//         else{
//             lower_count+=1;
//         }
//     }
//     if(upper_count>lower_count){
//         char charac;
//         for(int i; i<ip_string.size(); i++){
//             charac=toupper(ip_string[i]);
//             cout<<charac;
//             // cout<<ip_string[i]-32;
//         }
//     }else{
//         for(int i; i<ip_string.size(); i++){
//             char charac;
//             charac=tolower(ip_string[i]);
//             cout<<charac;
//             //cout<<ip_string[i]+32;
//         }
//     }

//     return 0;
// }