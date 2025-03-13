#include<bits/stdc++.h>
using namespace std;
int firstN( int a[], int n, int x)
{
    int left=0;
    int right = n-1;
    int res=-1;
    while( left <= right)
    { 
        int mid = left+(right - left)/2;
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
            right = mid - 1; 
            res=mid;
        } 
    }
    return res;
}
int lastN( int a[], int n, int x)
{
    int left=0;
    int right = n-1;
    int res=-1;
    while( left <= right)
    { 
        int mid = left+(right - left)/2;
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
int lowerBound( int a[], int n, int x)
{
    int left=0;
    int right = n-1;
    int res=-1;
    while( left <= right)
    { 
        int mid = left+(right - left)/2;
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
int upperBound( int a[], int n, int x)
{
    int left=0;
    int right = n-1;
    int res=-1;
    while( left <= right)
    { 
        int mid = left+(right - left)/2;
        if(a[mid] <= x)
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
    cout<<"first index found x: "<<firstN(a,n,x)<<endl;
    cout<<"last index found x: "<<lastN(a,n,x)<<endl;
    cout<<"first index found num >= x: "<<lowerBound(a,n,x)<<endl;
    cout<<"first index found num > x: "<<upperBound(a,n,x)<<endl;
    int frequency= lastN(a,n,x)-firstN(a,n,x)+1;
    if( frequency == 0)
    {
        cout<<"-1";
    }
    else {
        cout<<"appearance frequency: "<<frequency;
    }
}