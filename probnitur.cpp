#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int n,m,g,i,j,p;
int a[401][401];

void rotate(int x,int y){
    if (a[x][y] != 0)
    {
        if (a[x][y] == 2)
        {
            a[x][y]=1;
        }
        else if (a[x][y] == 6)
        {
            a[x][y]=3;
        }
        else{
            a[x][y]++;
        }
    }
}

int ok(int x, int y){
    if(a[x][y] == 1||a[x][y] == 3 || a[x][y]==6)
    {
        if(a[x][y-1]!= 1 && a[x][y-1]!= 4 && a[x][y-1]!= 5)
        {
            return 1;
        }
    }
    else
    {
        if(a[x][y-1]!= 0 && a[x][y-1]!= 2 && a[x][y-1]!= 3 && a[x][y-1]!= 6)
        {
            return 1;
        }
    }
    
    
    if(a[x][y] == 2 ||a[x][y] == 3 || a[x][y]==4)
    {
        if(a[x-1][y]!= 2 && a[x-1][y]!= 5 && a[x-1][y]!= 6)
        {
            return 1;
        }
    }
    else
    {
        if(a[x-1][y]!= 0 && a[x-1][y]!= 1 && a[x-1][y]!= 3 && a[x-1][y]!= 4)
        {
            return 1;
        }
    }
    return 2;
}

int main(int argc, const char * argv[]) {
    cin>>n>>m>>g;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    
    for(i=1;i<=n+1;i++){
        for(j=1;j<=m+1;j++){
            for(p=0;p<4;p++){
                if(ok(i,j)==1)
                {
                    rotate(i,j);
                }
                else break;
            }
            if(ok(i,j)==1)
            {
                return cout<<"NO",0;
            }
        }
    }
    
    cout<<"YES"<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
