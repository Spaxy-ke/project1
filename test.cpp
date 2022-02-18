#include <bits/stdc++.h>
using namespace std;

void modularEquation(int a, int b)
{
    // if a is less than b then no solution
    if (a < b) {
        cout << "No solution possible " << endl;
        return;
    }

    // if a is equal to b then every number
    // greater than a will be the solution
    // so its infinity
    if (a == b) {
        cout << "Infinite Solution possible " << endl;
        return;
    }

    // all resultant number should be greater than
    // b and (a-b) should be divisible by resultant
    // number

    // count variable store the number of values
    // possible
    int count = 0;
    int n = a - b;
    int y = sqrt(a - b);
    for (int i = 1; i <= y; ++i) {
        if (n % i == 0) {

            // checking for both divisor and quotient
            // whether they divide ( a-b ) completely
            // and greater than b .
            if (n / i > b)
                count++;
            if (i > b)
                count++;
        }
    }

    // Here y is added twice in the last iteration
    // so 1 y should be decremented to get correct
    // solution
    if (y * y == n && y > b)
        count--;

    cout << count << endl;
}

// Driver code
int main()
{
    int a = 21, b = 5;
    modularEquation(a, b);
    return 0;
}+
