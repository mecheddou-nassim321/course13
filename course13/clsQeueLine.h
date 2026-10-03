#pragma once
#include<stdio.h>
#include<iostream>
#include"clsDblLinkedList.h"
#include <queue>
#include<stack>
#include "clsDate.h"
#include<string>

using namespace std;
class clsQeueLine {
private:
	string _prifix;
	int _totalTicket=0;

	int _averageTime=0;
public:
	class clsTicket {
	private:
		string _prifix;
		int _number = 0;
		int _waitingClient=0;
		string  _TimeDate;
		int _serveTime = 0;
	public:
		clsTicket(string prifix, int number,  int waitingClient, int serveTime) {
			_prifix = prifix;
			_number = number;
			_TimeDate = clsDate::GetSystemDateTimeString();
		
			_waitingClient = waitingClient;
			_serveTime = serveTime;
			
		}
		int number() {
			return _number;
		}
		string FullNumber() {
			return _prifix + to_string(_number);
		}
		int waitingClient() {
			return _waitingClient;
		}
		string TicketTime() {
			return _TimeDate;
		}
		int serveTime() {
			return _waitingClient * _serveTime;
		}
		void printInfo() {
			cout << "\t\t\t\t" << "-----" << "--------\n";
			cout << "\t\t\t\t" << FullNumber();
			cout << "\n\t\t\t\t" << TicketTime();
			cout << "\n\t\t\t\t waiting Client:" << waitingClient();
			cout << "\n\t\t\t\t serve Time in minute:" << serveTime();
			cout << "\n\t\t\t\t-------------------------------------------\n";

		}

	};
	queue<clsTicket>MyQeueue;
	clsQeueLine(string prifix, int averageTime) {
		_prifix = prifix;
		_averageTime = averageTime;
		_totalTicket = 0;

	}
	void IssueTicket() {
		_totalTicket++;
		clsTicket Ticket(_prifix, _totalTicket, waitingClient(), _averageTime);
		MyQeueue.push(Ticket);
		
	}
	int waitingClient() {
		return MyQeueue.size();
	}
	int serveTime() {
		return _totalTicket - waitingClient();
	}
	string whoIsNext() {
		if (MyQeueue.empty()) {
			return "No client Left";
		}
		else {
			return MyQeueue.front().FullNumber();
		}

	}
	bool serveNextClient() {
		if (MyQeueue.empty()) {
			return false;
		}
		else {
			MyQeueue.pop();
			return true;
		}
	}
	int servedClient() {
		return _totalTicket - MyQeueue.size();
	}
	void printInfo() {
		cout << "\t\t\t\t" << "-------------------------\n";
		cout << "\t\t\t\t" << "Queue Info\n";
		cout << "\t\t\t\t" << "------------------------------\n";
		cout << "\t\t\t\tprefix:" << _prifix << endl;
		cout << "\t\t\t\tTotal Ticket:" << _totalTicket << endl;
		cout << "\t\t\t\tserved client:" << servedClient() << endl;
		cout << "\t\t\t\t waiting client:" << waitingClient() << endl;
		cout << "\t\t\t\t" << "------------------------------\n";

	}
	void printTicketLineinRTL() {
		if (MyQeueue.empty()) {
			cout << "No Ticket";
		}
		cout << "ticket:";
		queue<clsTicket> TempQeue = MyQeueue;
		while (!TempQeue.empty()) {
			clsTicket Ticket = TempQeue.front();
		
			cout << Ticket.FullNumber() << "<--";
			TempQeue.pop();
		}

	}
	void printTicketLineinLTR() {
		if (MyQeueue.empty()) {
			cout << "No Ticket";
		}
		cout << "ticket:";
		queue<clsTicket> TempQeue = MyQeueue;
		stack<clsTicket>stackLine;
		while (!TempQeue.empty()) {
			stackLine.push(TempQeue.front());
			TempQeue.pop();
		}
		while (!stackLine.empty()) {
			clsTicket Ticket = stackLine.top();
			cout << Ticket.FullNumber() << "<--";
			stackLine.pop();
		}


	}
    void printALLticket() {
       cout << "\n\t\t\t\t";
       if (MyQeueue.empty()) {
           cout << "No Ticket";
       } else {
           cout << "\n\t\t\t\t";
           queue<clsTicket> TempQeue = MyQeueue; // Create a copy of the queue
           while (!TempQeue.empty()) { // Iterate over the copy
               TempQeue.front().printInfo();
               TempQeue.pop();
           }
       }
    }
};
