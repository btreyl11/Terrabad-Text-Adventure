#include "player.h"
#ifndef ITEM_H
#define ITEM_H
enum IType { ARMOR, CONSUMABLE};
enum AType { HEAVY, MEDIUM, LIGHT};
class Item {
	protected:
		bool m_empty;
		int m_lvl;
		IType m_type;
	public:
		Item();
		
		const bool empty();
		const int level();
		const IType type();

		void set_type(const IType t);
		void set_level(const int lvl);
		void set_empty(bool e);
	
};

class Equipment : public Item {
	private:
		int m_armor;
	public:
		Equipment();
		
		const int armor();
}; 
class Weapon : public Item {
	private:
		int m_dmg;
	public:
		Weapon();
		
		const int dmg();
};

#endif
