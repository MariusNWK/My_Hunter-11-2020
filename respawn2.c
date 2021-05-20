/*
** EPITECH PROJECT, 2020
** respawn2
** File description:
** myhunter
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "my.h"

void switch_respawn2(int alea, float add, Game *all)
{
    switch (alea) {
    case 4 : all->position_robot2.x = -100;
        all->position_robot2.y = 400;
        all->offset_robot2.x = (2.5 + add) * (100 / all->fps);
        all->offset_robot2.y = 0.5 * (100 / all->fps); break;
    case 3 : all->position_robot2.x = 2020;
        all->position_robot2.y = 400;
        all->offset_robot2.x = (-2.5 - add) * (100 / all->fps);
        all->offset_robot2.y = 0.5 * (100 / all->fps); break;
    case 2 : all->position_robot2.x = -100;
        all->position_robot2.y = 600;
        all->offset_robot2.x = (2.5 + add) * (100 / all->fps);
        all->offset_robot2.y = -0.5 * (100 / all->fps); break;
    case 1 : all->position_robot2.x = 2020;
        all->position_robot2.y = 600;
        all->offset_robot2.x = (-2.5 - add) * (100 / all->fps);
        all->offset_robot2.y = -0.5 * (100 / all->fps); break;
    }
}

void respawn2(Game *all)
{
    int alea = 0;
    float add = 0;

    if (all->seconds_game > 110) {
        add = 1;
    }
    if (all->seconds_game > 130) {
        add = 1.5;
    }
    srand(time(NULL));
    alea = rand() % 4 + 1;
    switch_respawn2(alea, add, all);
}