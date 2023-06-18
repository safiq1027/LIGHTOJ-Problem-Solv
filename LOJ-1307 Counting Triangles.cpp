#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int cs=1;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n+10];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int sum,ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum=a[i]+a[j];
                int ind=upper_bound(a,a+n,sum-1)-a;
                ind--;
                if(ind>j){
                    ans+=ind-j;
                }


            }
        }
        cout<<"Case "<<cs<<": "<<ans<<endl;
        cs++;
    }

    return 0;
}

