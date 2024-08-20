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
    ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    
    long long i,n,j,q,l,r,max1,l1;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;
    for(i=0;i<q;i++){
        cin>>l>>r;
        if(l>r){
            l1=l;
            l=r;
            r=l1;
        }
        max1=-2000000000;
        
            for(j=l-1;j<r;j++){
                if(a[j]>max1){
                    max1=a[j];
                }
        }
        cout<<max1<<"\n";
    }
    return 0;
}
