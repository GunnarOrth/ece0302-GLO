#include <string>
#include <vector>
#include <iostream>
#include <locale> 
#include "FindPalindrome.hpp"

using namespace std;

//------------------- HELPER FUNCTIONS -----------------------------------------

// non-class helper functions go here, should be declared as "static" so that
// their scope is limited

// helper function to convert string to lower case
static void convertToLowerCase(string & value)
{
	locale loc;
	for (int i=0; i<value.size(); i++) {
		value[i] = tolower(value[i],loc);
	}
}

//------------------- PRIVATE CLASS METHODS ------------------------------------

// private recursive function. Must use this signature!
void FindPalindrome::recursiveFindPalindromes(vector<string>
        candidateStringVector, vector<string> currentStringVector)
{
	int factorial = currentStringVector.size();
	if(factorial == 0)
	{
		return;
	}
	
	for(int i = 0; i < factorial; i++)
	{
		vector<string> newvec;
		newvec = candidateStringVector;
		newvec.push_back(currentStringVector[i]);
		
		vector<string> newcurrent = currentStringVector;
		newcurrent.erase(newcurrent.begin()+i);
		
		recursiveFindPalindromes(newvec, newcurrent);
		if(newvec.size() == palindrome.size())
		{
			vector<string> cutvec1;
			vector <string> cutvec2;
			
			if(newvec.size()%2 == 0)
			{
				for(int i = 0; i < newvec.size()/2;i++)
				{
					cutvec1.push_back(newvec[i]);
				}
				for(int i = newvec.size()/2; i < newvec.size();i++)
				{
					cutvec2.push_back(newvec[i]);
				}
			}
			else
			{
				for(int i = 0; i <= newvec.size()/2;i++)
				{
					cutvec1.push_back(newvec[i]);
				}
				
				
				for(int i = newvec.size()/2; i < newvec.size();i++)
				{
					cutvec2.push_back(newvec[i]);
				}
			}
			if(cutTest1(newvec) && cutTest2(cutvec1,cutvec2))
			{
				string currentString = "";
				for(int i = 0; i < newvec.size(); i++)
				{
				currentString = currentString + newvec[i];
				}
				if(isPalindrome(currentString))
				{
					plist.push_back(newvec);
					n++;
				}
			}
	
		}
	}
	
	return;
}

// private function to determine if a string is a palindrome (given, you
// may change this if you want)
bool FindPalindrome::isPalindrome(string currentString) const
{
	locale loc;
	// make sure that the string is lower case...
	convertToLowerCase(currentString);
	// see if the characters are symmetric...
	int stringLength = currentString.size();
	for (int i=0; i<stringLength/2; i++) {
		if (currentString[i] != currentString[stringLength - i - 1]) {
			return false;
		}
	}
	return true;
}

//------------------- PUBLIC CLASS METHODS -------------------------------------

FindPalindrome::FindPalindrome()
{
	n = 0;
}

FindPalindrome::~FindPalindrome()
{
	// TODO need to implement this...
}

int FindPalindrome::number() const
{
	return n;
}

void FindPalindrome::clear()
{
	n = 0;
	palindrome.clear();
	plist.clear();
}

bool FindPalindrome::cutTest1(const vector<string> & stringVector)
{
	std::string all;
	int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0,g = 0,h = 0,i = 0,j = 0,k = 0,l = 0,m = 0,n = 0,o = 0,p = 0,q = 0,r = 0,s = 0,t = 0,u = 0,v = 0,w = 0,x = 0,y = 0,z = 0;
	for(int i = 0; i < stringVector.size(); i++)
	{
		all = all + stringVector[i];
	}
	convertToLowerCase(all);
	for(int i = 0; i < (all.size()-1); i ++)
	{
		std:: string place = all.substr(i,1);
		if(place == "a")
		{
			a++;
		}
		else if(place == "b")
		{
			b++;
		}
		else if(place == "c")
		{
			c++;
		}
		else if(place == "d")
		{
			d++;
		}
		else if(place == "e")
		{
			e++;
		}
		else if(place == "f")
		{
			f++;
		}
		else if(place == "g")
		{
			g++;
		}
		else if(place == "h")
		{
			h++;
		}
		else if(place == "i")
		{
			i++;
		}
		else if(place == "j")
		{
			j++;
		}
		else if(place == "k")
		{
			k++;
		}
		else if(place == "l")
		{
			l++;
		}
		else if(place == "m")
		{
			m++;
		}
		else if(place == "n")
		{
			n++;
		}
		else if(place == "o")
		{
			o++;
		}
		else if(place == "p")
		{
			p++;
		}
		else if(place == "q")
		{
			q++;
		}
		else if(place == "r")
		{
			r++;
		}
		else if(place == "s")
		{
			s++;
		}
		else if(place == "t")
		{
			t++;
		}
		else if(place == "u")
		{
			u++;
		}
		else if(place == "v")
		{
			v++;
		}
		else if(place == "w")
		{
			w++;
		}
		else if(place == "x")
		{
			x++;
		}
		else if(place == "y")
		{
			y++;
		}
		else if(place == "z")
		{
			z++;
		}
	}
		if(a%2 == 0)
		{
		if(b%2== 0)
		{
		if(c%2 == 0)
		{
		if(d%2== 0)
		{
		if(e%2 == 0)
		{
		if(f%2== 0)
		{
		if(g%2 == 0)
		{
		if(h%2== 0)
		{
		if(i%2 == 0)
		{
		if(j%2== 0)
		{
		if(k%2 == 0)
		{
		if(l%2== 0)
		{
		if(m%2 == 0)
		{
		if(n%2== 0)
		{
		if(o%2 == 0)
		{
		if(p%2== 0)
		{
		if(q%2 == 0)
		{
		if(r%2== 0)
		{
		if(s%2 == 0)
		{
		if(t%2== 0)
		{
		if(u%2 == 0)
		{
		if(v%2== 0)
		{
		if(w%2 == 0)
		{
		if(x%2== 0)
		{
		if(y%2 == 0)
		{
		if(z%2== 0)
		{
			if(all.size()%2 == 0)
			{
				return true;
			}
			else return false;
		}
		else if(z%2 == 0)
		{
			return true;
			}
		}
		else if(z%2 == 0 && y%2 == 0)
		{
			return true;
			}
		}
		else if(z%2 == 0 && y%2 == 0 )
		{
			return true;
			}
		}
		else if( x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(k%2 == 0 && l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(j%2 == 0 && k%2 == 0 && l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(i%2 == 0 && j%2 == 0 && k%2 == 0 && l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(h%2 == 0 && i%2 == 0 && j%2 == 0 && k%2 == 0 && l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(g%2 == 0 && h%2 == 0 && i%2 == 0 && j%2 == 0 && k%2 == 0 && l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(f%2 == 0 && g%2 == 0 && h%2 == 0 && i%2 == 0 && j%2 == 0 && k%2 == 0 && l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(e%2 == 0 && f%2 == 0 && g%2 == 0 && h%2 == 0 && i%2 == 0 && j%2 == 0 && k%2 == 0 && l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(d%2 == 0 && e%2 == 0 && f%2 == 0 && g%2 == 0 && h%2 == 0 && i%2 == 0 && j%2 == 0 && k%2 == 0 && l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if(c%2 == 0 && d%2 == 0 && e%2 == 0 && f%2 == 0 && g%2 == 0 && h%2 == 0 && i%2 == 0 && j%2 == 0 && k%2 == 0 && l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		}
		else if( b%2 == 0 && c%2 == 0 && d%2 == 0 && e%2 == 0 && f%2 == 0 && g%2 == 0 && h%2 == 0 && i%2 == 0 && j%2 == 0 && k%2 == 0 && l%2 == 0 && m%2 == 0 && n%2 == 0 && o%2 == 0 && p%2 == 0 && q%2 == 0 && r%2 == 0 && s%2 == 0 && t%2 == 0 && u%2 == 0 && v%2 == 0 && w%2 == 0 && x%2 == 0 && y%2 == 0 && z%2 == 0)
		{
			return true;
		}
		return false;
}

bool FindPalindrome::cutTest2(const vector<string> & stringVector1,
                              const vector<string> & stringVector2)
{
	string all = "", all2 = "";
	for(int i = 0; i < stringVector1.size(); i++)
	{
		all = all + stringVector1[i];
	}
	convertToLowerCase(all);
	int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0,g = 0,h = 0,i = 0,j = 0,k = 0,l = 0,m = 0,n = 0,o = 0,p = 0,q = 0,r = 0,s = 0,t = 0,u = 0,v = 0,w = 0,x = 0,y = 0,z = 0;
	
	for(int i = 0; i < (all.size()-1); i ++)
	{
		std:: string place = all.substr(i,1);
		if(place == "a")
		{
			a++;
		}
		else if(place == "b")
		{
			b++;
		}
		else if(place == "c")
		{
			c++;
		}
		else if(place == "d")
		{
			d++;
		}
		else if(place == "e")
		{
			e++;
		}
		else if(place == "f")
		{
			f++;
		}
		else if(place == "g")
		{
			g++;
		}
		else if(place == "h")
		{
			h++;
		}
		else if(place == "i")
		{
			i++;
		}
		else if(place == "j")
		{
			j++;
		}
		else if(place == "k")
		{
			k++;
		}
		else if(place == "l")
		{
			l++;
		}
		else if(place == "m")
		{
			m++;
		}
		else if(place == "n")
		{
			n++;
		}
		else if(place == "o")
		{
			o++;
		}
		else if(place == "p")
		{
			p++;
		}
		else if(place == "q")
		{
			q++;
		}
		else if(place == "r")
		{
			r++;
		}
		else if(place == "s")
		{
			s++;
		}
		else if(place == "t")
		{
			t++;
		}
		else if(place == "u")
		{
			u++;
		}
		else if(place == "v")
		{
			v++;
		}
		else if(place == "w")
		{
			w++;
		}
		else if(place == "x")
		{
			x++;
		}
		else if(place == "y")
		{
			y++;
		}
		else if(place == "z")
		{
			z++;
		}
	}
	for(int i = 0; i < stringVector2.size(); i++)
	{
		all2 = all2 + stringVector2[i];
	}
	convertToLowerCase(all2);
	int a2 = 0,b2 = 0,c2 = 0,d2 = 0,e2 = 0,f2 = 0,g2 = 0,h2 = 0,i2 = 0,j2 = 0,k2 = 0,l2 = 0,m2 = 0,n2 = 0,o2 = 0,p2 = 0,q2 = 0,r2 = 0,s2 = 0,t2 = 0,u2 = 0,v2 = 0,w2 = 0,x2 = 0,y2 = 0,z2 = 0;
	
	for(int i = 0; i < (all2.size()-1); i ++)
	{
		string place = all2.substr(i,1);
		if(place == "a")
		{
			a2++;
		}
		else if(place == "b")
		{
			b2++;
		}
		else if(place == "c")
		{
			c2++;
		}
		else if(place == "d")
		{
			d2++;
		}
		else if(place == "e")
		{
			e2++;
		}
		else if(place == "f")
		{
			f2++;
		}
		else if(place == "g")
		{
			g2++;
		}
		else if(place == "h")
		{
			h2++;
		}
		else if(place == "i")
		{
			i2++;
		}
		else if(place == "j")
		{
			j2++;
		}
		else if(place == "k")
		{
			k2++;
		}
		else if(place == "l")
		{
			l2++;
		}
		else if(place == "m")
		{
			m2++;
		}
		else if(place == "n")
		{
			n2++;
		}
		else if(place == "o")
		{
			o2++;
		}
		else if(place == "p")
		{
			p2++;
		}
		else if(place == "q")
		{
			q2++;
		}
		else if(place == "r")
		{
			r2++;
		}
		else if(place == "s")
		{
			s2++;
		}
		else if(place == "t")
		{
			t2++;
		}
		else if(place == "u")
		{
			u2++;
		}
		else if(place == "v")
		{
			v2++;
		}
		else if(place == "w")
		{
			w2++;
		}
		else if(place == "x")
		{
			x2++;
		}
		else if(place == "y")
		{
			y2++;
		}
		else if(place == "z")
		{
			z2++;
		}
	}
	
	if(all2.length() >= all.length())
	{
		if(a2 >= a && b2 >= b && c2 >= c && d2 >= d && e2 >= e && f2 >= f && g2 >= g && h2 >= h && i2 >= i && j2 >= j && k2 >= k && l2 >= l && m2 >= m && n2 >= n && o2 >= o && p2 >= p && q2 >= q && r2 >= r && s2 >= s && t2 >= t && u2 >= u && v2 >= v && w2 >= w && x2 >= x && y2 >= y && z2 >= z)
		{
			return true;
		}
		else {return false;}
	}
	else
	{
		if(a2 <= a && b2 <= b && c2 <= c && d2 <= d && e2 <= e && f2 <= f && g2 <= g && h2 <= h && i2 <= i && j2 <= j && k2 <= k && l2 <= l && m2 <= m && n2 <= n && o2 <= o && p2 <= p && q2 <= q && r2 <= r && s2 <= s && t2 <= t && u2 <= u && v2 <= v && w2 <= w && x2 <= x && y2 <= y && z2 <= z)
		{
			return true;
		}
		else {return false;}
	}
}

bool FindPalindrome::add(const string & value)
{
	palindrome.push_back(value);
	vector<string> zero;
	vector<string> copy;
	copy = palindrome;
	n = 0;
	plist.clear();
	recursiveFindPalindromes(zero, copy);
	return true;
}

bool FindPalindrome::add(const vector<string> & stringVector)
{
	for(int i = 0; i < stringVector.size(); i++)
	{
		palindrome.push_back(stringVector[i]);
	}
	vector<string> zero;
	vector<string> copy;
	copy = palindrome;
	plist.clear();
	n = 0;
	recursiveFindPalindromes(zero, copy);
	return true;
}

vector< vector<string> > FindPalindrome::toVector() const
{
	return plist;
}

