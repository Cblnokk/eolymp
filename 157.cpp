#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n,res,k,n1,i,l;
    cin>>n;
    if(n==2){
        cout<<0;
        return 0;
    }
    n1=n-2;
    k=-4;
    l=0;
    for(i=0;i<n1;i++){
        l=l+2*i;
        res=(n+n)+k+l;
        
    }
    cout << res;
    return 0;
}
