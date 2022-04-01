#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;
#include"MONSTER.h"

MONSTER::MONSTER(string z,int x, int y){
    hp=x;
    potion=y;
    //strcpy(name,z);
    name=z;
    next=NULL;
    cout<<"creating "<<z<<endl;
}
MONSTER:: ~MONSTER(){
      cout<<"Monster "<<name<<" is game over"<<endl;
}
MONSTER* MONSTER::move_next(){
      return next;
}
void  MONSTER::show_node(){
         cout<<"Monster Name: "<<setw(7)<<name<<" HP: "<<hp<<" POT: "<<potion<<endl;
 }
void MONSTER::insert(MONSTER*& new_node){ // new_next->next=hol;
     new_node->next=this; //new_node->next=hol;
}
int MONSTER::attack(MONSTER&boss){
  int damage, critical, bossdamage, bosscritical;
  srand(time(NULL));
  damage = rand()%5+1; //Random multiplie for potion to making damage
  bossdamage = rand()%5+1;
  critical = potion*damage; //calculation damage for monster
  bosscritical = (boss.potion/10)*bossdamage; //calculation damage for boss
  boss.hp=boss.hp-critical; //attacking boss
  hp=hp-bosscritical;  //attacking monster
  cout<<"Battle of "<<name<<" VS "<<boss.name<<endl;
  if(hp<=0){ 
    cout<<"  Monster "<<name<<" are dead."<<endl;
    return 0;
  }
  else if(boss.hp<=0){
    cout<<"  Boss are dead"<<endl;
    return 1;
  }
  else{
    cout<<"  "<<setw(10)<<name<<" || Hp Remain: "<<hp<<endl;
    cout<<"  "<<setw(10)<<boss.name<<" || Hp Remain: "<<boss.hp<<endl;
    return 0;
  }
}
