// Project 3 -- XML Parsing Project

/** XML parsing class implementation.
    @file XMLParser.cpp */

#include <string>
#include <assert.h>
#include "XMLParser.hpp"

// TODO: Implement the constructor here
XMLParser::XMLParser()
{
	n = 0;
	x = 0;
}  // end default constructor

// TODO: Implement the destructor here
XMLParser::~XMLParser()
{
}  // end destructor

static std::string deleteAttributes(std::string input)
{
	std::string walter = "";
	int i = 0;
	char c;
	while(i < input.length())
	{
		walter = walter+input[i];
		i++;
		c = input[i];
		if(c == '!'||c =='\"'||c =='#'||c =='$'||c =='%'||c =='&'||c =='\''||c =='('||c ==')'||c =='*'||c =='+'||c ==','||c =='/'||c ==';'||c =='<'||c =='='||c =='>'||c =='?'||c =='@'||c =='['||c =='\\'||c ==']'||c =='^'||c =='`'||c =='{'||c =='|'||c =='}'||c =='~'||c =='.'||c ==' ')
		{//once any of these characters show up, the tag name has ended and the while loop ends
			i = input.length()+1;//sets it above the input length, ending the while loop
		}
	}
	
	return walter;
}

// TODO: Implement the tokenizeInputString method
bool XMLParser::tokenizeInputString(const std::string &inputString)
{
	int i = 0;
	std::string walter;
	char c;
	char h;
	while(i < inputString.length())//while i is less than the length of the input string, goes to last character
	{
		walter = "";
		c = inputString[i];
		cout << c;
		if(c == '<')//if it's a tag
		{
			TokenStruct jeff;
			i++;
			c = inputString[i];
			cout << c;
			if(c == '-'||c ==','||c =='.'||c =='0'||c =='1'||c =='2'||c =='3'||c =='4'||c =='5'||c =='6'||c =='7'||c =='8'||c =='9')//if first character is a non allowable one, will end
			{
				//my code keeps ending here for no reason
				n = 0;
				return false;
			}
			while(c != '>')//reads until end of tag
			{
				walter = walter+inputString[i];//add to string
				i++;
				c = inputString[i];
				cout << c;
			}
			i++;
			c = walter[0];
			h = walter.back();
			if(c == '/')
			{
				jeff.tokenType = END_TAG;
				walter = walter.substr(1,walter.length()-1);
			}
			else if(c == '?')
			{
				jeff.tokenType = DECLARATION;
				walter = walter.substr(1,walter.length()-1);
			}
			else if(h == '/')
			{
				jeff.tokenType = EMPTY_TAG;
			}
			else
			{
				jeff.tokenType = START_TAG;
			}
			walter = deleteAttributes(walter);//gets tag name
			cout << walter;
			jeff.tokenString = walter;
			tokenizedInputVector.push_back(jeff);
			elementNameBag.add(walter);
		}
		else if(c == '\n')
		{
			i++;
		}
		else//content
		{
			TokenStruct jeff2;
			
			while(i < inputString.length())//reads content until <
			{
				walter = walter+inputString[i];//adds to string
				i++;
				c = inputString[i];
				if(c == ' ')
				{
					break;
				}
				if(c == '<')
				{
					break;
				}
				if(c == '\n')
				{
					break;
				}
			}
			if(c == ' ')
			{
				i++;
			}
			if(c == '\n')
			{
				i++;
			}
			jeff2.tokenType = CONTENT;
			jeff2.tokenString = walter;
			tokenizedInputVector.push_back(jeff2);
			elementNameBag.add(walter);
		}
	}
	n = 1;
	return true;
}// end

// TODO: Implement a helper function to delete attributes from a START_TAG
// or EMPTY_TAG string (you can change this...)

// TODO: Implement the parseTokenizedInput method here
bool XMLParser::parseTokenizedInput()
{
	Stack<std::string> tempstack;
	int a = 0, b = 0;
	std::string temp;
	if(n == 1)
	{
		
	for(int i = (tokenizedInputVector.size()-1); i > -1; i --)
	{
		if(tokenizedInputVector[i].tokenType == DECLARATION)
		{
			temp = tokenizedInputVector[i].tokenString;
			parseStack.push(temp + "\n");
		}
		else if(tokenizedInputVector[i].tokenType == START_TAG)
		{
			temp = tokenizedInputVector[i].tokenString;
			parseStack.push(temp + ": ");
			a++;
		}
		else if(tokenizedInputVector[i].tokenType == END_TAG)
		{
			parseStack.push("\n");
			b++;
		}
		else if(tokenizedInputVector[i].tokenType == CONTENT)
		{
			temp = tokenizedInputVector[i].tokenString;
			parseStack.push(temp);
		}
		else if(tokenizedInputVector[i].tokenType == EMPTY_TAG)
		{
			parseStack.push("\n");
		}
		
	}
	if(a != b)
	{
		return false;
	}
	x = 1;
	return true;
	}
	return false;
}

// TODO: Implement the clear method here
void XMLParser::clear()
{
	elementNameBag.clear();
	parseStack.clear();
	tokenizedInputVector.clear();
}

vector<TokenStruct> XMLParser::returnTokenizedInput() const
{
	return tokenizedInputVector;
}

// TODO: Implement the containsElementName method
bool XMLParser::containsElementName(const std::string &inputString) const
{
	if(n==1 && x ==1)
	{
		//return n;
		return elementNameBag.contains(inputString);
	}
	return false;
}

// TODO: Implement the frequencyElementName method
int XMLParser::frequencyElementName(const std::string &inputString) const
{
	if(n==1 && x==1)
	{
		//return n;
		return elementNameBag.getFrequencyOf(inputString);
	}
	return -1;
}

