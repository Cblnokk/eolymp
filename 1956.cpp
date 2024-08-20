#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long x1,y1,x2,y2,x3,y3,y11,y22,y33,x33,nsd;
    cin>>x1>>y1>>x2>>y2;
    y11=y1;
    y22=y2;
    //cout << y1<<" "<<y2<<endl;
    while ((y1 * y2)!=0){
        if (y1 > y2){
            y1=y1 % y2;
        }else{
            y2=y2 % y1;
        }
    }
    y3=(y11*y22/(y1+y2));
    //cout << y3<<" " << y1<<" "<<y2<<endl;
    
    x3=((y3/y11)*x1)+((y3/y22)*x2);
    y33=y3;
    x33=x3;
    while((y33*x33)!=0){
        if (y33 > x33){
            y33=y33%x33;
        }else{
            x33=x33%y33;
        }
    }
    nsd=x33+y33;
    x3=x3/nsd;
    y3=y3/nsd;
    cout << x3<<" " << y3<<endl;
    return 0;
}
