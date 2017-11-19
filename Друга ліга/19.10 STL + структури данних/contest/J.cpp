#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto & i : a)
        cin >> i;

    multiset<int> segment(a.begin(), a.begin() + k);
    cout << *segment.begin() << ' ';

    for(int i = k; i < n; i++){
        segment.erase(segment.find(a[i - k]));
        segment.insert(a[i]);
        cout << *segment.begin() << ' ';
    }

    return 0;
}
