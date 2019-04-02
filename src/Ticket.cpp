/*
 * @author Tomasz Słojewski
 */

#include <string>

#include <Ticket.hpp>

using namespace std;

Ticket :: Ticket ()
{
	//do nothing
}

Ticket :: Ticket ( string type, short price )
{
	this->type = type;
	this->price = price;
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
 * @param ticket to assign
 */
void Ticket :: operator = (const Ticket & otherTicket)
{
	type = otherTicket.type;
	price = otherTicket.price;
}
