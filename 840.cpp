#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    string B,B1,A="0";
    long long i,n=0,bd,b1d;
    cin>>B;
    cin>>B1;
    
    for(i=0; i<B.length()/2;i++)
    {
            swap(B[i],B[B.length()-i-1]);
    }
    
    for(i=0; i<B1.length()/2;i++)
    {
            swap(B1[i],B1[B1.length()-i-1]);
    }
    bd=B.length();
    b1d=B1.length();
    //cout<<bd<<" "<<b1d<<endl;
    
    if(bd==b1d)
    {
        while (b1d!=n)
        {
            int ost=0;
            
            for(int i=0;i<A.length();i++)
            {
                ost+=(A[i]-48)+((B[n]-48)+(B1[n]-48));
                //cout<<ost<<endl;
                A[i]=ost % 10 + 48;
                cout<<A<<endl;
                ost/=10;
                //cout<<n<<endl;
            }
            
            while (ost)
            {
                A+=ost % 10 + 48;
                ost/=10;
            }
            n++;
        }
    }else
    {
        
    }
    
    
    for(i=0; i<A.length()/2;i++)
    {
            swap(A[i],A[A.length()-i-1]);
    }
    
    for(i=0; i<A.length();i++)
    {
        cout<<A[i];
    }
    
    return 0;
}
