#include <iostream>
#include <fstream>

using namespace std;

/*
    Read and write the contents of the file to textfile
*/

int main() {
    // Create an ofstream object to work with files
    std::ofstream outputFile;
    outputFile.open("example.txt");
    string input = "INPUT";

    if (outputFile.is_open()){
        outputFile << input;
    }
    outputFile.close();


}