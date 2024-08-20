#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
#include <algorithm>
#include <set>
//#include <bits/stdc++.h>

using namespace std;

int funk(long long n){
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}


int main(int argc, const char * argv[]) {
    long long a,b,i,j;
    set<long long> ab;
    cin>>a>>b;
    if(funk(a) || funk(b)){
        cout<<"Impossible"<<endl;
        return 0;
    }
    ab.insert(a);
    ab.insert(b);
    if(a%2==1){
        for(i=2;i*i<=a;i++){
            if(a%i==0){
                a=a+i;
                break;
            }
        }
    }
    
    if(b%2==1){
        for(i=2;i*i<=b;i++){
            if(b%i==0){
                b=b-i;
                break;
            }
        }
    }
    
    ab.insert(a);
    ab.insert(b);
    if(b<a){
        cout<<"Impossible"<<endl;
        return 0;
    }
    
    while (a<b) {
        ab.insert(a);
        j=2;
        while((a%(2*j)==0) && (2*j<=b-a) && (2*j<a))
            j=j*2;
            a+=j;
        
    }

    
    for(auto iter=ab.begin();iter!=ab.end();iter++){
        cout<<*iter<<endl;
    }
    
    return 0;
}
