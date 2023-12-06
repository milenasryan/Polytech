#include <iostream>

int gcd(int a, int b) 
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int greatest = gcd(num1, num2);

    std::cout << "The greatest common divisor (GCD) of " << num1 << " and " << num2 << " is " << greatest << std::endl;

    return 0;
}
