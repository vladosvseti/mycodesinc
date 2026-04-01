#include <stdio.h>
#include <stdlib.h>
struct Fighter {
	char name[20];
	int health;
	int damage;
};
void show_fighters(struct Fighter *f) {
	for(int i = 0; i < 3; i++) {
		printf("%s: HP: %d, DMG: %d\n", f[i].name, f[i].health, f[i].damage);
	}	
}
void calc_damage(struct Fighter *f) {
	for(int i = 0; i < 3; i++) {
		f[i].health = f[i].health - f[i].damage;
		f[i].damage = 0;
	}
}
void healFighter(struct Fighter *f) {
	f->health += 50;
	printf("Боец %s подлечился!\n", f->name);
}
void heal_f_with_low_HP(struct Fighter *f) {
	for(int i = 0; i < 3; i++) {
		if (f[i].health < 50) {
			healFighter(&f[i]);
		}
	}
}
int main() {
	system("chcp 65001 > nul");
	struct Fighter squard[3] =  {
		{"Vlad", 98, 20},
		{"Den", 60, 40},
		{"Ben", 100, 67},
	};
	show_fighters(squard);
	calc_damage(squard);
	show_fighters(squard);
	heal_f_with_low_HP(squard);
    return 0;
}
