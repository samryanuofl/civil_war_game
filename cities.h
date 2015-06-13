#ifndef CITIES_H_INCLUDED
#define CITIES_H_INCLUDED

struct city_t
{
    char *city_name;
    struct city_t *connections[];
};

extern struct city_t louisville, nashville, cincinnati, lexington;

#endif // CITIES_H_INCLUDED
