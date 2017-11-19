#include<iostream>
#include<stack>
#include<deque>

using namespace std;


int main(){
    deque<int> st;

    string tmp;
    int val;
    do{
        cin >> tmp;
        if(tmp == "push_back"){
            cin >> val;
            st.push_back(val);
            cout << "ok\n";
        }else
        if(tmp == "pop_back"){
            if(!st.empty()){
                cout << st.back() << '\n';
                st.pop_back();
            }
            else
                cout << "error\n";
        }else
        if(tmp == "push_front"){
            cin >> val;
            st.push_front(val);
            cout << "ok\n";
        }else
        if(tmp == "pop_front"){
            if(!st.empty()){
                cout << st.front() << '\n';
                st.pop_front();
            }
            else
                cout << "error\n";
        }else
        if(tmp == "back"){
            if(!st.empty())
                cout << st.back() << '\n';
            else
                cout << "error\n";
        }else
        if(tmp == "front"){
            if(!st.empty())
                cout << st.front() << '\n';
            else
                cout << "error\n";
        }else
        if(tmp == "size"){
            cout << st.size() << '\n';
        }else
        if(tmp == "clear"){
            cout << "ok\n";
            while(!st.empty())
                st.pop_();
        }
    }
    while(tmp != "exit");
    cout << "bye\n";

    return 0;
}
