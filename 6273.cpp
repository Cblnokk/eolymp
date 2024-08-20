#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long i1,i2,i3,s;
    cin>>i1>>i2>>i3;
    s=i2*i2+i1*i1+i3*i3;
    s=sqrt(s);
    cout<<s<<endl;
    return 0;
}
