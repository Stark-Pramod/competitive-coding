	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long
	#define ull unsigned long long
	#define rs reserve
	#define pb push_back
	#define mp make_pair
	#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
	#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
	#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
	#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
	#define itr(i,ar) for(auto &i:ar)
	#define show(ar) for(auto &i:ar) cout<<i<<" "
	
	int main()
	{
		string s1,s2;
		cin>>s1>>s2;
		if(s1==s2)
		cout<<-1;
		else
		cout<<max(s1.length(),s2.length());
	return 0;
	}
	

