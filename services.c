#include <stdio.h>
#include "services.h"

vector new_vector(int length) {
    if (length >= MAX_ELEMENTS || length <= 0) {
        printf("Wrong number of elements!");

    } else {
        vector v;
        v.length = length;
        return v;
    }
}

vector new_vector_input() {
    printf("\nEnter the length of your vector. It cannot exceed %d elements:    ", MAX_ELEMENTS);
    int length;
    scanf("%d", &length);
    if (length >= MAX_ELEMENTS || length <= 0) {

        printf("\nWrong number of elements! Try again.");

        /// this causes a loop that repeats until the user enters an acceptable value
        return new_vector_input();

    } else {

        return new_vector(length);
    }
}

void print_vector(vector v) {
    printf("[%d", v.values[0]);

    for (int i = 1; i < v.length; i++) {
        printf(", %d", v.values[i]);
    }
    printf("]");
}

void enter_vector_values(vector *v) {
//    printf("\nA vector of %d elements", v->length);

    for (int i = 0; i < v->length; i++) {
        printf("\nElement number %d > ", i + 1);\
        scanf("%d", &v->values[i]);
    }
}

vector add_two_vectors(vector v1, vector v2) {
    vector r;
    r.length = v1.length;
    for (int i = 0; i < r.length; i++) {
        r.values[i] = v1.values[i] + v2.values[i];
    }
    return r;
}

vector subtract_two_vectors(vector v1, vector v2) {
    vector r;
    r.length = v1.length;
    for (int i = 0; i < r.length; i++) {
        r.values[i] = v1.values[i] - v2.values[i];
    }
    return r;
}

int sum_of_vector(vector v) {
    int r = 0;
    for (int i = 0; i < v.length; i++) {
        r += v.values[i];
    }
    return r;
}

double average_of_vector(vector v) {

    return (double) sum_of_vector(v) / v.length;
}

vector modulate(vector v, int number) {
    vector r;
    r.length = v.length;
    for (int i = 0; i < r.length; i++) {
        r.values[i] = v.values[i] % number;
    }
    return r;
}

int largest_of_vector(vector v) {
    int r = 0;
    for (int i = 0; i < v.length; i++) {
        if (v.values[i] > r) {
            r = v.values[i];
        }
    }
    return r;
}

int smallest_of_vector(vector v) {
    int r = v.values[0];

    /// starting from 1 to skip the initial value set for r
    for (int i = 1; i < v.length; i++) {
        if (v.values[i] < r) {
            r = v.values[i];
        }
    }
    return r;
}

void nullify_vector(vector *v) {
    for (int i = 0; i < v->length; i++) {
        v->values[i] = 0;
    }
}

void print_vector_report(vector v) {
    printf("\nMax value =           %d", largest_of_vector(v));
    printf("\nMin value =           %d", smallest_of_vector(v));
    printf("\nSum of all elements=  %d", sum_of_vector(v));
    printf("\nAverage =             %f", average_of_vector(v));
}