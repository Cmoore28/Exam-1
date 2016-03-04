/*I affirm that all code given below was written solely by me, Cassadie Moore,
and that any help I received adhered to the rules stated for this exam.*/

#include "Venue.h"

bool Venue::validTime(int time)//Checks to see if a time slot is already taken up or not
{
	for (int i = 0; i < 12; i++)
	{
		if (scheduledEvents[i].getTime() == -1)/*If the time is -1 then the no-arg constructor set it to default
											   and thus this time slot is open*/
		{
			cout << "Your event has been scheduled! \n";
		}
		else//otherwise there is already an event there, sorry dude
		{
			cout << "Sorry, that time slot is not available. \n";
		}
		return validTime(time);
	}
}

void Venue::addEvent(int time, string name)
{
	bool validTime(time);//Either creates the event or it shuts you down
}

Event Venue::findEvent(int time)
{
	for (int i = 0; i < 12; i++)//looping through the events to find the right time
	{
		int temp;
		temp = scheduledEvents[i].getTime();
		if (temp == time)//once we find an event at the specified time we look for the title
		{
			scheduledEvents[i].getTitle();
			return scheduledEvents[i];
		}
	}
}

Event Venue::findEvent(string name)
{
	for (int i = 0; i < 12; i++)//looping through the events to find the right title
	{
		string temp;
		temp = scheduledEvents[i].getTitle();
		if (temp == "name")//returns the time that matches the title
		{
			scheduledEvents[i].getTime();
			return scheduledEvents[i];
		}
	}
}