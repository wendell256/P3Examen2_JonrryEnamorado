#ifndef NBOMBA_H
#define NBOMBA_H

#include <stdlib.h> 
#include "Bomba.h"

class NBomba:public Bomba{
    protected:
        int range;
    public:
        NBomba();
        int getRange();
        
       
};

#endif

