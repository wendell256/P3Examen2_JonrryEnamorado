#include "Bomba.h"
#include "NBomba.h"

NBomba::NBomba():Bomba(){
    tipo=1;
    range = rand() % 4+1;
}

