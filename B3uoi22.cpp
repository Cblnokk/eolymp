#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int M1,M2,i,i1,i2,i3,i4,i5,k1,k2,s,f;
    f=0;
    s=0;
    int m[5];
    
    
    for(i=0;i<5;i++){
        cin>>m[i];
        s=s+m[i];
    }
    cin>>M1>>M2;

    if((M1>=s) && (M2>=s)){
        cout << "They both can do it!\n";
    }
   if((M1>=s) && (M2<s)){
        cout << "Vasyl can do it!\n";
        }
    if((M1<s) && (M2>=s)){
        cout << "Petro can do it!\n";
    }
    
    if((M1<s) && (M2<s)){
        for(i1=1;i1<3;i1++){
            for(i2=1;i2<3;i2++){
                for(i3=1;i3<3;i3++){
                    for(i4=1;i4<3;i4++){
                        for(i5=1;i5<3;i5++){
                            k1=0;
                            k2=0;
                            if(i1==1) k1=k1+m[0]; else k2=k2+m[0];
                            if(i2==1) k1=k1+m[1]; else k2=k2+m[1];
                            if(i3==1) k1=k1+m[2]; else k2=k2+m[2];
                            if(i4==1) k1=k1+m[3]; else k2=k2+m[3];
                            if(i5==1) k1=k1+m[4]; else k2=k2+m[4];
                            if((k1<=M1) && (k2<=M2) && (f==0)){
                                cout << "They need to work together!\n";
                                cout<<"Vasyl: ";
                                if(i1==1) cout<<"1 ";
                                if(i2==1) cout<<"2 ";
                                if(i3==1) cout<<"3 ";
                                if(i4==1) cout<<"4 ";
                                if(i5==1) cout<<"5 ";
                                cout<<endl;
                                cout <<"Petro: ";
                                if(i1==2) cout<<"1 ";
                                if(i2==2) cout<<"2 ";
                                if(i3==2) cout<<"3 ";
                                if(i4==2) cout<<"4 ";
                                if(i5==2) cout<<"5 ";
                                cout<<endl;
                                f=1;
                            }
                        }
                    }
                }
            }
        }
        if(f==0){
            cout << "They can not do it!\n";
        }
    }
    return 0;
}
