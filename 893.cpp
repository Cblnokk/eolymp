#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n,k,i,j,l;
    cin>>n>>k;
    long long a[n][2];
    l=0;
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            cin>>a[i][j];
    //sort(a,a+n);
    for(i=0;i<n;i++)
        if(k>=a[i][0]){
            k+=a[i][1];
            l++;
        }
    
    
    cout << l<<endl;
    return 0;
}


//40%
