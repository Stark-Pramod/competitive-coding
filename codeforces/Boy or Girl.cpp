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
string s;
cin>>s;
set<char> st;
f(i,0,s.length(),1)
{
	st.insert(s[i]);
}
if(st.size()&1)
cout<<"IGNORE HIM!";
else
cout<<"CHAT WITH HER!";
return 0;
}


