#include <stdio.h>
struct User {
	int id;
	int level;
	float health;	
};
void levelUp(struct User *u) {
	u->level = u->level + 1;
	u->health = 100.0;
}
int main() {
	struct User user1 = {1, 1, 100.0};
	printf("Id: %d, level: %d, health: %f", user1.id, user1.level, user1.health);
	levelUp(&user1);
	printf("Id: %d, level: %d, health: %f", user1.id, user1.level, user1.health);
	return 0;
}
