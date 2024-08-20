#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    long long n,i,l,f=0;
    cin>>s;
    l=s.length();
    for(i=0;i<l;i++){
        if(s[i]=='.') f=1;
        if(f==1 && s[i]!='0' && s[i]!='.'){
            cout << "No"<<endl;
            return 0;
        }
        
    }
    cout << "Ok"<<endl;
    return 0;
}
