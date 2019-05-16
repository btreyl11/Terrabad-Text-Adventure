#ifndef PLAYER_H
#define PLAYER_H
using namepace std;
class Player
{
	protected:
		int m_health;
		int m_max_health;
		string m_name;
		int m_level;
		float m_xp;
		float m_to_next_level;
		vector<Item> inventory;
		Armor equipment[5];
		pair<Weapon> weapons;
	public:
		Player();
		
		const int health();
		const string name();
		const int max_health();
		const int level();
		const float xp();
		const float to_next_level();
		const vector<Item> inventory();
		const Armor[] equipment();
		const pair<Weapon> weapons();
		
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
		bool equip_armor(Armor a);
		bool equip_weapon(Weapon w);
		
		bool basic_attack()=0;
		
};
class Warrior : Player {
	private:
		int rage;
	public:
		Warrior();
		bool basic_attack();
		bool shield_bash();
		bool slash();
};
class Theif : Player {
	private:
		int energy;
	public:
		
};
class Mage : Player {
	private:
		int mana;
};

#endif
