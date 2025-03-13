#include<bits/stdc++.h>
using namespace std;
int firstN( int a[], int n, int x)
{
    int left=0;
    int right = n-1;
    while( left <= right)
    { 
        int mid = (left + right)/2;
        if(a[mid] < x)
        {
            left= mid + 1;
        }
        else if ( a[mid] > x)
        {
            right = mid - 1;
        }
        else 
        {
            return mid;
        } 
    }
    return -1;
}
int lastN( int a[], int n, int x)
{
    int left=0;
    int right = n-1;
    int res=-1;
    while( left <= right)
    { 
        int mid = (left + right)/2;
        if(a[mid] < x)
        {
            left= mid + 1;
        }
        else if ( a[mid] > x)
        {
            right = mid - 1;
        }
        else
        {
            res=mid;
            left = mid + 1;
        } 
    }
    return res;
}
int upperN( int a[], int n, int x)
{
    int left=0;
    int right = n-1;
    int res=-1;
    while( left <= right)
    { 
        int mid = (left + right)/2;
        if(a[mid] < x)
        {
            left= mid + 1;
        }
        else if ( a[mid] >= x)
        {
            right = mid - 1;
            res=mid;
        }
    }
    return res;
}
int upperN2( int a[], int n, int x)
{
    int left=0;
    int right = n-1;
    int res=-1;
    while( left <= right)
    { 
        int mid = (left + right)/2;
        if(a[mid] < x)
        {
            left= mid + 1;
        }
        else if ( a[mid] > x)
        {
            right = mid - 1;
            res=mid;
        }
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for( int i =0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<firstN(a,n,x)<<endl;
    cout<<lastN(a,n,x)<<endl;
    cout<<upperN(a,n,x)<<endl;
    cout<<upperN2(a,n,x)<<endl;
    int frequency= lastN(a,n,x)-firstN(a,n,x);
    cout<<frequency<<endl;
}