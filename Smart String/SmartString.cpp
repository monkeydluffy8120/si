#include<bits/stdc++.h>
using namespace std;

bool isSmart(string s){
	set<char> chars;
	int len = s.size();

	for(int i = 0;i < len;i++){
		chars.insert(s[i]);
	}

	if(chars.size() == 26)return true;
	return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    	string s;
    	cin>>s;
    	if(isSmart(s))
    		cout<<"True"<<endl;
    	else
    		cout<<"False"<<endl;

    }
}