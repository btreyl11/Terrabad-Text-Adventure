#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <utility>
#include <string>
#include "item.h"
using namespace std;
class Player
{
	protected:
		int m_health;
		int m_max_health;
		std::string m_name;
		int m_level;
		float m_xp;
		float m_to_next_level;
		vector<Item> m_inventory;
		Equipment m_equipped[5];
		pair<Weapon,Weapon> m_weapons;
	public:
		Player();
		
		const int health();
		const string name();
		const int max_health();
		const int level();
		const float xp();
		const float to_next_level();
		const vector<Item> inventory();
		const Equipment equipped(const int loc);
		const pair<Weapon,Weapon> weapons();
		
		void set_level(const int lvl);
		void set_xp(const float xp);
		void set_to_next_level(const float nlvl);
		void set_health(const int health);
		void set_name(const string name);
		
		void incr_health(const int pts);
		void incr_lvl();
		void incr_xp(const float xp);
		void incr_to_next_level();
		
		bool pick_up_item(Item i);
		bool equip_armor(Equipment a);
		bool equip_weapon(Weapon w);
		
		bool basic_attack(Player* p);
		
};
class Warrior: public Player {
	private:
		int m_rage;
	public:
		Warrior();
		bool shield_bash();
		bool slash();
	
		const int rage();
		void dec_rage();
		void inc_rage(const int r);
		bool basic_attack(Player* p);
};
class Theif: public Player {
	private:
		int energy;
	public:
		
};
class Mage : Player {
	private:
		int mana;
};

#endif
