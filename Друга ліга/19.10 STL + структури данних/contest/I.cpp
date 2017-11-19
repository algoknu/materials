#include<iostream>
#include<set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> butterflies;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        butterflies.insert(tmp);
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if(butterflies.count(tmp))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
