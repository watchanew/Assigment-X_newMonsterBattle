#include <iostream>
#include <cstdlib>
#include"MONSTER.h"
#include"LL.h"

using namespace std;

int main(int argc, char *argv[])
{  
   LL A; //Linked List =>constructor L.hol=NUL L.size=0
   int i; 
   MONSTER *t; 
  
  for(i=1;i<argc;i+=3) {
     t=new MONSTER(argv[i], atoi(argv[i+1]), atoi(argv[i+2])); //constructor
     A.add_node(t);
     //add front of linked List + size++
  }      
    A.show_all();
    //system("PAUSE");
    MONSTER Boss("Big Boss",1000,200);
    A.atk_all(Boss); // random ลดค่า hp 
  
    return 0;
}
