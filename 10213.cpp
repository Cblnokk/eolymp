
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cin>>s;
    if(s[0]!=s[1] && s[2]!=s[1] && s[2]!=s[0]){
        if((s[0]=='0') || (s[1]=='0') || (s[2]=='0')){
            cout<<"4";
        }else{
            cout << "6\n";
        }
    }else{
        if(((s[0]!=s[1]) && (s[0]==s[2])) || ((s[0]==s[1]) && (s[0]!=s[2])) || ((s[0]!=s[1]) && (s[0]!=s[2]) && (s[1]==s[2]))){
            if((s[0]=='0') || (s[1]=='0') || (s[2]=='0')){
                if(((s[0]=='0') && (s[1]=='0')) || ((s[0]=='0') && (s[2]=='0')) || ((s[1]=='0') && (s[2]=='0'))){
                    cout<<"1";
                }else{
                    cout<<"2";
                }
            }else{
                cout << "3\n";
            }
        }else{
            if(s[0]==s[1] && s[2]==s[1]){
            cout << "1\n";
           }
        }
    }
    
    return 0;
}
