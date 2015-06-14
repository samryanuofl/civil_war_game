#ifndef ARMIES_H_INCLUDED
#define ARMIES_H_INCLUDED

#include <stdint.h>

struct army_t
{
    char * name;
    uint32_t strength;
    struct city_t *location;
};

#endif // ARMIES_H_INCLUDED
