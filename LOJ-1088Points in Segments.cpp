#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int r=tc;
    while(tc--)
    {
        int n,q;
        cin>>n>>q;
        int a[n+10];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Case "<<r-tc<<": "<<endl;
       while(q--)
       {
           int l,r,ans;
           cin>>l>>r;
           /*
           for(int i=0;i<n;i++){
                if(a[i]>=b&&a[i]<=c){
                    cont++;
                }
           }
           */
           int ub=upper_bound(a,a+n,r)-a;
           int lb=lower_bound(a,a+n,l)-a;
           ans=ub-lb;

           cout<<ans<<endl;

       }

    }

    return 0;
}

