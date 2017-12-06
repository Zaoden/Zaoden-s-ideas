#include "../include/Grid.h"
#include "../include/Location.h"
#include <iostream>

Grid::Grid(int x, int y){

Grid_SizeX = x;
Grid_SizeY = y;

initialize_Grid(Grid_SizeX, Grid_SizeY);
write_Grid();

}

void Grid::initialize_Grid(int Grid_SizeX, int Grid_SizeY){
int current_id=0;
locate.push_back(idtoken(0,0,0));

for (int x=0;x<Grid_SizeX;x++){             //go through all x values
    for (int y=0;y<Grid_SizeY;y++){                 //go through all y values
        current_id++;
        locate.push_back(idtoken(x,y,current_id));          //create location
    }
}
total_location_id = current_id;
}

void Grid::write_Grid(){

int current_id = 1;

for (int x=0;x<Grid_SizeX;x++){
    for (int y=0;y<Grid_SizeY;y++){
        std::cout<<locate[current_id].tokenimage; //error
        current_id++;
        std::cout<<" ";
    }
    std::cout<<"\n";
}


}

