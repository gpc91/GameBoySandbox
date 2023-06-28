#include <gb/gb.h>
#include <stdio.h>

#include "assets/sprites/ball.c"
#include "game.c"

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
        entity_position_update(&ball, &bounds);       
        move_sprite(0, ball.x, ball.y);
        delay(50);        
    }

}