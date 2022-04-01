class MONSTER{
      int hp,potion;
      char name[10];
      MONSTER* next;
public:
        MONSTER(char*,int,int);
        void show_node();
        void insert(MONSTER*&);
        int attack(MONSTER&);
        MONSTER* move_next();
        ~MONSTER();
      };


