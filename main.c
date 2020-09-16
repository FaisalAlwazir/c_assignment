#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
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
    printf("\n\n\nPress ENTER to continue..");
    getch();
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
    printf("\n\n\nPress ENTER to continue..");
    getch();
}

void modulus() {
    system("cls");
    printf("        Modulus Operation \n\n");
    printf("        Vector\n\n");
    vector v1 = new_vector_input();
    enter_vector_values(&v1);
    int modNumber = 0;
    printf("\nEnter the number you want to modulate with..  ");
    scanf("%d", &modNumber);
    system("cls");
    printf("Result:\n   ");

    print_vector(v1);
    printf(" %% %d =  ", modNumber);
    print_vector(modulate(v1, modNumber));
    printf("\n\n\nPress ENTER to continue..");
    getch();


}

void average() {
    system("cls");
    printf("        Averaging \n\n");
    printf("        Vector\n\n");
    vector v1 = new_vector_input();
    enter_vector_values(&v1);
    system("cls");
    printf("Result:\n   ");
    print_vector(v1);
    printf(" averages into %f ", average_of_vector(v1));
    printf("\n\n\nPress ENTER to continue..");
    getch();


}

void largest() {
    system("cls");
    printf("        Finding largest element \n\n");
    printf("        Vector\n\n");
    vector v1 = new_vector_input();
    enter_vector_values(&v1);
    system("cls");
    printf("Result:\n   ");
    print_vector(v1);
    printf(" largest element is %d ", largest_of_vector(v1));
    printf("\n\n\nPress ENTER to continue..");
    getch();


}

void smallest() {
    system("cls");
    printf("        Finding smallest element \n\n");
    printf("        Vector\n\n");
    vector v1 = new_vector_input();
    enter_vector_values(&v1);
    system("cls");
    printf("Result:\n   ");
    print_vector(v1);
    printf(" largest element is %d ", smallest_of_vector(v1));
    printf("\n\n\nPress ENTER to continue..");
    getch();


}

void sumAll() {
    system("cls");
    printf("        Finding the sum of all the elements \n\n");
    printf("        Vector\n\n");
    vector v1 = new_vector_input();
    enter_vector_values(&v1);
    system("cls");
    printf("Result:\n   ");
    print_vector(v1);
    printf(" the sum is %d ", sum_of_vector(v1));
    printf("\n\n\nPress ENTER to continue..");
    getch();


}

int startScreen() {
    printf(
            "Here are your options:                                 \n\n"
            "");

    printf("1.  Add two matrices.                           \n"
           "2.  Subtract two matrices.                      \n"
           "3.  Find the sum of all the numbers.            \n"
           "4.  Find the average of all the numbers.        \n"
           "5.  Find the modulus of all the numbers.        \n"
           "6.  Find the largest element in the array.      \n"
           "7.  Find the smallest element in the array.     \n"
           "8.  Nullify an integer array.                 \n\n"
           "\033[0;31m0.  Exit\033[0m\n\n");
    int choice;


    scanf("%d", &choice);

    switch (choice) {
        case 1:
            add();
            system("cls");
            printf("\n");
            startScreen();
            return 0;

        case 2:
            subt();
            system("cls");
            printf("\n");
            startScreen();
            return 0;

        case 3:
            sumAll();
            system("cls");
            printf("\n");
            startScreen();
            return 0;

        case 4:
            average();
            system("cls");
            printf("\n");
            startScreen();
            return 0;

        case 5:
            modulus();
            system("cls");
            printf("\n");
            startScreen();
            return 0;

        case 6:
            largest();
            system("cls");
            printf("\n");
            startScreen();
            return 0;

        case 7:
            smallest();
            system("cls");
            printf("\n");
            startScreen();
            return 0;

        case 0:
            return 0;

        default:
            system("cls");
            printf("\033[0;31m"); //Set the text to the color red
//            printf("Hello\n"); //Display Hello in red
            printf("Wrong choice! ");
            printf("\033[0m try again \n");
            startScreen();

    }

}

int main() {
    printf("\n                 ****         Welcome to my program        ****        \n\n");
    system("cls");
    test();
//    system("cls");


    return startScreen();
}