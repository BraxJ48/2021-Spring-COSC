#include <iostream>
#include "pch.h"
using namespace std;

int main(Platform::Array < Platform::String^>^ args)
{
    int firstNumber, int secondNumber, sumOfTwoNumbers, differenceOfTwoNumbers, productOfTwoNumbers, quotientOfTwoNumbers, minOftwoNumbers, maxOfTwoNumbers;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers is stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
   
    // difference of two numbers is stored in variable differenceOfTwoNumbers
    differenceOfTwoNumbers = firstNumber - secondNumber;
   
    // product of two numbers is stored in variable productOfTwoNumbers
    productOfTwoNumbers = firstNumber * secondNumber;

    // quotient of two numbers is stored in variable quotientOfTwoNumbers
    quotientOfTwoNumbers = firstNumber % secondNumber;

   // min of two numbers is stored in variable minOfTwoNumbers
   minOftwoNumbers = secondNumber ^ ((firstNumber ^ secondNumber) & -(firstNumber < secondNumber));
   
   // max of two numbers is stored in variable maxOfTwoNumbers
   maxOfTwoNumbers = firstNumber ^ ((firstNumber ^ secondNumber) & -(firstNumber < secondNumber)); 

   // Prints sum
    cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;
    
    // Prints difference
    cout << firstNumber << " - " << secondNumber << " = " << differenceOfTwoNumbers; 

    // Prints product 
    cout << firstNumber << " * " << secondNumber << " = " << productOfTwoNumbers;
    
    // Prints quotient
    cout << firstNumber << " % " << secondNumber << " = " << quotientOfTwoNumbers;
   
    /*Function to find minimum of firstNumber and secondNumber*/
    int minOfTwoNumbers (int firstNumber, int secondNumber);
    {
        return secondNumber ^ ((firstNumber ^ secondNumber) & -(firstNumber < secondNumber)); 
    }

    /*Function to find maximum of firstNumber and secondNumber*/
    int maxOfTwoNumbers(int firstNumber, int secondNumber);
    {
        return firstNumber ^ ((firstNumber ^ secondNumber) & -(firstNumber < secondNumber));
    }
    {
        cout << "Minimum of " << firstNumber <<
        " and " << secondNumber << " is ";
    cout << minOfTwoNumbers ( firstNumber, secondNumber);
    cout << "\nMaximum of " << firstNumber <<
        " and " << secondNumber << " is ";
    cout <<  max(firstNumber, secondNumber);
    getchar();
    }
    return 0;

}