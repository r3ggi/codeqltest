#include <stdio.h>
#include <string.h>


// test1

int main(void) {

    char buff[15];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "test123")) {
        printf ("\n Wrong Password \n");
    }
    else {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass) {
        printf ("\n You won \n");
    }

    return 0;
}
