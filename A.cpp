#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int n,k,i,j,m;
    cin>>n>>k;
    int a[n][k],b[n];
    for(i=0;i<n;i++){
        cin>>a[i][0];
    }
    m=0;
    for(i=0;i<n;i++){
        for(j=1;j<k;j++){
            a[i][j]=a[(a[i][j-1])-1][0];
            //b[i]+=a[i][i];
        }
    }
    
    m=0;
    for(i=0;i<n;i++){
        //cout<<b[i]<<" ";
        for(j=0;j<k;j++){
            m+=a[i][j];
        }
        cout<<m<<" ";
        m=0;
    }
    
    return 0;
}
