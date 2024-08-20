#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    long long k,l;
    cin>>k;
    if(k!=1){
        l=k+k-1+k-1+k-2;
    }else l=k;
    l+=1;
    l+=k+1+k+2+k+2+k;
    
    cout << l<<endl;
    return 0;
}
