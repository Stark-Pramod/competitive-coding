#include<bits/stdc++.h>

using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t; cin>>t; while(t--)
{
   ll n,m;
   cin>>n>>m;
   vector<ll> k(n),c(m);
   fi(i,0,n,1)
   cin>>k[i];
   fi(i,0,m,1)
   cin>>c[i];
   ll ans = 0;
   sort(k.begin(),k.end(),greater<ll>());
   ll ind = 0;
   for(int i=0;i<n and ind < n;i++)
   {
       if(c[k[i] - 1] > c[ind])
       {
           ans+=c[ind];
           ind++;
       }
       else
       ans+=c[k[i] - 1];
   }
   cout<<ans<<"\n";
}
return 0;
}





