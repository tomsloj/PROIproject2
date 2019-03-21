#include <string>

#include <Ticket.h>

using namespace std;

Ticket :: Ticket ()
{
	//do nothing
}

Ticket :: Ticket ( string type, short price, short ticketNumber )
{
	this->type = type;
	this->price = price;
	this->ticketNumber = ticketNumber;
}

/*
 * @return type of ticket
 */
string Ticket :: getTicketType () const
{
	return type;
}

/*
 * @return price of ticket
 */
short Ticket :: getPrice () const
{
	return price;
}

/*
 * @return number of ticket
 */
short Ticket :: getTicketNumber () const
{
	return ticketNumber;
}
/*
 * @param ticket to assign
 */
void Ticket :: operator = (const Ticket & otherTicket)
{
	type = otherTicket.type;
	price = otherTicket.price;
}
