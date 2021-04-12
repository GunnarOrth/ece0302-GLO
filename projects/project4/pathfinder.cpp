#include "image.cpp"
#include <algorithm>
#include <cstdint>
#include <stdexcept>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

bool find_path_with_direction(int row, int col, char maze[ROW][COL])
{
	if (maze[row][col]== DESTINATION){
			return true;
		}
	if (maze[row][col] == WALL || maze[row][col] == PORTAL || maze[row][col] == VISITED ){
			return false;
	   }
	else{
		maze[row][col] = VISITED;
			if (find_path_with_direction(row-1, col, maze)){
				maze[row][col] = RIGHT;
				return true;}

			if (find_path_with_direction(row+1, col, maze)){
				maze[row][col] = DOWN;
				return true;}

			if (find_path_with_direction(row, col-1, maze)){
				maze[row][col] = UP;
				return true;}

			if(find_path_with_direction(row, col+1, maze)){
				maze[row][col] = LEFT;
				return true;}

			maze[row][col] = PATH;
			return false;
	}

}


int main()
{
	Image<Pixel> maze = readFromFile("maze00.png");
	
	if(find_bath_with_direction(maze.height(), maze.width(), maze))
	{
		writeToFile( , "mazesolved.png");
	}
	
  // TODO
  return 0;
}
