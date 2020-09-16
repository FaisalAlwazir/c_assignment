#include <stdio.h>
#include <stdlib.h>
#include "./tests.h"
#include "./services.h"

// todo modularizing the displays

void add() {
    system("cls");
    printf("        Adding.. \n\n");
    printf("        1st vector\n\n");
    vector v1 = new_vector_input();
    enter_vector_values(&v1);
    system("cls");
    printf("        2nd vector\n\n");
    vector v2;
    v2.length = v1.length;
    enter_vector_values(&v2);
    system("cls");
    print_vector(v1);
    printf("    plus    ");
    print_vector(v2);
    printf("    =   ");
    print_vector(add_two_vectors(v1, v2));
}

void subt() {
    system("cls");
    printf("        Subtracting.. \n\n");
    printf("        1st vector\n\n");
    vector v1 = new_vector_input();
    enter_vector_values(&v1);
    system("cls");
    printf("        2nd vector\n\n");
    vector v2;
    v2.length = v1.length;
    enter_vector_values(&v2);
    system("cls");
    print_vector(v1);
    printf("    minus    ");
    print_vector(v2);
    printf("    =   ");
    print_vector(subtract_two_vectors(v1, v2));
}

void modulus(){

}

int startScreen() {
    printf("\n                 ****         Welcome to my program        ****        \n\n"
           "Here are your options:                                 \n\n"
           "");

    printf("1.  Add two matrices.                                   \n"
           "2.  Subtract two matrices.                              \n"
           "3.  Find the sum of all the numbers.                    \n"
           "4.  Find the average of all the numbers.                                            \n"
           "5.  Find the factorial of all the numbers.                                          \n"
           "6.  Find the largest element in the array.                                          \n"
           "7.  Find the smallest element in the array.                                         \n"
           "8.  Nullify an integer array.                           0.  \033[0;31m To exit.\033[0m\n\n");
    int choice;


    scanf("%d", &choice);

    switch (choice) {
        case 1:
            add();

        case 2:
            subt();

        case 0:
            return 0;

        default:
            system("cls");
            printf("\033[0;31m"); //Set the text to the color red
//            printf("Hello\n"); //Display Hello in red
            printf("    Wrong choice! \n");
            printf("\033[0m");
            startScreen();

    }

}

int main() {

    system("cls");
    test();
//    system("cls");


    return startScreen();
}