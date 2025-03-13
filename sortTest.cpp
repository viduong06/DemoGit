#include<iostream>
#include<algorithm>
#include<iomanip>
#include<set>
#include<vector>
using namespace std;
int tongChuSo(int n)
{
    int res=0;
    while (n!=0)
    {
        res+=n%10;
        n/=10;
    }
    return res;
}
bool cmp( int a, int b)
{
    if( tongChuSo(a)<tongChuSo(b))
    {
        return true;
    }
    else if( tongChuSo(a)==tongChuSo(b))
    {
        if (a < b)
        {
            return a < b;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    
     int n;
     cin>>n;
    // set < int > a;
    // for ( int i = 0; i < n; i++)
    // { 
    //     int x;
    //     cin>>x;
    //     a.insert(x);
    // }
    // for ( auto it : a)
    // {
    //     cout<<it<<" ";
    // }
    vector < int > a(n);
    for ( int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(begin(a),end(a),cmp); 
    for ( auto it : a)
    {
        cout<<it<<" ";
    }


}

