#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    {
        std::cout << " --First example-- " << std::endl;

        const Animal* j = new Dog();
        const Animal* i = new Cat();
        Dog newDog;
        Cat newCat;

        newDog.setIdeas("Im a dog");

        newDog.printIdeas();

        newCat.setIdeas("Im a cat");

        newCat.printIdeas();

        std::cout << std::endl;

        delete j;//should not create a leak
        delete i;
        std::cout << std::endl;
    }

    {
        std::cout << std::endl;
        std::cout << " --Second example-- " << std::endl;
        const Animal *animals[10];
        int count = 10;
        
        for (int i = 0; i < count; i++)
        {
            if (i % 2 == 0)
                animals[i] = new Cat;
            else
                animals[i] = new Dog;
            std::cout << std::endl;
        }
        
        for (int i = 0; i < count; i++)
        {
            std::cout << animals[i]->getType() << std::endl;
            animals[i]->makeSound();
            std::cout << std::endl;
        }
        
        for (int i = 0; i < count; i++)
        {
            delete animals[i];
            std::cout << std::endl;
        }
        
    }
    return 0;
}