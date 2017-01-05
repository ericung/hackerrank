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
    int n;
    cin >> n;

    string s = bitset<32>(n).to_string();
    int longest_consecutive = 0;
    int current = 0;

    for(string::iterator it=s.begin(); it!=s.end(); ++it) 
    {
        if (*it == '1') {
            current++;
            
            if (current > longest_consecutive){
                longest_consecutive = current;
            }
        } else {
            current = 0;
        }
    }

    cout << longest_consecutive << endl;

    return 0;
}
