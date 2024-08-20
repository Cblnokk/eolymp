#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    long long m,k;
    cin>>m;
    
        k=0;
        k=k+(m/100)*200;
        m=m%100;
        
        if((m%100>73)&&(m<1000)) k+=200;
        else{
            k=k+(m/50)*125;
            m=m%50;
            if((m%100>41)&&(m<1000)) k+=125;
            else{
                k=k+(m/10)*30;
                m=m%10;
                if((m%10>7)&&(m<1000)) k+=30;
                else{
                    k=k+m*4;
                }
            }
        }
    cout << k <<endl;
    return 0;
}
/*
 74 201
 100 200
 
 974 2001
 1000 2000
 */
