#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
#include <algorithm>
#include <set>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n,res1,cur,m,i,max1,res;
    cin>>n;
    int a[n];
    res1=0;
    cur=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    cur=a[0]+a[1]+a[2]+a[3];
    res1=cur;
    for(i=4;i<n;i++){
        cin>>a[i];
        cur+=a[i]-a[i-4];
        if(cur>res1)
            res1=cur;
    }
    if(n==4){
        cout<<res1<<endl;
        return 0;
    }
    max1=0;
    for(i=0;i<n-1;i++){
        if(max1<a[i]+a[i+1]){
            max1=a[i]+a[i+1];
            m=i;
        }
    }
    a[m]=-1;
    a[m+1] = -1;
    res=max1;
    max1=0;
    for(i=0;i<n-1;i++){
        if(max1<a[i]+a[i+1]){
            max1=a[i]+a[i+1];
        }
    }
    res=res+max1;
    cout << max(res,res1) <<endl;
    return 0;
}
