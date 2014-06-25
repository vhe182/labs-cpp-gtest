#ifndef GAME_HEADER 
#define GAME_HEADER 

#include <cstdlib>
#include "../Untouchables/WebGadget.h"


namespace StarTrek {

class Galaxy;

typedef int(*Random)(void);


class Game {
private:
	int e_;
	int t_;

	static int randomWithinLimitOf(int maximum) {
		return generator() % maximum; 
	}

public:
    Game();
    // WebGadget has to be a pointer now so we can pass in NULL during test
    void fireWeapon(Untouchables::WebGadget* wg);
    void fireWeapon(Galaxy& galaxy);
    int energyRemaining(void);
    void torpedoes(int value);
    int torpedoes(void);

    // we could have used -nostdlib and injected our own mock rand() at link-time,
    // but this is signifianctly less complicated 
    static Random generator;
};

}

#endif
