#include <iostream>

using namespace std;

int fibonacci(int);

int main()
{
    int num;
    int fib;

    cout << "Enter a number: ";
    cin >> num;

    fib = fibonacci(num);

    cout << endl << "Fibonacci series: " << num << endl;

    return 0;
}

int fibonacci(int num)
{
    if(num == 0)
    {
        return 0;
    }

    if(num == 1)
    {
        return 1;
    }

    if(num > 1)
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
