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

    stack<int> s1,s2,s3;
    int n,i,a,b,k;

int main(int argc, const char * argv[]) {
    cin>>n;
    for(i=n;i>=1;i--){
        s1.push(i);
    }
    k=0;
    while(k<n){
        cin>>a>>b;
        if(a==1){
            for(i=0;i<b;i++){
                s2.push(s1.top());
                s1.pop();
            }
        }else{
            for(i=0;i<b;i++){
                s3.push(s2.top());
                s2.pop();
                k++;
            }
            
        }
    }
        for(i=1;i<=n;i++){
            cout << s3.top()<<endl;
            s3.pop();
        }
    return 0;
}
