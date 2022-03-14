#include <iostream>
#include "cmake-build-debug/Listitem.h"
#include "cmake-build-debug/Intitem.h"
#include "cmake-build-debug/Node.h"
#include "cmake-build-debug/Stringitem.h"
#include "cmake-build-debug/Linkedlist.h"

using namespace std;


int main() {
    std::cout << "Hello, World!" << std::endl;

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

    return 0;
}
