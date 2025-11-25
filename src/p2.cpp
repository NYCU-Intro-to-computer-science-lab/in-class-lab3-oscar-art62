// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;

int gcd(int a,int b){
    int ma = (a>b)?a:b;
    int mi = (a<b)?a:b;
    if(ma%mi==0) return mi;
    else return gcd(mi,ma%mi);
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    
    return 0;
}
