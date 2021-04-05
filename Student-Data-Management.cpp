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
        cin >> option;

        if (option == 1) {
            cout << "Enter the number of students: ";
            cin >> n;
 
            count_n = count_n + n;
 
            for (int i = 0; i < n; i++) {
                ofstream outfile;
                outfile.open("Example.txt", ios::app);
                // The entire data of a single student is
                // stored line-by-line.
                cout << "Enter your registration number: ";
                cin >> data;
                outfile << data << "\t";
 
                cout << "Enter your name: ";
                cin >> data;
                int len = strlen(data);
 
                while (len < 15) {
                    data[len] = ' ';
                    len = len + 1;
                }
                outfile << data << "\t";
                // Inserting empty data initially into the
                // file
                outfile << empty << "\t";
                outfile << empty << "\t";
 
                cout << "Enter your proctor ID: ";
                cin >> proctor;
 
                outfile << proctor << endl;
            }
        }


        
