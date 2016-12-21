#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;

    vector<string> name(N);
    vector<int> phone(N);
    vector<string> queries(N);

    for (int i=0; i<N; i++) {
        cin >> name[i];
        cin >> phone[i];
    }

    for (int i=0; i<N; i++) {
        cin >> queries[i];
    }

    for (int i=0; i<N; i++) {
        string s;
        for (int j=0; i<N; j++) {
            if (name[i] == queries[j]) {

            }
        }
        cout << queries[i] << endl;

    }

    return 0;
}
