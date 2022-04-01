#include <iostream>
#include"MONSTER.h"
#include"LL.h"
using namespace std;
LL::LL(){ //done
       hol=NULL;
       size=0;
}

LL::~LL(){  //clear all nodes
  MONSTER* t=hol;
   int i;
   for(i=0;i<size;i++){
    hol=hol->move_next();
     delete(t);
     t=hol;
   }
  size=0;
}

void LL::show_all(){
     MONSTER* t=hol;
     int i;
     for(i=0;i<size;i++){
        t->show_node();
        t=t->move_next();
     }
}
void LL::add_node(MONSTER*&new_node){//done
      hol->insert(new_node);// new_next->next=hol;
      hol=new_node;        
      size++;
 }

void LL::atk_all(MONSTER&boss){
    MONSTER* t=hol;  
    int i,j,k=0;
  
    for(i=0;i<size;i++){
      j = t->attack(boss);
      if(j==1){
         cout<<"Monster Win!!!"<<endl;
         break;
       }
      else if(j==0){ //condition check when boss kill or making damage but not die
        k++; 
      }
      t=t->move_next();
  } 
  
  if(k==size){ //When boss is clear all monster
     cout<<"Boss Win!! TT"<<endl; 
   }
  else if(k>0 && j!=1){ //condition: when monster are still after battle end and boss still alive
    cout<<"Boss Win!! TT"<<endl;
  }
 }
