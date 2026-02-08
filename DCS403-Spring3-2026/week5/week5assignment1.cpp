#include <iostream>
using namespace std;

/** Return the factorial for a specified index */
long factorial(int n)
{
    if (n == 0)          // Base case
        return 1;
    else
        return n * factorial(n - 1);   // Recursive call
}

int main()
{
    int n = 5;
    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}
