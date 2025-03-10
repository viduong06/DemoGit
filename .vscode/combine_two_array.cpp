#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main ()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	int cnt[100001]={0};
	for ( int i = 0; i < n; ++i)
	{
		cin>>a[i];
		cnt[a[i]]=-1;
	}
	for ( int i = 0; i < m; i++)
	{
		cin>>b[i];
		if(cnt[b[i]]==-1)
		{
			cnt[b[i]]=2;
		}
		else 
		{
			cnt[b[i]]=1;
		}
	}
    for ( int i = 0; i < m + n; i++)
    {
    	if ( cnt[i]!=0)
           cout<<i<<" ";
	}

}