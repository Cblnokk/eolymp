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
    long long m,n,c;
    cin>>n>>m;
    c=m/n + m%n;
    cout << c <<endl;
    return 0;
}
