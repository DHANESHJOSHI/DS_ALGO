#include <iostream>
using namespace std;

// Function prototype
int Multiplication(int a, int b);

int main()
{
    // Clear the console
    system("clear");

    // Initialize variables
    int x = 5, y = 5;

    // Call the Multiplication function
    int result = Multiplication(x, y);

    // Output the result
    cout << result << endl;

    return 0;
}

// Function definition
int Multiplication(int a, int b)
{
    // Multiply the two numbers
    return a * b;
}
