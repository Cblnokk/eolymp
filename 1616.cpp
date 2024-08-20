#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,i;
    cin>>n;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout << "No"<<endl;
            return 0;
        }
    }
    cout << "Yes"<<endl;
    
    return 0;
}
