#include <iostream>

using namespace std;
bool f2(int n1){
    while((n1%2)==0){
        if((n1/=2)==1) return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
     if(f2(n))
     {
            cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
         cout<<1<<' '<<n<<endl;
     }
    return 0;
}
