#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int read_and_work(vector<int> & a){
    cin >> a.front();
    if(a.front() == 0)
        return 0;
    for(int i = 1; i < (int)a.size(); i++)
        cin >> a[i];

    stack<int> st;
    int pos = 0;
    for(int i = 1; i <= (int)a.size(); i++){
        st.push(i);
        while(!st.empty() && st.top() == a[pos])
            pos++, st.pop();
    }
    return st.empty() + 1;
}

int main(){
    int n;
    cin >> n;

    while(n != 0){
        vector<int> a(n);
        do{
            int res = read_and_work(a);
            switch(res){
                case 1: cout << "No\n"; break;
                case 2: cout << "Yes\n"; break;
                default: cout << '\n';
            }
        }
        while(a.front() != 0);

        cin >> n;
    }
    return 0;
}

