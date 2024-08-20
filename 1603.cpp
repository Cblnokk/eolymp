#include <iostream>
#include <math.h>
#include <string>
#include <numeric>

using namespace std;

int main(int argc, const char * argv[]) {
    long long n,i,l,sum;
    string s;
    cin>>s;
    l=s.length();
    sum=0;
    if(s[0]=='-'){
        for(i=1;i<l;i++){
            n=s[i]-'0';
            sum=sum+n;
        }
    }else{
        for(i=0;i<l;i++){
            n=s[i]-'0';
            sum=sum+n;
        }
    }
    
    cout << sum <<endl;
    return 0;
}
