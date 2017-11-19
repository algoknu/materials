#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){

    int n;
    cin >> n;
    multiset<long long> s;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    long long res = 0;
    while(s.size() > 1){
        long long a1 = *s.begin();
        s.erase(s.begin());
        long long a2 = *s.begin();
        s.erase(s.begin());
        s.insert(a1 + a2);
        res += a1 + a2;
    }
    cout << res;

    return 0;
}
