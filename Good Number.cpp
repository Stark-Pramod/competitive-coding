#include<iostream>
using namespace std;
 
int n,k,c[10];
string s;
int main(){
	cin>>n>>k;
	int t=0;
	for (int i=0;i<n;i++){
		cin>>s;
		int b=1;
		for (int j=0;j<10;j++) c[j]=0;
		for (int j=0;j<s.length();j++) c[s[j]-'0']=1;
		for (int j=0;j<=k;j++)
			if (!c[j]){
				b=0;
				break;
			}
		t=t+b;
 
	}
	cout<<t<<endl;
	return 0;
}
