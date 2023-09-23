#include <iostream>
#include "ArrayList.h"

using namespace std;

int main() {
    system("COLOR 0B");
    int pureArray[10]{ 1, 2, 3, 4, 5 };
    ArrayList<int>* classArray = new ArrayList<int>(pureArray, 10);
   
    classArray->add(6);
    classArray->add(7);
    classArray->add(8);
    classArray->add(9);
    classArray->add(10);
    classArray->add(11);
    classArray->add(12);
    classArray->toString();
    cout << "\n";
    classArray->createNewArray();
    cout << "\n";
    classArray->toString();
    classArray->add(12);
    cout << "\n";
    classArray->toString();
}