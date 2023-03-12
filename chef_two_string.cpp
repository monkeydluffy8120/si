#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        int len=a.length();
        int max=0,min=0;
        for(int i=0;i<len;i++){
            if(a[i]==b[i] && a[i]!='?' && b[i]!='?'){
                max++;
                }
            if(a[i]!=b[i] && a[i]!='?' && b[i]!='?')
                min++;
        }
        cout<<min<<" "<<a.length()-max<<endl;
    }
}