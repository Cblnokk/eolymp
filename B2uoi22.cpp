#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, const char * argv[]) {
    int n,x1,x2,y1,y2,p,r,i,k;
    cin>>n>>x1>>y1>>x2>>y2;
    k=0;
    for(i=1;i<=n;i++){
        cin>>p>>r;
        if(((pow(p-x1,2)+pow(y1,2)>=pow(r,2)) && (pow(p-x2,2)+pow(y2,2)<pow(r,2))) || ((pow(p-x1,2)+pow(y1,2)<=pow(r,2)) && (pow(p-x2,2)+pow(y2,2)>pow(r,2))) || ((pow(p-x1,2)+pow(y1,2)>pow(r,2)) && (pow(p-x2,2)+pow(y2,2)<=pow(r,2))) || ((pow(p-x1,2)+pow(y1,2)<pow(r,2)) && (pow(p-x2,2)+pow(y2,2)>=pow(r,2)))){
            cout<<"NO"<<"\n";
            cout<<i<<"\n";
            return 0;
        }
        if((pow(p-x1,2)+pow(y1,2)<=pow(r,2)) && (pow(p-x2,2)+pow(y2,2)<=pow(r,2))){
            k=1;
        }
    }
    
    if(k==1){
        cout<<"YES"<<"\n";
    }
    return 0;
}
