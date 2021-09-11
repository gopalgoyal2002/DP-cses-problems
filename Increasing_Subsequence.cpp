#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int ind(ll val,vector<ll>&dp)
{
     ll start=0;
     ll end=dp.size()-1;
     ll mid;
     ll a;
     while(start<=end)
     {
         mid=(start+end)/2;
         if(dp[mid]==val)
         return mid;
         else if(dp[mid]>val)
         {
             end=mid-1;
             a=mid;
         }
         else{
             start=mid+1;
             
         }
     }
     return a;
}
int main()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    vector<ll>dp;
    dp.push_back(v[0]);
    for(ll i=1;i<n;i++)
    {
        if(dp[dp.size()-1]<v[i])
        {
            dp.push_back(v[i]);
            continue;
        }
        ll j=ind(v[i],dp);
        dp[j]=v[i];
        
    }
    cout<<dp.size()<<endl;
 
}