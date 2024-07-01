#include <stdio.h>
#include <stdlib.h>
#include "game/game_logic.h"
#include <time.h>
#include <unistd.h>
#include "allegro/init.h"
int main(int argc, char **argv)
{
    puts("frogger");
    init_allegro();
    initializeGameLogic();   
    while(1)
    {
        gameTick(10);
        usleep(1000);
    }
    return 0;
}
