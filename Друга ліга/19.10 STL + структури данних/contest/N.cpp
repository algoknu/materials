#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

bool comp(const pair<string, int> & a, const pair<string, int> & b){
    return a.second < b.second || (a.second == b.second && a.first < b.first);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> dict;
    int n;
    string tmp;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        dict[tmp]++;
    }
    auto it = max_element(dict.begin(), dict.end(), comp);
    cout << it->first << ' ' << it->second;

    return 0;
}
