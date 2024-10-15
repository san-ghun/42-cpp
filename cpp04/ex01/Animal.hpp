#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        virtual ~Animal();

        Animal(const Animal& obj);
        Animal& operator=(const Animal& obj);

        virtual void makeSound() const;
        virtual void setType(std::string type);
        virtual std::string getType() const;
};

#endif
