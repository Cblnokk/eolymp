#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;
long long nsd(long long a, long long b){
    long long m=a,n=b;
    while(a!=0 && b!=0){
            if (a > b){
                a=a%b;
            }else{
                b=b%a;
            }
        }
    return m/(a+b)*n;
}


int main(int argc, const char * argv[]) {
    long long m,n,v,l,k,nsk,n1,m1;
    cin>>m>>n;
    nsk=nsd(m,n);
    n1=(nsk/n)-1;
    m1=(nsk/m)-1;
    v=n1+m1;
    if(m1%2==1){
        l=4;
    }else{
        if(n1%2==0){
            l=3;
        }else l=2;
    }
    cout << v <<" "<< l <<endl;
    return 0;
}
/*
 1/2 = 1 2
 1/3 = 6 4
 1/4 = 4 3
 1/5 = 10 4
 1/6 = 6 3
 */
