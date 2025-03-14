#include<bits/stdc++.h>
using namespace std;
bool cmp(pair < int, int>a, pair < int , int > b)
{
    return a.second < b.second;
}
int main(){
    int n;
    cin>>n;
    pair< int, int > tourDates[n];
    for( int i = 0; i < n; i++)
    {
        cin>>tourDates[i].first>>tourDates[i].second;
    }
    sort(tourDates, tourDates + n, cmp);
    int count=1;
    int end_date=tourDates[0].second;
    for( int j = 1; j < n; ++j)
    {
        if(tourDates[j].first > end_date)
        {
            count++;
            end_date=tourDates[j].second;
        }
    }
    cout<<count;
}