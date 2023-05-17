#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class team{
    public:
    int numPlayer ; 
    string playersName ; 
    static  int matchCount; 
    
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
    
    void play(){
        cout<<"Cricket Team\n" ; 
    } 
    friend istream& operator >>(istream& in , cricketTeam& obj){
        cout<<"PlayerName: " ; 
        in>>obj.playersName ; 
        cout<<"player Number: "; 
        in>>obj.numPlayer ; 
        cout<<"matchPlayed: "; 
        in>>obj.matchPlayed ; 
        cout<<"Run: " ; 
        in>>obj.run ;
        cout<<"wicket: " ; 
        in>>obj.wicket ; 

    }
    friend ostream& operator <<(ostream& in , cricketTeam& obj){
        cout<<"PlayerName: " ; 
        in<<obj.playersName ; 
        cout<<"player Number: "; 
        in<<obj.numPlayer ; 
        cout<<"matchPlayed: "; 
        in<<obj.matchPlayed ; 
        cout<<"Run: " ; 
        in<<obj.run ;
        cout<<"wicket: " ; 
        in<<obj.wicket ; 

    }
    void getDetails( cricketTeam &obj){
        cin>>obj ; 
    }
    void showDetails( cricketTeam &obj){
        cout<<obj<<endl;
    }
};

class footballTeam:public team{
    int matchPlayed ; 
    int goalCount ; 
    int assistCount ;
    public:
    
    void play(){
        cout<<"Football Team\n" ; 
    } 
    friend istream& operator >>(istream& in , footballTeam& obj){
        cout<<"PlayerName: " ; 
        in>>obj.playersName ; 
        cout<<"player Number: "; 
        in>>obj.numPlayer ; 
        cout<<"matchPlayed: "; 
        in>>obj.matchPlayed ; 
        cout<<"goat: " ; 
        in>>obj.goalCount ;
        cout<<"assist: " ; 
        in>>obj.assistCount ; 

    }
    friend ostream& operator <<(ostream& in , footballTeam& obj){
        cout<<"PlayerName: " ; 
        in<<obj.playersName ; 
        cout<<"player Number: "; 
        in<<obj.numPlayer ; 
        cout<<"matchPlayed: "; 
        in<<obj.matchPlayed ; 
        cout<<"Goal: " ; 
        in<<obj.goalCount ;
        cout<<"assist: " ; 
        in<<obj.assistCount ; 

    }
    void getDetails( footballTeam &obj){
        cin>>obj ; 
    }
    void showDetails( footballTeam &obj){
        cout<<obj<<endl;
    }
} ;

class basketballTeam :public team {
    int matchPlayed ; 
    int pointScored ; 
    int totalRebound; 
    public:
    
    void play(){
        cout<<"BasketBall Team\n" ; 
    }
    friend istream& operator >>(istream& in , basketballTeam& obj){
        cout<<"PlayerName: " ; 
        in>>obj.playersName ; 
        cout<<"player Number: "; 
        in>>obj.numPlayer ; 
        cout<<"matchPlayed: "; 
        in>>obj.matchPlayed ; 
        cout<<"point: " ; 
        in>>obj.pointScored ;
        cout<<"TotalRebound: " ; 
        in>>obj.totalRebound ; 

    }
    friend ostream& operator <<(ostream& in , basketballTeam& obj){
        cout<<"PlayerName: " ; 
        in<<obj.playersName ; 
        cout<<"player Number: "; 
        in<<obj.numPlayer ; 
        cout<<"matchPlayed: "; 
        in<<obj.matchPlayed ; 
        cout<<"pointScored: " ; 
        in<<obj.pointScored ;
        cout<<"totalRebound: " ; 
        in<<obj.totalRebound ; 
    }
    void getDetails( basketballTeam &obj){
        cin>>obj ; 
    }
    void showDetails( basketballTeam &obj){
        cout<<obj<<endl;
    }
    

} ;

int main(){

    cricketTeam ct ;
    ct.getDetails(ct); 
    ct.showDetails(ct) ; 

    
}