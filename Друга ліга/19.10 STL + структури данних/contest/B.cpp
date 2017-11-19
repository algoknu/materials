#include<iostream>
#include<stack>

using namespace std;


int main(){
    stack<int> st;

    string tmp;
    int val;
    do{
        cin >> tmp;
        if(tmp == "push"){
            cin >> val;
            st.push(val);
            cout << "ok\n";
        }else
        if(tmp == "pop"){
            if(!st.empty()){
                cout << st.top() << '\n';
                st.pop();
            }
            else
                cout << "error\n";
        }else
        if(tmp == "back"){
            if(!st.empty())
                cout << st.top() << '\n';
            else
                cout << "error\n";
        }else
        if(tmp == "size"){
            cout << st.size() << '\n';
        }else
        if(tmp == "clear"){
            cout << "ok\n";
            while(!st.empty())
                st.pop();
        }
    }
    while(tmp != "exit");
    cout << "bye\n";

    return 0;
}
