#include <iostream>
#include <math.h>
#include <string>
#include <numeric>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n,k,b,l,i,j;
    cin>>n;
    j=2;
    b=2;
    l=0;
    k=2;
    for(i=1;i<n;i++){
        j=j*2;
        b=b+j;
        l=b/2;
        b=b-l;
        k=j-l;
        //cout << k<<" "<<endl;
    }
    
    cout << k<<" "<< b;
    return 0;
}
