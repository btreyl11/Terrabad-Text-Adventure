#include <vector>
#include <utility>
#include "../lib/player.h"
#define HEAD 0
#define SHOULDERS 1
#define CHEST 2
#define HANDS 3
#define FEET 4
Player::Player(): m_health(100), m_xp(0), m_max_health(100), m_to_next_level(1000), m_level(1){
	m_inventory.resize(9);
	m_equipped[HEAD].set_empty(true);
	m_equipped[SHOULDERS].set_empty(true);
	m_equipped[CHEST].set_empty(true);
	m_equipped[HANDS].set_empty(true);
	m_equipped[FEET].set_empty(true);
	
	m_weapons.first.set_empty(true);
	m_weapons.second.set_empty(true);
}

const int Player::health()
{
	
	return m_health;
}
const string Player::name()
{
	return m_name;
}
const int Player::max_health()
{
	return m_max_health;
}
const int Player::level()
{
	return m_level;
}
const float Player::xp()
{
	return m_xp;
}
const float Player::to_next_level()
{
	return m_to_next_level;
}
const vector<Item> Player::inventory(){
	return m_inventory;
}
const Equipment Player::equipped(const int loc){
	return m_equipped[loc];
}
const pair<Weapon, Weapon> Player::weapons(){
	return m_weapons;
}

void Player::set_level(const int lvl)
{
	m_level = lvl;
}
void Player::set_xp(const float xp)
{
	m_xp = xp;
	if(m_xp >= m_to_next_level){
		m_level++;
		this->incr_to_next_level();	
	}
}
void Player::set_to_next_level(const float nlvl){
	m_to_next_level = nlvl;
}
void Player::set_health(const int health)
{
	m_health = health;
}
void Player::set_name(const string name)
{
	m_name = name;
}
void Player::incr_health(const int pts)
{
	m_health += pts;
}
void Player::incr_lvl(){
	m_level++;
}
void Player::incr_xp(const float xp){
	m_xp += xp;
	if(m_xp >= m_to_next_level){
		m_level++;
		this->incr_to_next_level();
	}
}
void Player::incr_to_next_level(){
	m_to_next_level = m_to_next_level*2.5;
}
bool Player::pick_up_item(Item i){
	return true;
}
bool Player::basic_attack(Player* p){

	p->incr_health(-10);
}
Warrior::Warrior(): m_rage(0)
{
	Player();
}
const int Warrior::rage(){
	return m_rage;
}
void Warrior::inc_rage(int r){
	m_rage += r;
}
bool Warrior::basic_attack(Player* p){
	inc_rage(10);
	p->incr_health(-10);
}
