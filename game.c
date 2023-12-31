#include "game.h"

void entity_flip_x(Entity *entity)
{
    entity->xd *= -1;    
}

void entity_flip_y(Entity *entity)
{
    entity->yd *= -1;
}

// process entity position
void entity_position_update(Entity *entity, Bounds *bounds)
{
    entity->x += entity->xd;
    entity->y += entity->yd;

    if (entity->x > bounds->w || entity->x < bounds->x)
    {
        entity_flip_x(entity);
    }

    if (entity->y > bounds->h || entity->y < bounds->y)
    {
        entity_flip_y(entity);
    }
    
}

Entity entity_create(uint8_t x, uint8_t y, int8_t xspeed, int8_t yspeed)
{
    Entity entity = {
        x, y,
        xspeed, yspeed
    };   

    return entity;

}
