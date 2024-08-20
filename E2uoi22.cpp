#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, const char * argv[]) {
    long long n,i,max,max1,min,min1,i1;
    cin>>n;
    max=0;
    max1=0;
    min=100000000;
    min1=100000000;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        max=(a[i]+a[i+1])*2;
        if(max1<max) max1=max;
    }
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
            i1=i;
        }
    }
    a[i1]=min1;
    for(i=0;i<n;i++){
        if(min1>a[i]){
            min1=a[i];
        }
    }
    min1=(min1+min)*n;
    if(min1>max1) max1=min1;
    
    cout << max1<<endl;
    return 0;
}
