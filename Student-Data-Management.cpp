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