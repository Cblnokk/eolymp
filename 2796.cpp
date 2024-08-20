#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    long long l,i,k,k1 = 0;
    string s,s1,s2;
    char c;
    cin>>s;
    l=s.length();
    k=10;
    for(i=l-1;i>=0;i--){
        c=s[i];
        int c1=int(c-'0');
        if(k>=c1){
            k=c1;
            k1=i;
            //cout<<k1<<endl;
        }
    }
    
    for(i=l-1;i>=0;i--){
        if(i!=k1){
            s1+=s[i];
        }
    }
    for(i=0;i<l;i++){
        s2+=s1[l-1-i];
    }
    cout <<s2<<endl;
    return 0;
}
