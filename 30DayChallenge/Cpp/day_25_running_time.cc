#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool PrimeTester(int num) {
    if (num == 1) {
        return false;
    }
    int squareRoot = (int)floor(sqrt(num));
    for (int i = 2; i <= squareRoot; i++){
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> testCases;
    int test;
    for (int i = 0; i< n; i++){
        cin >> test;
        testCases.push_back(test);
    }
    for (vector<int>::iterator it = testCases.begin(); it != testCases.end(); it++){
        if (PrimeTester(*it) == true) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}

