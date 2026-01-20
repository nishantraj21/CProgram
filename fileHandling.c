#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // File pointer to store the value
    FILE* fptr;

    char data[50] = "Hello world!""Good Morning";
    char buffer[50];

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

    // checking is file created in "w" mode
    fptr = fopen("file.txt","w");

    if(fptr == NULL)
        printf("file not opened");
    else
    {   printf("file created successfully!\n");
        fputs(data,fptr);
        fputs("\n",fptr);

        fclose(fptr);
        printf("Data successfully written in file:" " file.txt\n");
        printf("The file is now closed\n");
    }

    //read the content of the file
    fptr=fopen("file.txt","r");
    if(fptr == NULL)
    {
        printf("\nfile.txt failed to open");
    }
    else{
        while((fgets(buffer, sizeof(buffer), fptr)) !=NULL)
        {
            printf("%s",buffer);
        }
    }
    return 0;
}