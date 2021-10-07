//NAME: DARONG REN
//SID::
//Email: dren9@myseneca.ca
//WS1
//Prof: Chris Szalwinski
//Date: 2021/09/10

#define _CRT_SECURE_NO_WARNINGS
#include "event.h"
#include <iostream>
#include <cstring>
#include <iomanip>
size_t g_sysClock = 0;
namespace sdds
{
	Event::Event()
	{
		m_event[0] = '\0';
		m_startTime = -1;
	}
	void Event::display()
	{
		static int count = 1;
		int hh = 0, mm = 0, ss = 0;
		hh = m_startTime / 3600;
		mm = m_startTime / 60 % 60;
		ss = m_startTime % 60;
		if (this->m_event != NULL && this->m_startTime > 0 && m_event[0] != '\0')
		{
			std::cout.width(2);
			std::cout.fill(' ');
			std::cout.setf(std::ios::right);
			std::cout << count << ". ";
			std::cout.unsetf(std::ios::right);
			std::cout.width(2);
			std::cout.fill('0');
			std::cout.setf(std::ios::right);
			std::cout << hh << ":";
			std::cout.unsetf(std::ios::right);
			std::cout.width(2);
			std::cout.fill('0');
			std::cout.setf(std::ios::right);
			std::cout << mm << ":";
			std::cout.unsetf(std::ios::right);
			std::cout.width(2);
			std::cout.fill('0');
			std::cout.setf(std::ios::right);
			std::cout << ss;
			std::cout.unsetf(std::ios::right);
			std::cout << " => " << m_event << std::endl;
		}
		else
		{
			std::cout.width(2);
			std::cout.fill(' ');
			std::cout.setf(std::ios::right);
			std::cout << count << ". ";
			std::cout.unsetf(std::ios::right);
			std::cout << "| No Event |" << std::endl;
		}
		count++;
	}

	void Event::set(char* arr)
	{
		if (arr != NULL && arr[0] != '\0')
		{
			strcpy(m_event, arr);
			m_startTime = ::g_sysClock;
		}
		else
		{
			m_event[0] = '\0';
		}
	}
}
