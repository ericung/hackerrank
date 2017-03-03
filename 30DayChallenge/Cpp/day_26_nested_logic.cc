#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int actual_day, actual_month, actual_year;
    int expected_day, expected_month, expected_year;
    cin >> actual_day;
    cin >> actual_month;
    cin >> actual_year;
    cin >> expected_day;
    cin >> expected_month;
    cin >> expected_year;

    int hackos = 0;
    if (expected_year == actual_year) {
        if (expected_month == actual_month) {
            if (expected_day < actual_day) {
                hackos = 15 * (actual_day - expected_day);
            }
        } else if (expected_month < actual_month) {
            hackos = 500 * (actual_month - expected_month);
        }
    } else if (expected_year < actual_year) {
        hackos = 10000;
    }

    cout << hackos << endl;

    return 0;
}

