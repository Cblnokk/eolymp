#include <iostream>
#include <math.h>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    long long n,i,k,d,n1,k1;
    cin>>n;
    long long a[n];
    long long b[100];
    k1=1;
    k=1;
    
    for(i=0;i<100;i++){
        b[i]=0;
    }
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
        d=2;
        n1=a[i];
        while(n1>1){
            while((n1%d)==0){
                n1=n1/d;
                b[d]+=1;
            }
            d=d+1;
        }
    }
    
   /* for(i=0;i<100;i++){
        cout<<b[i]<<" ";
    }*/
    
    for(i=0;i<100;i++){
        if(b[i]>=n){
            k1=n;
        }
    }
    for(i=0;i<n;i++){
        k=k*a[i];
    }
    //cout <<k/k1;
    return 0;
}
