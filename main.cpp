#include <iostream>
#include "IntBinaryTree.h"
#include <string>
using namespace std;

void displayMenu(){
    cout << endl << "Menu: " << endl;
    cout << "1. Insert code " << endl;
    cout << "2. Display codes in order " << endl;
    cout << "3. Search code " << endl;
    cout << "5. Modify code" << endl;
    cout << "6. Exit" << endl;
     
}

int main() {
    IntBinaryTree tree;
    int choice;
    string code;

    do{
        displayMenu();
        cin >> choice;
        cin.ignore();

        switch(choice){
            case 1:
                cout << "Enter code: ";
                getline(cin, code);
                tree.insertNode(code);
                cout << "Code inserted" << endl;
                break;
            case 2:
                cout << "Codes in order: " << endl;
                tree.displayInOrder();
                cout << endl;
                break;
            case 3:

            case 4:

            case 5:
            
            case 6:
                cout << "Exiting" << endl;
                break;
            default:
                cout << "Try again" << endl;
        }
    } while (choice != 3);
    return 0;
}