#include <iostream>
#include <math.h>
#include <string>
#include <numeric>

using namespace std;
int main(int argc, const char * argv[]) {
    long long n,res,i,a,b;
    cin>>n;
    cin>>a;
    for(i=1;i<n;i++){
        cin>>b;
        res=gcd(a,b);
        a=res;
    }
    cout << a;
    return 0;
}
