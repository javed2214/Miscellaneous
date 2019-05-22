// Program to Check whether the Number is Automorphic or Not
// An automorphic number is a number whose square ends with the number itself.
// Eg: 25 -> 625

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int x=n*n;

	while(n){
		if(n%10 != x%10){
			cout<<"No";
			return 0;
		}
		n/=10;
		x/=10;
	}
	cout<<"Yes";

	return 0;
}