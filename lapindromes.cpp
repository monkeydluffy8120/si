#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
	    cin >> str;
	    int len=str.length();
	    int flag=0;
	    string f,b;
	    if(len%2==0){
	        f=str.substr(0,len/2);
	        b=str.substr(len/2,len-1);
	        sort(f.begin(),f.end());
	        sort(b.begin(),b.end());
	        if(f==b){
	            flag=1;
	        }
	    }
	    else{
	        f=str.substr(0,len/2);
	        b=str.substr(len/2+1,len-1);
	        sort(f.begin(),f.end());
	        sort(b.begin(),b.end());
	        if(f==b){
	            flag=1;
	        }
	    }
	    if(flag==1)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
    return 0;
}