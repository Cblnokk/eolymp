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
#include <set>
//#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    set <int> s;
    int n,n1,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>n1;
        s.insert(n1);
    }
    i=0;
    for(auto k:s){
        a[i]=k;
        i++;
    }
    
    if(n%2==0){
        sort(a,a+i,std::greater<>());
    }else{
        sort(a,a+i);
    }
    for(j=0;j<i;j++){
        cout<<a[j]<<endl;
    }
    return 0;
}
