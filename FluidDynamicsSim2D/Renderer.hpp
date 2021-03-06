#include <iostream>
#include <vector>
#include <stdio.h>
#include <memory>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Program.hpp"


using namespace std;

class Renderer {
    public:
        SDL_Renderer* windowRenderer;
        void renderData();
        Renderer(); //deafult constructor
        Renderer(SDL_Renderer* renderer); 

    private:
        int* getColorGradient(float in);
        void HSVtoRGB(float& fR, float& fG, float& fB, float& fH, float& fS, float& fV);
        
};