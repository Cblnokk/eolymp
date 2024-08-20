#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
//#include <bits/stdc++.h>
#define m 51

using namespace std;

int g[m][m], vis[m];
int n,k,a,b,d,res;


void dfs(int v, int r){
    if(r>d){
        return;
    }
    if(v==b){
        res++;
        return;
    }
    vis[v]=1;
    for (int j=1; j<=n;j++)
        if (g[v][j] && !vis[j])
            dfs(j,r+1);
        vis[v]=0;
        
    
}

int main(int argc, const char * argv[]) {
    int i,x,y;
    cin>>n>>k>>a>>b>>d;
    for(i=0;i<k;i++){
        cin>>x>>y;
        g[x][y]=1;
    }
    
    res=0;
    dfs(a,0);
    
    
    cout << res << endl;
    return 0;
}
