#include <iostream>
#include <math.h>
#include <string>
#include <numeric>

using namespace std;
/*long long gcd(long long a, long long b){
    return (!b)?a:gcd(b,a%b);
}*/

int main(int argc, const char * argv[]) {
    long long n,i,k,j,temp;
    cin>>n;
    long long a[101];
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++)
        for(j=1+i;j<n;j++){
            temp=gcd(a[i],a[j]);
            a[j]/=temp;
        }
    unsigned long long res;
    for(res = 1,i=0;i<n;i++)
        res=res*a[i];
    
    cout << res<<endl;
    return 0;
}
