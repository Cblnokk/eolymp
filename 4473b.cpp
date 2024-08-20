#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
#include <algorithm>
#include <set>
//#include <bits/stdc++.h>

using namespace std;

#define m 100001
#define L 20

int a[m],mas[m][L];
    int i,n,j,q,l,r,max1,l1;

void mRNQ(int *b){
    int i, j;
    
    for(i=1;i<=n;i++) mas[i][0]=b[i];
    
    for(j=1;1<<j<=n;j++)
        for(i=1;i+(1<<j)-1<=n;i++){
            mas[i][j]=max(mas[i][j-1],mas[i+(1<<(j-1))][j-1]);
        }
}

int pMax(int i, int j){
    int k=0;
    
    if(i>j) swap(i,j);
    
    while(1<<(k+1)<=j-i+1) k++;
    
    return max(mas[i][k], mas[j-(1<<k)+1][k]);
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    
    
    
    cin>>n;
    
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    
    mRNQ(a);
    
    cin>>q;
    
    for(i=0;i<q;i++){
        cin>>l>>r;
        
        cout<<pMax(l,r)<<"\n";
    }
    return 0;
}
