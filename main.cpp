#include <iostream>
#include <fstream>

using namespace std;

/*
    Read and write the contents of the file to textfile
*/

void write(string& , string&);

int main() {



}

void write(string& fileName, string data){
    ofstream outputFile;
    outputFile.open(fileName);

    if (outputFile.is_open()){
        outputFile << data;
    }
    outputFile.close();

}