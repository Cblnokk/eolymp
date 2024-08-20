#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
#include <algorithm>
//#include <bits/stdc++.h>

using namespace std;

long long k(string j){
    int d=j.length();
    int sum=0;
    for(int i=0;i<d;i++){
        int b=j[i]-48;
        sum=sum+b;
    }
    
    if(sum>=10){
            return k(to_string(sum));
    }else{
            return sum;
    }

    
}


int main(int argc, const char * argv[]) {
    long long s1;
    string s;
    cin>>s;
    s1=k(s);
    
    cout << s1;
    return 0;
}
