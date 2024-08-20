#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long a,b,c;
    cin>>a>>b>>c;
    if (a + b + c == 2020)
            cout << a << "+" << b << "+" << c << endl;
        else if (a - b - c == 2020)
            cout << a << "-" << b << "-" << c << endl;
        else if (a + b - c == 2020)
            cout << a << "+" << b << "-" << c << endl;
        else if (a - b + c == 2020)
            cout << a << "-" << b << "+" << c << endl;
        else cout << "CORONA" << endl;
    return 0;
}
