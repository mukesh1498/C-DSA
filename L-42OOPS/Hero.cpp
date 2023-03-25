class Hero {

    // properties
    private:
    char name[100];
    int health;
    public:
    char level;


int gethealth(){
    return health;
}
int getlevel(){
    return level;
}

int sethealth(int h){
    health =h;
}

int setlevel(char ch){
    level =ch;
}


};