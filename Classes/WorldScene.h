#ifndef __WORLD_SCENE_H__
#define __WORLD_SCENE_H__

#include <../cocos/cocos2d.h>
#include <WorldData.h>
#include <WorldTile.h>

USING_NS_CC;

class WorldScene:public cocos2d::Layer {
  private:
	WorldData data;
	WorldTile tile;
	
  public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(WorldScene);
};

#endif
