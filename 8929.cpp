#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, const char * argv[]) {
    long long n,i;
        cin>>n;
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                cout << 0 <<endl;
                return 0;
            }
        }
        cout << 1 <<endl;
    return 0;
}
