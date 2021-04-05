#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
 
int main()
{.
    char data[15];
    int n = 0, option = 0, count_n = 0;
    // This is the initial mark alloted to a subject.
    string empty = "00";
    string proctor = "";
    // Name of the file in which DB is stored.
    ifstream f("Example.txt");
    string line;

    // The following for loop counts the total number of
    // lines in the file.
    for (int i = 0; std::getline(f, line); ++i) {
        count_n++;
    }
    while (option != 6) {
        // This prints out all the available options in the
        // DB
        cout << "\nAvailable operations: \n1. Add New "
                "Students\n2."
             << "Student Login\n3. Faculty Login\n4. "
                "Proctor Login\n5. Admin View\n"
             << "6. Exit\nEnter option: ";
        