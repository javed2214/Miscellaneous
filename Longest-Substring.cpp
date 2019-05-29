// Length of Longest Substring Without Repeating Characters

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="aabcdee";
	int n=str.length();

	unordered_map <char,int> Map;
	int start=0,mx=-1;

	for(int i=0;i<n;i++){
		char ch=str[i];
		if(Map.find(ch) != Map.end() and Map[ch] >= start)
			start = Map[ch] + 1;
		Map[ch]=i;
		mx=max(mx,i-start+1);
	}
	cout<<mx;

	return 0;
}