#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream out;
    out.open("textfile.txt");
    out << "Success !!!" << endl;
    out.close();

    ifstream in("textfile.txt");
    string line;
    while (getline(in, line)) cout << line << endl;

    return 0;
}