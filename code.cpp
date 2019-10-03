#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int cnt[500000];
	int N,Q;
	string S;
	cin>>N;
	cin>>S;
	cin>>Q;
	int i;	
	map<char,int>mp;	
	for(i=0;i<N;i++)
	{ 
	    cnt[i]=mp[S[i]];
	    mp[S[i]]++;
	} 
	for(i=0;i<Q;i++)
	{
	    int X;
		cin>>X;
	    cout<<cnt[X-1]<<'\n';
	} 
}
