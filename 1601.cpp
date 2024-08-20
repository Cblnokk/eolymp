#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b,k;
    cin>>a>>b;
    while((a*b)!=0){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    
    cout<<a+b<<endl;
    return 0;
}
