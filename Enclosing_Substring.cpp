#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int,int> m;
    map<int,int> m1;
    int n,x,y,z ;
    string a,b ;
    scanf("%d",&n) ;
    for(x=0;x<n;x++)
    {
        m.clear() ;
        m1.clear() ;
        a.clear() ;
        b.clear() ;
        cin>>b ;
        cin>>a ;
        int i=0,n1=a.length(),n2=b.length(),st=-1,end=-1,mn=INT_MAX;
        for(i=0;i<n2;i++)
        {
            m1[b[i]]++;
        }
            int j=0,count=0;
            i=0;
            while(j<n1)
            {
                m[a[j]]++;
                if(m1[a[j]]>=m[a[j]])
                {
                    count++;
                }
                if(count==n2)
                {
                    if((j-i+1)<mn)
                    {
                        mn=j-i+1;
                        st=i;
                        end=j;
                    }
                    while(i<=j)
                    {
                        m[a[i]]--;
                        if(m[a[i]]<m1[a[i]]){
                        // cout<<"i is “<<i<<” j is "<<j<<endl;
                        if((j-i+1)<mn)
                        {
                            mn=j-i+1;
                            st=i;
                            end=j;
                        }
                        i++;
                        count--;
                        break;
                    }
                    i++;
                }
            }
            j++;
            }
            if(n2==1)
            {
                if(end==st)
                printf("1\n") ;
                else
                    printf("-1\n") ;
            }
            else if(end==st)
            {
                printf("-1\n") ;
            }
            else
            {
                printf("%d\n",end-st+1) ;
            }
        }
        return 0;
}


