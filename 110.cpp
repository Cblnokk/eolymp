#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n,t;
    cin>>n;
    t=1;
    while(t<=n){
        t<<=1;
        //cout<<t<<endl;
    }
    t>>=1;
    cout <<n-t<<endl;
    return 0;
}

