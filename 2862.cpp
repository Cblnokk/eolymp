#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    long long n,i,f;
    cin>>n;
    f=1;
    for(i=2;i<=n;i++){
        if(n%i==0){
            f+=1;
        }
    }
    
    cout << f <<endl;
    return 0;
}
