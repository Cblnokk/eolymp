#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long v=0;
    char c;
    while(cin>>c){
        v^=(4-(c-'0'));
    }
    
    cout<<bool(v)<<endl;
    return 0;
}
