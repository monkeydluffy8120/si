#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],sum = 0,ans=0;
        unordered_map<int, int> m;
        m[0]=-1;
        
        for(int i = 0;i < n;i++){
            cin>>a[i];
            if(a[i]==0)
                {sum--;}
            else if(a[i]==1)
                {sum++;}
            
            if(m.find(sum) != m.end()){
                ans = max(ans, i-m[sum]);
            }
            else{
                m[sum] = i;
            }
        }
        m.clear();
        
        
        cout<<ans<<endl;
    }
    return 0;
}
