#ifndef _EVENT_H_//inclusion guard
#define _EVENT_H_

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Event
{
private://Again, pay no attention to the funny man behin d the curtain -MTBell
	int time;
	string title;

public:
	Event();//No-arg constructor
	Event(int time, string name);//Overloaded constructor
	int getTime();//returns the time for the event
	string getTitle();//returns the title for the event
	void setTime(int t);//sets the time for the event
	void setTitle(string name);//gives the event a title
};

#endif
