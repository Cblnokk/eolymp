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
    int n,k,i,j,h,res,x,k1;
    int z[150]={0};
    int b[150]={0};
    int a[150][150];
    cin>>n>>k;
        
    for(i=0;i<n;i++){
        cin>>k1;
        z[i]=k1;
        for(j=0;j<k1;j++){
            cin>>a[i][j];
            b[i]=0;
        }
    }
    
    res=0;
    i=0;
    for(h=0;h<1000;h++)
    {
        if(k==0) break;
        
        if(b[i]<z[i])
        {
            x=a[i][b[i]++];
        }else
        {
            x=50;
        }
        if(x>=res)
        {
            res+=x;
            k--;
        }
        i=(i+1)%n;
    }
    cout << res+k*50 <<endl;
    return 0;
}
