#include <iostream>
#include <cmath>
using namespace std;

// QUESTION 3
double sum_recursive(int n){
    if (n == 1){
        return 1;
    }
    else{
        double sum = sum_recursive(n -1);
        return sum + pow(-1, n+1)/n;
    }
}

// QUESTION 4
double sum_recursive() {
    int n;
    while(true){
        cout << "Enter the value of n: ";
        cin >> n;
        if(n>0){
            return sum_recursive(n);
        }
        else{
            cout << "n should be grater than 0" << endl;
            continue;
        }
    }
}

int main() {
    int n;
    double result;
    while(true) {
        cout << "Enter the value of n: ";
        cin >> n;
        if (n > 0) {
            // Using the first function
            result = sum_recursive(n);
            cout << "The sum of the series is: " << result << endl;
            break;
        } else {
            cout << "n should be grater than 0" << endl;
            continue;
        }
    }
    // Using the second overloaded function
    result = sum_recursive();
    cout << "The sum of the series is: " << result << endl;
}
