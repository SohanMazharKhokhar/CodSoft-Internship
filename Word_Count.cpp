//Program to count words from a file
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int Word_count() {
    ifstream fin;
    string file_name;
    string arr;
    int word_count = 1; 
    while(1){
    cout << "Please Enter a File Name\n";
    cin >> file_name;
    fin.open(file_name);

    if (!fin.is_open()) {
        cout << "File is not opened" << endl;
        return 1;
    }
    while (getline(fin, arr)) {
        string words = "";
        
        for (char character : arr) {
            if (character != ' ' && character != '\t') {
                words += character;
            } else if (!words.empty()) {
                words = "";
                word_count++;
            }
        }
    }
    fin.close();
    cout << "Total word count from a file is\t" << word_count << endl;
    }
    return 0; 
}

int main(){
   //This funtion will count words from a given file after taking a file name from user
   Word_count();
   return 0;
}

