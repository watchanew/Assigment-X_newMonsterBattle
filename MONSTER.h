using namespace std;
class MONSTER{
      int hp,potion;
      string name;
      MONSTER* next;
public:
        MONSTER(string,int,int);
        void show_node();
        void insert(MONSTER*&);
        int attack(MONSTER&);
        MONSTER* move_next();
        ~MONSTER();
      };


