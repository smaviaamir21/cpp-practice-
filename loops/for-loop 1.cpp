#include<iostream>
using namespace std;

int factorial(int num);

int main(){
    int n;
    cout << "Enter number for factorial: ";
    cin >> n;
    cout << factorial(n) << " is the factorial of " << n << "\n";
    return 0;
}

int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}
