/*I affirm that all code given below was written solely by me, Cassadie Moore,
and that any help I received adhered to the rules stated for this exam.*/

#include "Event.h"

Event::Event()//No-arg constructor --> this is time -1, so not within the time frame of events, and is labled as free
{
	time = -1;
	title = "Free";
}

Event::Event(int t, string name)//Overloaded constructor that sets the event's time and title
{
	time = t;
	title = name;
}

int Event::getTime()//returns the time for the event
{
	return time;
}

string Event::getTitle()//returns the title for the event
{
	return title;
}

void Event::setTime(int t)//sets the time for an event
{
	time = t;
}

void Event::setTitle(string name)//gives an event a title
{
	title = name;
}