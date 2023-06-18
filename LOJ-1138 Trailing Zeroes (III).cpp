#include<bits/stdc++.h>
using namespace std;
 const long long LIMIT=1e18;
 long long trailingZero(long long number){
     long long trailingZero=0;
     for(long long i=5;i<=number;i*=5){
        trailingZero+=number/i;
     }
     return trailingZero;
 }
 int main()
 {
     int tc;
     cin>>tc;
     int cs=1;
     while(tc--)
     {
         long long requiredZero;
         cin>>requiredZero;
         long long lo=1,hi=LIMIT,ans=-1;
         while(lo<=hi){
            long long mid=(lo+hi)/2;
            long long tzero=trailingZero(mid);
            if(tzero<requiredZero){
                lo=mid+1;
            }
            else if(tzero>requiredZero){
                hi=mid-1;
            }
            else
            {
                ans=mid;
                hi=mid-1;
            }
         }
          if(ans==-1){
            cout<<"Case "<<cs<<": "<<"impossible"<<endl;
            cs++;
        }
        else
        {
            cout<<"Case "<<cs<<": "<<ans<<endl;
            cs++;
        }
     }
     return 0;

 }

