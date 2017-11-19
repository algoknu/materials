#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool right_bracket_seq(string & tmp){
    stack<char> st;

    for(auto c : tmp){
        if(c == '(' || c == '[')
            st.push(c);
        else
            if(!st.empty() &&
               ((c == ')' && st.top() == '(') ||
                (c == ']' && st.top() == '[')))
                    st.pop();
            else
                return 0;
    }
    return st.empty();
}

int main(){
    string tmp;
    int n;
    cin >> n;
    getline(cin, tmp);

    for(int i = 0; i < n; i++){
        getline(cin, tmp);
        if(right_bracket_seq(tmp))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
