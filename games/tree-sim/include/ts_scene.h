#ifndef TS_SCENE_H
#define TS_SCENE_H

//includes here
#include "bn_optional.h"

namespace ts {
    enum class sceneType;

    class  scene
    {
    private:
        /* data */
    public:
        
        virtual ~ scene() = default;
        
        [[nodiscard]] virtual bn::optional<scene_type> update() = 0;

    };
    
     scene:: scene(/* args */)
    {
    }
    
     scene::~ scene()
    {
    }
    
}