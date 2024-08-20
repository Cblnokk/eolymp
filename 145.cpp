#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    long long n,i,n1,f;
    cin>>n;
    f=0;
    long long a[n];
    
    for(i=0;i<n;i++){
        a[i]=0;
    }
    
    for(i=0;i<n;i++){
        cin>>n1;
        a[n1]+=1;
    }
    for(i=0;i<n;i++){
        f+=a[i]/4;
    }
    cout << f;
    return 0;
}
