#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost, tip, tax;
    int tipPercent, taxPercent, totalCost;

    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;

    tip = mealCost*(tipPercent/100.0);
    tax = mealCost*(taxPercent/100.0);

    totalCost = (int)round(mealCost + tip + tax);

    cout << totalCost << endl;

    return 0;
}
