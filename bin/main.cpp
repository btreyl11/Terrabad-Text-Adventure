#include <iostream>
#include <stdio.h>
#include "../lib/player.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string cmd = "";
	Warrior p1 = new Warrior();
	Warrior enemy = new Warrior();
	p1.set_name("Gargamel");
	enemy.set_name("Gnome");
	while(cmd != "quit"){
		bool battle_over = true;
		printf("You have been approached by a %s! What will you do %s?\n" enemy.name(), p1.name());
		while(!battle_over){
		//Battle
			printf("%s => Health: %d%  Rage: %d%\n", (p1.health()/p1.max_health())*100, p1.rage());
			printf("Actions:\n1: Basic Attack\n");
			switch(action){
				case 1:
					p1.basic_attack(enemy);
				break;

			}  	
			enemy.basic_attack(p1);
		}

	}
	return 0;
}
