typedef struct bounds_t
{
    uint8_t x, w, y, h;
} Bounds;

typedef struct entity_t
{
    uint8_t x, y;
    int8_t xd, yd; // direction vars
} Entity;