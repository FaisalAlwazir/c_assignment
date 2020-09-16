//
// Created by Pyromaniac on 9/16/2020.
//

#include <stdio.h>

#include "tests.h"
#include "services.h"

void test_single(int *errorCount) {

    vector v;
    v.length = 5;
    v.values[0] = 42;
    v.values[1] = 1;
    v.values[2] = 5;
    v.values[3] = 51;
    v.values[4] = 6;
    if (sum_of_vector(v) != 105) {
        *errorCount  += 1;
        printf("\nError Sum");
    }
    if (average_of_vector(v) != 105.00000 / 5) {
        *errorCount += 1;
        printf("\nError average ");
    }
    if (largest_of_vector(v) != 51) {
        *errorCount += 1;
        printf("\nError largest");
    }
    if (smallest_of_vector(v) != 1) {
        *errorCount += 1;
        printf("\nError smallest");
    }
    int fatorials[5] = {0,1,2,0,0};

    vector r = factorial(v, 3);

    for (int i = 0; i < r.length; i++) {
        if (r.values[i] != fatorials[i]) {
            *errorCount += 1;
            printf("\nfactorial Error");
            break;
        }
    }

    nullify_vector(&v);
    for (int i = 0; i < v.length; i++) {
        if (v.values[i] != 0) {
            *errorCount += 1;
            printf("\nNullify Error");
            break;
        }
    }
}

void test_double(int *errorCount) {


    vector v1;
    v1.length = 5;
    v1.values[0] = 42;
    v1.values[1] = 1;
    v1.values[2] = 5;
    v1.values[3] = 51;
    v1.values[4] = 6;

    vector v2;
    v2.length = 5;
    v2.values[0] = 14;
    v2.values[1] = 43;
    v2.values[2] = 6;
    v2.values[3] = 20;
    v2.values[4] = 14;

    vector sum = add_two_vectors(v1, v2);
    sum.length = 5;
    int res[] = {56,44,11,71,20};

    for (int i = 0; i < sum.length; i++) {
        if (sum.values[i] != res[i]) {
            *errorCount += 1;
            printf("\nSum Error");
            break;
        }
    }

    vector diff = subtract_two_vectors(v1,v2);
    diff.length = 5;
    int res2[] = {28,-42,-1,31,-8};

    for (int i = 0; i < diff.length; i++) {
        if (diff.values[i] != res2[i]) {
            *errorCount += 1;
            printf("\ndiff Error");
            break;
        }
    }


}

void test(){
    int errorCount = 0;
    int *errorCountPtr = &errorCount;
    test_double(errorCountPtr);
    test_single(errorCountPtr);



    printf("\n\nFound %d errors", errorCount);
}