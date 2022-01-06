#pragma once
#include <iostream>
#include <vector>
#include <string.h>
//for the std::to_string function
#include <sstream>

class CardDeck
{

public:
	//the constructor takes in a card num
	CardDeck(int cardNum)
		:
		numOfCards(cardNum)
	{
		//makes a vector of strings with card names, with the lowest value in the back
		for (int i = numOfCards; i > 0; i--)
		{
			std::string s = "card " + std::to_string(i);
			//puts the string at the end of the vector
			cardVectr.push_back(s);
		}
	}
	//this function does the whole game magic as of now
	void InsertCardDeck()
	{
		//text printed once at the start
		std::cout << "Wanna draw a card boi? Press ENTER... UwU \n";
		//while there are cards in the card deck do dis
		while (cardVectr.size() > 0)
		{
			//press enter to get started
			std::cin.get();
			//print out the last card in the vector 
			printCard(cardVectr.at(cardVectr.size() - 1));
			//delete the last card from the vector
			cardVectr.pop_back();
			//just sum shit to fill out the awkwardness
			std::cout << "\nWanna draw next one? Press ENTER... 0w0";
		}
		//prints when all the cars are taken ()
		std::cout << "\n\nSeems u out of cards daddy...";
	}
private:
	//function printing the inputed string of a vector (prints just one string)
	void printCard(std::string s_input)
	{
		std::string string = s_input;
		//loops through string characters and prints them
		for (char i : string)
		{
			std::cout << i;
		}
	}
private:
	//parameters used in the upper functions
	int numOfCards;
	std::vector<std::string> cardVectr = {};

};