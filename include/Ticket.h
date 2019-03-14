#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket
{
	private:
		std::string type;
		short price;
		short ticketsNumber;
		
	public:
		Ticket ();
		Ticket ( std::string type, short price, short ticketNumber = 1);
		
		std::string getTicketType () const;
		short getPrice () const;
		short getTicketsNumber () const;

};


#endif //TICKET_H
