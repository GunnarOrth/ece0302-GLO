#ifndef FANCYPOWER_HPP
#define FANCYPOWER_HPP

int fancyPower(int n, int m)
{
	if( n == 1)
	{
		return m;
	}
	if( n%2 == 0)
	{
		return fancyPower(n/2, m*m);
	}
	else if( n%2 != 0)
	{
		return m*fancyPower((n-1)/2, m*m);
	}
}

#endif
