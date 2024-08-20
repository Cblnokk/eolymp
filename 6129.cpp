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
deque<int> st;
char c[100];
int n;

int main(void) {
    
    while(cin>>c){
        if(strcmp(c, "push_front")==0){
            cin>>n;
            st.push_front(n);
            cout<<"ok"<<endl;
        }else{
            if(strcmp(c, "push_back")==0){
                cin>>n;
                st.push_back(n);
                cout<<"ok"<<endl;
            }else{
                if(strcmp(c, "pop_front")==0 && !st.empty()){
                    cout<<st.front()<<endl;
                    st.pop_front();
                }else{
                    if(strcmp(c, "pop_back")==0 && !st.empty()){
                        cout<<st.back()<<endl;
                        st.pop_back();
                    }else{
                        if(strcmp(c, "back")==0 && !st.empty()){
                            cout<<st.back()<<endl;
                        }else{
                            if(strcmp(c, "front")==0 && !st.empty()){
                                cout<<st.front()<<endl;
                            }else{
                                if(strcmp(c, "size")==0){
                                    cout<<st.size()<<endl;
                                }else{
                                    if(strcmp(c, "clear")==0){
                                        while (!st.empty())  // пока стек не пуст
                                        {
                                            st.pop_back();    // извлекаем верхний элемент
                                        }
                                        cout<<"ok"<<endl;
                                    }else{
                                        if(strcmp(c, "exit")==0){
                                            cout<<"bye"<<endl;
                                            break;
                                        }else{
                                            cout<<"error"<<endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
