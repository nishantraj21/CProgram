//Used to store different data type

#include <stdio.h>
#include <iostream>
using namespace std;

// Define structure
struct data {
    int G1;
    char G2;
    float G3;
};

int main() {
    
    // Create object of structure
    struct data value = {85, 'G', 989.45};
    
    // Accessing structure members values
    cout << value.G1 << endl;
    cout << value.G2 << endl;
    cout << value.G3;

    return 0;
}

//union is a user-defined datatype 
//in which we can define members of different types of data types just like structures but unlike a structure, 
//where each member has its own memory