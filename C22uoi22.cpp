#include <iostream>

using namespace std;
bool f2(int n1){
    if(n1==0) return false;
    for(;n1%2==0;n1/=2) return (n1==1);
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
