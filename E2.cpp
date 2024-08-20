#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
#include <algorithm>
#include <set>
#include <stack>
#include <cstdio>
#include <cstring>
#include <deque>
//#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    long long n,i,sum,ma;
    cin>>n;
    sum=0;
    ma=0;
    long long a[n+1],b[n];
    for (i=0; i<n;i++){
        cin>>b[i];
        sum=sum+b[i];
        if(b[i]>ma){
            ma=b[i];
        }
    }
        for (i=0; i<n-2;i++){
            if(max(b[i],b[i+1])>=min()){
            
        }
    }
    
    cout << "Hello, World!\n";
    return 0;
}
