#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double sumOfProduct(vector<int> arrayX, vector<int> arrayW) {
    double sum = 0;
    for (int i = 0; i < arrayX.size(); i++) {
        sum += arrayX[i]*arrayW[i];
    }
    return sum;
}

double sumOfWeight(vector<int> array) {
    double sumWeight = 0;
    for (vector<int>::iterator it = array.begin(); it!= array.end(); ++it) {
        sumWeight += *it;
    }

    return sumWeight;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cout.precision(1);
    cout << fixed;
    vector<int> arrayX;
    vector<int> arrayW;

    int N, tmp;
    cin >> N;
    for (int i = 0; i < N; i++) {
       cin >> tmp;
       arrayX.push_back(tmp);
    }

    for (int i = 0; i < N; i++) {
        cin >> tmp;
        arrayW.push_back(tmp);
    }

    // calculate weighted mean
    double productSum = sumOfProduct(arrayX, arrayW);
    double weight = sumOfWeight(arrayW);

    cout << (productSum/weight) << endl;
    
    return 0;
}
