/*
 * @author Tomasz Słojewski
 */

#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket
{
	private:
		std::string type;
		short price;
	public:
		Ticket ();
		Ticket ( std::string type, short price  );
		
		std::string getTicketType () const;
		short getPrice () const;
		
		void operator = (const Ticket & otherTicket);
};

#endif //TICKET_H