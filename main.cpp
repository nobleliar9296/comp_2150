#include <iostream>
#include <sstream> //necessary for using stringstream
#include <fstream> //necessary to use ifstream (to open a file)
#include <string>
#include "Listitem.h"
#include "Intitem.h"
#include "Node.h"
#include "Stringitem.h"
#include "Linkedlist.h"
#include "Stack.h"
#include "Queue.h"

using namespace std;


int main(int argc, char* argv[]) {
    std::cout << "Hello, World!" << std::endl;

    Listitem *li0 = new Intitem(0);
    Listitem *li1 = new Intitem(1);
    Listitem *li2 = new Intitem(2);
    Listitem *li3 = new Intitem(3);


    Node *test0 = new Node(li0, nullptr);
    Node *test1 = new Node(li1, nullptr);
    Node *test2 = new Node(li2, nullptr);
    Node *test3 = new Node(li3, nullptr);


    test0->print();
    test1->print();
    test2->print();
    test3->print();

    cout << "Stack testing start\n";
    Queue *temp = new Queue();

    temp->enterQueue(test1);
    temp->enterQueue(test0);

    temp->toString();

    temp->leaveQueue();
    temp->leaveQueue();
    temp->leaveQueue();

    temp->toString();

    cout << "End of testing" << endl;

}

    /*
    // testing for file reader input :)

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

    //
    //Opening the file, reading one line (just the first one of the file here) and parsing it
    //
    ifstream inputFile;
    inputFile.open(filename);  // opening the file for reading
    string line;

    if(!inputFile) { // file couldn't be opened
        cerr << "Error: file could not be opened" << endl;
        exit(1);
    }

    while(getline(inputFile, line))  //gets the next line from the file and saves it in 'line', if there is one
    {
        cout << line << endl;
        stringstream sst(line);  //stringstream allows us to parse the line token by token (kind of like a Scanner in Java)
        string token;
        int counter = 0;
        int time = 0;
        int expiry = 0;
        string meal = "";
        int numIngredients = 0;

        while(sst >> token)  //grabing one token at a time, until there is no token left
        {
            if(counter == 0) //reading time
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
        //To show that we grabbed all the relevant information:
        cout << "time=" << time << " expiry=" << expiry << " meal=" << meal << " numIngredients=" << numIngredients << endl;
    }

    return 0;
}
    */
/* Used for testing of linkedlist
    Listitem *li0 = new Intitem(0);
    Listitem *li1 = new Intitem(1);
    Listitem *li2 = new Intitem(2);
    Listitem *li3 = new Intitem(3);



    //Listitem *li1 = new Stringitem("hello");
    Node *test0 = new Node(li0, nullptr);
    Node *test1 = new Node(li1, nullptr);
    Node *test2 = new Node(li2, nullptr);
    Node *test3 = new Node(li3, nullptr);


    test0->print();
    test1->print();
    test2->print();
    test3->print();

    cout << "list add testing" << endl;

    Linkedlist *lst = new Linkedlist();
    lst->addItem(test2);
    lst->addItem(test0);
    lst->addbefore(test1, test2);
    lst->addLast(test3);


    lst->toString();
    cout << "testing delete" << endl;

    lst->deleteLast()->toString();
    cout << "^^^ the item that was deleted" << endl;

    lst->deletes(test2)->toString();
    cout << "^^^ the item that was deleted" << endl;

    lst->toString();
 */