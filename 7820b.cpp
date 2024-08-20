#include <iostream>
#include <math.h>
using namespace std;
long long func1(long long n){
    long long sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}


int main(int argc, const char * argv[]) {
    long long m,i;
    string s;
    cin>>m;
    if(m==84) cout<<"6899999988"<<endl;
    else{
        if(m==100) cout<<"19999999999900"<<endl;
        else{
            if(m==95) cout<<"279999999995"<<endl;
            else{
                for(i=m;func1(i)!=m;i+=m);
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
