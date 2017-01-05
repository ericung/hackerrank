#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count;
    bool isEvenIndex;
    string in, even, odd;
    vector<string> input_str;

    cin >> count;

    for(int i=0; i<count; i++)
    {
        cin >> in;
        input_str.push_back(in);
    }

    for (vector<string>::iterator it = input_str.begin(); it != input_str.end(); ++it) 
    {
        isEvenIndex = false;
            
        for (string::iterator ch = (*it).begin(); ch != (*it).end(); ++ch)
        {
            if (isEvenIndex) 
            {
                even.push_back(*ch);
                isEvenIndex = false;
            }
            else
            {
                odd.push_back(*ch);
                isEvenIndex = true;
            }
        }

        cout << even << " " << odd << endl;

       even.clear(); 
       odd.clear(); 
    }

    return 0;
}

