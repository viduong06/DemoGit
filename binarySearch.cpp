#include<bits/stdc++.h>
using namespace std;
bool cmp( pair<int, int> a, pair<int, int > b)
{
     if(a.second != b.second)
     {
     	return a.second > b.second;
	 }
   else return a.first < b.first;
}

int main()
{
	map < int, int> printX;
	int n;
	cin>>n;
	vector < int> a(n);
	for ( int i = 0; i < n; i++)
	{
		cin>>a[i];
		printX[a[i]]++;
	}
	vector < pair< int, int> > v(printX.begin(), printX.end());
	sort(v.begin(), v.end(),cmp);
    for ( auto it : v)
    {
    	cout<<it.first<<" "<<it.second<<endl;
	}
	
	
}