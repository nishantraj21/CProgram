#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // File pointer to store the value
    FILE* fptr;

    // Opening the file in read mode
    fptr = fopen("filename.txt", "r");

    // checking if the file is 
    // opened successfully
    if (fptr == NULL) {
        printf("The file is not opened.");
    }
    else
    {
        printf("The file is opened\n");
    }
    return 0;
}