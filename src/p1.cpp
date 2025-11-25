#include <iostream>
using namespace std;

long long factorial(int n){
    if(n == 0) return 1;   
    return n * fac(n - 1);
}

long long sum(int n){
    if(n == 0) return 0;   
    return n + s(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl << sum(n);
    return 0;
}
