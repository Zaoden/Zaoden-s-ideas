#include <iostream>
#include <vector>
#include <conio.h>
#include <Maptoken.h>
using namespace std;


MapToken Makemap(int x, int y, int current_id){
    MapToken T;
    T.id = current_id;
    T.xposition = x;
    T.yposition = y;
    T.token = '0';
    return T;
}

void printMap(vector<MapToken> Map, int xsize, int ysize){
    int current_id = 0;

    for(int y=1;y<=ysize;y++){
        for (int x=1;x<=xsize;x++){
            current_id++;
            cout<<Map[current_id].token<<" ";
        }
        cout<<"\n";
    }
}

vector<MapToken> BuildCity(vector<MapToken> Map, int total_id){
    int current_id;
    cout<<" What location do you want to build your city(1-"<<total_id<<"): ";
    cin>>current_id;
    Map[current_id].token = 'A';
    return Map;
}


int main()
{
    int xsize=0;
    int ysize=0;
    int current_id = 0;
    int total_id=0;
    char Continue_build = ' ';

    vector<MapToken> Map;
    Map.push_back(Makemap(0,0,0));

    cout<<"Map x axis size: ";
    cin>>xsize;
    cout<<"\nMap y axis size: ";
    cin>>ysize;

    for(int y=1;y<=ysize;y++){
        for(int x=1;x<=xsize;x++){
            current_id++;
            Map.push_back(Makemap(x, y, current_id));

        }
    }

    total_id = current_id;


    while (!((Continue_build == 'N')||(Continue_build == 'n'))){
        Map = BuildCity(Map, total_id);
        cout<< "build more?(Y/N): ";
        cin>>Continue_build;
    }

    printMap(Map, xsize, ysize);

    cout<<"press enter to quit";
    getche();

    return 0;


}

