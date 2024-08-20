#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    long long m,n,i,j;
    cin>>m>>n;
    long long a[m+1][n+1];
    
    for(i=0; i<=m; i++){
        for(j=0;j<=n;j++){
            a[i][j]=1;
        }
    }
    a[0][1]=1;

    for(i=1; i<=m; i++){
        for(j=1;j<=n;j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    
    cout << a[m-1][n-1]<<endl;
    return 0;
}
