#pragma once

#include <Pokitto.h>
#include <Tilemap.hpp>
#include "sprites.h"
#include "maps.h"

namespace RobotProgram{
    enum RoboState{
        READY, PROGRAMMING, RUNNING, COMPLETE
    };
    
    class RoboHack{
        public:
            static void init(int len);
            
            static void update();
            
            static void render();
            
            static bool complete();
            
            static bool fail();
            
            static int getRobotX();
            
            static int getRobotY();
            
            static void setRobotX(int x);
            
            static void setRobotY(int y);
            
            static void setIntro(bool tut);
            
            
            
        private:
        
            static void restart();
        
            static inline Sprite icons, robo, keyIcon, buttonIcon, virus;
            
            static inline int program[13];
            
            static inline int length, roboX, roboY, step, speed, renderX, renderY, keyX, keyY, btnX, btnY, vX, vY, vD, vDInit, vS, keyInitX, keyInitY, vInitX, vInitY;
            
            static inline RoboState roboState = RoboState::READY;
            
            // init button state mechanism
            static inline int buttonsPreviousState = 0;
            
            static inline int buttonsJustPressed = 0;
            
            static inline bool end = false, hasKey = false, unlocked = false, intro; 
    };
    
    
}