#include<iostream>
#include<map>

using namespace std;

map<long long, unsigned int> saved;

unsigned int calc(long long i){
    if(i <= 2)
        return 1;
    if(saved.count(i))
        return saved[i];
    if(i % 2 == 1)
        return saved[i] = calc(6*i/7) + calc(2*i/3);
    return saved[i] = calc(i - 1) + calc(i - 3);
}

int main(){
    long long n;
    cin >> n;

    cout << calc(n);
    return 0;
}

