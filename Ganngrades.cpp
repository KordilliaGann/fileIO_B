// File I/O practice
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw

using namespace std;

int main()
{
    
    ifstream fin;
    ofstream fout;
    char file[12];
    float number;
    string firstname;
    string lastname;
    string name1;
    string name2;
    double g1, g2, g3, g4, g5, g6;
    double average;
    double highest = 0;
    
    cout << "which file would you like?" << endl;
    cin >> file;
    
    fin.open(file); //opens file maybe
    fout.open("results.txt");

    if(fin.fail()) //sees if it exits if not prints that and exits
    {
        cout << "error opening input file" << endl;   
        exit(1);
    }

    //real code prints everything
    while(fin >> firstname >> lastname >> g1 >> g2 >> g3 >> g4 >> g5 >> g6)
    {
        setprecision(15);
        average = ((g1+g2+g3+g4+g5+g6) / 6);
        
         if (average > highest)
         {
            name1 = firstname;
            name2 = lastname;
            highest = average;
         }
        fout << left << setprecision(4) << firstname << "\t \t" << lastname << "\t\t" << average  << endl;
    }
    fout << "Highest: " << name1 << " "<< name2 << endl;



    fin.close(); //closes file
    fout.close();
}
