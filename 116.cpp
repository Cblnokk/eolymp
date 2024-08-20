#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long b,c,a,ds,mn,i;
    string s;
    cin>>a>>c;
    b=a;
    while (a % c != 0){
        b=b+1;
        s=to_string(b);
        ds=s.length();
        mn=1;
        mn=pow(10,ds);
        a=(a % c)*mn+b;
    }
        cout<<b<<endl;
    return 0;
}

