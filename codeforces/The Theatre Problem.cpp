#include<bits/stdc++.h>
using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "
#define mod 1000000007

ll exp(ll a, ll b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll r = pow(a,b/2);
	if(b&1)
	return r*a*r;
	return r*r;
}
// template ends here

int main()
{
	ll T;
	cin>>T;
	ll tp = 0;
	while(T--)
	{
		map<pair<char,ll>,ll> m;
		ll n;
		cin>>n;
		char s; ll t;
		for(int j=0;j<n;j++)
		{
			cin>>s>>t;
			m[{s,t}]++;
		}
		map<pair<char,ll>, ll>::iterator i; 
		multimap<ll,pair<char,ll>,greater<int>> nm;
		ll maxA=0,maxB=0,maxC=0,maxD=0,tm=0;
		for(i=m.begin();i!=m.end();i++)
		{
			nm.insert( mp(i->second,mp(i->first.first,i->first.second)));
		}
		multimap<ll,pair<char,ll>>:: iterator j;
		for(j=nm.begin();j!=nm.end();j++)
		{
			cout<<j->first<<" "<<j->second.first<<" "<<j->second.second<<"\n";
		}
		for(j=nm.begin();j!=nm.end();j++)
		{
			
		}
	}
	
		
	return 0;
}
