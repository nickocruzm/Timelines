#include <iostream>
#include <fstream>

using namespace std;

/*
    Read and write the contents of the file to textfile
*/

void write(string& , string);
bool fileExists(string& fname);
string get_input();

int main(){
    string data = get_input();
    string fileName = "file.txt";
    write(fileName, data);
}

bool fileExists(string& fname){
    fstream file(fname);
    return file.good();
}

string get_input(){
    string userInput;
    getline(cin, userInput);
    return userInput;
}

void write(string& fileName, string data){
    /*
        checks if file exists. 
            If file does exist, then open file in append mode.
            If file does not exist, then create file
        
        write data into file
    */
    ofstream writeFile; //output file stream



    if(fileExists(fileName)){
        // opens file in append mode
        writeFile.open(fileName, ios::app);
        // appends data to file
        writeFile << data;
    }else{
        // file does not exist so create file, then append data
        writeFile.open(fileName);
        writeFile<< data;
    }
    // make sure to add a new line to the data
    writeFile<< "\n";

    // close file
    writeFile.close();

}
