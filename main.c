#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

#include "minunit.h"
#include "test_cities.h"

 int tests_run = 0;

 int foo = 7;
 int bar = 4;


static char * city_tests() {
    mu_run_test(test_city_is_adjacent_first_in_list);
    mu_run_test(test_city_is_adjacent_last_in_list);
    mu_run_test(test_cities_not_adjacent);
    return 0;
}


int main(int argc, char **argv) {
    char *result = city_tests();
    if (result != 0) {
        printf("%s\n", result);
    }
    else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}
