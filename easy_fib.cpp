#include<iostream>
using namespace std;
int fib(long long int n)
{
    long long int a[n];
    a[0]=0;
    a[1]=1;
    for(long long int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        if(a[i]>=10) a[i]=a[i]%10;
    }
    return a[n-1];
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    long long int n;
    cin>>n;
    if(n==1) 
        cout<<"0"<<endl;
    else if(n==2) 
        cout<<"1"<<endl;
    else{
        long long int j=2;
        while(n>=2*j){
            j=2*j;
        }
        int y=j%60;
        int c=fib(y);
        cout<<c<<endl;
        }
    }
    return 0;
}