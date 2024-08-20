#include <iostream>
#include <math.h>
using namespace std;



int main(int argc, const char * argv[]) {
    long long m,f,i,s1,f1;
    string s;
    cin>>m;
    f=1;
    s="";
    s1=0;
    f1=1;
        while(f==1){
        s=to_string(f1);
        s1=0;
        for(i=0;i<s.length();i++){
            s1=s1+(s[i]-'0');

        }
        if(((f1%m)==0)&&(m==s1)){
            cout<<f1<<endl;
            f=0;
        }
            f1++;
    }
    return 0;
}
