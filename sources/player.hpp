 #include "card.hpp"

namespace ariel{
using namespace std;

class Player{
 
    private:
        std::string name;
      

    public:
        Player(std::string name); // constructor declaration

        std::string getName();
        void stacksize();
        void cardesTaken();
        int numOfCards();
        int cardOnTop();

    };
    

}
 