#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain* _brain;
    public:
        Cat();
        ~Cat();

        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);

        void makeSound() const;

        void setIdea(int index, std::string idea);
        std::string getIdea(int index) const;
};

#endif
