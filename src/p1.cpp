// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;
long long fac(int n){
    if(n<1)return 1;
    return n*fac(n-1);
}

long long s(int n){
    if(n==1) return 1;
    return n+s(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<fac(n)<<endl<<s(n);
    
    return 0;
}
