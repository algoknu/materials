#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(const pair<int, int> & a, const pair<int, int> & b){
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > a(n);
    for(auto & i : a)
        cin >> i.first >> i.second;

    stable_sort(a.begin(), a.end(), comp);
    for(auto & i : a)
        cout << i.first << ' ' << i.second << '\n';



    return 0;
}
