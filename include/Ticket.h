#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket
{
	private:
		short ticketNumber;
		std::string type;
		short price;
	public:
		Ticket ();
		Ticket ( std::string type, short price, short ticketNumber);
		
		std::string getTicketType () const;
		short getPrice () const;
		short getTicketNumber () const;

		
		void operator = (const Ticket & otherTicket);
};

#endif //TICKET_H
