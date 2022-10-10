//

#include <iomanip>
#include <iostream>
using namespace std;

void swap(int &, int &, int &);
void swaptwo(int &, int &);

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)
 // new code below
 void swap(int &n1, int &n2, int &n3)
{
    int boxVar;
    swaptwo(n1, n2); //calls second swap function to actually swap numbers; new order n2, n1, n3
    boxVar = n3; // place n3 value in another variable
    n3 = n1; // n3 now equal to original n2, so order is now n2, n1, n2
    n1 = boxVar; // new order will be original 3, 1, 2

}

void swaptwo(int &n1, int &n2)
{
    int emptyVar;

    emptyVar = n1; //puts n1 value in emptyVar
    n1 = n2; // n2's value is now stored in n1
    n2 = emptyVar; //n2 now has n1's original value, so the order is now n2, n1, n3
}