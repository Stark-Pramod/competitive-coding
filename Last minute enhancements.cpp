#include<bits/stdc++.h>
using namespace std;
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
	int t;
	cin>>t; while(t--){
		ll n;
		cin>>n;
		set<int> s;
		ll arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=n-1;i>=0;i--)
		{
			if(s.find(arr[i]+1) == s.end())
			s.insert(arr[i]+1);
			else
			s.insert(arr[i]);
		}
		cout<<s.size()<<"\n";
	}
return 0;
}

