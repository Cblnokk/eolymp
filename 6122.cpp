#include <iostream>
#include <math.h>
#include <string>
#include <numeric>
#include <map>
#include <algorithm>
#include <set>
#include <stack>
#include <cstdio>
#include <cstring>
#include <deque>
//#include <bits/stdc++.h>
using namespace std;

    stack<int> st;
    char c[100];
    int n;

int main(void) {
    while(cin>>c){
        if(strcmp(c, "push")==0){
            cin>>n;
            st.push(n);
            cout<<"ok"<<endl;
        }else{
            if(strcmp(c, "pop")==0){
                cout<<st.top()<<endl;
                st.pop();
            }else{
                if(strcmp(c, "back")==0){
                    cout<<st.top()<<endl;
                }else{
                    if(strcmp(c, "size")==0){
                        cout<<st.size()<<endl;
                    }else{
                        if(strcmp(c, "clear")==0){
                            while (!st.empty())  // пока стек не пуст
                            {
                                st.pop();    // извлекаем верхний элемент
                            }
                            cout<<"ok"<<endl;
                        }else{
                            cout<<"bye"<<endl;
                            break;
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
