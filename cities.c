#include <stddef.h>
#include <stdint.h>
#include "cities.h"

bool city_is_adjacent(struct city_t *origin, struct city_t *destination)
{
    uint32_t i = 0;
    while(origin->connections[i] != NULL) {
        if(origin->connections[i] == destination) {
            return true;
        }
        i++;
    }
    return false;
}
