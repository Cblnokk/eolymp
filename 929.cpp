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
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b && c==d || a==c && b==d || a==d && c==b){
        cout << "YES"<<endl;
    }else cout << "NO"<<endl;
    return 0;
}
