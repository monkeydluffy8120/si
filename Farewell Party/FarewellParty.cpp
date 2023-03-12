#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(86401,0);
        for(int i = 0;i < n;i++){
            int t1, t2;
            cin>>t1>>t2;
            a[t1]++;
            if(t2+1 < 86401)
                a[t2+1] -= 1;
        }
        for(int i = 1;i< 86401;i++){
            a[i] += a[i-1];
        }
        
        cout<<*max_element(a.begin(), a.end())<<endl;
        
        
    }
    return 0;
}
