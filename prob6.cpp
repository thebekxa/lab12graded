#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("source.txt");
    ofstream fout("copy.txt");

    if (!fin) {
        cout << "Error";
        return 1;
    }

    string line;
    while (getline(fin, line)) {
        fout << line << "\n";  
    }
    fin.close();
    fout.close();
    return 0;
}
