#include <string>
#include <iostream>

using namespace std;


int main(){
    string S;
    cin >> S;

    // compile with g++ -std=c++11 ...
    try {
        int num = stoi(S);
        cout << num;
    } catch (const invalid_argument& e) {
        cout << "Bad String" << '\n';
    }
    return 0;
}
