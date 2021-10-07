//NAME: DARONG REN
//SID::
//Email: dren9@myseneca.ca
//WS1
//Prof: Chris Szalwinski
//Date: 2021/09/10


#ifndef EVENT_H 
#define EVENT_H 
#include<iostream> 
namespace sdds
{
	class Event
	{
	private:
		char m_event[128];
		size_t m_startTime;
	public:
		Event();
		void display();
		void set(char* arr = NULL);
	};
}

#endif
