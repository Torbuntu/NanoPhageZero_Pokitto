#pragma once
#include <Pokitto.h>
#include "sprites.h"

namespace Sequence {
    class SeqHack {
        public:
        
            // initializes a new random sequence
            static void shuffle(int size);
            
            static void init();
            
            static void update();
            
            static void render();
            
            static bool complete();
            
            static bool fail();
            
            static int getSelect();
            
        private:
            
            // Size of the sequence
            static inline int seqSize; 
            
            static inline int threat;
            
            static inline int select = 0;
                
            // the sequence order
            static inline int order[13];
            
            // status of current sequence
            static inline bool orderStatus[13];
            
             // init button state mechanism
            static inline int buttonsPreviousState = 0;
            
            static inline int buttonsJustPressed = 0;
            
            static inline Sprite icons, tLevel, sent, pBar, pFill;
    };
}