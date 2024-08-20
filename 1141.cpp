#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    long long f,n,i,k,i1;
    long long a[1001]={0};
    i=0;
    while(cin>>n){
        a[i]=n;
        i++;
    }
    sort(a,a+i);
    if(i%2!=0){
        i1=i/2;
        cout <<a[i1];
    }else cout <<-1;

    return 0;
}
