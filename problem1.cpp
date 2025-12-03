#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin("input.txt");   
    if (!fin) {                 
        cout << "Error: cannot open input.txt";
        return 1;
    }

    int x, sum = 0;
    while (fin >> x) {         
        sum += x;               
    }

    cout << sum;                 
    fin.close();                
    return 0;
}
