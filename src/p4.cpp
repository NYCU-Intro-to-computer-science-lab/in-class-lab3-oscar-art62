#include <iostream>
using namespace std;

int fib(int n, int depth) {

    for (int i = 0; i < depth; i++) cout << "|--";
    cout << "SEARCH fib(" << n << ")\n";

    if (n == 1) {
        for (int i = 0; i < depth; i++) cout << "|--";
        cout << "GET fib(1) = 1\n";
        return 1;
    }

    if (n == 2) {
        for (int i = 0; i < depth; i++) cout << "|--";
        cout << "GET fib(2) = 1\n";
        return 1;
    }

    int left  = fib(n - 1, depth + 1);
    int right = fib(n - 2, depth + 1);

    for (int i = 0; i < depth; i++) cout << "|--";
    cout << "GET fib(" << n << ") = " << left + right << "\n";

    return left + right;
}

int main() {
    int n;
    cin >> n;
    int result = fib(n, 0);
    cout << result << endl;  
    return 0;
}
