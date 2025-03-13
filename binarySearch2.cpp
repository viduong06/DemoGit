#include<bits/stdc++.h>
using namespace std;
// tim kiem phan tu dau tien > x nam trong mang duoc sap xep tang dan;
//lower_bound: tim vi tri dau tien cua phan tu >= x trong mang, vector tang dan
// upper_bound: tim vi tri dau tien cua phan tu > x trong mang, vector tang dan
// neu khong tim thay phan tu > x ( >= x) thi no se tra ve a+n, a.end()
int firstN(int a[], int n, int x)
{
    int left=0;
    int res=-1;
    int right=n-1;
    while(left <= right)
   {
      int mid=(right+left)/2;
      if(a[mid]>x)
      {
        right=mid-1;
        res=mid;
      }
      else
      {
        left=mid+1;
      }
   }
   return res;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for( int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<firstN(a,n,x);
}