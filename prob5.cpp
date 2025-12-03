#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fa("a.txt"), fb("b.txt");

    if (!fa || !fb) {
        cout << "Error";
        return 1;
    }

    int x, count = 0;

    while (fa >> x) count++;
    while (fb >> x) count++;

    cout << count;

    fa.close();
    fb.close();

    return 0;
}
