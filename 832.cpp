#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

#define MAX 60001
long long i,n,len,pos,sz,x[MAX],lis[MAX],L[MAX];

void Vuvod(long long pos){
    if(sz<0) return;
    while (L[pos]!=sz)pos--;
        sz--;
        Vuvod(pos-1);
        cout<<x[pos]<<' ';
}

int main(int argc, const char * argv[]) {
    cin>>n;
    len=0;
    for(i=0; i<n; i++) cin>>x[i];
    for(i = 0; i<n; i++){
        pos= lower_bound(lis,lis+len,x[i])-lis;
        lis[pos]=x[i];
        L[i]=pos;
        if(pos==len) len++;
    }
    cout << len<<endl;
    sz=len-1;
    Vuvod(n-1);
    cout<<endl;
    return 0;
}
