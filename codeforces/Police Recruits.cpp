#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll n;
cin>>n;
ll arr[n];
f(i,0,n,1)
cin>>arr[i];
ll pol=0,count=0;
f(i,0,n,1)
{
	if(arr[i]!=-1)
	pol+=arr[i];
	else if(pol>0 and arr[i]==-1)
	pol-=1;
	else
	count++;
}
cout<<count;
return 0;
}


