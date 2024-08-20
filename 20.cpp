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
    int n,res,k,su;
    cin>>n;
    res=0;
    while(n>0){
        k=n;
        su=0;
        while(k>0){
            su=su+k%10;
            k=k/10;
        }
        n=n-su;
        res++;
    }
    cout<<res<<endl;
    return 0;
}
