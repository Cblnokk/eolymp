#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
#include <algorithm>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n,i,k,j,m,s;
    map<int, int> a;
    int a1[5];
    cin>>n;
    
    for(i=1;i<=n;i++){
        cin>>k;
        a[i]+=k;
    }
    for(j=1;j<=n;j++){
        m=-10;
        for(i=1;i<=n;i++){
            if(m<a[i]){
                m=a[i];
                s=i;
            }
        }
        cout << s <<" ";
        a[s]=-1;
        
    }
   
            
    
    cout<<endl;
    return 0;
}
