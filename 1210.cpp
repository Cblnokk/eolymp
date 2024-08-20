#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
#include <algorithm>
#include <set>
//#include <bits/stdc++.h>

using namespace std;
int main(int argc, const char * argv[]) {
    unsigned long long n,i,a,res;
    cin>>n>>a;
    res=0;
    if(a==1){
        cout<<(n * (n + 1))/ 2<<endl;
    }else{
        for(i=1;i<=n;i++){
            res=res+i*pow(a,i);
            
        }
        cout<<res<<endl;
    }
    

    return 0;
}
