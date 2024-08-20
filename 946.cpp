#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, const char * argv[]) {
    float x1,y1,x,y,xi,yi,s,s1;
    int i;
    cin>>x1>>y1;
    int n=4;
    x=x1;
    y=y1;
    s=0;
    for(i=0;i<n-1;i++){
        cin>>xi>>yi;
        s+=(x-xi)*(y+yi);
        x=xi;
        y=yi;
    }
    s+=(x-x1)*(y+y1);
    s1=fabs(s)/2;
    cout.setf(ios::fixed);
    cout.precision(0);
    cout <<s1 <<endl;
    return 0;
}
