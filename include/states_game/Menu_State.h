#ifndef MENU_STATE_H
#define MENU_STATE_H

#include <I_State_Game.h>

class Menu_State: public I_State_Game
{
    public:
        Menu_State();
        virtual ~Menu_State();

        I_State_Game* HandleInput(sf::Event event);

    protected:

    private:
};

#endif // MENU_STATE_H
