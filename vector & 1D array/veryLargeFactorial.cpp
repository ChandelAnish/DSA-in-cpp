#include <iostream>

using namespace std;

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number = 25;
    unsigned long long result = factorial(number);
    cout << "The factorial of " << number << " is: " << result << endl;
    return 0;
}
