#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
#include <fstream>

using std::cout;
using std::cin;
using std::vector;
using std::ifstream;

/*
 * 
 * Pseudo code of A* algorithm
     Search( grid, initial_point, goal_point ) :

        Initialize an empty list of open nodes.

        Initialize a starting node with the following:
            x and y values given by initial_point.
            g = 0, where g is the cost for each move.
            h given by the heuristic function (a function of the current
            coordinates and the goal).

        Add the new node to the list of open nodes.

        while the list of open nodes is nonempty:
            Sort the open list by f-value
            Pop the optimal cell (called the current cell).
            Mark the cell's coordinates in the grid as part of the path.
            if the current cell is the goal cell:
            return the grid.
            else, expand the search to the current node's neighbors. 
            This includes the following steps:
            Check each neighbor cell in the grid to ensure that the cell is empty: 
            it hasn't been closed and is not an obstacle.
            If the cell is empty, compute the cost (g value) and the heuristic, 
            and add to the list of open nodes.
            Mark the cell as closed.

        If you exit the while loop because the list of open nodes is empty, 
         * you have run out of new nodes to explore and haven't found a path.


*/


void PrintBoard(const std::vector<std::vector<int>> board){
    
    for(unsigned int i=0;i<board.size();i++){
        for(unsigned int j = 0;j<board[i].size();j++){
            std::cout<<board[i][j];
        }
        std::cout<<"\n";
    }
}

void ReadBoardFile(std::string filepath){
    std::ifstream board_file;
    board_file.open(filepath);
    if(board_file){
        std::cout<<"The file stream has been created! "<<"\n";
        std::string line;
        while (std::getline(board_file, line)){
            std::cout<<line<<"\n";
        }
    }
    else{std::cout<<"no file stream"<<"\n";}
    }


int main()
{
   
//    my_file.open("/media/aditya/INSTALL and EXTRA/CppND/Astar-Search-CppND/A* Cpp/files/boards.txt");
 
    std::vector<std::vector<int>> board = {{{0, 1, 0, 0, 0, 0},
                                  {0, 1, 0, 0, 0, 0},
                                  {0, 1, 0, 0, 0, 0},
                                  {0, 1, 0, 0, 0, 0},
                                  {0, 0, 0, 0, 1, 0}}};

    //PrintBoard(board);
    ReadBoardFile("/media/aditya/INSTALL and EXTRA/CppND/Astar-Search-CppND/A* Cpp/files/boards2.txt");

	return 0;
}
