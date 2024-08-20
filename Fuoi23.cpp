#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,m,i,j,k,c,l,f;
    cin>>n>>m;
    int a[n][m],b[n][m];
    map<string,int> t;
    for(i=0;i<m;i++){
        cin>>s;
        t[s]=i;
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
        for(l=t[s];l<m;l++)
        {
            f=0;
            if(a[c][l]>0){
                a[c][l]--;
                f=1;
            }else{
                for(j=0;j<n;j++){
                    if(a[j][l]>0){
                        a[j][l]--;
                        f=1;
                        break;
                    }
                }
            }
            if(f!=0)
                break;
        }
        if(f==0)
            b[c][t[s]]++;
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
