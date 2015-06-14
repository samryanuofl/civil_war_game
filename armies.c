#include "armies.h"
#include "cities.h"
#include <stdio.h>

enum army_move_result_t {
    SUCCESS,
    FAILURE,
};

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

enum army_move_result_t army_move(struct army_t *army, struct city_t *destination)
{

};

void print_army(const struct army_t *army)
{
    printf("%s\n", army->name);
    printf("Strength = %d\n", army->strength);
    printf("Location = %s\n", army->location->name);
    printf("\n");
}
