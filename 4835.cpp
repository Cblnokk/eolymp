#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;



int main(int argc, const char * argv[]) {
    long long n,i,j;
    string s;
    string B,A="1";
    cin>>n;
    j=1;
    for(i=0;i<n;i++)
        s+="0";
    
    while(j<n){
                    j++;
                    int ost=0;
                    for(int i=0;i<A.length();i++)
                    {
                        ost+=(A[i]-48)*j;
                        A[i]=ost % 10 + 48;
                        ost/=10;
                    }
                    while (ost)
                    {
                        A+=ost % 10 + 48;
                        ost/=10;
                    }
                    
                }
            for(int i=0; i<A.length()/2;i++){
                swap(A[i],A[A.length()-i-1]);
                
            }
    //fac=to_integer(A);
    
    cout << A;
    return 0;
}
