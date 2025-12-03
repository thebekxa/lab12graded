#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int N;
    cin >> N;                    

    ofstream fout("count.txt"); 

    for (int i = 1; i <= N; i++) {
        fout << i << " ";       
    }

    fout.close();              
    return 0;
}
