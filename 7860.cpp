#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n,i,k;
    map<string, int> a;
    string s;
    cin>>n;
    k=0;
    for(i=0;i<n;i++){
        cin>>s;
        a[s]++;
    }
    for(i=0;i<n;i++){
        cin>>s;
        if(a[s]>0){
            a[s]--;
            k++;
        }
    }
    cout<< k<<endl;
    return 0;
}
