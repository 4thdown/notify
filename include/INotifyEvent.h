#ifndef INCLUDE_GUARD_INotifyEvent
#define INCLUDE_GUARD_INotifyEvent

#include <sys/inotify.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>

#include "jet/Utf8String.h"
#include "jet/Exception.h"


using namespace std;

class INotifyEvent : inotify_event{

    /*
    inotify_event{

        int wd;             // Watch Descriptor
        uint32_t mask;      // Bits describing event that occur
        uint32_t cookie;    // Cookie for related events (for rename())
        uint32_t len;       // Size of the 'name' field
        char name[];        // Optional null terminated filename

    }

    */

    public:
        INotifyEvent();
        ~INotifyEvent();

        uint32_t getSize() const;
        string getDescription() const;


};

#endif //INCLUDE_GUARD_INotifyEvent