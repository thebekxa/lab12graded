#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);        
    ofstream fout("message.txt"); 
    fout << text;                
    fout.close();               

    return 0;
}
