#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
private:
    char speciesName[50];

public:
    static int totalAnimals;

    Animal()
    {
        totalAnimals++;
    }

    Animal(char name[])
    {
        totalAnimals++;
        strcpy(speciesName, name);
    }


    virtual ~Animal()
    {
        totalAnimals--;
    }


    void setSpeciesName(char name[])
    {
        strcpy(speciesName, name);
    }


    char *getSpeciesName()
    {
        return speciesName;
    }

    virtual void makeSound() = 0;
    virtual void move() = 0;
};

int Animal::totalAnimals = 0;

class Lion : public Animal
{
public:
    Lion() : Animal()
    {
    }

    Lion(char name[]) : Animal(name)
    {
    }

    void makeSound()
    {
        cout << getSpeciesName() << " roars: ROAR!" << endl;
    }

    void move()
    {
        cout << getSpeciesName() << " runs on land." << endl;
    }
};

class Fish : public Animal
{
public:
    Fish() : Animal()
    {
    }

    Fish(char name[]) : Animal(name)
    {
    }

    void makeSound()
    {
        cout << getSpeciesName() << " makes sound: Blub Blub" << endl;
    }

    void move()
    {
        cout << getSpeciesName() << " swims in water." << endl;
    }
};

int main()
{

    Animal *zoo[2];

    char lName[50] = "Afican Lion";
    char fName[50] = "DoomsDay the Fish";

    zoo[0] = new Lion(lName);
    zoo[1] = new Fish(fName);

    cout << "Total Animals created: " << Animal::totalAnimals << endl;
    cout << "-----------------------------------" << endl;


    for (int i = 0; i < 2; i++)
    {
        zoo[i]->makeSound();
        zoo[i]->move();
        cout << "-----------------------------------" << endl;
    }


    for (int i = 0; i < 2; i++)
    {
        delete zoo[i];
    }

    cout << "Total Animals after deletion: " << Animal::totalAnimals << endl;

    return 0;
}
