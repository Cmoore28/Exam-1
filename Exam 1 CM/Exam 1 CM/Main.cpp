//Cassadie Moore
//Exam 1 
/*I affirm that all code given below was written solely by me, Cassadie Moore,
and that any help I received adhered to the rules stated for this exam.*/

#include <iostream>
#include <string>
#include "Venue.h"

using namespace std;

int main()/*I broke something and I'm not sure how to fix it.
		  When I try to debug it sends me to another screen I've never seen 
		  before and I don't even know where to start looking for where I 
		  messed up because it didn't give me any errors to go off of...*/
{
	Venue theSpot;//Adds a Venue called The Spot, very trendy and in with the now
	theSpot.addEvent(10, "Coffee Hour");//Adds an event called Coffee Hour that's scheduled for 10 o'clock
	theSpot.addEvent(11, "Brunch w/ Bob");//Adds an event called Brunch w/ Bob that's scheduled for 11 o'clock
	theSpot.addEvent(11, "Bingo");//Attempts to schedule Bingo for 11, but Brunch w/ Bob is already scheduled there

	cout << theSpot.findEvent(10).getTitle() << endl;//Returns the event scheduled for 10 o'clock at the Spot
	cout << theSpot.findEvent("Brunch w/ Bob").getTime() << endl;//Returns the time for Brunch w/ Bob
	cout << theSpot.findEvent("Bingo").getTime() << endl;/*If Bingo was scheduled then it would let us know what 
														time it was scheduled for. But sadly, as per the scheduled events,
														the slot for bingo was taken*/
	
	return 0;
}
