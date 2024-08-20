#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;


int main(int argc, const char * argv[]) {
    double r1,r,w,l;
    cin>>r>>w>>l;
    r1=sqrt(pow(w,2)+pow(l,2))/2;
    if(r1>r){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }
    
    
    return 0;
}
