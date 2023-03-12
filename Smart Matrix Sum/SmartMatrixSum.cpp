#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sci(n) scanf("%d", &n)
#define sccl(l)    scanf("%lld",&l)
#define scs(s)    scanf("%s",s)
#define pri(x)    printf("%d\n",x)
#define prl(x)    printf("%lld\n",x)
#define prs(s)    printf("%s\n",s)
#define debug(x) cout<< #x <<" = "<<x<<endl



typedef vector< int > vi;
typedef vector< char > vc;
typedef vector< string > vs;
typedef vector< ll > vll;
typedef vector< float > vf;
typedef vector< vi > vvi;
typedef vector< vll > vvll;


const int m = 3e5;

int cal(int n){
    int ans = 0, i = 2;
    for(;i*i < n;i++)
        if(n%i == 0)ans+=2;
    if((i)*(i) == n)ans++;
    // debug(ans);
    return ans;
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int sum = 1;
        int newn = 2;
        // int nn = 1;
        int ans = 1;
        while(newn <= n){
            ans += (2 + cal(newn));
            // debug(ans);
            sum += ans;
            newn++;

        }
        cout<<sum<<endl;
        


    }

}
