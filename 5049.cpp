#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    char c;
    int i,k;
    unsigned long l;
    string s,s1="";
    getline(cin,s);
    k=0;
    l=s.length();
    for(i=0;i<l;i++){
        c=s[i];
        if(c!=' '){
            s1+=c;
            k=0;
        }
        if(c==' ' && k==0){
            s1+=c;
            k=1;
        }
    }
    
    cout<<s1<<endl;
    return 0;
}
