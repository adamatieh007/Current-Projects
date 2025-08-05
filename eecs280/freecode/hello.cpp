#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Fighter
{
  private:
  string name;
  int HP;
  double attackdamage;

  public:

  Fighter(){
    name = "";
    HP = 0;
    attackdamage = 0.0;
  }
  Fighter(string n, int health, double attack) : name(n), HP(health), 
  attackdamage(attack){};

  void announcer() {cout << name << " has " << HP << " HP and " << 
    attackdamage << " attack damage." << endl;}

};

int main()
{
  Fighter KOF("iori", 90, 23.2);
  KOF.announcer();

  cout << "Class test Pass" << endl;


    
    return 0;
}