
static const byte map[16][16] = {

    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,0,1,0,0,0,2,0,1,0,0,0,0,0,0,1},
    {1,0,1,0,1,0,0,0,1,0,1,1,0,1,0,1},
    {1,0,0,0,1,1,1,0,1,0,1,0,0,1,0,1},
    {1,0,1,1,1,0,1,0,0,0,1,0,1,0,0,1},
    {1,2,1,0,0,0,0,0,1,0,1,0,0,1,0,1},
    {1,0,1,0,1,2,2,0,0,0,1,1,1,0,0,1},
    {1,0,1,0,1,0,1,1,0,1,1,0,0,0,1,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,1},
    {1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1},
    {1,0,1,0,1,0,1,0,1,0,1,1,0,1,0,1},
    {1,0,1,0,1,0,0,0,1,0,0,0,0,0,0,1},
    {1,0,2,2,2,0,1,0,1,1,1,1,1,1,1,1},
    {2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1},
    {2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1}
};

static const byte tex[2][16][16] = {

    // Красный кирпич
    {
        {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00},
        {0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00},
        {0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF},
        {0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0},
        {0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00},
        {0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00},
        {0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF},
        {0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0},
        {0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0xFF, 0xC0, 0xC0, 0xC0},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    },
    // Синий кирпич
    {
        {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x24, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x24},
        {0xFF, 0x52, 0x52, 0x52, 0x52, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x52, 0x52, 0x52, 0x24},
        {0xFF, 0x52, 0x52, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x52, 0x52, 0x52, 0x24},
        {0x24, 0x24, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x24, 0x24, 0x24, 0x24, 0x24},
        {0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x24, 0xFF, 0xFF, 0xFF, 0xFF},
        {0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x24, 0xFF, 0x52, 0x52, 0x52},
        {0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x24, 0x00, 0x52, 0x52, 0x52},
        {0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x24, 0x24, 0x24},
        {0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x24},
        {0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x52, 0x24},
        {0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x52, 0x24},
        {0x24, 0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x24, 0x24},
        {0xFF, 0xFF, 0xFF, 0x24, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF},
        {0x52, 0x52, 0x52, 0x24, 0xFF, 0x52, 0x52, 0x52, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x52, 0x52},
        {0x52, 0x52, 0x52, 0x24, 0xFF, 0x52, 0x52, 0x52, 0x52, 0x52, 0x00, 0x24, 0xFF, 0x00, 0x52, 0x52},
        {0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24}
    }


};

const float sqrt2 = 0.7071; // 1/sqrt(2)
