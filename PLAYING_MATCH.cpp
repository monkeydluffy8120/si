#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int no[10]={6,2,5,5,4,5,6,3,7,6};
        int a,b;
        cin>>a>>b;
        int c=a+b,count=0;
        while(c!=0){
            count+=no[c%10];
            c/=10;
        }
        cout<<count<<endl;
    }
    return 0;
}