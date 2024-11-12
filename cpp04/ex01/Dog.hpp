#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog();
        ~Dog();

        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);

        void makeSound() const;

        void setIdea(int index, std::string idea);
        std::string getIdea(int index) const;
};

#endif
