#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    long long n,i,j,n1,k,f,f1,f2;
    cin>>n;
    long long a[n];
    long long b[n];
    long long v[(n+1)/2];
    long long p[(n+1)/2];
    n1=n;
    f=0;
    f1=0;
    for(i=0;i<n/2;i++){
        v[i]=0;
    }
    for(i=0;i<n/2;i++){
        p[i]=0;
    }
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    
    for(j=0;j<n-1;j++){
        for(i=0;i<n;i++){
            b[i]=0;
        }
        for(i=0;i<n1-1;i++){
            cin>>b[i];
        }
        n1=n1-1;
        sort(b,b+n1);
        
        for(i=0;i<n;i++){
            if(a[i]!=b[i]){
                k=a[i];
                break;
            }
        }
        if(f==0){
            v[f1]=k;
            f=1;
        }else{
            p[f1]=k;
            f=0;
            f1++;
        }
        for(i=0;i<n;i++){
            a[i]=b[i];
        }
        
    }
    
    if(f==0){
        v[f1]=a[0];
        f=1;
    }else{
        p[f1]=a[0];
        f=0;
        f1++;
    }
    sort(v,v+(n+1)/2);
    sort(p,p+(n+1)/2);
    for(i=0;i<(n+1)/2;i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
    for(i=0;i<n/2;i++){
        cout<<p[i]<<' ';
    }
    
    return 0;
}
