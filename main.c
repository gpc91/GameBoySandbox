#include <gb/gb.h>
#include <stdio.h>

#include "assets/sprites/ball.c"
#include "game.c"


void entity_frame_process(Entity *entity, Bounds *bounds)
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

void main()
{

    printf("test game");

    Bounds bounds = {
        8, 156,
        16, 152
    };

    Entity ball;    
    ball = entity_create(88, 78, 2, 1);

    // idk lol
    uint8_t bounces = 0;    

    // setup sprites
    set_sprite_data(0, 1, sp_ball);
    set_sprite_tile(0, 0);
    move_sprite(0, ball.x, ball.y); // set the initial sprite to ball x and y
    SHOW_SPRITES; // display sprites

    while (1)
    {      
        entity_frame_process(&ball, &bounds);       
        move_sprite(0, ball.x, ball.y);
        delay(50);        
    }

}