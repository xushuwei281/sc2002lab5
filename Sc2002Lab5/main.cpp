#include "childAnimal.h"

int main() {
    Animal* zoo[10];
    int choice, count = 0;

    while (true) {
        std::cout << "Select the animal to send to Zoo: (1) Dog (2) Cat (3) Lion (4) Move all animals (5) Quit\n";
        std::cin >> choice;
        if (choice == 5) break;
        switch (choice) {
            case 1:
                zoo[count++] = new Dog("Doggo", Brown, "Owner");
            break;
            case 2:
                zoo[count++] = new Cat("Kitty", Black);
            break;
            case 3:
                zoo[count++] = new Lion("Leo", Green);
            break;
            case 4:
                for (int i = 0; i < count; i++) {
                    zoo[i]->speak();
                    zoo[i]->move();
                    zoo[i]->eat();
                    delete zoo[i];
                }
            count = 0;
            break;
        }
    }

    // Clean up remaining animals
    for (int i = 0; i < count; i++) {
        delete zoo[i];
    }

    return 0;
}
