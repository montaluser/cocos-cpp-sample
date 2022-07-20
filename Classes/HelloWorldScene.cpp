
#include "HelloWorldScene.h"
#include "resPath.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace ui;

Scene* HelloWorld::createScene()
{
    return HelloWorld::create();
}

bool HelloWorld::init()
{
    if ( !Scene::init() )
    {
        return false;
    }

    _visible_size = Director::getInstance()->getVisibleSize();
    _origin_size = Director::getInstance()->getVisibleOrigin();

    Sprite* bg = Sprite::create(path_helloworld_bg);
    bg->setAnchorPoint(Vec2(0.5f, 0.5f));
    bg->setPosition(Vec2(_visible_size.width/2 + _origin_size.x, _visible_size.height/2 + _origin_size.y));
    addChild(bg);

    return true;
}

void HelloWorld::onEnter()
{
    Scene::onEnter();
}

void HelloWorld::changeScene(float dt)
{
    Director::getInstance()->replaceScene(TransitionFade::create(2.0f, HelloWorld::createScene()));
}