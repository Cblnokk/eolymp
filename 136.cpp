#include <iostream>
#include <math.h>
#include <string>
#include <numeric>

using namespace std;

int main(int argc, const char * argv[]) {
    long long x1,y1,x2,y2,res;
    cin>>x1>>y1>>x2>>y2;
    res=gcd(abs(x1-x2),abs(y1-y2));
    cout << res+1<<endl;
    return 0;
}
