#include "test_cities.h"
#include "cities.h"
#include "minunit.h"

#include <stddef.h>

extern struct city_t t_louisville;
extern struct city_t t_nashville;
extern struct city_t t_lexington;
extern struct city_t t_cincinnati;

struct city_t t_louisville = {.name = "Louisville", .connections = {&t_nashville, &t_lexington, &t_cincinnati, NULL}};
struct city_t t_nashville = {.name = "Nashville", .connections = {&t_louisville, NULL}};
struct city_t t_lexington = {.name = "Lexington", .connections = {&t_louisville, &t_cincinnati, NULL}};
struct city_t t_cincinnati = {.name = "Cincinnati", .connections = {&t_louisville, &t_lexington, NULL}};

//Check if it works is destination is first in list of connections
char * test_city_is_adjacent_first_in_list(void) {
    const bool is_louisville_adjacent_nashville = city_is_adjacent(&t_louisville, &t_nashville);
    mu_assert("error, louisville should be adjacent to nashville", is_louisville_adjacent_nashville);
    return 0;
}

//Check if it works is destination is not first in list of connections
char * test_cities_not_adjacent(void) {
    const bool is_louisville_adjacent_nashville = city_is_adjacent(&t_louisville, &t_cincinnati);
    mu_assert("error, louisville should be adjacent to cincinnati", is_louisville_adjacent_nashville);
    return 0;
}

//Check returns false if cities are not connected
char * test_city_is_adjacent_last_in_list(void) {
    const bool is_nashville_adjacent_cincinnati = city_is_adjacent(&t_cincinnati, &t_nashville);
    mu_assert("error, nashville should not be adjacent to cincinnati", !is_nashville_adjacent_cincinnati);
    return 0;
}
