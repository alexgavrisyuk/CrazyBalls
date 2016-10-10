#ifndef __WEAPON_GRAPHIC_COMPONENT_H__
#define __WEAPON_GRAPHIC_COMPONENT_H__

#include "cocos2d.h"
#include "GraphicComponent.h"

using namespace std;
using namespace cocos2d;

class WeaponGraphicComponent : public GraphicComponent
{
public:
	WeaponGraphicComponent(int attack, const std::string& typeObject);
	WeaponGraphicComponent(WeaponGraphicComponent& weapon);

	virtual void Update(Monster& hero, GameScene& scene);

	virtual int GetValue()  const;
	virtual int GetAttack() const;
	virtual int GetHealth() const;
	virtual std::string GetTypeObject() const;
	virtual bool Dead(int wounded);
	virtual void ChangeCoins(int coins);
	virtual bool Winner() const;

	virtual void SetSpeedBullet(int speed);
	virtual int GetSpeedBullet() const;

	virtual void DescreaseQuentityBullet();
	virtual int  GetQuentityBullet() const;

	virtual void ChangeHealth(int health);

	virtual void SetTargetPointForBullet(cocos2d::Point point);

	~WeaponGraphicComponent();

public:
	int			m_speedBullet;
	int			m_attack;
	std::string m_typeObject;
	
	std::string m_strFilename;

	int			m_quentityBullet;

};

#endif