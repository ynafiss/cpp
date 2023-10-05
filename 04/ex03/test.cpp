#include <iostream>
#include <string>

#include <iostream>
#include <string>

class ICharacter; // Forward declaration

class AMateria
{
protected:
    std::string type;

public:
    AMateria(const std::string &type) : type(type) {}
    virtual ~AMateria() {}
    
    std::string const &getType() const { return type; }

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target) = 0;
};

class Ice : public AMateria
{
public:
    Ice() : AMateria("ice") {}
    ~Ice() {}

    AMateria *clone() const override
    {
        return new Ice(*this);
    }

    void use(ICharacter &target) override;
};

class Cure : public AMateria
{
public:
    Cure() : AMateria("cure") {}
    ~Cure() {}

    AMateria *clone() const override
    {
        return new Cure(*this);
    }

    void use(ICharacter &target) override;
};

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};

class Character : public ICharacter
{
private:
    std::string name;
    AMateria *inventory[4];

public:
    Character(const std::string &name) : name(name)
    {
        for (int i = 0; i < 4; ++i)
            inventory[i] = nullptr;
    }

    ~Character()
    {
        for (int i = 0; i < 4; ++i)
        {
            if (inventory[i] != nullptr)
                delete inventory[i];
        }
    }

    std::string const &getName() const override
    {
        return name;
    }

    void equip(AMateria *m) override
    {
        for (int i = 0; i < 4; ++i)
        {
            if (inventory[i] == nullptr)
            {
                inventory[i] = m;
                return;
            }
        }
    }

    void unequip(int idx) override
    {
        if (idx >= 0 && idx < 4)
            inventory[idx] = nullptr;
    }

    void use(int idx, ICharacter &target) override
    {
        if (idx >= 0 && idx < 4 && inventory[idx] != nullptr)
        {
            inventory[idx]->use(target);
        }
    }
};

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *m) = 0;
    virtual AMateria *createMateria(const std::string &type) = 0;
};

class MateriaSource : public IMateriaSource
{
private:
    AMateria *learnedMaterias[4];

public:
    MateriaSource()
    {
        for (int i = 0; i < 4; ++i)
            learnedMaterias[i] = nullptr;
    }

    ~MateriaSource()
    {
        for (int i = 0; i < 4; ++i)
        {
            if (learnedMaterias[i] != nullptr)
                delete learnedMaterias[i];
        }
    }

    void learnMateria(AMateria *m) override
    {
        for (int i = 0; i < 4; ++i)
        {
            if (learnedMaterias[i] == nullptr)
            {
                learnedMaterias[i] = m->clone();
                return;
            }
        }
    }

    AMateria *createMateria(const std::string &type) override
    {
        for (int i = 0; i < 4; ++i)
        {
            if (learnedMaterias[i] != nullptr && learnedMaterias[i]->getType() == type)
            {
                return learnedMaterias[i]->clone();
            }
        }
        return nullptr; // Type not found
    }
};

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}

