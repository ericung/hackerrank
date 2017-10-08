#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double mean(vector<int> array) {
    double sum = 0;
    for (vector<int>::iterator it = array.begin(); it!= array.end(); ++it) {
        sum += *it;
    }

    return (sum/array.size()); 
}

double median(vector<int> array) {
    sort(array.begin(), array.end());

    double med;
    if (array.size() % 2 == 0) {
        med = (array[array.size()/2 - 1] + array[array.size()/2])/2.0;
    } else {
        med = array[(array.size()+1)/2 - 1];
    }

    return med;
}

int mode(vector<int> array) {
    sort(array.begin(), array.end());

    int md = 0;
    int tmp_value = 0;
    int final_count= 0;
    int count = 1;
    for (vector<int>::iterator it = array.begin(); it != array.end(); ++it) {
        if (tmp_value == *it) {
            count++;
        } else {
            tmp_value = *it;
            count = 1;
        }

        if (count > final_count) {
           md = tmp_value; 
           final_count = count;
        }
    }

    return md;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cout.precision(1);
    cout << fixed;
    vector<int> array;

    int N, tmp;
    cin >> N;
    for (int i = 0; i < N; i++) {
       cin >> tmp;
       array.push_back(tmp);
    }

    // calculate sum for mean
    cout << mean(array) << endl;

    // calculate median
    cout << median(array) << endl;

    // calculate mode
    cout << mode(array) << endl;
    
    return 0;
}
