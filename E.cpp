#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(a%b==0)  return b;
    else    return gcd(b,a%b);
}


int main(int argc, const char * argv[]) {
    int n,q,m1,i,j,l,r,tl,tr,m2,f,l1,su;
    cin>>n>>q;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for (i=0;i<q;i++){
        cin>>l>>r;
        m2=0;
        for (tl=l-1;tl<r;tl++){
            for (tr=tl;tr<r;tr++){
                f = a[tl];
                l1=n;
                su=0;
                for (j=tl;j<tr+1;j++){
                    f=gcd(f,a[j]);
                    su+=a[j];
                    //cout<<su<<" ";
                }
                for (j=tl;j<tr+1;j++){
                    
                }
                m1=su*f;
                if(m1>m2) m2=m1;
            }
        }
        cout<<m2<<endl;
    }
    return 0;
}
