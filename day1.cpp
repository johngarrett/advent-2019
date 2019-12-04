#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int computeLine(string line);
int main () {
    ifstream input_file("day1.txt"); // "input file" stream
    
    if (input_file.is_open()) 
    {
        int sum = 0;
        string line;
        while (getline(input_file, line))
            sum += computeLine(line);

        input_file.close();
        cout << sum;

    }
    else
        cout << "couldn't read file";
}

int computeLine(string line) {
    return stoi(line) / 3 - 2;
}
