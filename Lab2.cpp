#include <iostream>
#include <fstream>
#include <string>

using namespace std;

float autofunc(float x) {
	float y = 0;
	if (x < -4) y = -2;
	else if (x < 0) y = x / 4;
	else if (x < 2) y = x * x;
	else y = (x - 10) / -2;
	return y;
}


int main() {
	ofstream out;
	out.open("textfile.txt");
	for (float x = -6; x <= 12; x++) out << "X:= " << x << "\tY:= " << autofunc(x) << endl;
	out.close();
	ifstream in("textfile.txt");
	string line;
	while (getline(in, line)) cout << line << endl;
	return 0;
}
