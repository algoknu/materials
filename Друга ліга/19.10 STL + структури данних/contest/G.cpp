#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<pair<int, pair<int, int> > > a(n);
    for(auto & i : a)
        cin >> i.first
            >> i.second.first
            >> i.second.second;
    sort(a.begin(), a.end());

    for(auto & i : a)
        cout << i.first << ' '
             << i.second.first << ' '
             << i.second.second << '\n';

    return 0;
}
