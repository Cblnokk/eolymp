#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    long long n,d;
    cin>>n;
    d=2;
    while(n>1){
        while((n%d)==0){
            n=n/d;
            cout<<d<<' ';
        }
        d=d+1;
    }
    
    
    
    
    return 0;
}
