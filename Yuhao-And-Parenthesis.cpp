// Yuhao and Parenthesis
// https://codeforces.com/contest/1097/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 100005

ll xx1[MX],xx2[MX];

int main(){

	ll n;
	cin>>n;
	string str;
	for(ll i=0;i<n;i++){
		cin>>str;
		ll b=0,m=0;
		for(ll j=0;j<str.length();j++){
			if(str[j]=='(') b++;
			else b--;
			if(m>b) m=b;
		}
		if(m==0) xx1[b]++;
		if(m==b) xx2[-b]++;
	}
	ll ans=xx1[0]/2;
	for(ll i=1;i<MX;i++)
		ans+=min(xx1[i],xx2[i]);

	cout<<ans;

	return 0;
}