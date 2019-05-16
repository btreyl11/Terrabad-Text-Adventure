#include <iostream>
#include <stdio.h>
#include "../lib/player.h"
#include "../lib/item.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string cmd = "";
	Warrior p1;
	Warrior enemy;
	p1.set_name("Gargamel");
	enemy.set_name("Gnome");
	while(cmd != "quit"){
		bool battle_over = true;
		printf("You have been approached by a %s! What will you do %s?\n", enemy.name().c_str(), p1.name().c_str());
		battle_over = false;
		while(!battle_over){
		//Battle
			 cout<< p1.name() << "=> Health: " << ((double)p1.health()/(double)p1.max_health())*100 
				<< "% Rage:" << p1.rage() << "%\n";
			cout<< enemy.name() << "=> Health: " << ((double)enemy.health()/(double)enemy.max_health())*100<< "%" << endl;
			printf("Actions:\n1: Basic Attack\n");
			int action;
			cin>> action;
			switch(action){
				case 1:
					p1.basic_attack((Player*)&enemy);
				break;

			}  	
			enemy.basic_attack((Player*)&p1);
			if(p1.health() <= 0 || enemy.health() <=0)
				battle_over = true;
		}
		if(p1.health() > 0);
			cout<<"You Won!" << endl;

	}
	return 0;
}
