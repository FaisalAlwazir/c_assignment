#include <stdio.h>
#include "./tests.h"


int main() {

    test();
    printf("\nWelcome to my program\n"
           "Here are your options:                                 \n");

    printf("1.  Add two matrices.                                   n.  To add a new matrix\n"
           "2.  Subtract two matrices.                              r.  To remove a matrix\n"
           "3.  Find the sum of all the numbers.                    v.  To view your matrices\n"
           "4.  Find the average of all the numbers.                                            \n"
           "5.  Find the factorial of all the numbers.                                          \n"
           "6.  Find the largest element in the array.                                          \n"
           "7.  Find the smallest element in the array.                                         \n"
           "8.  Nullify an integer array.                           e.  To exit.");
    char choice;

    scanf("%s", &choice);

    switch (choice) {
        case '1':
            return 1;

        case '2':
                return 2;

        default:
            printf("Wrong choice! ");

    }

    return 0;
}