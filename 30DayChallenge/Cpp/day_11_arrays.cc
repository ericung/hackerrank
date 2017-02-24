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
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }

    int max_sum = -64;
    int sum;
    for(int arr_i = 1; arr_i < 5; arr_i++){
        sum = 0;
        for(int arr_j = 1; arr_j < 5; arr_j++){
            sum = arr[arr_i-1][arr_j-1] + arr[arr_i-1][arr_j] + 
                arr[arr_i-1][arr_j+1] + arr[arr_i][arr_j] +
                arr[arr_i+1][arr_j-1] + arr[arr_i+1][arr_j] + 
                arr[arr_i+1][arr_j+1];
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }

    cout << max_sum << endl;

    return 0;
}

