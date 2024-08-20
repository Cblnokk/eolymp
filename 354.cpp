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
    long long n,i,a[10001],b;
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>b;
        if(b<=n) a[b]++;
    }
    
    for(i=1;i<=n;i++){
        if(a[i]==0){
            break;
        }
    }
    if(i<=n){
        cout<<i<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}
