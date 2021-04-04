#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "catch.hpp"

#include "dynamic_array_list.h"
#include "sorted_list.h"

TEST_CASE("Testing Sorted List", "[sorted list]") {
{
	SortedList<int, DynamicArrayList<int> > slst;
	slst.insert(5);
	slst.insert(4);
	slst.insert(3);
	slst.insert(6);
	slst.insert(3);
	slst.insert(4);
	slst.insert(3);
	
	std::cout << slst.getEntry(0);
	std::cout << slst.getEntry(1);
	std::cout << slst.getEntry(2);
	std::cout << slst.getEntry(3);
	std::cout << slst.getEntry(4);
	std::cout << slst.getEntry(5);
	std::cout << slst.getEntry(6);
	
	slst.remove(3);
	slst.remove(3);
	slst.remove(4);
	
	std::cout << slst.getEntry(0);
	std::cout << slst.getEntry(1);
	std::cout << slst.getEntry(2);
	std::cout << slst.getEntry(3);
}
}
