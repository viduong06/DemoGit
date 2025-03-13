#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
using ll= long long;
int main()
{
    // map.erase():logN
    // map.find():logN
    // map.insert:logN
    // map.begin, map.end()
    // count():logN
    // multimap
    // unordered_map:O(1)=>O(n)
    // sort(khai bao algorithm): NlogN ( <=10^6) syntax : 1: doi voi mang 1 chieu xet tu x toi y : sort(a+x, a+y+1) 
    //  2 :doi voi vector ( hay cac cau truc du lieu lam viec voi iterator): [x,y] : sort(a+x, a+y+1)
    // ham sort dao nguoc : them greater < KIEU_DU_LIEU > ()); 
    map < ll, int > countMap;
    int n;
    cin>>n;
    vector < ll > a(n);
    for( int i = 0; i < n; i++)
    {
        cin>>a[i];
        countMap[a[i]]++;
    }
    for( int i =0; i < n; i++)
    {
        if(countMap[a[i]]!=0)
        {
            cout<<a[i]<<" "<<countMap[a[i]]<<endl;
         
        }
        countMap[a[i]]=0;
    }
    
   return 0;

}