#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("even.txt");

    if (!fin) {
        cout << "Error: cannot open input.txt";
        return 1;
    }

    int x;
    while (fin >> x) {
        if (x % 2 == 0) {      
            fout << x << " ";   
        }
    }

    fin.close();
    fout.close();

    return 0;
}
