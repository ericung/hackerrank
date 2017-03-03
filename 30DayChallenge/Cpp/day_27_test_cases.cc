#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

void print(int class_size, int min_attend, int shows) {
    int shows_printed = 0;
    int student[class_size];
    int positives = class_size;

    for (int i = 0; i < class_size; i++){
        student[i] = rand() % 1000 + 1;
    }

    int tmp, zero;
    int zeroes = 0;
    queue<int> negative_array;
    int negatives = 0;
    while (shows_printed < shows) {
        tmp = rand() % class_size; 
        if (student[tmp] > 0) {
            negative_array.push(tmp);
            student[tmp] = student[tmp] * -1;
            negatives++;
        }

        shows_printed++;
    }

    zero = rand() % negatives + 1;
    while (zeroes < zero) {
        tmp = negative_array.front();
        negative_array.pop();
        student[tmp] = 0;
        zeroes++;
        negatives--;
        if (negatives <= 1) {
            break;
        }
    }

    cout << class_size << " " << min_attend << endl;

    for (int i = 0; i < class_size; i++) {
        cout << student[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << 5 << endl;
    print (3, 1, 2);
    print (10, 3, 2);
    print (100, 50, 90);
    print (200, 150, 100);
    print (150, 100, 150);
    return 0;
}
