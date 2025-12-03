#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main() {
    ifstream fin("numbers.txt");
    if (!fin) {
        cout << "cannot open numbers.txt";
        return 1;
    }

    int x;
    int maxNum = INT_MIN;

    while (fin >> x) {
        if (x > maxNum)
            maxNum = x;
    }

    cout << maxNum;

    fin.close();
    return 0;
}
