#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, const char * argv[]) {
    int r,i,kv,k;
    cin>>r;
    kv=0;
    for(i=1;i<=r;i++){
        kv=kv+sqrt(r*r-i*i);
    }
    k=kv*4;
    cout <<k<<endl;
    return 0;
}
