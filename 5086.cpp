#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long double a,b;
    cin>>a;
    cin>>b;
    if(a>b)
    cout << ">";
    else
        if(a==b)
        cout << "=";
        else
            if(a<b)
            cout << "<";
    return 0;
}
