#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i_in;
    double d_in;
    string s_in;

    // Read and save an integer, double, and String to your variables.
    cin >> i_in;
    cin >> d_in;
    cin.ignore();
    getline(cin, s_in);

    // Print the sum of both integer variables on a new line.
    cout << (i + i_in) << endl;

    // Print the sum of the double variables on a new line.
    cout.precision(1);
    cout << fixed << (double)(d + d_in) << endl;


    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << (string)(s + s_in) << endl;

    return 0;
}
