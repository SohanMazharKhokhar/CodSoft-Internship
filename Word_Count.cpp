//Program to count words from a file
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int Word_count() {
    ofstream fout;
    ifstream fin;
    string arr;
    string file_name;
    int word_count = 1;
    cout<<"Please Enter a File Name\n";
    cin>>file_name;
    fin.open(file_name);
    if (!fin.is_open()) {
        cout << "File is not opened" << endl;
        return 1;
    }
    while (fin >> arr) {
        word_count++;
    }
    fin.close();
    cout << "Total word count from a file is\t" <<  word_count << endl;
    return 0;
}
int main(){
   //This funtion will count words from a given file after taking a file name from user
   Word_count();
   return 0;
}

