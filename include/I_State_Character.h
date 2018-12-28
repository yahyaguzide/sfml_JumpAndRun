#ifndef I_STATE_CHARACTER_H
#define I_STATE_CHARACTER_H

#include <SFML/Window.hpp>

#include <Animation.h>
#include <Hero.h>

class I_State_Character : public Animation
{
    public:
        I_State_Character() = default;
        virtual ~I_State_Character() = default;
        virtual void Enter(Hero& hero) = 0;
        virtual I_State_Character* HandleInput(Hero& hero, sf::Event& event) = 0;
        virtual void Update(Hero& hero) = 0;
        //NOTE: I forgot what i wanted to do with this
        virtual I_State_Character* Clone() const = 0;
            //sjsjjsaddddddddd
    private:

};

#endif // I_STATE_CHARACTER_H
