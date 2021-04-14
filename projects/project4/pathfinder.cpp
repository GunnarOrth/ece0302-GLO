#include "image.cpp"
#include <algorithm>
#include <cstdint>
#include <stdexcept>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

struct coords{
	int r;
	int c;
};

bool goal(Image<Pixel> im,int r,int c);
bool actions(Image<Pixel> im,coords x, vector<coords> y);


int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		std::cout << "Usage: compare" << "<first_input_filename> <second_output_filename>\n" << std::endl;
		return EXIT_FAILURE;
	}
	
	//std::string input_file = argv[1];
	//std::string output_file = argv[2];
	std::string input_file = "maze00.png";
	std::string output_file = "maze00output.png";
	
	Image<Pixel> maze = readFromFile(input_file);
	Image<Pixel> outmaze = readFromFile(input_file);
	int r,c;
	int n = 0;
	
	for(int i = 0; i <= maze.width(); i++)//s.initial
	 {
		 for(int j = 0; j <= maze.height(); i++)
		 {
			 if(maze(i,j) == RED)
			 {
				 n++;
				 r = i;
				 c = j;
				 if(n > 1)
				 {
					 writeToFile(maze, output_file);
					 return EXIT_FAILURE;
				 }
			 }
		 }
	 }
	
	if(goal(maze, r, c))//if problem.goal(s) return s
	{
		outmaze(r,c) = GREEN;
		writeToFile(outmaze, output_file);
	}
	
	vector<coords> frontier;//FIFO queue
	coords start;
	start.r = r;
	start.c = c;
	frontier.push_back(start);//make s initial element
	
	vector<coords> explored;
	
	bool check = true;
	while(check)
	{
		if(frontier.empty())//if frontier is empty return failure
		{
			return EXIT_FAILURE;
		}
		
		coords x = frontier.back();
		frontier.pop_back();//pop next state from frontier
		explored.push_back(x);//add s to explored
		cout << "row = " << x.r << endl << "col = " << x.c << endl;
		coords a = x;
		a.r--;
		coords b = x;
		b.r++;
		coords c = x;
		c.c--;
		coords d = x;
		c.c++;
		
		if(actions(maze, a, explored))//return s_next
		{
			check = false;
			outmaze(a.r,a.c) = GREEN;
			writeToFile(outmaze, output_file);
		}
		frontier.push_back(a);//insert s_next into frontier
		
		if(actions(maze, b, explored))//return s_next
		{
			check = false;
			outmaze(b.r,b.c) = GREEN;
			writeToFile(outmaze, output_file);
		}
		frontier.push_back(b);//insert s_next into frontier
		
		if(actions(maze, c, explored))//return s_next
		{
			check = false;
			outmaze(c.r,c.c) = GREEN;
			writeToFile(outmaze, output_file);
		}
		frontier.push_back(c);//insert s_next into frontier
		
		if(actions(maze, d, explored))//return s_next
		{
			check = false;
			outmaze(d.r,d.c) = GREEN;
			writeToFile(outmaze, output_file);
		}
		frontier.push_back(d);//insert s_next into frontier
	}
	
	//im(r,c);
	//im.width();
	//im.height();
  // TODO
  return 0;
}

bool goal(Image<Pixel> im,int r,int c)
{
	if((r+1) == ((im.height()+1) || (r-1) == -1 || (c+1) == (im.width()+1) || (c-1) == -1) && (im(r,c) == WHITE || im(r,c) == RED))
	{
		return true;
	}
	return false;
}

bool actions(Image<Pixel> im,coords x, vector<coords> y)
{
	bool check= true;
	for(int i = 0; i < y.size();i++)//if not in explored
	{
		if(y[i].r == x.r && y[i].c == x.c)
		{
			check = false;
		}
	}
	
	if(check)//then
	{
		if(goal(im, x.r, x.c))//if problem.goal(s_next)
		{
			return true;
		}
	}
	return false;
}






