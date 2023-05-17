#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class team{
    int numPlayer ; 
    string playersName ; 
    static  int matchCount; 
    public:
    team(){} ; 
    team (int n , string p ){
        numPlayer = n ; 
        playersName = p;

    }
    virtual void play() = 0 ; 
    void increamentMatch(){
        matchCount++ ; 
    }
} ;
int team::matchCount = 0 ;

class cricketTeam:public team{
    int matchPlayed ; 
    int run ; 
    int wicket ;
    public:
    cricketTeam(){} ; 
    cricketTeam(int m , int r , int w){
        matchPlayed = m ; 
        run = r ; 
        wicket = w ; 
    }
    void play(){
        cout<<"Cricket Team\n" ; 
    } 
};

class footballTeam:public team{
    int matchPlayed ; 
    int goalCount ; 
    int assistCount ;
    public:
    footballTeam(){} ; 
    footballTeam(int m , int g ,int a ){
        matchPlayed = m ; 
        goalCount = g; 
        assistCount = a ; 
    }
    void play(){
        cout<<"Football Team\n" ; 
    } 
} ;

class basketballTeam :public team {
    int matchPlayed ; 
    int pointScored ; 
    int totalRebound; 
    public:
    basketballTeam(){} ; 
    basketballTeam(int m , int p , int t){
        matchPlayed = m ; 
        pointScored = p ; 
        totalRebound = t; 
    }
    void play(){
        cout<<"BasketBall Team\n" ; 
    }

} ;

int main(){
    
}