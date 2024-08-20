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
    int l1,l2,d1,d2,i=0;
    char a[100001],b[100001];
    cin>>a>>b;
    l1=strlen(a);
    l2=strlen(b);
    
    d1=l1;
    d2=l2;
    for(;a[i] && a[i]==b[i];++i);
        for(;d1>=0 && d2>=0 && a[d1]==b[d2];--d1,--d2);
    
    
    cout << max(max(0,l2-l1),d2-i+1)<<endl;
    return 0;
}
