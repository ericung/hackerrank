#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;

    vector<string> name(N);
    vector<int> phone(N);
    vector<string> query(N);
    map<string,int> entry;

    for (int i=0; i<N; i++) {
        cin >> name[i];
        cin >> phone[i];
        entry[name[i]]=phone[i];
    }

    for(int i=0; i<N; i++) {
        cin >> query[i];
    }

    for (vector<string>::iterator it = query.begin(); it!= query.end(); ++it) {
        if ((*it).empty()){
            break;
        }

        if (entry[*it] == 0) {
            cout << "Not found" << endl;
        } else {
            cout << *it << "=" << entry[*it] << endl;
        }
    }

    return 0;
}
