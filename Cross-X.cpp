// CROSS 'X'

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n=11;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==i or j==abs(n-i-1))
				cout<<"*";
			else cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}