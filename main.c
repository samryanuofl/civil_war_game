#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "cities.h"
#include "leaders.h"

enum movement_result_t
{
    MOVE_SUCCESS,
    MOVE_FAILURE
};

struct army_t
{
    char * name;
    uint32_t strength;
    struct city_t *location;
};



enum movement_result_t move_army(struct army_t *army, struct city_t *destination)
{
    //Check if connection exists between current location and destination

    return MOVE_FAILURE;
}

void combat(struct army_t *attacker, struct army_t *defender)
{
    if(attacker->strength > defender->strength) {
        attacker->strength = attacker->strength - defender->strength;
        defender->strength = 0;
    }
    else {
        defender->strength = defender->strength - attacker->strength;
        attacker->strength = 0;
    }
}

void print_army(const struct army_t *army)
{
    printf("%s\n", army->name);
    printf("Strength = %d\n", army->strength);
    printf("Location = %s\n", army->location->city_name);
    printf("\n");
}

int main()
{
    struct army_t u_army = {"Army of the Potomac", 1000, &louisville};
    struct army_t c_army = {"Army of Virginia", 500, &lexington};
    print_army(&u_army);
    print_army(&c_army);
    combat(&u_army, &c_army);
    print_army(&u_army);
    print_army(&c_army);
    return 0;
}
