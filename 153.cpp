#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    float x1,y1,x2,y2,x3,y3,x4,y4,l,r,ll,rr,s;
    
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    if (x1>x2)
        swap(x1,x2);
        
    if (x3 > x4)
        swap(x3, x4);

    if (y1 > y2)
        swap(y1, y2);
    if (y3 > y4)
        swap(y3, y4);

    l=max(x1,x3);
    r=min(x2,x4);
    ll=max(y1,y3);
    rr=min(y2,y4);

    if((l<r) && (ll<rr))
        s=(r-l)*(rr-ll);
    else
        s=0;
        
    cout.setf(ios::fixed);
    cout.precision(3);
    cout<<s<<endl;
    return 0;
}
