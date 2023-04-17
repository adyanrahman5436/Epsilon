#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//this program will find the minimum precison error between a floating point
//and the rounded whole number equivalent

int main()
{
    
    //declaring the variables of the numnber and the whole number
    
    double number, wholeNumber;
    
    //asking the user to input a number based on the format. numbers left of 
    //decimal point can have more than one digit
    
    cout << "Enter a number in the form of X.XX: ";
    cin >> number;  
    
    //calculating the wholeNumber equivalent. one that is rounded and one
    //that is exactly the equivalent
    
    wholeNumber = round(number * 100);
    number = number * 100;
    
    //outputting the precison error of the number by getting the absolute value
    //of the difference of the rounded number and the exact value number
    
    cout << fixed << setprecision(16) << "Minimum epsilon: " << abs(wholeNumber - number);

    return 0;
}
