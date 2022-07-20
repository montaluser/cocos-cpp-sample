
#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
USING_NS_CC;

class HelloWorld : public cocos2d::Scene
{
    private:
    Size _visible_size;
    Vec2 _origin_size;
public:
    static Scene* createScene();

    virtual bool init() override;
    virtual void onEnter() override;

    void changeScene(float);

    CREATE_FUNC(HelloWorld);
};

#endif
