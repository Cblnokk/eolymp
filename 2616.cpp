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
    long long n,i,f,res;
    cin>>n;
    res=0;
    for(i=1;i<=n;i++){
        res=res^i;
        cout<<res<<endl;

    }
//cout<<res<<endl;
    for(i=1;i<=n-1;i++){
        cin>>f;
        res^=f;
    }
    
    cout<<res<<endl;
    return 0;
}
