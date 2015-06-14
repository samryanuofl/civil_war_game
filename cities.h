#ifndef CITIES_H_INCLUDED
#define CITIES_H_INCLUDED

#include <stdbool.h>



struct city_t
{
    char *name;
    struct city_t *connections[];
};

bool city_is_adjacent(struct city_t *origin, struct city_t *destination);


#endif // CITIES_H_INCLUDED
