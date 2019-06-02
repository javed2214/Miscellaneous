// Unique Elements

#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> v={4,3,5,5,7,8,8,9,1,2,9,6,6};

	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());

	for(auto it:v) cout<<it<<" ";
}