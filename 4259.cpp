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

    stack<int> st;
    int n,k,i,k1;

int main(void) {
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        if(k==1){
            cin>>k1;
            if(st.empty()){
                st.push(k1);
            }else{
                st.push(min(st.top(),k1));
            }
        }else
            if(k==2){
                st.pop();
            }else
                if(k==3){
                    cout<<st.top()<<endl;
                }
        
    }
    return 0;
}
