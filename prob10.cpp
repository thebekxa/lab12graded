#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cin >> filename;             

    ifstream fin(filename);
    if (!fin) {
        cout << "Error: cannot open file";
        return 1;
    }

    char c;
    int count = 0;

    while (fin.get(c)) {         
        count++;
    }
    cout << count;

    fin.close();
    return 0;
}
