#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    long long n,i;
    cin>>n;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout << "False"<<endl;
            return 0;
        }
    }
    cout << "True"<<endl;
    
    return 0;
}
