#include <stdio.h>
#include <stdlib.h>
#include "./tests.h"
int startScreen(){
    printf("\n                 ****         Welcome to my program        ****        \n\n"
           "Here are your options:                                 \n\n"
           "");

    printf("1.  Add two matrices.                                   n.  To add a new matrix\n"
           "2.  Subtract two matrices.                              r.  To remove a matrix\n"
           "3.  Find the sum of all the numbers.                    v.  To view your matrices\n"
           "4.  Find the average of all the numbers.                                            \n"
           "5.  Find the factorial of all the numbers.                                          \n"
           "6.  Find the largest element in the array.                                          \n"
           "7.  Find the smallest element in the array.                                         \n"
           "8.  Nullify an integer array.                           e.  To exit.\n\n");
    char choice;

    scanf("%s", &choice);

    switch (choice) {
        case '1':
            return 1;

        case '2':
            return 2;

        default:
            system("cls");
            printf("    Wrong choice! \n");
            startScreen();

    }

}

int main() {

    system("cls");
    test();
    startScreen();
//    system("cls");


    return 0;
}