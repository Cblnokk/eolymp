#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int m1,m2,m3,m4,m5,M1,M2,i;
    int a[5];
    int b[5];
    cin>>m1>>m2>>m3>>m4>>m5;
    cin>>M1>>M2;
    
    if((M1>=m1+m2+m3+m4+m5) && (M2>=m1+m2+m3+m4+m5)){
        cout << "They both can do it!\n";
        return 0;
    }
    if((M1>=m1+m2+m3+m4+m5) && (M2<m1+m2+m3+m4+m5)){
        cout << "Vasyl can do it!\n";
        return 0;
        }
    if((M1<m1+m2+m3+m4+m5) && (M2>=m1+m2+m3+m4+m5)){
        cout << "Petro can do it!\n";
        return 0;
    }
    if(M1+M2>=m1+m2+m3+m4+m5){
        cout << "They need to work together!\n";
        if(M2-m5>=0){
                    M2=M2-m5;
                    m5=2;
        }else m5=1;
        
        if(M2-m4>=0){
                    M2=M2-m4;
                    m4=2;
        }else m4=1;
        
        if(M2-m3>=0){
                    M2=M2-m3;
                    m3=2;
        }else m3=1;
        
        if(M2-m2>=0){
                    M1=M1-m2;
                    m2=2;
        }else m2=1;
        
        if(M2-m1>=0){
                    M2=M2-m1;
                    m1=2;
        }else m1=1;
        
        cout <<"Vasyl: ";
        if(m1==1) cout<<1<<' ';
        if(m2==1) cout<<2<<' ';
        if(m3==1) cout<<3<<' ';
        if(m4==1) cout<<4<<' ';
        if(m5==1) cout<<5<<' ';
        cout<<endl;
        cout <<"Petro: ";
        if(m1==2) cout<<1<<' ';
        if(m2==2) cout<<2<<' ';
        if(m3==2) cout<<3<<' ';
        if(m4==2) cout<<4<<' ';
        if(m5==2) cout<<5<<' ';
        cout<<endl;
        return 0;
    }
        
        
    if((M1<m1+m2+m3+m4+m5) && (M2<m1+m2+m3+m4+m5)){
        cout << "They can not do it!\n";
        return 0;
    }
    
    cout << "Hello, World!\n";
    return 0;
}
