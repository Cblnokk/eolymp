#include <iostream>
#include <math.h>
#include <string>
#include <numeric>

using namespace std;
int main(int argc, const char * argv[]) {
    long long t,a,res,i;
    cin>>t;
    
    for(i=0;i<t;i++){
        cin>>a;
        res=pow(a,2);
        cout << res<<endl;
    }
    
    return 0;
}
