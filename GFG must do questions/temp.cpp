#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second


class ShamirSecret {
	ll secret;
	ll N;
	ll K;
	vector<pair<ll,ll>> points;
	public:
		ShamirSecret(ll secret) //constructor to initialize the values;
		{
			this->secret = secret;
			this->N = 4;
			this->K = 2;
		}
		
		ll Equation(ll a,ll b,ll x) 
		{
			// solving for f(x) = a + bx; for K = 2 we can construction linear equation i.e K-1
			return a + b * x;
		}
		
		void FindPoints() // calculating shares
		{
			// in y = a + bx 
			// a = secret
			// b = random value;
			// x = random point;
			ll b = rand()%100; 
			for(ll i=0;i<N;i++) // generating N = 4 points i.e shares
			{
			ll x = rand()%100;
			ll y = Equation(secret, b, x);
			points.pb({x,y});
			}
		}	
		
		bool CheckThreshold() // Accepting M points from user to check whether threshold shares are available or not
		{
			ll m;
			cin>>m;
			if(m < K)
			{
				return 0;
			}
			return 1;
		}
	
		ll RestoreSecret()
		{
			// the orginal secret can be restored from minimum K points using Lagrange Polinomial
			// lets say share1 and share4 be the restoring share as K=2;
			pair<ll,ll> p1 = points[0]; 
			pair<ll,ll> p2 = points[3];
			// To check whether the secret is restored or not follow the below algo
			// f(x) be the polynomial generated by us above
			// g(x) be the Lagrange Polynomial
			// there for incase of successful restoration f(0) == g(0) holds true as the constant term remains and that was the secret in f(x) = a + bx i.e a
			// so in equation we will keep x = 0;
			float rest_secret = 0;
			rest_secret = p1.second * (-1.0 * p2.first) / (p1.first - p2.first) + p2.second * (-1.0 * p1.first) / (p2.first - p1.first);
			if((long long int)(rest_secret) == secret)
			return secret;
			else
			return -1; 
		}	
};

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int secret; 		// accepting the byte array
cin>>secret;
ShamirSecret s(secret);		//creating object	
s.FindPoints();				// share calculation
if(!s.CheckThreshold())    // accepts a value M to check whether threshold exists or not
{
	cout<<"Not Sufficient Shares available\n";
}
else
{ 
	ll rest_secret = s.RestoreSecret();  //restoring the secret
	if(rest_secret == -1)
	cout<<"Some Error Occured\n";
	else
	cout<<rest_secret<<'\n';	
}

return 0;
}


