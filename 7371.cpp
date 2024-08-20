#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

long long nsd(long long a, long long b){
    a=abs(a);
    b=abs(b);
    while(a!=0 && b!=0){
        if (a > b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    return a+b;
}

int main(int argc, const char * argv[]) {
    long long x1,y1,x2,y2,x3,y3,nsdl;
    cin>>x1>>y1>>x2>>y2;
    
    x3=((x1*y2)+(x2*y1));
    y3=(y2*y1);
    
    nsdl=nsd(x3,y3);
    x3=x3/nsdl;
    y3=y3/nsdl;
    cout << x3<<" " << y3<<endl;
    return 0;
}
