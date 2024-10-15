#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal();
        virtual ~AAnimal();

        AAnimal(const AAnimal& obj);
        AAnimal& operator=(const AAnimal& obj);

        virtual void makeSound() const = 0;
        void setType(std::string type);
        std::string getType() const;
};

#endif
