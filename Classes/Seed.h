#ifndef __Seed_H__
#define __Seed_H__

#include "Good.h"

class Seed : public Good
{
private:
	//种子ID 同作物ID
	int m_nID;
	int m_nNumber;
public:
	Seed();
	virtual ~Seed();
	static Seed* create(int id, int number);
	bool init(int id, int number);

	virtual string getGoodName() const;
	virtual SpriteFrame* getIcon() const;
	virtual string getName() const;
	virtual int getNumber() const;
	virtual int getCost() const;
	virtual string getDescription() const;
	virtual string getType() const;

	virtual void setNumber(int number);
	//执行函数
	virtual void execute(int userID, int targetID);
	//是否是消耗品
	virtual bool isDeleption() const;
	//获取物品类型
	virtual GoodType getGoodType() const;
};
#endif
