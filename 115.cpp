#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n,i;
    cin>>n;
    long long a[31];
    a[1]=2;
    a[2]=4;
    for(i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    cout << a[n];
    return 0;
}
