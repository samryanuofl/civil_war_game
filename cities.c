#include <stddef.h>
#include <stdlib.h>
#include "cities.h"

struct city_t louisville = {.city_name = "Louisville", .connections = {&nashville, &lexington, NULL}};
struct city_t nashville = {.city_name = "Nashville", .connections = {&louisville, NULL}};
struct city_t lexington = {.city_name = "Lexington", .connections = {&louisville, &cincinnati, NULL}};
struct city_t cincinnati = {.city_name = "Cincinnati", .connections = {&louisville, &lexington, NULL}};

struct city_t *create_city(char * city_name, struct city_t *connections[])
{
    struct city_t *new_city = malloc(sizeof(struct city_t));
    return new_city;
};
