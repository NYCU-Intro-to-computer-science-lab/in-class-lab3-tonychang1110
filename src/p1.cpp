#include<iostream>
using namespace std;

long long factorial(int n)
{
    if(n <= 1)
        return 1;
    return n * factorial(n - 1);
}

long long sum(int n)
{
    if(n <= 0)
        return 0;
    return n + sum(n - 1);
}

int main(){
    int number;
    cin >> number;

    long long summation = sum(number);

    cout << factorial(number) <<endl;
    cout << sum(number) << endl;

    return 0;
}
