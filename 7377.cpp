#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n,k;
    string s,s1,s2,s3;
    
    
    cin>>n;
    s="";
    k=1;
    while (s.length()<2*n){
        k*=2;
        s+=to_string(k);
    }
    s1=s[n*2-2];
    s2=s[n*2-1];
    s3=s1+s2;
    cout <<s3<<endl;
    return 0;
}
