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
using namespace std;

int main(){
    int N;
    cin >> N;

    // filter and print
    string type;

    if (N % 2 == 1) {
        type = "Weird";
    } else if ((2 <= N)&&(N < 5)) {
        type = "Not Weird";
    } else if ((6 <= N)&&(N <= 20)){
        type = "Weird";
    } else if (N >= 20) {
        type = "Not Weird";
    }

    cout << type << endl;

    return 0;
}

