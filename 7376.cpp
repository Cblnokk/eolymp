#include <iostream>
#include <math.h>
#include <string>
#include <numeric>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n,w,z,k,p,a,b,m,q;
    cin>>n;
    w=n;
    if(n<0)
        z=-1;
    else z=1;
    n=abs(n);
    k=n;
    p=1;
    while(k>0) {
        a=k % 10; m=n; q=1;
        while(m>0){
            b=m % 10;
        if((n+(a-b)*q+(b-a)*p)*z>w)
            if (not((a==0) and (m<10)))
                if(not((b==0) and (k<10)))
                    w=(n+(a-b)*q+(b-a)*p)*z;
        
    m=m/10;
    q=q*10;
        }
    k=k/10;
    p=p*10;
    }
    cout<<w<<endl;
    return 0;
}
