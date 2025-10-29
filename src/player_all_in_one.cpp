#include <iostream>
#include <string>

class Player {
private:
  std::string name;
  int health;
  int score;

public:
  Player(const std::string& playerName = "Unknown",
	 int initialHealth = 100)
    : name(playerName), health(initialHealth), score(0) {}

  void takeDamage(int amount) {
    if (amount > 0) {
      health -= amount;
      if (health < 0) health = 0;
    }
  }

  void heal(int amount) {
    if (amount > 0) {
      health += amount;
    }
  }

  void addScore(int points) {
    if (points > 0) {
      score += points;
    }
  }

  std::string getName() const { return name; }
  int getHealth() const { return health; }
  int getScore() const { return score; }

  void displayStatus() const {
    std::cout << "Player: " << name 
	      << " | Health: " << health 
	      << " | Score: " << score << std::endl;
  }
};

int main() {
  std::cout << "=== Player Class Test ===" << std::endl;

  Player hero("Link", 150);
  Player villain("Ganon");

  hero.displayStatus();
  villain.displayStatus();

  std::cout << "\n--- Combat Begins ---" << std::endl;
  hero.takeDamage(30);
  hero.addScore(50);
  hero.displayStatus();

  villain.takeDamage(80);
  villain.heal(20);
  villain.addScore(10);
  villain.displayStatus();

  std::cout << "\nHero heals..." << std::endl;
  hero.heal(25);
  hero.displayStatus();

  std::cout << "\n=== Test Complete ===" << std::endl;
  return 0;
}
