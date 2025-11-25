// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;

bool isPrime(int n){
    int s=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            s++;
        }
    }
    if(s==1) return true;
    else return false;
}

int main() {
    int n;
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(isPrime(i)){
            if(isPrime(n-i)){
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
    }
    
    return 0;
}
