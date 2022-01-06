#include "CardDeck.h"


int main()
{
	//creates card deck with the number of cards inserted
	CardDeck deck(10);
	//uses the function in card deck that has most of the game logic
	deck.InsertCardDeck();




	std::cin.get();
	return 0;
}