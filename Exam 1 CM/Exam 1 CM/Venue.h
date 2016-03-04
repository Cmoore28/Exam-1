
#ifndef _VENUE_H_//inclusion guard
#define _VENUE_H_

#include "Event.h"

class Venue
{
private: //Pay no attention to the funny man behind the curtain -MTBell
	Event scheduledEvents[12];//No more than 12 event slots can be filled
	int numEvents;
	bool validTime(int time);

public:
	void addEvent(int time, string name);//Adds an event to the venue
	Event findEvent(int time);//Finds an event at a certain time
	Event findEvent(string name);//Finds an event under a certain title
};

#endif
