#include <stdio.h>
#include "./services.h"
int main() {
    printf("Welcome to my program\n");
    vector  v ;
    v.length = 5;
    v.values[0] = 43;
    v.values[1] = 1;
    v.values[2] = 5;
    v.values[3] = 51;
    v.values[4] = 6;
    vector  v2 ;
    v2.length = 5;
    v2.values[0] = 14;
    v2.values[1] = 43;
    v2.values[2] = 6;
    v2.values[3] = 20;
    v2.values[4] = 14;
//    enter_vector_values(&v);
//    enter_vector_values(&v2);
    print_vector(subtract_two_vectors(v, v2));
    print_vector(v2);
    nullify_vector(&v2);
    print_vector(v2);
    print_vector_report(v2);
    return 0;

}
