// Lambda Function in C++

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={4,3,6,9,1,8};
	int n=sizeof(a)/sizeof(int);

	sort(a,a+n,[](int x, int y){return x > y;});
	// Sorting Array in Descending Order

	pair<int,int> Pair[5];
	for(int i=4;i>=0;i--)
		Pair[i]=make_pair(a[i],a[i]*a[i]);
	
	sort(Pair,Pair+5,[](pair<int,int> &p1, pair<int,int> &p2){return p1.first > p2.first;});
	// Sorting Pair on the Basis of Second Element

	for(int i=0;i<5;i++) cout<<Pair[i].first<<" "<<Pair[i].second<<"\n";

	return 0;
}