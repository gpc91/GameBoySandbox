#include "game.h"

void entity_flip_x(Entity *entity)
{
    entity->xd *= -1;    
}

void entity_flip_y(Entity *entity)
{
    entity->yd *= -1;
}

Entity entity_create(uint8_t x, uint8_t y, int8_t xspeed, int8_t yspeed)
{
    Entity entity = {
        x, y,
        xspeed, yspeed
    };   

    return entity;

}