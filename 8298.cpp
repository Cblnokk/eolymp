#include <iostream>
#include <math.h>
using namespace std;
#include <iostream>

int main(int argc, const char * argv[]) {
    unsigned long long int n,i,k;
    cin>>n;
    k=1;
    if(n==9223372036854775808){
        k=n;
    }else{
        while(k<=n){
            k*=2;
        }
        k=k/2;
    }
    cout << k;
    return 0;
}
