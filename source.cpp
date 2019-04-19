#include <iostream>
using namespace std;

// a GetTwoNumbers function,
void GetTwoNumbers(int*,int*);

// and a FindBigOne function
int FindBigOne(int,int);

// Write a complete C++ program that has a
// main function
int main()
{
    // Incorporate a loop in the main function
    char userChoice = 'y';
    do {
        int firstNumber, secondNumber;
        int *firstNumber_ptr = &firstNumber, *secondNumber_ptr = &secondNumber;
        
        // The main calls the GetTwoNumbers function, which asks the user for two integers.
        GetTwoNumbers(firstNumber_ptr, secondNumber_ptr);

        // Then the program sends the two ints to FindBigOne, 
        // which returns the larger value to main
        int bigOne = FindBigOne(firstNumber, secondNumber);
        cout << "The larger of the two values you entered, " << firstNumber << " and " << secondNumber << " is " << bigOne << endl;

        // so that the user can keep entering two values as long
        // as he or she desires
        cout << "Do you want to try again? Enter y if yes or n if no" << endl;
        cin >> userChoice;
    } while(userChoice == 'y' || userChoice == 'Y');
    return 0;
}

// a GetTwoNumbers function,
void GetTwoNumbers(int* first_ptr, int* second_ptr) {
    // The main calls the GetTwoNumbers function, which asks the user for two integers.
    cout << "Enter two numbers and we'll find the larger one :)" << endl;
    cin >> *first_ptr >> *second_ptr;
}

// and a FindBigOne function
int FindBigOne(int first, int second) {
    // Then the program sends the two ints to FindBigOne, 
        // which returns the larger value to main
    if(first > second)
        return first;
    else return second;
}