#include<bits/stdc++.h>
using namespace std;
bool check_prime(int a){
    for(int i=2;i<=a/2;i++){
        if(a%i==0)
            return false;
    }
    return true;
}
int find_z(int sum){
    int a=sum+1;
    bool ch=check_prime(a);
    if(ch)
        return (a);
    else
       return find_z(sum+1);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int sum=x+y;
        cout<<find_z(sum)-sum<<endl;
    }
    return 0;
    
}