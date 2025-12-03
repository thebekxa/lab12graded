#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("text.txt");
    if (!fin) {
        cout << "Error: cannot open text.txt";
        return 1;
    }

    string line;
    int count = 0;

    while (getline(fin, line)) {
        count++;             
    }
    cout << count;

    fin.close();
    return 0;
}
