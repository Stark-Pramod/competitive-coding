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
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "

int main()
{
   ll t;
   cin>>t;
   while(t--)
  {
  	string s;
  	cin>>s;ll count=0;
 	int flag=0;
  	fi(i,0,s.length(),1)
  	{
  		if(s[i]==s[i+1] and s[i]!='?')
  		{
  			flag=1;
  			break;
	  	 }
	  }
	  if(flag==1)
	  cout<<"-1"<<"\n";
	  else 
	  {
	  	fi(i,0,s.length(),1)
 	 	if(s[i]=='?')
 	 	{
 	 		if(s[i-1]!='a' and s[i+1]!='a')
 	 		s[i]='a';
 	 		else if(s[i-1]!='b' and s[i+1]!='b')
 	 		s[i]='b';
 	 		else if(s[i-1]!='c' and s[i+1]!='c')
 	 		s[i]='c';
		  }
		cout<<s<<"\n";  
	  }
  }
return 0;
}


