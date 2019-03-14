#include <string>

#include <Ticket.h>

Ticket :: Ticket ()
{
	//do nothing
}

Ticket ( std::string type, short price, short ticketNumber )
{
	this->type = type;
	this->price = price;
	this->ticketNumber = ticketNumber;
}

std::string Ticket :: getTicketType () const
{
	return type;
}

short Ticket :: getPrice () const
{
	return price;
}

short getTicketsNumber () const
{
	return ticketsNumber;
}
