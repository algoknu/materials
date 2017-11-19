#include<iostream>
#include<map>

using namespace std;

map<long long, long long> saved;
int p, q;

long long calc(long long i){
    if(i == 0)
        return 1;
    if(saved.count(i))
        return saved[i];
    return saved[i] = calc(i/p) + calc(i/q);
}

int main(){
    long long n;
    cin >> n >> p >> q;

    cout << calc(n);
    return 0;
}

