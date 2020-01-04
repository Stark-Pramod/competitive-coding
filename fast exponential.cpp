#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int fastexpo(int a,int b,int m)
{
	int res=1;
	while(b>0)
	{
		if(b&1)
		res=(res*a)%m;
		a=(a*a)%m;
		b=b>>1;
	}
	return res;
}
int main()
{
int a,b,m;
cin>>a>>b>>m;
cout<<fastexpo(a,b,m);
return 0;
}

