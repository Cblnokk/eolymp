#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long a,b,c,ser,sum;
    cin>>a>>b>>c;
    
    sum=a+b+c;
    ser=sum/3;
    if(sum % 3!=0){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    sum=0;
    //cout << sum<<endl;
    if(a>ser)
        sum+=a-ser;
    if(b>ser)
        sum+=b-ser;
    if(c>ser)
        sum+=c-ser;
    
    cout << sum;
    return 0;
}
