#include<iostream>
#include<string>

using namespace std;

int main(){
    string s, tmp1, tmp2;
    int n;
    cin >> s
        >> n;

    for(int i = 0; i < n; i++){
            cin >> tmp1;
            int pos = tmp1.find('-');
            tmp2.assign(tmp1.begin() + pos + 1, tmp1.end());
            tmp1.resize(pos);

            pos = s.find(tmp1);
            if(pos == string::npos){
                s += tmp2;
            }
            else{
                s.erase(pos, tmp1.size());
                s.insert(pos, tmp2);
            }
    }
    cout << s;



    return 0;
}
