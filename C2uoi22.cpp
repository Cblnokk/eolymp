#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, const char * argv[]) {
    long long n;
    cin>>n;
    if((n&(n-1)) == 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
            cout<<1<<' '<<n<<endl;
    }
    
      
    return 0;
}
