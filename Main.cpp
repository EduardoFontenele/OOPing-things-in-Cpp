#include <iostream>
#include "ArrayList.h"

using namespace std;

int main() {
    system("COLOR 0B");
    int pureArray[]{ 1, 2, 3 };
    ArrayList<int> *ptr = new ArrayList<int>(pureArray, 3);
    cout << sizeof(pureArray);
    /*cout << ptr->getArrayAddress() << endl;
    ptr->toString();
    ptr->add(4);
    ptr->add(5);
    cout << '\n';
    ptr->toString();
    cout << ptr->getArrayAddress() << endl;*/
}