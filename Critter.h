#pragma once
#include <iostream>
using namespace std;
class Critter
{
public:
Critter(int hunger = 0, int boredom = 0);
void Talk();
void Eat(int food = 4);
void Play(int fun = 4);
void Sport(int fun = 4);
void Study(int fun = 4);
friend void Peek(const Critter& aCritter);
friend ostream& operator <<(ostream& os, const Critter& aCritter);

private:
int m_Hunger;
int m_Boredom;
int GetMood() const;
string m_Name;
void PassTime(int time = 1);
void Peek(const Critter& aCritter);
ostream& operator << (ostream& os, const Critter& aCritter);
};