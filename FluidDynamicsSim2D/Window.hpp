#ifndef WINDOW_H //same thing as #pragma once
#define WINDOW_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <GL/glew.h>
#include <iostream>
#include <vector>
#include <iostream>
#include "Renderer.hpp"
#include "Program.hpp"
#include "CFDynamics.hpp"

//Extern/global vars
int winSizeX = 800;         //Tile size will automatically adjust according to this
int winSizeY = 800;         //Tile size will automatically adjust according to this
int tileRows = 114;
int tileCols = tileRows;    //Don't alter this, it will break

class Main {
    public:
        Main();
        void handleEvents();
        void initialize();
        SDL_Renderer* getRenderer();

    private:
        //Construct the dynamics object:
        Dynamics dynamics;
        
        SDL_Window *window;
        SDL_Renderer *renderer;
        Renderer dataRenderer;  //Object is cosntructed with default constructor when defined
        bool windowRunning = true;
        void cleanup();
        int currentFPS = 0;
};

#endif