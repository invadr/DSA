/*
Task
Complete the code in the editor below. The variables i, d, and s are already 
declared and initialized for you. You must:

1. Declare 3 variables: one of type int, one of type double, and one of type String.
2. Read 3 lines of input from stdin (according to the sequence given in the Input 
Format section below) and initialize your 3 variables.
3. Use the + operator to perform the following operations:
  1. Print the sum of i plus your int variable on a new line.
  2. Print the sum of d plus your double variable to a scale of one decimal place on a new line.
3. Concatenate s with the string you read as input and print the result on a new line.
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int a = 0;
    double b = 0.0;
    string c = "";
    
    // Read and save an integer, double, and String to your variables.
    cin >> a;
    cin >> b;
    getline(cin >> ws, c);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i + a << endl;
    
    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + b);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + c << endl;

    return 0;