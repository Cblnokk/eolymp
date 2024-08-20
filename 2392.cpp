#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;
int main(int argc, const char * argv[]) {
    long long i,sum;
    string s;
    long long a[3];
    cin>>s;
    sum=0;
    for(i=0;i<3;i++){
        a[i]=s[i]-'0';
    }
    
    sort(a,a+3,greater<int>());
    //cout<<a[0]<<a[1]<<a[2]<<endl;
    if (a[2]==0){
        if (a[1]==0){
            sum=a[0]*100+a[1]*10+a[2]+a[2]+a[1]*10+a[0]*100;
        }else{
            sum=a[0]*100+a[1]*10+a[2]+a[0]+a[2]*10+a[1]*100;
        }
    }else{
        sum=a[0]*100+a[1]*10+a[2]+a[0]+a[1]*10+a[2]*100;
    }
    
    cout<<sum<<endl;
    return 0;
}
