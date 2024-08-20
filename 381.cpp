#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, const char * argv[]) {
    int b,n,a1,a,i,b2,x1,x,b1;
    a=2;
    b1=1;
    cin>>b>>n;
    while(b1<b){
        b1=1;
        b1=pow(a,n);
        if(b1>b) break;
        
        a+=1;
    }
    a1=a-1;
    b2=pow(a1,n);
    
    x=abs(b1-b);
    x1=abs(b2-b);
    if(x1<=x) cout << a1<<endl;
    else cout << a <<endl;
    return 0;
}
