/*************************************************************************
 * @main
 * @author Gundeep Singh Sidhu
 * ASSIGNMENT : 2
 * SECTION : COMP2150 A01
 * STUDENT ID: 7885100
 *
 * @section DESCRIPTION
 * The main class parses the text file passed in and passes it to simulation
 * class for processing of event driven simulation
 *************************************************************************/


#include <iostream>
#include <sstream> //necessary for using stringstream
#include <fstream> //necessary to use ifstream (to open a file)
#include <string>
#include "Simulation.h"
#include "simulation1.h"
#include "simulation2.h"
#include "simulation3.h"

using namespace std;


int main(int argc, char* argv[]) {

    if(argc != 3)
    {
        cout<<"USAGE: FileReadingExample.exe filename simulationType"<<endl;
        cout<<"where simulationType is either 1, 2 or 3."<<endl;
        return 0;
    }

    string filename = argv[1];
    string version = argv[2];

    cout << "The filename is: " << filename << endl;
    cout << "The version selected is: " << version <<endl;

    int numVersion = stoi(version);
    Simulation *sim;

    if ( numVersion == 1) {
        sim = new simulation1();
    }else if ( numVersion == 2) {
        sim = new simulation2();
    } else if ( numVersion == 3) {
        sim = new simulation3();
    } else {
        cerr << "Error: Version of program should be 1,2 or 3." << endl;
        exit(1);
    }
    //
    //Opening the file, reading one line (just the first one of the file here) and parsing it
    //
    ifstream inputFile;
    inputFile.open(filename);  // opening the file for reading
    string line;

    if(!inputFile) { // file couldn't be opened
        cerr << "Error: file could not be opened" << endl;
        exit(2);
    }

    while(getline(inputFile, line))  //gets the next line from the file and saves it in 'line', if there is one
    {
        stringstream sst(line);  //stringstream allows us to parse the line token by token (kind of like a Scanner in Java)
        string token;
        int counter = 0;
        int time = 0;
        int expiry = 0;
        string meal = "";
        int numIngredients = 0;
        float price;

        while(sst >> token)  //grabing one token at a prepTime, until there is no token left
        {
            if(counter == 0) //reading prepTime
                time = stoi(token);
            else if(counter == 1) //reading expiry
                expiry = stoi(token);
            else if(counter == 2) //reading meal type
                meal = token;
            else //counting ingredients from here (if counter > 2)
            {
                numIngredients++;
            }
            counter++;
        }

        sim->read( expiry, meal, numIngredients, time);
    }

    // end the simulation by completing all the other orders
    sim->finish();

    // code has succesfully run
    return 0;

}