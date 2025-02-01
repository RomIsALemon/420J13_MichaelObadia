//This file is being used to check my answers on the txt file
#include <iostream>

class Enemy {
    int* health;
public:
    Enemy(int hp) {
        health = new int(hp);
    }
    ~Enemy() {
        delete health;
    }
    void attack() {
        *health -= 10;
        std::cout << "Enemy health: " << *health << std::endl;
    }
};

void spawnEnemy(Enemy*& enemy) { //changed the passed value to a reference, which fixed the code
    enemy = new Enemy(100);
}

int main() {
    Enemy* orc = nullptr;
    spawnEnemy(orc);
    orc->attack();
    delete orc;
    return 0;
}

