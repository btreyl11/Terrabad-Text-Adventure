#include "../lib/item.h"

Item::Item(): m_empty(false), m_lvl(1), m_type(CONSUMABLE) {}

const bool Item::empty(){
	return m_empty;
} 
const int Item::level(){
	return m_lvl;
}
const IType Item::type(){
	return m_type;
}

void Item::set_type(const IType t){
	m_type = t;
}
void Item::set_level(const int lvl){
	m_lvl = lvl;
}
void Item::set_empty(const bool e){
	m_empty = e;
}

Equipment::Equipment(): armor(10) {
	Item();
}
Weapon::Weapon() : dmg(10) {
	Item();
}
const int Weapon::dmg(){
	return dmg;
}

