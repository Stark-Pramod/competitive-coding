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

ll nc2(ll n)
{
    return n * (n-1) / 2;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t; cin>>t; while(t--){
    ll a,b,k,x;
    cin>>a>>b>>k;
    set<ll> by,gl;
    fi(i,0,k,1)
    {
        cin>>x;
        by.insert(x);
    }
    fi(i,0,k,1)
    {
        cin>>x;
        gl.insert(x);
    }
    ll tot = min(by.size(),gl.size());

    ll ans = tot * (tot - 1) / 2;
    cout<<ans<<"\n";

}
return 0;
}





