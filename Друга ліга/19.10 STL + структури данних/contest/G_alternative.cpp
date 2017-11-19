#include<iostream>
#include<algorithm>
#include<vector>
#include<tuple>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<tuple<int, int, int>> a(n);
    for(auto & i : a)
        cin >> get<0>(i) >> get<1>(i) >> get<2>(i);
    sort(a.begin(), a.end());

    for(auto & i : a)
        cout << get<0>(i) << ' '
             << get<1>(i) << ' '
             << get<2>(i) << '\n';

    return 0;
}

