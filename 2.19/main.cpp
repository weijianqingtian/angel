#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int sum = 0;
    int average = 0;
    int product = 0;




    cout << "Input three different integers: ";
    cin >> number1 >> number2 >> number3;

    sum = number1 + number2 + number3;
    std::cout << "Sum is " << sum << std::endl;

    average = ( number1 + number2 + number3) / 3;
    std::cout << "Average is " << average << std::endl;

    product = number1 * number2 * number3;
    std::cout << "Product is " << product << std::endl;

    if ( number1 > number2 && number1 > number3 )
    std::cout << "Largest is " << number1 << std::endl;
    else if ( number2 > number3 && number2 > number1)
    std::cout << "Largest is  " << number2 << std::endl;
    else if ( number3 > number1 && number3 > number2 )
    std::cout << "Largest is  " << number3 << std::endl;


    if ( number1 < number2 && number1 < number3 )
    std::cout << "Smallest is " << number1 << std::endl;
    else if ( number2 < number1 && number2 < number3 )
    std::cout << "Smallest is " << number2 << std::endl;
    else if ( number3 < number1 && number3 < number2 )
    std::cout << "Smallest is  " <<  number3 << std::endl;

    return 0;





}
