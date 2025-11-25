#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int print(int n){
    for(int i = 2; i <= n; i++){
        if (isPrime(i)==true){
            if(isPrime(n-i)==true){
                cout<<i<<" "<<n-i<<endl;
                return 0;
            }
        }
    }
    return 0;
}
int main(){
    int number;
    cin >> number;
    print(number);
    return 0;
}
