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
#define xorswap(&a,&b)
void xswap(int  *a, int *b)
{
  *a  = *a^*b;
  *b = *a^*b;
  *a = *a^*b;   	
}

int main()
{
   int a=5;
   int b=7;
   cout<<a<<" "<<b; 
   s(&a,&b);
   cout<<b<<" "<<a;
   return 0;
}


