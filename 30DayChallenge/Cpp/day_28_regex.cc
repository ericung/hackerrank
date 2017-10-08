#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int N;
    cin >> N;
    string firstName[N];
    string emailID[N];
    for(int a0 = 0; a0 < N; a0++){
        cin >> firstName[a0] >> emailID[a0];
    }

    string tmp = 0;
    string tmpValue = firstName[tmp];
    for(int a0 = 1; a0 < N; a0++){
        if (firstName[a0] < firstName[tmp]) {
            firstName[a0] = 
        }
    }

    for(int a0 = 0; a0 < N; a0++) {
        cout << firstName[a0] << " " << emailID[a0] << endl;
    }

    return 0;
}

