// 7.23 LAB: Winning team (classes)

// Main.cpp
#include <iostream>
#include <string>
#include "Team.h"
using namespace std;

int main() {
   string name;
   int wins;
   int losses;
   Team team;

   cin >> name;
   cin >> wins;
   cin >> losses;

   team.SetName(name);
   team.SetWins(wins);
   team.SetLosses(losses);

   team.PrintStanding();
   
   return 0;
}
// Team.h
#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team {
   //declare private data members-name,wins,looses
    private:
    string name;
    int wins,losses;
    public:
    //declare mutatir functions
    void SetName(string name);
    void SetWins(int wins);
    void SetLosses(int losses);
    //declare accessor functions
    string GetName();
    int GetWins();
    int GetLosses();
    //declare GetWinPercentage()
    double GetWinPercentage();
    //declare PrintStanding()
    void PrintStanding();
};

#endif
// Team.cpp
#include<iostream>
#include<iomanip>
#include "Team.h"
using namespace std;
//implement mutator functions
void Team::SetName(string name)
{
    this->name=name;
}
void Team::SetWins(int wins)
{
    this->wins=wins;
}
void Team::SetLosses(int losses)
{
    this->losses=losses;
}
//implement accessor functions
string Team::GetName()
{
    return name;
}
int Team::GetWins()
{
    return wins;
}
int Team::GetLosses()
{
    return losses;
}
//implement GetWinPercentage()
double Team::GetWinPercentage()
{
    double winPercentage=(double)wins/(wins+losses); //Calculate winPercentage
    return winPercentage;   //return winPercentage
}
//implement PrintStanding()
void Team::PrintStanding()
{
    
    double winPercentage=this->GetWinPercentage();  //get winPercentage
    cout<<setprecision(2);  //set precision upto 2 decimal point
    cout<<fixed;
    cout<<"Win percentage: "<<winPercentage<<endl;  //print winPercentage
    //if winPercentage is greater than or equal to 0.5 then print Congratulations
    if(winPercentage>=0.5)
    {
        cout<<"Congratulations, Team "<<this->GetName()<<" has a winning average!"<<endl;
    }
    //otherwise display losing average
    else
    {
        cout<<"Team "<<this->GetName()<<" has a losing average!";
    }
    
}