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
    long long n,k1,ans;
    double cur;
    cin>>n;
    k1=1;
    cur=1.0;
    ans=0;
    while(k1==1){
        cur *= 2;
        ans+=1;
        if(int(cur + 0.001) == n) break;
            if(cur > n){
                cur /= 10;
            }
    }
    cout<<ans<<endl;
    return 0;
}
