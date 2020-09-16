//
// Created by Pyromaniac on 9/16/2020.
//

#ifndef C_ASSIGNMENT_SERVICES_H
#define C_ASSIGNMENT_SERVICES_H

/// this limits our maximum number of elements
#define MAX_ELEMENTS 10

typedef struct vector {
    int length;
    int values[MAX_ELEMENTS];
} vector;

vector new_vector(int length);

vector new_vector_input();

void print_vector(vector v);

void enter_vector_values(vector *v);

int sum_of_vector(vector v);

double average_of_vector(vector v);

vector factorial(vector v, int number);

int smallest_of_vector(vector v);

int largest_of_vector(vector v);

void nullify_vector(vector *v);

vector add_two_vectors(vector v1, vector v2);

vector subtract_two_vectors(vector v1, vector v2);


void print_vector_report(vector v);

#endif //C_ASSIGNMENT_SERVICES_H
