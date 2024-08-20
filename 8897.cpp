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
    long long n;
    cin>>n;
    n++;
    while (n%10!=0){
        n++;
    }
    cout<<n<<endl;
    return 0;
}
