#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    int n,m,i,j,k,c,l,f,f2,f3;
    cin>>n>>m;
    int a[n][m],b[n][m];
    string mas[m];
    
    for(i=0;i<m;i++){
        cin>>mas[i];
    }
    
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            cin>>a[i][j];
            b[i][j]=0;
        }
    
    cin>>k;
    
    for(i=0;i<k;i++){
        cin>>c>>s;
        c--;
        for(j=0;j<m;j++){
            if(s==mas[j]){
                f=j;
                break;
            }
        }
        f2=f;
        for(;f<m;f++){
            if(a[c][f]>0){
                a[c][f]--;
                break;
            }
            f3=0;
            for(j=0;j<n;j++){
                if(a[j][f]>0){
                    a[j][f]--;
                    f3=1;
                    break;
                }
            }
            if(f3!=0) break;
        }
        if(f==m) b[c][f2]++;
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
