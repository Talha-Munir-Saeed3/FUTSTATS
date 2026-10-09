#include <iostream>
#include <string>
#include <vector>
#include<fstream>

using namespace std;
bool isPrime(int num)
{
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
class person
{
protected:
	string name;
    string nationality;
    string position;
    int age;
public:
	person()
	{
	}
	person(string name,string nationality,string position,int age)
	{
		this->name=name;
		this->nationality=nationality;
		this->position=position;
		this->age=age;
	}
	void setname(const string name)
	{
		this->name=name;
	}
	void setnationality(const string nationality)
	{
		this->nationality=nationality;
	}
	void setposition(const string position)
	{
		this->position=position;
	}
	void setage(const int age)
	{
		this->age=age;
	}
	string const getname()
	{
		return name;
	}
	string const getnationality()
	{
		return nationality;
	}
	string const getposition()
	{
		return position;
	}
	int const getage()
	{
		return age;
    }
    void incrementage()
	{
		++age;
	}
	void display()
	{
		cout<<person::getname()<<"  "<<person::getnationality()<<"   "<<person::getposition()<<"    "<<person::getage();
	}
};
class coach:public person
{
private:
	int trophies;
    double duration;
public:
	coach():person()
	{
		
	}
	coach(string name,string nationality,string position,int age,int trophies,float duration):person(name,nationality,position,age)
	{
		this->trophies=trophies;
		this->duration=duration;
	}
	void editcoach()
	{
		cout<<"Enter Coach Name : "<<endl;
		cin>>name;
		cout<<"Enter Coach Nationality : "<<endl;
		cin>>nationality;
		cout<<"Enter Position : "<<endl;
		cin>>position;
		cout<<"Enter Age : "<<endl;
		cin>>age;
		cout<<"Enter Trophies Won :"<<endl;
		cin>>trophies;
		cout<<"Enter Duration : "<<endl;
		cin>>duration;
	}
	void setduration(const double duration)
	{
		this->duration=duration;
	}
	void setage(const int age)
	{
		this->trophies=trophies;
	}
	double const getduration()
	{
		return duration;
    }
    int const gettrophies()
	{
		return trophies;
    }
    void display()
    {
    	person::display();
    	cout<<"      "<<trophies<<"         "<<duration<<"       "<<endl;
	}
	void incrementtrophies()
	{
		++trophies;
	}
	void incrementduration()
	{
		++duration;
	}
};
class players:public person
{	
private:	
	int goals;
	int assists;
	int matches;
	int value;
	int num;
public:
	players()
	{
		
	}
	players(string name,string nationality,string position,int age,int num,int matches,int goals,int assists,int value):person(name,nationality,position,age)
	{
		this->goals=goals;
		this->assists=assists;
		this->matches=matches;
		this->value=value;
		this->num=num;
	}
	void editplayer(players p[25])
	{
		cout<<"Enter What you Would Like To Edit "<<endl;
		cout<<"\n1-GOALS\n2-ASSISTS\n3-MATCHES\n4-FULLY"<<endl<<endl;
		cout<<"Choice : ";
		int choice,x;
		cout<<endl;
		cout<<"Enter The Shirt Number Of The Player You Would LIKE tO EDIT : "<<endl;
		int s;
		for(x=0;x<25;x++)
		{
			if(p[x].getnum()==s)
			{
				break;
			}
		}
		if(choice==1)
		{
			p[x].incrementgoals();
		}
		else if(choice==2)
		{
			p[x].incrementassists();
		}
		else if(choice==3)
		{
			p[x].incrementmatches();
		}
		else if(choice==4)
		{
		cout<<"Enter Name : "<<endl;
		cin>>p[x].name;
		cout<<"Enter Nationalilty : "<<endl;
		cin>>p[x].nationality;
		cout<<"Enter Position : "<<endl;
		cin>>p[x].position;
		cout<<"Enter Number : "<<endl;
		cin>>p[x].num;
		cout<<"Enter Matches : "<<endl;
		cin>>p[x].matches;
		cout<<"Enter Goals : "<<endl;
		cin>>p[x].goals;
		cout<<"Enter Assists : "<<endl;
		cin>>p[x].assists;
		cout<<"Enter Market Value : "<<endl;
		cin>>p[x].value;
	    }
	}
	void setgoals(const int goals)
	{
		this->goals=goals;
	}
	void setassists(const int assists)
	{
		this->assists=assists;
	}
	void setmatches(const int matches)
	{
		this->matches=matches;
	}
	void setvalue(const int value)
	{
		this->value=value;
	}
	void setnum(const int num)
	{
		this->num=num;
	}
	int const getgoals()
	{
		return goals;
	}
	int const getassists()
	{
		return assists;
	}
	int const getmatches()
	{
		return matches;
	}
	int const getvalue()
	{
		return value;
	}
	int const getnum()
	{
		return num;
	}
	void incrementgoals()
	{
		++goals;
	}
	void incrementassists()
	{
		++assists;
	}
	void incrementmatches()
	{
		++matches;
	}
	int totalvalue(players a[25])
	{
		int total;
		total=total+value;
		for(int x=1;x<25;x++)
		{
			total=total+a[x].getvalue();
		}
		return total;
	}
	
	/*	cout<<"PLAYERS INFO"<<endl;
    cout<<"************"<<endl<<endl;
    cout<<"   NAME           NATIONALITY        POSITION      AGE  NUMBER  MATCHES  GOALS  ASSISTS  MARKETVALUE    "<<endl;
	for(i=0;i<25;i++)
    {
    	cout<<i+1<<".";
        FCB_players[i].display();
        cout<<endl;
    }*/
	void display()
    { 	person::display();
        cout<<"     "<<num<<"       "<<matches<<"       "<<goals<<"       "<<assists<<"         "<<value<<"M"<<endl;     
    }
//players p("","","",,,,,,);		 
};



class quiz {
	private :
    static int points1,points2,points3,points4;

	public:
		int getPoints1() const {
            return points1;
        }
        int getPoints2() const {
            return points2;
        }
        int getPoint3() const {
            return points3;
        }
        int getPoint4() const {
            return points4;
        }
	
	
	
	void menu_driven(void){
		int ans1,ans2,ans3,ans4;
		
		cout<<"\t\tFOOTBAL APPLICATION  "<<endl;
		cout<<"\t\t 	QUIZ  "<<endl;
	
    cout<<"\t QUIZ 1 "<<endl;
	cout<<"1. WHO HAS THE MOST GOALS/ASSIST IN FOOTBALL HISTORY "<<endl;
	cout<<"1.MESSI  2.CRISTIANO RONALDO  3.NEYMAR  4.PELE "<<endl;
	cout<<"ANSWER : ";
	cin>>ans1;	
    switch (ans1){
    	case 1 :
    		points1++;
    		points1++;
    		 cout<<"POINTS : "<<points1<<endl;
    		break;
    	case 2 :
    	 cout<<"POINTS : "<<points1<<endl;
    		break;
    	case 3 :
    		
    	 cout<<"POINTS : "<<points1<<endl;
    		break;
    		
    		
    	case 4 :
    	 
    	 cout<<"POINTS : "<<points1<<endl;
    		break;
    		
    					
    	default: 
		cout<<"WRONG CHOICE"<<endl;	
		break;
	}
		
    cout<<"\t QUIZ 2 "<<endl;
		cout<<"1. WHO HAS THE MOST GOALS IN FOOTBALL HISTORY "<<endl;
	    	cout<<"1.MESSI  2.CRISTIANO RONALDO  3.NEYMAR  4.PELE "<<endl;
	    		cout<<"ANSWER : ";
	           cin>>ans2;
		   switch (ans2){
    	case 1 :
    			 cout<<"POINTS : "<<points2<<endl;
    		break;
    		
    	case 2 :
    			points2++;
    			points2++;
    			
    			 cout<<"POINTS : "<<points2<<endl;
    
    		break;
    	case 3 :
    		
    	 cout<<"POINTS : "<<points2<<endl;
    		break;
    		
    		
    	case 4 :
    	 
    	 cout<<"POINTS : "<<points2<<endl;
    		break;
    		
    					
    	default: 
		cout<<"WRONG CHOICE"<<endl;	
		break;
	}
	    cout<<"\t QUIZ 3 "<<endl;
		cout<<"1. WHICH COUNTRY HAS WON THE  FIFA WORLD CUPS 2022 "<<endl;
	    	cout<<"1.GERMANY   2.ITALY   3.ARGENTINA   4.FRANCE "<<endl;
	    		cout<<"ANSWER : ";
	           cin>>ans3;
	          	   switch (ans3){
    	case 1 :
    			 cout<<"POINTS : "<<points3<<endl;
    		break;
    		
    	case 2 :
    		cout<<"POINTS : "<<points3<<endl;
    
    		break;
    	case 3 :
    		points3++;
    		points3++;
    	  cout<<"POINTS : "<<points3<<endl;
    		break;
    		
    		
    	case 4 :
    	 
    	 cout<<"POINTS : "<<points3<<endl;
    		break;
    		
    					
    	default: 
		cout<<"WRONG CHOICE"<<endl;	
		break;
	} 
		
			
		cout<<"\t QUIZ 4 "<<endl;
		cout<<"1. WHICH COUNTRY HAS THE MOST FIFA WORLD CUPS IN FOOTBALL HISTORY "<<endl;
	    	cout<<"1.GERMANY   2.ITALY   3.BRAZIL  4.FRANCE "<<endl;
	    		cout<<"ANSWER : ";
	           cin>>ans4;
	    switch (ans4){
    	case 1 :
    			 cout<<"POINTS : "<<points4<<endl;
    		break;
    		
    	case 2 :
    		cout<<"POINTS : "<<points4<<endl;
    
    		break;
    	case 3 :
    		points4++;
    		points4++;
    	  cout<<"POINTS : "<<points4<<endl;
    		break;
    		
    		
    	case 4 :
    	 
    	 cout<<"POINTS : "<<points4<<endl;
    		break;
    		
    					
    	default: 
		cout<<"WRONG CHOICE "<<endl;	
		break;
	}	
	
}
 void result (void){
 		cout<<"\t\tRESULT"<<endl;
	
	 if(points1+points2+points3+points4==4){
	 	cout<<"CONGRATULATIONS ON WINNING THE OFFICAL MERCHANDISE OF ARGENTINA "<<endl;
	 	
	 }  
	 else{
	 	cout<<"GOOD TRY BETTER LUCK NEXT TIME "<<endl;
	 } 
 }
  friend int operator+(const quiz& q1, const quiz& q2) {
        return q1.points1 + q1.points2 + q1.points3 + q1.points4 +
               q2.points1 + q2.points2 + q2.points3 + q2.points4;
    }
        

	
}; 
int quiz::points1 = 0;
int quiz::points2 = 0;
int quiz::points3 = 0;
int quiz::points4 = 0;






template <typename T>
class match 
{
private:
    string against;
    string competition;
    string time;
    string place;
    string date;
    T matchday;
public:
	match()
	{
	}
    match(string against,string competition,string time,string date,string place,T matchday) 
	{
	   this->against=against;
	   this->competition=competition;
	   this->time=time;
	   this->place=place;
	   this->matchday=matchday;
	   this->date=date;
	}
	void editmatch()
	{
		cout<<"Enter Opponent : "<<endl;
		string a,b,c,d,e;
		T s;
		cin>>a;
		this->setAgainst(a);
		cout<<"Enter Competition : "<<endl;
		cin>>b;
		this->setCompetition(b);
		cout<<"Enter Time : "<<endl;
		cin>>c;
		this->setTime(c);
		cout<<"Enter Place : "<<endl;
		cin>>d;
		this->setPlace(d);
		cout<<"Enter Date : "<<endl;
		cin>>date;
		cout<<"Enter Match Day :"<<endl;
		cin>>matchday;
	}
    void printMatchInfo() 
	{
        cout<<"Against :  "<<against<<endl;
        cout<<"Competition : "<<competition<<endl;
        cout<<"Time : "<<time<<endl;
        cout<<"Date : "<<date<<endl;
        cout<<"Place : "<<place<<endl;
        cout<<"Match Day : "<<matchday<<endl;
    }
    void setAgainst(const string value) 
	{
		against=value; 
	}
    string getAgainst() const 
	{	
	    return against; 
	}
    void setCompetition(const string value) 
	{ 
	    competition=value; 
	}
    string getCompetition() const 
	{ 
	    return competition; 
	}
    void setMatchday(const T value) 
	{ 
	    matchday=value; 
	}
    T getMatchday() const 
	{ 
	    return matchday; 
	}
    void setTime(const string value) 
	{ 
	    time=value; 
	}
    string getTime() const 
	{ 
	    return time; 
	}
    void setPlace(const string value) 
	{ 
	    place=value; 
	}
    string getPlace() const 
	{ 
	    return place; 
	}
};
players* Lyon_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);						
   players p1("A. Lopes        ","Portugal      ","Goalkeeper",32,1,32,0,0,9);
   players p2("R. Riou         ","France        ","Goalkeeper",35,35,7,0,0,1);
   players p3("K. Bonnevie     ","France        ","Goalkeeper",21,40,0,0,0,1);
   players p4("M. Gusto        ","France        ","Defender  ",19,27,19,0,1,25);
   players p5("C. Lukeba       ","France        ","Defender  ",20,4,34,2,0,20);
   players p6("N. Tagliafico   ","Argentina     ","Defender  ",30,3,33,1,5,9);
   players p7("S. Kumbedi      ","France        ","Defender  ",18,20,18,0,2,8);
   players p8("S. Diomande     ","Cote d'Ivoire ","Defender  ",22,2,26,0,0,7);
   players p9("D. Lovren       ","Croatia       ","Defender  ",33,5,19,0,0,3);
   players p10("H. Silva       ","Brazil        ","Defender  ",29,12,9,0,1,1);
   players p11("J. Boateng     ","Germany       ","Defender  ",34,17,6,0,0,1);
   players p12("R. Cherki      ","France        ","Midfielder",19,18,34,4,5,27);
   players p13("M. Caqueret    ","France        ","Midfielder",23,6,35,2,6,25);
   players p14("H. Aouar       ","France        ","Midfielder",24,8,16,1,1,15);
   players p15("C. Tolisso     ","France        ","Midfielder",28,88,30,1,2,14);
   players p16("J. Lepenant    ","France        ","Midfielder",20,24,31,1,2,10);
   players p17("T. Mendes      ","Brazil        ","Midfielder",31,23,30,1,1,6);
   players p18("M. El Arouch   ","France        ","Midfielder",19,38,2,0,0,2);
   players p19("M. Dembele     ","France        ","Attacker  ",26,9,27,3,1,15);
   players p20("A. Lacazette   ","France        ","Attacker  ",31,10,34,24,5,12);
   players p21("Amin Sarr      ","Sweden        ","Attacker  ",22,7,12,1,0,9);
   players p22("B. Barcola     ","France        ","Attacker  ",20,26,27,7,4,7);
   players p23("Jeffinho       ","Brazil        ","Attacker  ",23,47,6,1,1,6);
   players p24("Tete           ","Brazil        ","Attacker  ",23,0,19,6,5,15);
   players p25("K. Toko Ekambi ","Cameroon      ","Attacker  ",30,0,19,4,2,10);
   static players Lyon_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Lyon_players;
}
players* ParisSaintGermain_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);						
   players p1("G. Donnarumma   ","Italy         ","Goalkeeper",24,99,43,0,0,50);
   players p2("S. Rico         ","Spain         ","Goalkeeper",29,16,0,0,0,4);
   players p3("A. Letellier    ","France        ","Goalkeeper",32,90,0,0,0,1);
   players p4("L. Lavallee     ","France        ","Goalkeeper",20,70,0,0,0,1);
   players p5("A. Hakimi       ","Morocco       ","Defender  ",24,2,37,4,5,70);
   players p6("Marquinhos      ","Brazil        ","Defender  ",28,5,40,2,0,70);
   players p7("N. Mendes       ","Portugal      ","Defender  ",20,25,32,2,7,65);
   players p8("P. Kimpembe     ","France        ","Defender  ",27,3,15,0,0,35);
   players p9("N. Mukiele      ","France        ","Defender  ",25,26,25,0,3,20);
   players p10("J. Bernat      ","Spain         ","Defender  ",30,14,32,2,5,12);
   players p11("E. Bitshiabu   ","France        ","Defender  ",17,31,13,0,0,7);
   players p12("S. Ramos       ","Spain         ","Defender  ",37,4,40,3,1,6);
   players p13("M. Verratti    ","Italy         ","Midfielder",30,6,33,0,1,50);
   players p14("Vitinha        ","Portugal      ","Midfielder",23,17,43,1,3,42);
   players p15("F. Ruiz        ","Spain         ","Midfielder",27,8,34,1,2,38);
   players p16("C. Soler       ","Spain         ","Midfielder",26,28,31,6,4,30);
   players p17("R. Sanches     ","Portugal      ","Midfielder",25,18,22,2,0,20);
   players p18("W. Zaire-Emery ","France        ","Midfielder",17,33,26,2,0,18);
   players p19("D. Pereira     ","Portugal      ","Midfielder",31,15,39,2,1,12);
   players p20("I. Gharbi      ","Spain         ","Midfielder",19,35,6,0,1,5);
   players p21("K. Mbappe      ","France        ","Attacker  ",24,7,38,35,9,180);
   players p22("Neymar         ","Brazil        ","Attacker  ",31,10,29,18,17,70);
   players p23("L. Messi       ","Argentina     ","Attacker  ",35,30,37,20,19,45);
   players p24("H. Ekitike     ","France        ","Attacker  ",20,44,28,4,3,25);
   players p25("I. Housni      ","France        ","Attacker  ",17,37,2,0,0,3);
   static players Paris_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Paris_players;
} 
players* Atalanta_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);					
   players p1("J. Musso        ","Argentina     ","Goalkeeper",28,1,25,0,0,14);
   players p2("M. Sportiello   ","Italy         ","Goalkeeper",30,57,10,0,0,2);
   players p3("F. Rossi        ","Italy         ","Goalkeeper",32,31,0,0,0,1);
   players p4("G. Scalvini     ","Italy         ","Defender  ",19,42,28,2,2,30);
   players p5("M. Demiral      ","Turkey        ","Defender  ",25,28,25,1,0,25);
   players p6("J. Maehle       ","Denmark       ","Defender  ",25,3,31,3,1,14);
   players p7("B. Djimsiti     ","Albania       ","Defender  ",30,19,20,0,0,13);
   players p8("C. Okoli        ","Italy         ","Defender  ",21,5,13,0,0,10);
   players p9("B. Soppy        ","France        ","Defender  ",21,93,13,0,0,10);
   players p10("R. Toloi       ","Italy         ","Defender  ",32,2,28,2,1,8);
   players p11("D. Zappacosta  ","Italy         ","Defender  ",30,77,15,2,2,7);
   players p12("H. Hateboer    ","Netherlands   ","Defender  ",29,33,19,2,1,6);
   players p13("J. Palomino    ","Argentina     ","Defender  ",33,6,15,1,0,4);
   players p14("M. Ruggeri     ","Italy         ","Defender  ",20,22,15,0,1,2);
   players p15("T. Koopmeiners ","Netherlands   ","Midfielder",25,7,29,7,3,30);
   players p16("M. Pasalic     ","Croatia       ","Midfielder",28,88,27,3,2,25);
   players p17("Ederson        ","Brazil        ","Midfielder",23,13,31,1,1,20);
   players p18("M. De Roon     ","Netherlands   ","Midfielder",32,15,31,2,3,12);
   players p19("R. Hojlund     ","Denmark       ","Attacker  ",20,17,30,8,3,35);
   players p20("A. Lookman     ","Nigeria       ","Attacker  ",25,11,30,15,5,30);
   players p21("J. Boga        ","Cote D'Ivoire ","Attacker  ",26,10,23,2,5,15);
   players p22("D. Zapata      ","Colombia      ","Attacker  ",32,91,24,2,5,10);
   players p23("L. Muriel      ","Colombia      ","Attacker  ",32,9,25,1,3,8);
   players p24("L. Vorlicky    ","Czech Republic","Attacker  ",21,23,3,0,0,1);
   players p25("Scamaca        ","Italy         ","Attacker  ",24,8,5,1,1,25);
   static players Atalanta_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Atalanta_players;
	
}
players* Lazio_players()
{
   players p1("I. Provedel     ","Italy         ","Goalkeeper",29,94,39,0,0,12);
   players p2("L. Maximiano    ","Portugal      ","Goalkeeper",24,1,6,0,0,8);
   players p3("A. Romangnoli   ","Italy         ","Defender  ",28,13,37,1,0,20);
   players p4("N. Casale       ","Italy         ","Defender  ",25,15,31,1,1,17);
   players p5("M. Lazzari      ","Italy         ","Defender  ",29,29,32,0,1,15);
   players p6("L. Pellegrini   ","Italy         ","Defender  ",24,3,4,0,0,9);
   players p7("A. Marusic      ","Montenegro    ","Defender  ",30,77,41,0,2,8);
   players p8("Patric          ","Spain         ","Defender  ",30,4,24,0,0,6);
   players p9("E. Hysaj        ","Albania       ","Defender  ",29,23,37,0,1,4);
   players p10("M. Gila        ","Spain         ","Defender  ",22,34,12,0,0,3);
   players p11("S. Radu        ","Romania       ","Defender  ",36,26,2,0,0,1);
   players p12("M. Savic       ","Serbia        ","Midfielder",28,21,41,8,8,60);
   players p13("Luis Alberto   ","Spain         ","Midfielder",30,10,38,6,6,20);
   players p14("Marcos Antonio ","Brazil        ","Midfielder",22,6,19,1,0,8);
   players p15("D. Cataldi     ","Italy         ","Midfielder",28,32,38,0,1,7);
   players p16("T. Basic       ","Croatia       ","Midfielder",26,88,27,0,0,7);
   players p17("M. Vecino      ","Uruguay       ","Midfielder",31,5,40,4,1,5);
   players p18("M. Fares       ","Algeria       ","Midfielder",27,96,0,0,0,3);
   players p19("M. Bertini     ","Italy         ","Midfielder",20,50,0,0,0,1);
   players p20("M. Zaccagni    ","Italy         ","Attacker  ",27,20,39,10,9,25);
   players p21("C. Immobile    ","Italy         ","Attacker  ",33,17,32,12,5,20);
   players p22("F. Anderson    ","Brazil        ","Attacker  ",30,7,44,11,9,15);
   players p23("M. Cancellieri ","Italy         ","Attacker  ",21,11,29,0,0,5);
   players p24("Pedro          ","Spain         ","Attacker  ",35,9,40,7,5,3);
   players p25("L. Romero      ","Argentina     ","Attacker  ",18,18,12,1,0,1);
   static players Lazio_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Lazio_players;
	
}
players* AsRoma_players()
{
   players p1("R. Patricio     ","Portugal      ","Goalkeeper",35,1,45,0,0,5);
   players p2("M. Svilar       ","Serbia        ","Goalkeeper",23,99,1,0,0,2);
   players p3("Roger Ibanez    ","Brazil        ","Defender  ",24,3,40,3,0,30);
   players p4("G. Mancini      ","Italy         ","Defender  ",27,23,43,1,3,20);
   players p5("L. Spinazzola   ","Italy         ","Defender  ",30,37,34,2,6,15);
   players p6("D. Llorente     ","Spain         ","Defender  ",29,14,8,0,0,12);
   players p7("Z. Celik        ","Turkey        ","Defender  ",26,19,27,0,1,10);
   players p8("R. Karsdorp     ","Netherlands   ","Defender  ",28,2,18,0,0,9);
   players p9("M. Kumbulla     ","Albania       ","Defender  ",23,24,12,1,0,9);
   players p10("C. Smalling    ","England       ","Defender  ",33,6,42,3,1,8);
   players p11("L. Pellegrini  ","Italy         ","Midfielder",26,7,40,8,9,35);
   players p12("B. Cristante   ","Italy         ","Midfielder",28,4,44,1,3,20);
   players p13("N. Zalewski    ","Poland        ","Midfielder",21,59,39,1,1,15);
   players p14("G. Wijinaldum  ","Netherlands   ","Midfielder",32,25,16,2,1,12);
   players p15("M. Camara      ","Guinea        ","Midfielder",26,20,17,0,1,11);
   players p16("N. Matic       ","Serbia        ","Midfielder",34,8,43,1,3,4);
   players p17("E. Bove        ","Italy         ","Midfielder",20,52,24,1,0,3);
   players p18("C. Volpato     ","Italy         ","Midfielder",19,62,10,1,1,3);
   players p19("E. Darboe      ","Gambia        ","Midfielder",21,55,0,0,0,2);
   players p20("B. Tahirovic   ","Bosnia        ","Midfielder",20,68,8,0,0,1);
   players p21("T. Abraham     ","England       ","Attacker  ",25,9,45,9,7,45);
   players p22("P. Dybala      ","Argentina     ","Attacker  ",29,21,34,16,8,30);
   players p23("A. Belotti     ","Italy         ","Attacker  ",29,11,38,4,2,9);
   players p24("S. El Shaarawy ","Italy         ","Attacker  ",30,92,37,6,2,5);
   players p25("O. Solbakken   ","Norway        ","Attacker  ",24,18,10,1,1,4);
   static players AsRoma_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return AsRoma_players;
	
}
players* InterMilan_players()
{ 
   players p1("A. Onana        ","Cameroon      ","Goalkeeper",27,24,35,0,0,20);
   players p2("S. Handanovic   ","Solvenia      ","Goalkeeper",38,1,12,0,0,1);
   players p3("M. Skriniar     ","Solvakia      ","Defender  ",28,37,31,0,1,60);
   players p4("A. Bastoni      ","Italy         ","Defender  ",24,95,37,0,6,55);
   players p5("F. Dimarco      ","Italy         ","Defender  ",25,32,41,5,7,25);
   players p6("S. De Vrij      ","Netherlands   ","Defender  ",31,6,30,1,0,10);
   players p7("R. Bellanova    ","Italy         ","Defender  ",22,12,16,0,0,5);
   players p8("F. Acerbi       ","Italy         ","Defender  ",35,15,39,1,0,4);
   players p9("M. Darmian      ","Italy         ","Defender  ",33,36,39,2,2,4);
   players p10("D. D'Ambrosio  ","Italy         ","Defender  ",34,33,19,0,1,2);
   players p11("M. Zanotti     ","Italy         ","Defender  ",20,46,1,0,0,1);
   players p12("A. Fontanarosa ","Italy         ","Defender  ",20,47,0,0,0,1);
   players p13("N. Barella     ","Italy         ","Midfielder",26,23,44,8,9,70);
   players p14("H. Calhanoglu  ","Turkey        ","Midfielder",29,20,41,3,7,35);
   players p15("D. Dumfries    ","Netherlands   ","Midfielder",27,2,42,2,6,30);
   players p16("M. Brozovic    ","Croatia       ","Midfielder",30,77,30,2,1,30);
   players p17("R. Gosens      ","Germany       ","Midfielder",28,8,42,4,0,20);
   players p18("K. Asllani     ","Albania       ","Midfielder",21,14,25,0,0,12);
   players p19("R. Gagliardini ","Italy         ","Midfielder",29,5,21,0,0,7);
   players p20("H. Mkhitaryan  ","Armenia       ","Midfielder",34,22,43,4,1,6);
   players p21("V. Carboni     ","Argentina     ","Midfielder",18,45,6,0,0,4);
   players p22("L. Martinez    ","Argentina     ","Attacker  ",25,10,47,21,8,80);
   players p23("R. Lukaku      ","Belgium       ","Attacker  ",29,90,28,9,5,40);
   players p24("E. Dzeko       ","Bosnia        ","Attacker  ",37,9,45,11,5,4);
   players p25("J. Correa      ","Argentina     ","Attacker  ",28,11,35,4,3,14);
   static players InterMilan_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return InterMilan_players;
	
}
players* AcMilan_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);				
   players p1("M. Maignan      ","France        ","Goalkeeper",27,16,21,0,0,35);
   players p2("C. Tatarusanu   ","Romania       ","Goalkeeper",37,1,23,0,1,1);
   players p3("T. Hernandez    ","France        ","Defender  ",25,19,38,3,5,60);
   players p4("F. Tomori       ","England       ","Defender  ",25,23,38,1,0,45);
   players p5("P. Kalulu       ","France        ","Defender  ",22,20,40,1,0,35);
   players p6("D. Calabria     ","Italy         ","Defender  ",26,2,25,1,4,20);
   players p7("M. Thiaw        ","Germany       ","Defender  ",21,28,17,0,0,15);
   players p8("S. Dest         ","United States ","Defender  ",22,21,14,0,0,12);
   players p9("S. Kjaer        ","Denmark       ","Defender  ",34,24,20,0,0,5);
   players p10("F. Ballo-Toure ","Senegal       ","Defender  ",26,5,9,1,0,4);
   players p11("S. Tonali      ","Italy         ","Midfielder",22,8,40,2,9,50);
   players p12("I. Bennacer    ","Algeria       ","Midfielder",25,4,37,2,2,40);
   players p13("C. De Ketelaere","Belgium       ","Midfielder",22,90,36,0,1,27);
   players p14("B. Diaz        ","Spain         ","Midfielder",23,10,38,6,4,20);
   players p15("T. Pobega      ","Italy         ","Midfielder",23,32,23,3,0,15);
   players p16("Y. Adli        ","France        ","Midfielder",22,7,5,0,0,9);
   players p17("R. Krunic      ","Bosnia        ","Midfielder",29,33,27,1,1,9);
   players p18("A. Vranckx     ","Belgium       ","Midfielder",20,40,9,0,1,9);
   players p19("R. Leao        ","Portugal      ","Attacker  ",23,17,42,13,13,80);
   players p20("A. Saelemaekers","Belgium       ","Attacker  ",23,56,31,4,2,15);
   players p21("A. Rebic       ","Croatia       ","Attacker  ",29,12,29,3,2,10);
   players p22("D. Origi       ","Belgium       ","Attacker  ",28,27,31,2,1,15);
   players p23("J. Messias     ","Brazil        ","Attacker  ",31,30,29,5,2,6);
   players p24("O. Giroud      ","France        ","Attacker  ",36,9,39,13,6,4);
   players p25("Z. Ibrahimovic ","Sweden        ","Attacker  ",41,11,4,1,0,2);
   static players AcMilan_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return AcMilan_players;
}

players* Napoli_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);				
   players p1("A. Meret        ","Italy         ","Goalkeeper",26,1,41,0,0,18);
   players p2("P. Gollini      ","Italy         ","Goalkeeper",28,95,1,0,0,5);
   players p3("M. Kim          ","South Korea   ","Defender  ",26,3,40,2,2,50);
   players p4("A. Rrahmani     ","Kosovo        ","Defender  ",29,13,30,2,1,25);
   players p5("G. Di Lorenzo   ","Italy         ","Defender  ",29,22,41,4,6,25);
   players p6("M. Olivera      ","Uruguay       ","Defender  ",25,17,33,1,4,18);
   players p7("M. Rui          ","Portugal      ","Defender  ",31,6,27,0,8,8);
   players p8("L. Ostigard     ","Norway        ","Defender  ",23,55,9,1,0,7);
   players p9("Juan Jesus      ","Brazil        ","Defender  ",31,5,15,2,0,4);
   players p10("B. Bereszynski ","Poland        ","Defender  ",30,19,1,0,0,2);
   players p11("P. Zielinski   ","Poland        ","Midfielder",28,20,41,7,10,40);
   players p12("F. Angussia    ","Cameroon      ","Midfielder",27,99,38,3,7,40);
   players p13("S. Lobotka     ","Slovakia      ","Midfielder",28,68,42,1,1,38);
   players p14("E. Elmas       ","Macedonia     ","Midfielder",23,7,41,6,3,26);
   players p15("T. Ndombele    ","France        ","Midfielder",26,91,38,2,1,25);
   players p16("G. Gaetano     ","Italy         ","Midfielder",22,70,9,0,1,5);
   players p17("D. Demme       ","Germany       ","Midfielder",31,4,5,0,0,4);
   players p18("K. Zedadka     ","Algeria       ","Midfielder",22,31,2,0,0,1);
   players p19("V. Osimhen     ","Nigeria       ","Attacker  ",24,9,32,26,5,100);
   players p20("K.Kvaratskhelia","Georgia       ","Attacker  ",22,77,36,14,16,85);
   players p21("G. Raspadori   ","Italy         ","Attacker  ",23,81,27,6,3,35);
   players p22("H. Lozano      ","Mexico        ","Attacker  ",27,11,38,4,4,28);
   players p23("M. Politano    ","Italy         ","Attacker  ",29,21,35,4,4,20);
   players p24("G. Simeone     ","Argentina     ","Attacker  ",27,18,27,8,0,17);
   players p25("A. Zerbin      ","Italy         ","Attacker  ",24,23,11,0,1,4);
   static players Napoli_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Napoli_players;
}
players* Juventus_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);				
   players p1("W. Szczesny     ","Poland        ","Goalkeeper",33,1,32,0,0,13);
   players p2("M. Perin        ","Italy         ","Goalkeeper",30,36,17,0,0,4);
   players p3("Bermer          ","Brazil        ","Defender  ",26,3,38,4,1,40);
   players p4("Danilo          ","Brazil        ","Defender  ",31,6,46,3,3,12);
   players p5("F. Gatti        ","Italy         ","Defender  ",24,15,19,1,0,5);
   players p6("M. De Scigilio  ","Italy         ","Defender  ",30,2,24,0,0,5);
   players p7("Alex Sandro     ","Brazil        ","Defender  ",32,12,33,0,2,5);
   players p8("L. Bonucci      ","Italy         ","Defender  ",35,19,22,2,0,3);
   players p9("D. Rugani       ","Italy         ","Defender  ",28,24,8,0,0,3);
   players p10("M. Locatelli   ","Italy         ","Midfielder",25,5,41,0,1,30);
   players p11("A. Rabiot      ","France        ","Midfielder",28,25,40,11,4,30);
   players p12("F. Kostic      ","Serbia        ","Midfielder",30,17,46,3,11,24);
   players p13("P. Pogba       ","France        ","Midfielder",30,10,6,0,0,20);
   players p14("N. Fagioli     ","Italy         ","Midfielder",22,44,32,2,5,20);
   players p15("F. Miretti     ","Italy         ","Midfielder",19,20,34,0,3,15);
   players p16("L. Paredes     ","Argentina     ","Midfielder",28,32,28,0,1,12);
   players p17("J. Cuadrado    ","Colombia      ","Midfielder",34,11,39,2,4,5);
   players p18("E. Barrenechea ","Argentina     ","Midfielder",21,45,5,0,0,1);
   players p19("D. Vlahovic    ","Serbia        ","Attacker  ",23,9,35,11,4,75);
   players p20("F. Chiesa      ","Italy         ","Attacker  ",25,7,24,2,4,50);
   players p21("M. Kean        ","Italy         ","Attacker  ",23,18,35,8,0,20);
   players p22("A. Milik       ","Poland        ","Attacker  ",29,14,31,8,1,10);
   players p23("A. Di Maria    ","Argentina     ","Attacker  ",35,22,32,8,7,10);
   players p24("M. Soule       ","Argentina     ","Attacker  ",20,30,18,1,0,4);
   players p25("S. Iling Jr    ","England       ","Attacker  ",19,43,11,0,2,4);
   static players Juventus_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Juventus_players;

}
players* LeicesterCity_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);			
   players p1("D. Ward         ","Wales         ","Goalkeeper",29,1,28,0,0,8);
   players p2("D. Iversen      ","Denmark       ","Goalkeeper",25,31,12,0,0,2);
   players p3("T. Castagne     ","Belgium       ","Defender  ",27,27,37,2,4,28);
   players p4("J. Justin       ","England       ","Defender  ",25,2,15,1,1,25);
   players p5("Wout Faes       ","Belgium       ","Defender  ",25,3,31,0,1,20);
   players p6("C. Soyuncu      ","Turkey        ","Defender  ",26,4,7,0,0,15);
   players p7("H. Souttar      ","Australia     ","Defender  ",24,15,10,0,1,15);
   players p8("D. Amartey      ","Ghana         ","Defender  ",28,18,24,0,0,15);
   players p9("V. Kristiansen  ","Denmark       ","Defender  ",20,16,12,0,1,12);
   players p10("R. Pereira     ","Portugal      ","Defender  ",29,21,9,1,1,12);
   players p11("L. Thomas      ","England       ","Defender  ",21,33,19,0,1,10);
   players p12("J. Vestergaard ","Denmark       ","Defender  ",30,23,3,0,0,5);
   players p13("J. Evans       ","England       ","Defender  ",35,6,11,0,0,3);
   players p14("J. Maddison    ","England       ","Midfielder",26,10,27,9,7,55);
   players p15("W. Ndidi       ","Nigeria       ","Midfielder",26,25,26,0,0,32);
   players p16("Y. Tielemans   ","Belgium       ","Midfielder",25,8,32,4,1,30);
   players p17("K.Dewsbury-Hall","England       ","Midfielder",24,22,32,2,2,25);
   players p18("B. Soumare     ","France        ","Midfielder",24,42,24,0,0,20);
   players p19("D. Praet       ","Belgium       ","Midfielder",28,26,25,1,1,8);
   players p20("N. Mendy       ","Senegal       ","Midfielder",30,24,22,1,1,4);
   players p21("H. Barnes      ","England       ","Attacker  ",25,7,35,10,3,32);
   players p22("Tete           ","Brazil        ","Attacker  ",23,37,12,1,0,25);
   players p23("P. Daka        ","Zambia        ","Attacker  ",24,20,32,4,3,20);
   players p24("K. Iheanacho   ","Nigeria       ","Attacker  ",26,14,33,8,4,17);
   players p25("J. Vardy       ","England       ","Attacker  ",36,9,37,5,5,4);
   static players LecisterCity_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return LecisterCity_players;
	
}
players* Brighton_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);		
   players p1("R. Sanchez      ","Spain         ","Goalkeeper",25,1,25,0,0,32);
   players p2("J. Steele       ","England       ","Goalkeeper",32,23,13,0,1,1);
   players p3("T. McGill       ","Canada        ","Goalkeeper",23,38,0,0,0,1);
   players p4("A. Webster      ","England       ","Defender  ",28,4,28,0,1,22);
   players p5("P. Estupinan    ","Ecuador       ","Defender  ",25,30,33,0,6,20);
   players p6("L. Dunk         ","England       ","Defender  ",31,5,36,2,0,18);
   players p7("L. Colwill      ","England       ","Defender  ",20,6,16,0,0,16);
   players p8("T. Lamptey      ","Ghana         ","Defender  ",22,2,26,1,1,15);
   players p9("J. Veltman      ","Netherlands   ","Defender  ",31,34,31,1,1,10);
   players p10("J. Van Hecke   ","Netherlands   ","Defender  ",22,29,9,0,0,4);
   players p11("M. Caicedo     ","Ecuador       ","Midfielder",21,25,35,1,1,55);
   players p12("A. Mac Allister","Argentina     ","Midfielder",24,10,32,10,2,42);
   players p13("J. Moder       ","Poland        ","Midfielder",24,15,0,0,0,12);
   players p14("B. Gilmour     ","Scotland      ","Midfielder",21,27,10,0,1,9);
   players p15("F. Buonanotte  ","Argentina     ","Midfielder",28,40,6,1,1,9);
   players p16("P. BroB        ","Germany       ","Midfielder",31,13,37,7,8,8);
   players p17("J. Sarmiento   ","Ecuador       ","Midfielder",20,19,12,0,2,5);
   players p18("Y. Ayari       ","Sweden        ","Midfielder",19,26,2,0,0,4);
   players p19("A. Lallana     ","England       ","Midfielder",34,14,18,3,1,2);
   players p20("K. Mitoma      ","Japan         ","Midfielder",25,22,33,10,7,22);
   players p21("S. March       ","England       ","Attacker  ",28,7,36,8,8,18);
   players p22("J. Enciso      ","Paraguay      ","Attacker  ",19,20,18,2,1,11);
   players p23("E. Ferguson    ","Ireland       ","Attacker  ",18,28,19,8,3,10);
   players p24("D. Welbeck     ","England       ","Attacker  ",32,18,30,5,3,8);
   players p25("D. Undav       ","Germany       ","Attacker  ",26,21,22,3,1,8);
   static players Brighton_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Brighton_players;	
	
}
players* AstonVilla_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);	
   players p1("E. Martinez     ","Argentina     ","Goalkeeper",30,1,32,0,0,28);
   players p2("R. Olsen        ","Sweden        ","Goalkeeper",33,25,6,0,0,2);
   players p3("V. Sinisalo     ","Finland       ","Goalkeeper",21,38,0,0,0,1);
   players p4("Diego Carlos    ","Brazil        ","Defender  ",30,3,2,0,0,30);
   players p5("T. Mings        ","England       ","Defender  ",30,5,32,1,2,25);
   players p6("M. Cash         ","Poland        ","Defender  ",25,2,25,0,1,22);
   players p7("E. Konsa        ","England       ","Defender  ",25,4,34,0,0,22);
   players p8("A. Moreno       ","Spain         ","Defender  ",29,15,15,0,3,20);
   players p9("L. Digne        ","France        ","Defender  ",29,27,27,2,0,17);
   players p10("C. Chambers    ","England       ","Defender  ",28,16,16,0,0,8);
   players p11("A. Young       ","England       ","Defender  ",37,18,28,1,0,1);
   players p12("D. Luiz        ","Brazil        ","Midfielder",24,6,35,5,5,35);
   players p13("J. Ramsey      ","England       ","Midfielder",41,21,33,4,6,32);
   players p14("J. McGinn      ","Scotland      ","Midfielder",28,7,31,1,3,27);
   players p15("B. Kamara      ","France        ","Midfielder",23,44,22,0,1,25);
   players p16("L. Dendoncker  ","Belgium       ","Midfielder",28,32,19,0,0,17);
   players p17("M. Sanson      ","France        ","Midfielder",28,0,3,1,0,20);
   players p18("T. Iroegbunam  ","England       ","Midfielder",19,0,1,0,0,1);
   players p19("O. Watkins     ","England       ","Attacker  ",27,11,35,15,6,32);
   players p20("E. Buendia     ","Argentina     ","Attacker  ",26,10,36,5,3,28);
   players p21("L. Bailey      ","Jamaica       ","Attacker  ",25,31,32,5,3,25);
   players p22("B. Traore      ","Burkina Faso  ","Attacker  ",27,9,6,2,0,14);
   players p23("P. Coutinho    ","Brazil        ","Attacker  ",30,23,22,1,0,14);
   players p24("J. Duran       ","Colombia      ","Attacker  ",19,22,8,0,0,12);
   players p25("D. Ings        ","England       ","Attacker  ",30,0,21,7,2,20);
   static players AstonVilla_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return AstonVilla_players;	
}
players* NewcastleUnited_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);	
   players p1("Nick Pope       ","England       ","Goalkeeper",31,22,35,0,0,18);
   players p2("M. Dubravka     ","Solvakia      ","Goalkeeper",34,1,2,0,0,3);
   players p3("L. Karius       ","Germany       ","Goalkeeper",29,18,1,0,0,2);
   players p4("S. Botman       ","Netherlands   ","Defender  ",23,4,36,0,0,45);
   players p5("M. Targett      ","England       ","Defender  ",27,13,15,0,0,15);
   players p6("K. Trippier     ","England       ","Defender  ",32,2,38,1,9,13);
   players p7("Dan Burn        ","England       ","Defender  ",30,33,36,1,0,12);
   players p8("F. Schar        ","Switzerland   ","Defender  ",31,5,33,1,1,10);
   players p9("J. Lewis        ","North Ireland ","Defender  ",25,12,3,0,0,8);
   players p10("J. Lascelles   ","England       ","Defender  ",29,6,10,1,0,7);
   players p11("E. Krafth      ","Sweden        ","Defender  ",28,17,2,0,0,4); 
   players p12("J. Manquillo   ","Spain         ","Defender  ",28,19,4,0,0,3);
   players p13("P. Dummett     ","Wales         ","Defender  ",31,3,1,0,0,1);
   players p14("B. Guimaraes   ","Brazil        ","Midfielder",25,39,32,4,4,60);
   players p15("Joelinton      ","Brazil        ","Midfielder",26,7,34,6,3,38);
   players p16("J. Willock     ","England       ","Midfielder",23,28,37,3,4,30);
   players p17("S. Longstaff   ","England       ","Midfielder",25,36,38,3,3,22);
   players p18("E. Anderson    ","Scotland      ","Midfielder",20,32,20,0,0,4);
   players p19("M. Ritchie     ","Scotland      ","Midfielder",33,11,9,0,0,2);
   players p20("A. Isak        ","Sweden        ","Attacker  ",23,14,19,8,1,50);
   players p21("A. Gordon      ","England       ","Attacker  ",22,8,8,0,0,40);
   players p22("A.Saint-Maximin","France        ","Attacker  ",26,10,26,1,5,35);
   players p23("M. Almiron     ","Paraguay      ","Attacker  ",29,24,33,11,3,35);
   players p24("C. Wilson      ","England       ","Attacker  ",31,9,28,10,4,18);
   players p25("J. Murphy      ","England       ","Attacker  ",28,23,37,1,2,10);
   static players Newcastle_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Newcastle_players;	 		
}
players* TottenhamHotspurs_players()
{
   players p1("H. Lloris       ","France        ","Goalkeeper",36,1,30,0,0,4);
   players p2("F. Foster       ","England       ","Goalkeeper",35,20,13,0,0,2);
   players p3("A. Whiteman     ","England       ","Goalkeeper",24,41,0,0,0,1);
   players p4("B. Austin       ","England       ","Goalkeeper",24,40,0,0,0,1);
   players p5("C. Romero       ","Argentina     ","Defender  ",24,17,29,0,0,60);
   players p6("P. Porro        ","Spain         ","Defender  ",23,23,10,1,1,35);
   players p7("E. Royal        ","Brazil        ","Defender  ",24,12,32,2,1,25);
   players p8("E. Dier         ","England       ","Defender  ",29,15,38,2,1,25);
   players p9("D. Sanchez      ","Colombia      ","Defender  ",26,6,21,0,0,20);
   players p10("B. Davies      ","Wales         ","Defender  ",29,33,34,2,2,20);
   players p11("C. Lenglet     ","France        ","Defender  ",27,34,30,1,2,12);
   players p12("J. Tanganga    ","England       ","Defender  ",24,25,6,0,1,9);
   players p13("P. Hojbjerg    ","Denmark       ","Midfielder",27,5,39,5,6,45);
   players p14("R. Bentancur   ","Uruguay       ","Midfielder",25,30,26,6,2,40);
   players p15("Y. Bissouma    ","Mali          ","Midfielder",26,38,25,0,0,25);
   players p16("R. Sessegnon   ","England       ","Midfielder",22,19,23,2,1,22);
   players p17("O. Skipp       ","England       ","Midfielder",22,4,24,1,0,15);
   players p18("P. Sarr        ","Senegal       ","Midfielder",20,29,11,0,0,15);
   players p19("I. Perisic     ","Croatia       ","Midfielder",34,14,39,1,11,10);
   players p20("H. Kane        ","England       ","Attacker  ",29,10,42,25,4,90);
   players p21("H. Son         ","South Korea   ","Attacker  ",30,7,40,12,4,60);
   players p22("Richarlison    ","Brazil        ","Attacker  ",25,9,28,2,4,55);
   players p23("D. Kulusevski  ","Sweden        ","Attacker  ",22,21,30,2,7,55);
   players p24("A. Danjuma     ","Netherlands   ","Attacker  ",26,16,6,2,0,27);
   players p25("L. Moura       ","Brazil        ","Attacker  ",30,27,16,0,0,9);
   static players TottenhamHotspurs_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return TottenhamHotspurs_players;	 		
}
players* Arsenal_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);
   players p1("A. Ramsdale     ","England       ","Goalkeeper",24,1,34,0,0,38);
   players p2("M. Turner       ","United States ","Goalkeeper",28,30,7,0,0,5);
   players p3("W. Saliba       ","France        ","Defender  ",22,12,33,3,1,55);
   players p4("Ben White       ","England       ","Defender  ",25,4,39,2,4,50);
   players p5("G. Magahlhaes   ","Brazil        ","Defender  ",25,6,41,3,0,50);
   players p6("O. Zinchenko    ","Ukraine       ","Defender  ",26,35,29,1,2,40);
   players p7("K. Tierney      ","Scotland      ","Defender  ",25,3,31,1,2,25);
   players p8("T. Tomiyasu     ","Japan         ","Defender  ",24,18,31,0,2,25);
   players p9("J. Kiwior       ","Poland        ","Defender  ",23,15,3,0,0,20);
   players p10("R. Holding     ","England       ","Defender  ",27,16,21,1,0,10);
   players p11("M. Odegaard    ","Norway        ","Midfielder",24,8,38,11,8,80);
   players p12("T. Partey      ","Ghana         ","Midfielder",29,33,3,0,0,38);
   players p13("E. Smith Rowe  ","England       ","Midfielder",22,10,19,0,1,38);
   players p14("Jorginho       ","Italy         ","Midfielder",31,20,10,0,0,35);
   players p15("G. Xhaka       ","Switzerland   ","Midfielder",30,34,41,7,5,28);
   players p16("F. Vieira      ","Portugal      ","Midfielder",22,21,30,2,6,27);
   players p17("A. Lokango     ","Belgium       ","Midfielder",23,8,15,0,0,20);
   players p18("M. Elneny      ","Egypt         ","Midfielder",30,25,8,1,0,9);
   players p19("B. Saka        ","England       ","Attacker  ",21,7,41,13,10,110);
   players p20("G. Jesus       ","Brazil        ","Attacker  ",26,9,26,9,7,75);
   players p21("G. Martinelli  ","Brazil        ","Attacker  ",21,11,41,14,6,70);
   players p22("L. Trossard    ","Belgium       ","Attacker  ",28,19,15,1,7,30);
   players p23("E. Nketiah     ","England       ","Attacker  ",23,14,33,9,2,25);
   players p24("R. Nelson      ","England       ","Attacker  ",23,24,12,3,3,7);
   players p25("Marquinhos     ","Brazil        ","Attacker  ",20,80,6,1,1,4);
   static players Arsenal_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Arsenal_players;	 		
	
}
players* Liverpool_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);	
   players p1("Alisson         ","Brazil        ","Goalkeeper",30,1,40,0,1,45);
   players p2("C. Kelleher     ","Ireland       ","Goalkeeper",24,62,3,0,0,8);
   players p3("T. Alex-Arnold  ","England       ","Defender  ",24,66,39,3,6,65);
   players p4("A. Robertson    ","Scotland      ","Defender  ",29,26,36,0,9,50);
   players p5("V. Van Djik     ","Netherlands   ","Defender  ",31,4,34,3,0,45);
   players p6("I. Konate       ","France        ","Defender  ",23,5,18,0,0,35);
   players p7("Joe Gomez       ","England       ","Defender  ",25,2,30,0,1,30);
   players p8("K. Tsimikas     ","Greece        ","Defender  ",26,21,24,0,6,18);
   players p9("J. Matip        ","Cameroon      ","Defender  ",31,32,19,1,0,16);
   players p10("Fabinho        ","Brazil        ","Midfielder",29,3,41,0,0,45);
   players p11("H. Elliott     ","England       ","Midfielder",20,19,41,5,2,35);
   players p12("F. Carvalho    ","Portugal      ","Midfielder",20,28,20,3,0,20);
   players p13("Thiago         ","Spain         ","Midfielder",32,6,26,0,1,18);
   players p14("N. Keita       ","Guinea        ","Midfielder",28,8,13,0,0,17);
   players p15("C. Jones       ","England       ","Midfielder",22,17,15,0,1,17);
   players p16("Authur Melo    ","Brazil        ","Midfielder",26,29,1,0,0,15);
   players p17("S. Bajcetic    ","Spain         ","Midfielder",18,43,19,1,0,13);
   players p18("J. Henderson   ","England       ","Midfielder",32,14,35,0,3,10);
   players p19("J. Milner      ","England       ","Midfielder",37,7,35,0,2,2);
   players p20("L. Diaz        ","Colombia      ","Attacker  ",26,23,13,4,3,75);
   players p21("M. Salah       ","Egypt         ","Attacker  ",30,11,43,26,11,70);
   players p22("D. Nunez       ","Uruguay       ","Attacker  ",23,27,37,15,4,70);
   players p23("C. Gakpo       ","Netherlands   ","Attacker  ",23,18,18,5,1,60);
   players p24("Diogo Jota     ","Portugal      ","Attacker  ",26,20,20,2,8,55);
   players p25("R. Firmino     ","Brazil        ","Attacker  ",31,9,33,11,5,22);	
   static players Liverpool_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Liverpool_players;	 		

}
players* ManchesterCity_players()
{
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);	
   players p1("Ederson         ","Brazil        ","Goalkeeper",29,31,39,0,1,45);
   players p2("S. Ortega       ","Germany       ","Goalkeeper",30,18,9,0,0,6);
   players p3("S. Carson       ","England       ","Goalkeeper",37,33,0,0,0,1);
   players p4("R. Dias         ","Portugal      ","Defender  ",25,3,34,1,0,75);
   players p5("J. Cancelo      ","Portugal      ","Defender  ",28,7,26,2,5,70);
   players p6("N. Ake          ","Netherlands   ","Defender  ",28,6,35,2,0,35);
   players p7("J. Stones       ","England       ","Defender  ",28,5,25,2,3,30);
   players p8("A. Laporte      ","Spain         ","Defender  ",28,14,17,0,1,30);
   players p9("M. Akanji       ","Switzerland   ","Defender  ",27,25,36,0,1,30);
   players p10("K. Walker      ","England       ","Defender  ",32,2,25,0,1,15);
   players p11("S. Gomez       ","Spain         ","Defender  ",22,21,18,0,1,15);
   players p12("R. Lewis       ","England       ","Defender  ",18,82,18,1,0,15);
   players p13("Rodri          ","Spain         ","Midfielder",26,16,44,3,7,80);
   players p14("K. De Bruyne   ","Belgium       ","Midfielder",31,17,40,7,25,80);
   players p15("B. Silva       ","Portugal      ","Midfielder",28,20,43,5,6,80);
   players p16("K. Phillips    ","England       ","Midfielder",27,4,15,0,0,35);
   players p17("I. Gundogan    ","Germany       ","Midfielder",32,8,40,5,5,25);
   players p18("C. Palmer      ","England       ","Midfielder",20,80,21,1,0,15);
   players p19("M. Perrone     ","Argentina     ","Midfielder",20,21,2,0,0,10);
   players p20("E. Haaland     ","Norway        ","Attacker  ",22,9,40,47,6,170);
   players p21("P. Foden       ","England       ","Attacker  ",22,47,36,13,6,110);
   players p22("J. Grealish    ","England       ","Attacker  ",27,10,40,5,9,70);
   players p23("J. Alvarez     ","Argentina     ","Attacker  ",23,19,38,14,4,50);
   players p24("R. Mahrez      ","Algeria       ","Attacker  ",32,26,37,12,8,30);
   players p25("L. Delap       ","England       ","Attacker  ",20,88,0,0,0,0);
   static players ManchesterCity_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return ManchesterCity_players;	 		
}
players* ManchesterUnited_players()
{
   players p1("D. De Gea       ","Spain         ","Goalkeeper",32,1,47,0,0,15);
   players p2("T. Heaton       ","England       ","Goalkeeper",37,22,2,0,0,1);
   players p3("L. Martinez     ","Argentina     ","Defender  ",25,6,45,1,0,50);
   players p4("R. Varane       ","France        ","Defender  ",29,19,3,0,0,40);
   players p5("D. Dalot        ","Portugal      ","Defender  ",24,20,35,2,3,35);
   players p6("Luke Shaw       ","England       ","Defender  ",27,23,37,1,6,35);
   players p7("H. Maguire      ","England       ","Defender  ",30,5,27,0,0,25);
   players p8("T. Malacia      ","Netherlands   ","Defender  ",23,12,33,0,0,22);
   players p9("A. Wan-Bissaka  ","England       ","Defender  ",25,29,25,0,1,22);
   players p10("V. Lindelof    ","Sweden        ","Defender  ",28,2,24,0,0,15);
   players p11("P. Jones       ","England       ","Defender  ",31,4,0,0,0,2);
   players p12("B. Fernandes   ","Portugal      ","Midfielder",28,9,49,10,13,75);
   players p13("Casemiro       ","Brazil        ","Midfielder",31,18,40,5,6,50);
   players p14("C. Eriksen     ","Denmark       ","Midfielder",31,14,34,2,9,25);
   players p15("S. McTominay   ","Scotland      ","Midfielder",26,39,35,3,1,25);
   players p16("M. Sabitzer    ","Austria       ","Midfielder",29,15,13,3,1,20);
   players p17("Fred           ","Brazil        ","Midfielder",30,17,45,6,5,20);
   players p18("D. Van De Beek ","Netherlands   ","Midfielder",26,34,10,0,0,17);
   players p19("Z. Iqbal       ","Iraq          ","Midfielder",19,55,0,0,0,1);
   players p20("M. Rashford    ","England       ","Attacker  ",25,10,47,27,10,80);
   players p21("Antony         ","Brazil        ","Attacker  ",23,21,25,8,2,70);
   players p22("J. Sancho      ","England       ","Attacker  ",23,25,30,5,2,55);
   players p23("C. Ronaldo     ","Portugal      ","Attacker  ",38,7,16,3,2,25);
   players p24("A. Martial     ","France        ","Attacker  ",27,9,19,7,3,15);
   players p25("A. Garnacho    ","Argentina     ","Attacker  ",18,49,29,4,5,25);
   static players ManchesterUnited_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return ManchesterUnited_players;	 	
}
players* Chelsea_players()
{
   players p1("E. Mendy        ","Senegal       ","Goalkeeper",31,16,11,0,0,18);
   players p2("K. Arrizabalaga ","Spain         ","Goalkeeper",28,1,32,0,0,15);
   players p3("R. James        ","England       ","Defender  ",23,24,23,2,2,70);
   players p4("W. Fofana       ","France        ","Defender  ",22,33,14,2,0,65);
   players p5("B. Badiashile   ","France        ","Defender  ",22,4,9,0,0,40);
   players p6("M. Cucurella    ","Spain         ","Defender  ",24,32,32,0,2,40);
   players p7("B. Chilwell     ","England       ","Defender  ",26,21,27,2,4,35);
   players p8("K. Koulibaly    ","Senegal       ","Defender  ",31,26,31,2,1,25);
   players p9("T. Chalobah     ","England       ","Defender  ",23,14,25,0,0,22);
   players p10("C. Azpilicueta ","Spain         ","Defender  ",33,28,26,0,0,8);
   players p11("T. Silva       ","Brazil        ","Defender  ",38,6,28,0,2,3);
   players p12("E. Fernandez   ","Argentina     ","Midfielder",22,5,14,0,2,85);
   players p13("M. Mount       ","England       ","Midfielder",24,19,34,3,6,65);
   players p14("K. Havertz     ","Germany       ","Midfielder",23,29,40,9,1,60);
   players p15("M. Kovacic     ","Croatia       ","Midfielder",28,8,32,2,1,40);
   players p16("C. Gallagher   ","England       ","Midfielder",23,23,37,2,1,32);
   players p17("R.Loftus-Cheek ","England       ","Midfielder",27,12,28,0,1,25);
   players p18("N. Kante       ","France        ","Midfielder",32,7,5,0,0,20);
   players p19("D. Zakaria     ","Switzerland   ","Midfielder",26,20,11,1,0,20);
   players p20("C. Chukwuemeka ","England       ","Midfielder",19,30,12,0,0,15);
   players p21("M. Mudryk      ","Ukraine       ","Attacker  ",22,15,11,0,2,60);
   players p22("R. Sterling    ","England       ","Attacker  ",28,17,31,7,3,60);
   players p23("Joao Felix     ","Portugal      ","Attacker  ",23,11,14,2,0,50);
   players p24("C. Pulisic     ","United States ","Attacker  ",24,10,27,1,2,32);
   players p25("H. Ziyech      ","Morocco       ","Attacker  ",30,22,20,0,1,18);	
   static players Chelsea_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Chelsea_players;	
}
 //players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);		
players* Bayer04Leverkusen_players()
{
   players p1("L. Hradecky     ","Finland       ","Goalkeeper",33,1,35,0,0,3);
   players p2("P. Pentz        ","Austria       ","Goalkeeper",26,28,0,0,0,2);
   players p3("A. Lunev        ","Russia        ","Goalkeeper",31,40,1,0,0,2);
   players p4("E. Tapsoba      ","Burkina Faso  ","Defender  ",24,12,35,2,1,30);
   players p5("P. Hincapie     ","Ecuador       ","Defender  ",21,3,31,1,0,25);
   players p6("J. Frimpong     ","Netherlands   ","Defender  ",22,30,35,7,9,25);
   players p7("J. Tah          ","Germany       ","Defender  ",27,4,34,1,0,20);
   players p8("O. Kossounou    ","Cote D'Ivoire ","Defender  ",22,6,28,0,1,20);
   players p9("M. Bakker       ","Netherlands   ","Defender  ",22,5,28,3,2,10);
   players p10("D. Sinkgraven  ","Netherlands   ","Defender  ",27,22,10,0,1,3);
   players p11("T. Fosu-Mensah ","Netherlands   ","Defender  ",25,24,13,0,0,3);
   players p12("F. Wirtz       ","Germany       ","Midfielder",19,27,13,2,6,70);
   players p13("E. Palacios    ","Argentina     ","Midfielder",24,25,25,4,2,15);
   players p14("K. Demirbay    ","Germany       ","Midfielder",29,10,28,4,3,12);
   players p15("R. Andrich     ","Germany       ","Midfielder",28,8,32,3,2,11);
   players p16("N. Amiri       ","Germany       ","Midfielder",26,11,27,3,2,6);
   players p17("C. Aranguiz    ","Chile         ","Midfielder",33,20,15,2,0,4);
   players p18("A. Azhil       ","Morocco       ","Midfielder",21,32,1,0,0,1);
   players p19("M. Diaby       ","France        ","Attacker  ",23,19,35,12,7,50);
   players p20("P. Schick      ","Czech Republic","Attacker  ",27,14,23,4,1,40);
   players p21("C. Hudson-Odoi ","England       ","Attacker  ",22,17,20,1,1,25);
   players p22("A. Hlozek      ","Czech Republic","Attacker  ",20,23,33,5,5,15);
   players p23("S. Azmoun      ","Iran          ","Attacker  ",28,9,20,2,3,12);
   players p24("A. Adil        ","France        ","Attacker  ",22,21,25,4,5,12);
   players p25("K. Bellarabi   ","Germany       ","Attacker  ",32,38,7,0,0,3);
   static players Bayer04Leverkusen_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return Bayer04Leverkusen_players;

}
players* BorussiaMonchengladbach_players()
{

   players p1("J. Omlin        ","Switzerland   ","Goalkeeper",29,1,8,0,0,7);
   players p2("J. Olschowsky   ","Germany       ","Goalkeeper",21,41,2,0,0,1);
   players p3("T. Sippel       ","Germany       ","Goalkeeper",35,21,7,0,0,1);
   players p4("R. Bensebaini   ","Algeria       ","Defender  ",27,25,23,6,0,20);
   players p5("N. Elvedi       ","Switzerland   ","Defender  ",26,30,25,3,0,20);
   players p6("K. Itakura      ","Japan         ","Defender  ",26,3,17,0,2,12);
   players p7("J. Scally       ","United States ","Defender  ",20,29,25,1,0,12);
   players p8("M. Friedrich    ","Germany       ","Defender  ",27,5,16,1,0,8);
   players p9("Luca Netz       ","Germany       ","Defender  ",19,20,14,1,2,7);
   players p10("S. Lainer      ","Austria       ","Defender  ",30,18,11,0,0,4);
   players p11("T. Jantschke   ","Germany       ","Defender  ",32,24,6,0,0,1);
   players p12("M. Doucoure    ","France        ","Defender  ",24,4,0,0,0,1);
   players p13("M. Kone        ","France        ","Midfielder",21,17,25,1,1,25);
   players p14("F. Neuhaus     ","Germany       ","Midfielder",26,32,16,2,0,20);
   players p15("J. Weigl       ","Germany       ","Midfielder",27,8,7,0,1,15);
   players p16("C. Kramer      ","Germany       ","Midfielder",32,6,25,0,1,3);
   players p17("L. Stindl      ","Germany       ","Midfielder",34,13,22,6,9,3);
   players p18("O. Fraulo      ","Denmark       ","Midfielder",19,22,1,0,0,2);
   players p19("C. NoB         ","Ireland       ","Midfielder",22,34,0,0,0,1);
   players p20("M. Thuram      ","France        ","Attacker  ",25,10,26,15,4,32);
   players p21("A. Plea        ","France        ","Attacker  ",30,14,23,2,12,15);
   players p22("J. Hofmann     ","Germany       ","Attacker  ",30,23,24,10,11,13);
   players p23("N. Ngoumou     ","France        ","Attacker  ",23,19,13,0,0,7);
   players p24("H. Wolf        ","Austria       ","Attacker  ",23,11,13,1,1,4);
   players p25("P. Herrmann    ","Germany       ","Attacker  ",32,7,20,1,0,2);
   static players BorussiaMonchengladbach_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return BorussiaMonchengladbach_players;
   
}
players* EintrachtFrankfurt_players()
{
   players p1("Kevin Trapp     ","Germany       ","Goalkeeper",32,1,36,0,0,9);
   players p2("D. Ramaj        ","Germany       ","Goalkeeper",21,40,1,0,0,1);
   players p3("J. Grahl        ","Germany       ","Goalkeeper",34,31,0,0,0,1);
   players p4("E. Ndicka       ","France        ","Defender  ",23,2,35,1,1,32);
   players p5("Tuta            ","Brazil        ","Defender  ",23,35,35,1,0,15);
   players p6("P. Max          ","Germany       ","Defender  ",29,32,10,0,0,6);
   players p7("C. Lenz         ","Germany       ","Defender  ",28,25,25,0,2,5);
   players p8("A. Toure        ","Mali          ","Defender  ",26,18,5,0,0,4);
   players p9("H. Smolcic      ","Croatia       ","Defender  ",22,5,14,1,0,3);
   players p10("A. Buta        ","Portugal      ","Defender  ",26,24,12,2,3,3);
   players p11("T. Chandler    ","United States ","Defender  ",32,22,6,0,0,1);
   players p12("M. Hasebe      ","Japan         ","Defender  ",39,16,0,0,0,1);
   players p13("D. Kamada      ","Japan         ","Midfielder",26,15,35,13,5,30);
   players p14("J. Lindstrom   ","Denmark       ","Midfielder",23,29,31,9,4,28);
   players p15("D. Sow         ","Switzerland   ","Midfielder",26,8,36,3,0,22);
   players p16("M. Gotze       ","Germany       ","Midfielder",30,27,35,2,7,13);
   players p17("K. Jakic       ","Croatia       ","Midfielder",25,6,32,1,2,10);
   players p18("J. Dina Ebimbe ","France        ","Midfielder",22,26,18,2,1,8);
   players p19("P. Aaronson    ","United States ","Midfielder",19,30,1,0,0,5);
   players p20("S. Rode        ","Germany       ","Midfielder",32,17,29,4,2,3);
   players p21("R. Kolo Muani  ","France        ","Attacker  ",24,9,35,16,14,37);
   players p22("R. Borre       ","Colombia      ","Attacker  ",27,19,36,3,4,16);
   players p23("A. Knauff      ","Germany       ","Attacker  ",21,36,27,1,3,10);
   players p24("L. Alario      ","Argentina     ","Attacker  ",30,21,22,2,0,6);
   players p25("F. Alidou      ","Germany       ","Attacker  ",21,11,17,1,0,3);
   static players EintrachtFrankfurt_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return EintrachtFrankfurt_players;	
}
players* RBLeipzig_players()
{
   players p1("P. Gulacsi      ","Hungary       ","Goalkeeper",32,1,10,0,0,6);
   players p2("J. Blaswich     ","Germany       ","Goalkeeper",31,21,26,0,0,1);
   players p3("O. Nyland       ","Norway        ","Goalkeeper",32,13,2,0,0,1);
   players p4("J. Nickisch     ","Germany       ","Goalkeeper",18,34,0,0,0,1);
   players p5("J. Gvardiol     ","Croatia       ","Defender  ",21,32,32,3,0,75);
   players p6("M. Simakan      ","France        ","Defender  ",22,2,27,3,6,28);
   players p7("D. Raum         ","Germany       ","Defender  ",24,22,33,0,2,26);
   players p8("A. Diallo       ","Senegal       ","Defender  ",26,37,11,1,0,15);
   players p9("B. Henrichs     ","Germany       ","Defender  ",26,39,33,3,2,15);
   players p10("L. Klostermann ","Germany       ","Defender  ",26,16,10,0,0,14);
   players p11("W. Orban       ","Hungary       ","Defender  ",30,4,36,3,0,10);
   players p12("M. Halstenberg ","Germany       ","Defender  ",31,23,28,2,3,4);
   players p13("S. Ba          ","Germany       ","Defender  ",19,25,3,0,0,1);
   players p14("Dani Olmo      ","Spain         ","Midfielder",24,7,20,4,6,40);
   players p15("D. Szoboszlai  ","Hungary       ","Midfielder",22,17,35,5,13,35);
   players p16("K. Laimer      ","Austria       ","Midfielder",25,27,18,2,1,28);
   players p17("X. Schlager    ","Austria       ","Midfielder",25,24,29,1,2,22);
   players p18("A. Haidara     ","Mali          ","Midfielder",25,8,33,1,2,17);
   players p19("E. Forsberg    ","Sweden        ","Midfielder",31,10,34,9,6,9);
   players p20("K. Kampl       ","Solvenia      ","Midfielder",32,44,29,0,1,5);
   players p21("C. Clark       ","United States ","Midfielder",19,28,0,0,0,3);
   players p22("C. Nukunku     ","France        ","Attacker  ",25,18,27,17,5,80);
   players p23("T. Werner      ","Germany       ","Attacker  ",27,11,29,13,5,25);
   players p24("A. Silva       ","Portugal      ","Attacker  ",27,19,37,9,9,24);
   players p25("Y. Poulsen     ","Denmark       ","Attacker  ",28,9,23,3,2,10);
   static players RBLeipzig_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
   return RBLeipzig_players;
	
}
players* BorussiaDortmund_players()
{
	players p1("G. Kobel        ","Switzerland   ","Goalkeeper",25,1,25,0,0,25);
	players p2("M. Lotka        ","Germany       ","Goalkeeper",21,35,5,0,0,1);
	players p3("A. Meyer        ","Germany       ","Goalkeeper",31,33,12,0,0,1);
	players p4("N. Sule         ","Germany       ","Defender  ",27,25,32,1,4,25);
	players p5("N. Schlotterbeck","Germany       ","Defender  ",23,4,36,4,5,33);
	players p6("R. Guerreiro    ","Portugal      ","Defender  ",29,13,27,5,11,20);
	players p7("J. Ryerson      ","Norway        ","Defender  ",25,26,10,1,0,8);
	players p8("M. Hummels      ","Germany       ","Defender  ",34,15,28,0,0,7);
	players p9("M. Wolf         ","Germany       ","Defender  ",27,17,24,1,2,7);
	players p10("T. Meunier     ","Belgium       ","Defender  ",31,24,16,0,1,7);
	players p11("Tom Rothe      ","Germany       ","Defender  ",18,36,5,0,1,4);
	players p12("F. Passlack    ","Germany       ","Defender  ",24,30,4,0,1,2);
	players p13("J. Bellingham  ","England       ","Midfielder",19,22,34,10,6,110);
	players p14("G. Reyna       ","United States ","Midfielder",20,7,24,5,2,35);
	players p15("J. Brandt      ","Germany       ","Midfielder",26,19,32,9,5,28);
	players p16("M. Dahoud      ","Germany       ","Midfielder",27,8,9,0,1,18);
	players p17("S. Ozcan       ","Turkey        ","Midfielder",25,6,28,0,2,17);
	players p18("M. Reus        ","Germany       ","Midfielder",33,11,21,8,7,10);
	players p19("Emre Can       ","Germany       ","Midfielder",29,23,28,2,1,14);
	players p20("S. Haller      ","Cote D'Ivoire ","Attacker  ",28,9,13,3,1,35);
	players p21("K. Adeyemi     ","Germany       ","Attacker  ",21,27,24,6,3,35);
	players p22("Y. Moukoko     ","Germany       ","Attacker  ",18,18,26,6,6,30);
	players p23("D. Malen       ","Netherlands   ","Attacker  ",24,21,25,3,5,20);
	players p24("J.Bynoe-Gittens","England       ","Attacker  ",18,43,17,3,1,8);
	players p25("A. Modeste     ","France        ","Attacker  ",34,20,25,2,1,4);
	static players BorussiaDortmund_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
    return BorussiaDortmund_players;

}
players* BayernMunich_players()
{
  
    players p1("M. Neuer        ","Germany       ","Goalkeeper",36,1,16,0,0,12);
    players p2("Y. Sommer       ","Switzerland   ","Goalkeeper",34,27,13,0,0,5);
    players p3("S. Ulreich      ","Germany       ","Goalkeeper",34,26,8,0,0,1);
    players p4("M. De Ligt      ","Netherlands   ","Defender  ",23,4,31,2,0,70);
    players p5("A. Davies       ","Canada        ","Defender  ",22,19,32,3,8,70);
    players p6("J. Cancelo      ","Portugal      ","Defender  ",28,22,9,1,4,70);
    players p7("D. Upamecano    ","France        ","Defender  ",24,2,34,0,1,60);
    players p8("L. Hernandez    ","France        ","Defender  ",27,21,11,1,1,50);
    players p9("B. Pavard       ","France        ","Defender  ",26,5,32,6,1,35);
    players p10("N. Mazraoui    ","Morocco       ","Defender  ",25,40,19,0,3,30);
    players p11("D. Blind       ","Netherlands   ","Defender  ",33,23,5,0,0,6);
    players p12("B. Sarr        ","Senegal       ","Defender  ",31,20,0,0,0,3);
    players p13("J. Musiala     ","Germany       ","Midfielder",20,42,35,15,12,100);
    players p14("J. Kimmich     ","Germnay       ","Midfielder",28,6,35,5,8,80);
    players p15("L. Goretzka    ","Germany       ","Midfielder",28,8,29,6,6,65);
    players p16("R. Gravenberch ","Netherlands   ","Midfielder",20,38,24,1,1,30);
    players p17("P. Wanner      ","Germany       ","Midfielder",17,14,4,0,0,3);
    players p18("A. Ibrahimovic ","Germany       ","Midfielder",17,46,1,0,0,1);
    players p19("L. Sane        ","Germany       ","Attacker  ",27,10,32,13,7,70);
    players p20("S. Gnabry      ","Germany       ","Attacker  ",27,7,36,12,11,65);
    players p21("K. Coman       ","France        ","Attacker  ",26,11,25,6,6,60);
    players p22("S. Mane        ","Senegal       ","Attacker  ",30,17,28,11,5,60);
    players p23("M. Tel         ","France        ","Attacker  ",17,39,21,5,0,20);
    players p24("T. Muller      ","Germany       ","Attacker  ",33,25,28,5,11,20);
    players p25("E.Choupo-Moting","Cameroon      ","Attacker  ",34,13,26,17,4,6);
    static players BayernMunich_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
    return BayernMunich_players;	
}
players* AthleticBilbao_players()
{
 
	players p1("U. Simon        ","Spain         ","Goalkeeper",25,1,22,0,0,25);
	players p2("J. Agirrezabala ","Spain         ","Goalkeeper",22,13,11,0,0,5);
	players p3("Ander Iru       ","Spain         ","Goalkeeper",24,35,0,0,0,1);
	players p4("I. Martinez     ","Spain         ","Defender  ",31,4,14,1,0,18);
	players p5("Y. Alvarez      ","Spain         ","Defender  ",28,5,25,1,1,15);
	players p6("D. Vivian       ","Spain         ","Defender  ",23,3,24,1,0,14);
	players p7("I. Lekue        ","Spain         ","Defender  ",29,15,21,0,1,3);
	players p8("Y. Berchiche    ","Spain         ","Defender  ",33,17,23,1,1,2);
	players p9("A. Capa         ","Spain         ","Defender  ",31,21,4,0,0,2);
	players p10("O. De Marcos   ","Spain         ","Defender  ",33,18,31,1,5,2);
	players p11("M. Balenziaga  ","Spain         ","Defender  ",35,24,4,0,0,1);
	players p12("A. Paredes     ","Spain         ","Defender  ",22,31,9,0,0,1);
	players p13("O. Sancet      ","Spain         ","Midfielder",22,8,29,8,0,20);
	players p14("I. Munaiain    ","Spain         ","Midfielder",30,10,27,2,4,14);
	players p15("U. Vencedor    ","Spain         ","Midfielder",22,16,8,0,0,14);
	players p16("M. Vesga       ","Spain         ","Midfielder",29,6,31,4,3,5);
	players p17("A. Herrera     ","Spain         ","Midfielder",33,23,11,0,1,4);
	players p18("O. Zarraga     ","Spain         ","Midfielder",24,19,22,1,1,3);
	players p19("D. Garcia      ","Spain         ","Midfielder",32,14,21,0,1,2);
	players p20("A. Berenguer   ","Spain         ","Attacker  ",27,7,30,6,4,15);
	players p21("N. Williams    ","Spain         ","Attacker  ",20,11,31,7,6,25);
	players p22("I. Williams    ","Ghana         ","Attacker  ",28,9,29,5,4,25);
	players p23("J. Morcillo    ","Spain         ","Attacker  ",24,2,10,0,1,3);
	players p24("R. Garcia      ","Spain         ","Attacker  ",36,22,31,3,2,3);
	players p25("G. Guruzeta    ","Spain         ","Attacker  ",26,12,25,6,1,2);
	static players AthelticBilbao_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
	return AthelticBilbao_players;
		
}
players *RealSociedad_players()
{
  	players p1("A. Remiro       ","Spain         ","Goalkeeper",27,1,39,0,0,25);
	players p2("A. Zubiaurre    ","Spain         ","Goalkeeper",26,13,1,0,0,1);
	players p3("R. LE Normand   ","France        ","Defender  ",24,26,31,0,0,35);
	players p4("I. Zubeldia     ","Spain         ","Defender  ",25,5,29,1,2,15);
	players p5("A. Elustondo    ","Spain         ","Defender  ",28,6,27,1,1,14);
	players p6("A. Gorosabel    ","Spain         ","Defender  ",26,18,24,0,4,10);
	players p7("A. Munoz        ","Spain         ","Defender  ",25,12,17,0,0,6);
	players p8("J. Pacheco      ","Spain         ","Defender  ",22,20,18,0,0,6);
	players p9("D. Rico         ","Spain         ","Defender  ",30,15,29,1,0,3);
	players p10("A. Sola        ","Spain         ","Defender  ",23,2,15,0,0,2);
	players p11("M. Zubimendi   ","Spain         ","Midfielder",24,3,33,1,3,40);
	players p12("A. Guevara     ","Spain         ","Midfielder",25,16,14,1,0,5);
	players p13("Brais Mendez   ","Spain         ","Midfielder",26,23,38,10,7,30);
	players p14("D. Silva       ","Spain         ","Midfielder",37,21,25,2,6,4);
	players p15("A. Illarramendi","Spain         ","Midfielder",33,4,23,1,2,2);
	players p16("Mikel Merino   ","Spain         ","Midfielder",26,8,31,2,7,50);
	players p17("R. Navarro     ","Spain         ","Midfielder",20,17,25,6,2,4);
	players p18("B. Turrientes  ","Spain         ","Midfielder",21,22,13,0,1,2);
	players p19("M. Oyarzabal   ","Spain         ","Attacker  ",25,10,17,2,1,60);
	players p20("A. Sorloth     ","Norway        ","Attacker  ",27,19,34,13,2,10);
	players p21("A. Barrenetxea ","Spain         ","Attacker  ",21,7,13,2,0,6);
	players p22("U. Sadiq       ","Nigeria       ","Attacker  ",26,25,3,1,0,18);
	players p23("C. Fernandez   ","Spain         ","Attacker  ",26,9,21,1,0,4);
	players p24("Momo Cho       ","France        ","Attacker  ",19,11,16,1,3,15);
	players p25("T. Kubo        ","Japan         ","Attacker  ",21,14,32,5,7,12);
	
	static players RealSociedad_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
	return RealSociedad_players;
}
players *RealBetis_players()
{
	players p1("Rui Silva       ","Portugal      ","Goalkeeper",29,13,22,0,0,15);
	players p2("D. Martin       ","Spain         ","Goalkeeper",24,25,0,0,0,2);
	players p3("C. Bravo        ","Chile         ","Goalkeeper",39,1,15,0,0,1);
	players p4("Luiz Felipe     ","Italy         ","Defender  ",26,19,21,0,0,15);
	players p5("E. Gonzalez     ","Spain         ","Defender  ",25,3,24,1,0,10);
	players p6("Abner           ","Brazil        ","Defender  ",22,20,10,0,0,8);
	players p7("G. Pezzella     ","Argentina     ","Defender  ",31,16,30,0,0,5);
	players p8("A. Ruibal       ","Spain         ","Defender  ",27,24,31,2,1,5);
	players p9("J. Miranda      ","Spain         ","Defender  ",23,33,20,1,3,5);
	players p10("Y. Sabaly      ","Senegal       ","Defender  ",30,23,23,1,2,4);
	players p11("V. Ruiz        ","Spain         ","Defender  ",34,6,14,0,0,2);
	players p12("N. Fekir       ","France        ","Midfielder",29,8,20,6,3,40);
	players p13("G. Rodriguez   ","Argentina     ","Midfielder",28,5,32,1,0,28);
	players p14("S. Canales     ","Spain         ","Midfielder",32,10,32,6,2,20);
	players p15("W. Carvalho    ","Portugal      ","Midfielder",30,14,32,3,2,16);
	players p16("R. Sanchez     ","Spain         ","Midfielder",22,28,28,2,5,7);
	players p17("P. Akouokou    ","Cote D'Ivoire ","Midfielder",25,4,13,0,0,4);
	players p18("A. Guardado    ","Mexico        ","Midfielder",36,18,26,1,1,2);
	players p19("B. Iglesias    ","Spain         ","Attacker  ",30,9,32,12,5,25);
	players p20("Juanmi         ","Spain         ","Attacker  ",29,7,19,4,1,15);
	players p21("Luiz Henrique  ","Brazil        ","Attacker  ",22,11,33,3,5,15);
	players p22("William Jose   ","Brazil        ","Attacker  ",31,12,31,5,0,9);
	players p23("A. Perez       ","Spain         ","Attacker  ",29,21,9,1,1,6);
	players p24("Juan Cruz      ","Spain         ","Attacker  ",22,29,5,1,0,2);
	players p25("Joaquin        ","Spain         ","Attacker  ",41,17,20,1,1,2);
	static players RealBetis_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
	return RealBetis_players;
}
players *Valencia_players()
{
    players p1("G. Mamardashvili","Georgia       ","Goalkeeper",22,25,29,0,0,25);
    players p2("I. Herrerin     ","Spain         ","Goalkeeper",35,1,1,0,0,1);
    players p3("C. Rivero       ","Spain         ","Goalkeeper",24,13,0,0,0,1);
    players p4("J. Gaya         ","Spain         ","Defender  ",27,14,22,1,3,40);
    players p5("T. Correia      ","Portugal      ","Defender  ",24,2,20,0,0,14);
    players p6("M. Diakhaby     ","Guinea        ","Defender  ",26,12,19,2,0,8);
    players p7("J. Vazquez      ","Spain         ","Defender  ",20,21,19,2,0,5);
    players p8("G. Paulista     ","Brazil        ","Defender  ",32,5,16,1,0,4);
    players p9("E. Comert       ","Switzerland   ","Defender  ",25,24,21,0,1,4);
    players p10("D. Foulquier   ","Guadeloupe    ","Defender  ",29,20,22,0,1,3);
    players p11("Toni Lato      ","Spain         ","Defender  ",25,3,19,1,1,3);
    players p12("C. Ozkacar     ","Turkey        ","Defender  ",22,15,13,0,1,2);
    players p13("C. Mosquera    ","Colombia      ","Defender  ",18,33,4,0,0,1);
    players p14("C. Soler       ","Spain         ","Midfielder",26,0,3,1,0,30);
    players p15("Y. Musah       ","United States ","Midfielder",20,4,26,0,2,25);
    players p16("H. Guillamon   ","Spain         ","Midfielder",23,6,25,1,4,25);
    players p17("N. Gonzalez    ","Spain         ","Midfielder",21,17,14,1,0,15);
    players p18("A. Almeida     ","Portugal      ","Midfielder",22,18,26,2,4,15);
    players p19("I. Moriba      ","Guinea        ","Midfielder",20,8,21,1,1,7);
    players p20("S. Lino        ","Brazil        ","Attacker  ",23,16,28,4,3,16);
    players p21("J. Kluivert    ","Netherlands   ","Attacker  ",23,9,21,6,2,14);
    players p22("S. Castillejo  ","Spain         ","Attacker  ",28,11,20,3,0,8);
    players p23("Hugo Duro      ","Spain         ","Attacker  ",23,19,23,2,1,7);
    players p24("E. Cavani      ","Uruguay       ","Attacker  ",36,7,17,7,1,5);
    players p25("Marcos Andre   ","Brazil        ","Attacker  ",26,22,18,1,0,4);
    static players VAL_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
    return VAL_players;
}
players *Villarreal_players()
{
	players p1("G. Rulli        ","Argentina     ","Goalkeeper",30,0,14,0,0,10);
	players p2("F. Jorgensen    ","Denmark       ","Goalkeeper",20,35,5,0,0,2);
	players p3("P. Reina        ","Spain         ","Goalkeeper",40,1,19,0,0,1);
	players p4("P. Torres       ","Spain         ","Defender  ",26,4,27,0,0,50);
	players p5("J. Foyth        ","Argentina     ","Defender  ",25,8,19,1,2,25);
	players p6("A. Pedraza      ","Spain         ","Defender  ",26,24,18,1,2,18);
	players p7("J. Cuenca       ","Spain         ","Defender  ",23,5,18,0,0,6);
	players p8("J. Mojica       ","Colombia      ","Defender  ",30,12,23,0,1,5);
	players p9("A. Moreno       ","Spain         ","Defender  ",30,18,17,0,1,4);
	players p10("A. Mandi       ","Algeria       ","Defender  ",31,23,22,0,1,4);
	players p11("R. Albiol      ","Spain         ","Defender  ",37,3,24,0,0,3);
	players p12("K. Femenia     ","Spain         ","Defender  ",32,2,22,0,0,3);
	players p13("G. Lo Celso    ","Argentina     ","Midfielder",26,17,16,1,0,22);
	players p14("D. Parejo      ","Spain         ","Midfielder",33,10,37,1,5,7);
	players p15("M. Trigueros   ","Spain         ","Midfielder",31,14,21,1,0,6);
	players p16("F. Coquelin    ","France        ","Midfielder",31,19,25,3,1,5);
	players p17("E. Capoue      ","France        ","Midfielder",34,6,28,3,2,3);
	players p18("Y. Pino        ","Spain         ","Attacker  ",20,21,33,3,2,38);
	players p19("A. Danjuma     ","Netherlands   ","Attacker  ",26,0,17,6,0,40);
	players p20("G. Moreno      ","Spain         ","Attacker  ",30,7,22,10,5,35);
	players p21("S. Chukwueze   ","Nigeria       ","Attacker  ",23,11,36,10,11,20);
	players p22("N. Jackson     ","Senegal       ","Attacker  ",21,15,26,3,3,15);
	players p23("A. Baena       ","Spain         ","Attacker  ",21,16,35,10,5,15);
	players p24("J. Morales     ","Spain         ","Attacker  ",35,22,36,12,4,4);
	players p25("J. Pascual     ","Spain         ","Attacker  ",19,42,1,0,0,1);
	static players VIL_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
	return VIL_players;	
}
players *Sevilla_players()
{
	players p1("Bono            ","Morocco       ","Goalkeeper",31,13,29,0,0,15);
	players p2("M. Dmitrovic    ","Serbia        ","Goalkeeper",31,1,13,0,0,5);
	players p3("A. Telles       ","Brazil        ","Defender  ",30,3,25,0,3,14);
	players p4("M. Acuna        ","Argentina     ","Defender  ",31,19,30,2,3,14);
	players p5("G. Montiel      ","Argentina     ","Defender  ",26,2,26,1,1,12);
	players p6("Marcao          ","Brazil        ","Defender  ",26,23,7,0,0,12);
	players p7("L. Bade         ","France        ","Defender  ",22,22,10,0,0,10);
	players p8("T. Nianzou      ","France        ","Defender  ",20,14,27,3,0,9);
	players p9("J. Carmona      ","Spain         ","Defender  ",21,40,15,2,1,2);
	players p10("J. Navas       ","Spain         ","Defender  ",37,16,32,0,4,3);
	players p11("J. Jordan      ","Spain         ","Midfielder",28,8,33,2,2,14);
	players p12("P. Gueye       ","Senegal       ","Midfielder",24,18,5,0,3,10);
	players p13("Isco           ","Spain         ","Midfielder",30,28,19,1,3,10);
	players p14("O. Torres      ","Spain         ","Midfielder",28,21,30,3,3,10);
	players p15("N. Gudeji      ","Serbia        ","Midfielder",31,6,35,4,0,4);
	players p16("I. Rakitic     ","Croatia       ","Midfielder",35,10,34,2,4,4);
	players p17("Fernando       ","Brazil        ","Midfielder",35,20,23,0,0,4);
	players p18("L. Ocampos     ","Argentina     ","Attacker  ",28,5,15,2,1,18);
	players p19("J. Corona      ","Mexico        ","Attacker  ",30,9,1,0,0,14);
	players p20("E. Lamela      ","Argentina     ","Attacker  ",31,17,32,6,1,14);
	players p21("Rafa Mir       ","Spain         ","Attacker  ",25,12,25,5,1,12);
	players p22("Bryan Gil      ","Spain         ","Attacker  ",22,25,9,1,1,12);
	players p23("Y. En-Nesyri   ","Morocco       ","Attacker  ",25,15,32,12,0,15);
	players p24("Suso           ","Spain         ","Attacker  ",29,7,27,1,2,7);
	players p25("Papu Gomez     ","Argentina     ","Attacker  ",35,24,18,0,2,4);
	static players SEV_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
	return SEV_players;
}
players *AthleticoMadrid_players()
{
	players p1("Jan Oblak       ","Slovenia      ","Goalkeeper",30,13,33,0,0,40);
	players p2("Ivo Grbic       ","Croatia       ","Goalkeeper",27,1,5,0,0,4);
	players p3("J. Gimenez      ","Uruguay       ","Defender  ",28,2,24,1,0,40);
	players p4("R. Mandava      ","Mozambique    ","Defender  ",29,23,33,0,0,25);
	players p5("N. Molina       ","Argentina     ","Defender  ",24,16,30,0,3,22);
	players p6("R. Lodi         ","Brazil        ","Defender  ",24,4,0,0,0,15);
	players p7("S. Reguilon     ","Spain         ","Defender  ",26,3,5,0,0,20);
	players p8("M. Hermoso      ","Spain         ","Defender  ",27,22,21,3,0,14);
	players p9("M. Doherty      ","Ireland       ","Defender  ",31,12,1,0,0,12);
	players p10("S. Savic       ","Montenegro    ","Defender  ",32,15,24,0,0,9);
	players p11("R. De Paul     ","Argentina     ","Midfielder",28,5,26,2,3,40);
	players p12("M. Llorente    ","Spain         ","Midfielder",28,14,25,3,2,35);
	players p13("T. Lemar       ","France        ","Midfielder",27,11,23,0,2,30);
	players p14("G. Kondogbia   ","C. Africa Rep ","Midfielder",30,4,23,0,2,20);
	players p15("Koke           ","Spain         ","Midfielder",31,6,30,0,3,18);
	players p16("S. Niguez      ","Spain         ","Midfielder",28,17,28,1,1,15);
	players p17("A. Witsel      ","Belgium       ","Midfielder",34,20,31,0,1,5);
	players p18("P. Barrios     ","Spain         ","Midfielder",19,24,14,2,1,1);
	players p19("Joao Felix     ","Portugal      ","Attacker  ",23,7,20,5,3,90);
	players p20("A. Correa      ","Argentina     ","Attacker  ",28,10,33,6,2,40);
	players p21("Y. Carrasco    ","Belgium       ","Attacker  ",29,21,32,5,2,30);
	players p22("A. Griezmann   ","France        ","Attacker  ",31,8,35,9,11,30);
	players p23("M. Cunha       ","Brazil        ","Attacker  ",23,0,17,0,2,40);
	players p24("M. Depay       ","Netherlands   ","Attacker  ",29,9,7,3,0,30);
	players p25("A. Morata      ","Spain         ","Attacker  ",30,19,34,2,4,30);
	static players ATM_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
	return ATM_players;

}
players *RealMadrid_players()
{
	players p1("T. Courtois     ","Belgium       ","Goalkeeper",30,1,31,0,0,60);
    players p2("A. Lunin        ","Ukraine       ","Goalkeeper",24,13,11,0,0,4);
    players p3("E. Militao      ","Brazil        ","Defender  ",25,3,34,6,0,70);
    players p4("D. Alaba        ","Austria       ","Defender  ",30,4,29,2,3,55);
    players p5("A. Rudiger      ","Germany       ","Defender  ",30,22,37,2,0,40);
    players p6("F. Mendy        ","France        ","Defender  ",27,23,25,1,4,40);
    players p7("D. Carvajal     ","Spain         ","Defender  ",31,2,32,5,5,18);
    players p8("L. Vazquez      ","Spain         ","Defender  ",31,17,17,2,1,9);
	players p9("A. Odriozola    ","Spain         ","Defender  ",27,16,4,0,0,6);
    players p10("N. Fernandez   ","Spain         ","Defender  ",33,6,30,0,1,5);
	players p11("J. Vallejo     ","Spain         ","Defender  ",26,5,3,0,0,2);
    players p12("F.Valverde     ","Uruguay       ","Midfielder",24,15,41,12,4,100);
    players p13("A. Tchouameni  ","France        ","Midfielder",23,18,31,0,3,90);
    players p14("E. Camavinga   ","France        ","Midfielder",20,12,41,0,1,50);
    players p15("T. Kroos       ","Germany       ","Midfielder",33,8,36,2,5,20);
    players p16("L. Modric      ","Croatia       ","Midfielder",37,10,36,6,5,10);
    players p17("D. Ceballos    ","Spain         ","Midfielder",26,19,30,1,6,10);
    players p18("S. Arribas     ","Spain         ","Midfielder",21,40,3,1,0,3);
    players p19("Vinicius Jr    ","Brazil        ","Attacker  ",22,20,40,19,9,120);
    players p20("Rodrygo        ","Brazil        ","Attacker  ",22,21,39,10,8,80);
    players p21("K. Benzema     ","France        ","Attacker  ",35,9,28,18,5,35);
    players p22("M. Asensio     ","Spain         ","Attacker  ",27,11,33,7,5,25);
    players p23("E. Hazard      ","Belgium       ","Attacker  ",32,7,7,1,1,7);
    players p24("M. Diaz        ","Dominican     ","Attacker  ",29,24,8,0,0,3);
    players p25("A. Rodriguez   ","Uruguay       ","Attacker  ",18,39,6,1,1,2);
    static players RM_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
    return RM_players;
}
players *Barcelona_players()
{
	players p1("M. Ter Stegen   ","Germany       ","Goalkeeper",30,1,40,0,0,30);
	players p2("I. Pena         ","Spain         ","Goalkeeper",24,13,3,0,0,4);
	players p3("A. Tenas        ","Spain         ","Goalkeeper",21,36,0,0,0,2);
	players p4("R. Araujo       ","Uruguay       ","Defender  ",24,4,22,1,1,70);
	players p5("J. Kounde       ","France        ","Defender  ",24,23,28,0,5,60);
	players p6("A. Christensen  ","Denmark       ","Defender  ",26,15,25,0,1,30);
	players p7("E. Garcia       ","Spain         ","Defender  ",22,24,21,1,2,18);
	players p8("A. Balde        ","Spain         ","Defender  ",19,28,33,0,6,15);
	players p9("M. Alonso       ","Spain         ","Defender  ",32,17,27,3,0,9);
	players p10("S. Roberto     ","Spain         ","Defender  ",31,20,26,4,3,6);
	players p11("J. Alba        ","Spain         ","Defender  ",33,18,22,1,6,5);
	players p12("G. Pique       ","Spain         ","Defender  ",36,3,10,0,0,1);
	players p13("Pedri          ","Spain         ","Midfielder",20,8,30,7,0,100);
	players p14("Gavi           ","Spain         ","Midfielder",18,6,37,2,5,90);
	players p15("F. De Jong     ","Netherlands   ","Midfielder",25,21,34,2,1,50);
	players p16("F. Kessie      ","Ivory Coast   ","Midfielder",26,19,32,3,3,35);
	players p17("S. Busquets    ","Spain         ","Midfielder",34,5,33,0,3,5);
	players p18("P. Torre       ","Spain         ","Midfielder",19,32,7,1,1,3);
	players p19("O. Dembele     ","France        ","Attacker  ",25,7,28,8,7,60);
	players p20("A. Fati        ","Spain         ","Attacker  ",20,10,38,6,3,50);
	players p21("Raphinha       ","Brazil        ","Attacker  ",26,22,38,9,9,50);
	players p22("R. Lewandowski ","Poland        ","Attacker  ",34,9,33,25,6,50);
	players p23("F. Torres      ","Spain         ","Attacker  ",23,11,33,5,1,40);
	players p24("P. Aubamaeyang ","Gabonese      ","Attacker  ",33,0,1,0,0,20);
	players p25("M. Depay       ","Netherlands   ","Attacker  ",29,0,4,1,0,20);
	static players FCB_players[25]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25};
	return FCB_players;
}
void editor_func();
coach Barcelona_manager()
{
	coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	return c1;
}
coach RealMadrid_manager()
{
	coach   c1("Carlo Ancelotti ","Italy         ","Manager   ",63,20,4);
	return c1;
}
coach AthleticoMadrid_manager()
{
	coach   c1("Diego Simeone   ","Argentina     ","Manager   ",53,11,13);
	return c1;
}
coach RealSociedad_manager()
{
	coach   c1("Imanol Alguacil ","Spain         ","Manager   ",51,1,7);
	return c1;
}
coach RealBetis_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("M. Pellegrini   ","Chile         ","Manager   ",69,6,5);
	return c1;
}
coach Villarreal_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Quique Setien   ","Spain         ","Manager   ",64,0,2);
	return c1;
}
coach AthleticBilbao_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Ernesto Valverde","Spain         ","Manager   ",59,10,2);
	return c1;
}
coach Sevilla_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Jose Luis       ","Spain         ","Manager   ",62,0,1);
	return c1;
}
coach Valencia_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Ruben Baraja    ","Spain         ","Manager   ",47,0,1);
	return c1;
}
coach BayernMunich_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Thomas Tuchel   ","Germany       ","Manager   ",49,11,2);
	return c1;
}
coach EintrachtFrankfurt_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Oliver Glasner  ","Austria       ","Manager   ",48,2,3);
	return c1;
}
coach BorussiaDortmund_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Edin Terzic     ","Germany       ","Manager   ",40,4,3);
	return c1;
}
coach BorussiaMonchengladbach_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Daniel Farke    ","Germany       ","Manager   ",46,3,3);
	return c1;
}
coach RBLeipzig_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Marco Rose      ","Germany       ","Manager   ",46,7,2);
	return c1;
}
coach Bayer04Leverkusen_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Xabi Alonso     ","Spain         ","Manager   ",41,0,2);
	return c1;
}
coach Chelsea_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Frank Lampard   ","England       ","Manager   ",44,0,1);
	return c1;
}
coach ManchesterUnited_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Erik Ten Hag    ","Netherlands   ","Manager   ",53,8,3);
	return c1;
}
coach ManchesterCity_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Pep Guardiola   ","Spain         ","Manager   ",52,32,9);
	return c1;
}
coach Liverpool_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Jurgen Klopp    ","Germany       ","Manager   ",55,12,11);
	return c1;
}
coach Arsenal_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Mikel Arteta    ","Spain         ","Manager   ",41,7,6);
	return c1;
}
coach TottenhamHotspurs_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Ryan Mason      ","England       ","Manager   ",31,0,1);
	return c1;
}
coach NewcastleUnited_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Eddie Howe      ","England       ","Manager   ",45,1,4);
	return c1;
}
coach AstonVilla_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Unai Emery      ","Spain         ","Manager   ",51,11,4);
	return c1;
}
coach Brighton_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Roberto De Zerbi","Italy         ","Manager   ",43,2,4);
	return c1;
}
coach LeicesterCity_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Dean Smith      ","England      ","Manager   ",52,0,1);
	return c1;
}
coach Juventus_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("M. Allegri      ","Italy         ","Manager   ",55,15,4);
	return c1;
}
coach Napoli_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("L. Spalletti    ","Italy         ","Manager   ",64,9,2);
	return c1;
}
coach AcMilan_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Stefano Pioli   ","Italy         ","Manager   ",57,1,6);
	return c1;
}
coach InterMilan_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Simone Inzaghi  ","Italy         ","Manager   ",47,9,3);
	return c1;
}
coach AsRoma_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Jose Mourinho   ","Portugal      ","Manager   ",60,35,3);
	return c1;
}
coach Lazio_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Maurizio Sarri  ","Italy         ","Manager   ",64,2,4);
	return c1;
}
coach Atalanta_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Piero Gasperini ","Italy         ","Manager   ",65,0,8);
	return c1;
}
coach ParisSaintGermain_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("C. Galtier      ","France        ","Manager   ",56,3,2);
	return c1;
}
coach Lyon_manager()
{
  //coach   c1("Xavi            ","Spain         ","Manager   ",43,8,4);
	coach   c1("Laurent Blanc   ","France        ","Manager   ",57,15,2);
	return c1;
}
    
class Admin
{
	string user;
	string pass;
	public:
		//Constructor
		Admin(string a, string b)
		{
			user=a;
			pass=b;
		}
		//Function for verifying password and username and giving access to edit program
	
		void verify()
		{
			int i=0,j=0;
			while(i!=1 && j!=2)
	        {	
			cout<<"Kindly Enter your Username and Password To Log In: "<<endl;
			cout<<"User: ";
			string x,y;
			cin>>x;
			cout<<"Password: ";
			cin>>y;
			if((x==this->user) && (y==this->pass))
			{
				cout<<"Login Is Successful"<<endl;
				cout<<"Welcome Talha!"<<endl;
				i++;
			}
			else
			{
				cout<<"Login Unsuccessful\nIncorrect Credentials are Entered\n"<<endl;
				j++;	
			}
			}
			if(j==2)
			{
				cout<<"You have reached maximum login attempts"<<endl;
				exit(0);
			}
	    }
};



void tournament();

int fantasy(players fl[154]) {
    cout << "WELCOME TO FANTASY FOOTBALL";
    cout << "\nYou have a total budget of 1500m\n\n";
    
    int budget = 1500; // total budget of 500m
    int selected_players[10]; // array to store selected players
    
    // Selecting attackers
    cout << "Select 3 attackers from these players:" << endl;
    for (int i = 0; i < 49; i++) {
        cout << i + 1 << ". " << fl[i].getname() << " - " << fl[i].getgoals() << " (Assists: " << fl[i].getassists() << ") - Market Value: " << fl[i].getvalue() << "m" << endl;
    }
    for (int j = 0; j < 3; j++) {
        bool valid_selection = false;
        while (!valid_selection) {
            cout << "Select attacker " << j + 1 << ": ";
            int selected_player;
            cin >> selected_player;
            if (selected_player >= 1 && selected_player <= 49) {
                bool already_selected = false;
                for (int i = 0; i < j; i++) {
                    if (selected_player == selected_players[i]) {
                        cout << "Error: Player " << selected_player << " has already been selected. Please choose another player." << endl;
                        already_selected = true;
                        break;
                    }
                }
                if (!already_selected) {
                    valid_selection = true;
                    selected_players[j] = selected_player;
                    int index = selected_player - 1;
                    budget -= fl[index].getvalue();
                    cout << "Remaining budget: " << budget << "m" << endl;
                }
            }
            else {
                cout << "Invalid selection. Please choose a number between 1 and 50." << endl;
            }
        }
    }
    
    // Selecting midfielders
    cout << "\nSelect 3 midfielders from these players:" << endl;
    for (int i = 49; i < 83; i++) {
        cout << i + 1 << ". " << fl[i].getname() << " - " << fl[i].getgoals() << " (Assists: " << fl[i].getassists() << ") - Market Value: " << fl[i].getvalue() << "m" << endl;
    }
    for (int j = 3; j < 6; j++) {
        bool valid_selection = false;
        while (!valid_selection) {
            cout << "Select midfielder " << j - 2 << ": ";
            int selected_player;
            cin >> selected_player;
            if (selected_player >= 50 && selected_player <= 84) {
                bool already_selected = false;
                for (int i = 0; i < j; i++) {
                    if (selected_player == selected_players[i]) {
                        cout << "Error: Player " << selected_player << " has already been selected. Please choose another player." << endl;
                        already_selected = true;
                        break;
                    }
                }
                if (!already_selected) {
                    valid_selection = true;
                    selected_players[j] = selected_player;
                    int index = selected_player - 1;
                    budget -= fl[index].getvalue();
                    cout << "Remaining budget: " << budget << "m" << endl;
                }
            }
            else {
                cout << "Invalid selection. Please choose a number between 50 and 84"<<endl;
            
            }
        }
    }    


// defenders

 cout << "\nSelect 4 defenders from these players:" << endl;
    for (int i = 83; i < 132; i++) {
        cout << i + 1 << ". " << fl[i].getname() << " - " << fl[i].getgoals() << " (Assists: " << fl[i].getassists() << ") - Market Value: " << fl[i].getvalue() << "m" << endl;
    }
    for (int j = 6; j < 10; j++) {
        bool valid_selection = false;
        while (!valid_selection) {
            cout << "Select defender " << j - 2 << ": ";
            int selected_player;
            cin >> selected_player;
            if (selected_player >= 84 && selected_player <= 132) {
                bool already_selected = false;
                for (int i = 0; i < j; i++) {
                    if (selected_player == selected_players[i]) {
                        cout << "Error: Player " << selected_player << " has already been selected. Please choose another player." << endl;
                        already_selected = true;
                        break;
                    }
                }
                if (!already_selected) {
                    valid_selection = true;
                    selected_players[j] = selected_player;
                    int index = selected_player - 1;
                    budget -= fl[index].getvalue();
                    cout << "Remaining budget: " << budget << "m" << endl;
                }
            }
            else {
                cout << "Invalid selection. Please choose a number between 85 and 132"<<endl;
            
            }
        }
    }    
 //Goal keeper
 cout << "\nSelect A Goal keeper from these players:" << endl;
    for (int i = 132; i < 154; i++) {
        cout << i + 1 << ". " << fl[i].getname() << " - " << fl[i].getgoals() << " (Assists: " << fl[i].getassists() << ") - Market Value: " << fl[i].getvalue() << "m" << endl;
    }
    for (int j = 10; j < 11; j++) {
        bool valid_selection = false;
        while (!valid_selection) {
            cout << "Select goal keeper " << j - 2 << ": ";
            int selected_player;
            cin >> selected_player;
            if (selected_player >= 132 && selected_player <= 154) {
                bool already_selected = false;
                for (int i = 0; i < j; i++) {
                    if (selected_player == selected_players[i]) {
                        cout << "Error: Player " << selected_player << " has already been selected. Please choose another player." << endl;
                        already_selected = true;
                        break;
                    }
                }
                if (!already_selected) {
                    valid_selection = true;
                    selected_players[j] = selected_player;
                    int index = selected_player - 1;
                    budget -= fl[index].getvalue();
                    cout << "Remaining budget: " << budget << "m" << endl;
                }
            }
            else {
                cout << "Invalid selection. Please choose a number between 132 and 144"<<endl;
            
            }
        }
    }  
    
    
    cout<<"\nNow select 3 substitute players:\n";

for(int i=0;i<3;i++){
    bool valid_selection=false;
    while(!valid_selection){
        cout<<"Select substitute player "<<i+1<<": ";
        int selection;
        cin>>selection;
        if(selection<1 || selection>154){
            cout<<"Invalid selection. Please choose again.\n";
        }
        else{
            bool already_selected=false;
            for(int j=0;j<11+i;j++){
                if(selection==selected_players[j]){
                    cout<<"Error: Player "<<selection<<" has already been selected. Please choose another player."<<endl;
                    already_selected=true;
                    break;
                }
            }
            if(!already_selected){
                valid_selection=true;
                selected_players[11+i]=selection;
                int index=selection-1;
                budget-=fl[index].getvalue();
                cout<<"Remaining budget: "<<budget<<"m"<<endl;
            }
        }
    }
}

cout<<"\nYour selected team is:\n";
for(int i=0;i<14;i++){
    int index=selected_players[i]-1;
    cout<<i+1<<". "<<fl[index].getname()<<" - "<<fl[index].getgoals()<<" (Assists: "<<fl[index].getassists()<<") - Market Value: "<<fl[index].getvalue()<<"m"<<endl;
}
cout<<"Total cost: "<<1500-budget<<"m\n";
cout<<"Remaining Budget : "<<budget<<"m\n";
    return 0;
}


void tournament()
{
	 char team_name[40];
	 cout<<"Enter the name of your team "<<endl;
      fflush(stdin);
	  cin.getline(team_name,20);
      
    
    
cout<<"Tournament is starting : "<<endl;
cout<<"Your team : "<<team_name<<endl;	
	
	
	
ifstream file("Project.txt");
int y;
file>>y;



cout<<"Results for the tournament are: "<<endl;
printf("\n\n");
if(isPrime(y)==true){
	if(y>4){
		y=y/2;
	}
		cout<<"Game 1: Won"<<endl<<"Game 2: Won"<<endl<<"Game 3: Lost"<<endl;
	cout<<"\nDetails: "<<endl;
	cout<<"Game 1: "<<endl<<"Your Team "<<y*2<<"|"<<y*1<<endl;
		cout<<"Game 2: "<<endl<<"Your Team "<<y*1<<"|"<<y*0<<" Opponent"<<endl;
				cout<<"Game 3: "<<endl<<"Your Team "<<y*1<<"|"<<(y*1)+1<<" Opponent"<<endl;

}
else if(y%2==0){
		if(y>4){
		y=y/2;
	}
	cout<<"Game 1: Won"<<endl<<"Game 2: Won"<<endl<<"Game 3: Won"<<endl;
	cout<<"\nDetails: "<<endl;
	
	if(y==2 || y==4){
			cout<<"Game 1: "<<endl<<"Your Team "<<y+2<<"|"<<y*1<<endl;
		cout<<"Game 2: "<<endl<<"Your Team "<<y*1<<"|"<<y*0<<" Opponent"<<endl;
				cout<<"Game 3: "<<endl<<"Your Team "<<(y*1)+1<<"|"<<y*0<<" Opponent"<<endl;

	}
	
	else{
		
	
	cout<<"Game 1: "<<endl<<"Your Team "<<y/2<<"|"<<y/3<<endl;
		cout<<"Game 2: "<<endl<<"Your Team "<<y/1<<"|"<<y/2<<" Opponent"<<endl;
						cout<<"Game 3: "<<endl<<"Your Team "<<y+1<<"|"<<y*0<<" Opponent"<<endl;
}

	
}
else{
		if(y>4){
		y=y/2;
	}
	cout<<"Game 1: Won"<<endl<<"Game 2: Lost"<<endl;
	cout<<"\nDetails: "<<endl;
	
	if(y==1 || y==3){
			cout<<"Game 1: "<<endl<<"Your Team "<<y+2<<"|"<<y*1<<endl;
		cout<<"Game 2: "<<endl<<"Your Team "<<y*0<<"|"<<y*1<<" Opponent"<<endl;

	}
	
	else{
		
	
	cout<<"Game 1: "<<endl<<"Your Team "<<y/2<<"|"<<y/3<<endl;
		cout<<"Game 2: "<<endl<<"Your Team "<<y/2<<"|"<<y/1<<" Opponent"<<endl;
}

}

file.close();

y++; //incrementing y
if(y<=0 || y>=9){
	y=1;
}

cout<<y;
 ofstream file2("Project.txt", ios::out);
 file2<<y;
 file2.close();
}
template <typename T>
match<int>* Barcelona_matches() 
{
    match<int> m1("Espanyol","Laliga","01:00","15th May","RCDE Stadium",34);
    static match<int> ma[1] = {m1};
    return ma;
}
template <typename T>
match<T>* RealMadrid_matches()
{
	match <string> m1("Getafe","Laliga","00:00","14th May","Santiago Bernabeu","34");
	match <string> m2("Manchester City","UEFA Champions League","00:00","10th May","Santiago Bernabeu","Semi-Finals 1st Leg");	
	static match<string> ma[2]={m2,m1};
	return ma;
}
template <typename T>
match<T>* Sevilla_matches()
{
	match <string> m1("Real Valladolid","Laliga","21:30","14th May","Jose Zorrilla","34");
	match <string> m2("Juventus","UEFA Europa League","00:00","12th May","Allianz Stadium","Semi-Finals 1st Leg");	
	static match<T> ma[2]={m2,m1};
	return ma;
}
template <typename T>
match<T>* AthleticoMadrid_matches()
{
	match <int> m1("Elche","Laliga","19:15","14th May","Martinez Valero",34);
	static match<T> ma[1]={m1};
	return ma;
}
template <typename T>
match<T>* Villarreal_matches()
{
	match <int> m1("Athletic Bilbao","Laliga","21:30","13th May","Estadio De la Cermica",34);
	static match<T> ma[1]={m1};
	return ma;
}
template <typename T>
match<T>* Valencia_matches()
{
	match <int> m1("Celta Vigo","Laliga","17:00","14th May","Balaidos",34);
	static match<T> ma[1]={m1};
	return ma;
}
template <typename T>
match<T>* RealBetis_matches()
{
	match <int> m1("Rayo Vallecano","Laliga","00:00","16th May","Benito Villamarin",34);
	static match<T> ma[1]={m1};
	return ma;
}
template <typename T>
match<T>* RealSociedad_matches()
{
	match <int> m1("Girona","Laliga","17:00","13th May","Reale Arena",34);
	static match<T> ma[1]={m1};
	return ma;
}
template <typename T>
match<T>* AthleticBilbao_matches()
{
	match <int> m1("Villareal","Laliga","21:30","13th May","Estadio De la Cermica",34);
	static match<T> ma[1]={m1};
	return ma;
}
/*
template <typename T>
match<int>* _matches()
{
	match <int> m1("","Seria A","","","",35);
	static match<int> ma[1]={m1};
	return ma;
}*/
template <typename T>
match<int>* BayernMunich_matches()
{
	match <int> m1("Schalke 04","Bundesliga","18:30","13th May","Allianz Arena",32);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<int>* BorussiaDortmund_matches()
{
	match <int> m1("Borussia Monchengladbach","Bundesliga","21:30","13th May","SIGNAL IDUNA PARK",32);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<string>* RBLeipzig_matches()
{
	match <string> m1("Werder Bermen","Bundesliga","20:30","14th May","Red Bull Arena","32");
	match <string> m2("Eintracht Frankfurt","DFB-Pokal","23:00","3rd June","Red Bull Arena","Final");
	static match<string> ma[2]={m1,m2};
	return ma;
}
template <typename T>
match<string>* EintrachtFrankfurt_matches()
{
	match <string> m1("Mainz 05","Bundesliga","18:30","13th May","Deutsche Bank Park","32");
	match <string> m2("Eintracht Frankfurt","DFB-Pokal","23:00","3rd June","Red Bull Arena","Final");
	static match<string> ma[2]={m1,m2};
	return ma;
}
template <typename T>
match<int>* BorussiaMonchengladbach_matches()
{
	match <int> m1("Borussia Dortmund","Bundesliga","21:30","13th May","SIGNAL IDUNA PARK",32);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<string>* Bayer04Leverkusen_matches()
{
	match <string> m1("VFB Stuttgart","Bundesliga","18:30","14th May","Mercedes-Benz Arena","32");
	match <string> m2("AS Roma","UEFA Europa League","00:00","12th May","Olimpico","Semi-Finals 1st Leg");
	static match<string> ma[2]={m2,m1};
	return ma;
}
template <typename T>
match<int>* Chelsea_matches()
{
	match <int> m1("Nottingham Forest","Premier League","19:00","13th May","Stamford Bridge",36);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<string>* ManchesterUnited_matches()
{
	match <string> m1("Wolverhampton Wanderers","Premier League","19:00","13th May","Old Trafford","36");
	match <string> m2("Manchester City","FA Cup","19:00","3rd June","Wembley Stadium","Final");
	static match<string> ma[2]={m1,m2};
	return ma;
}
template <typename T>
match<string>* ManchesterCity_matches()
{
	match <string> m1("Everton","Premier League","18:00","14th May","Goodison Park","36");
	match <string> m2("Manchester United","FA Cup","19:00","3rd June","Wembley Stadium","Final");
	match <string> m3("Real Madrid","UEFA Champions League","00:00","10th May","Santiago Bernabeu","Semi-Finals 1st Leg");
	static match<string> ma[3]={m3,m1,m2};
	return ma;
}
template <typename T>
match<int>* Liverpool_matches()
{
	match <int> m1("Leicester City","Premier League","00:00","16th May","King Power Stadium",36);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<int>* Arsenal_matches()
{
	match <int> m1("Brighton & Hove Albion","Premier League","20:30","14th May","Emirates Stadium",36);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<int>* TottenhamHotspurs_matches()
{
	match <int> m1("Aston Villa","Premier League","19:00","13th May","Villa Park",36);
	static match<int> ma[1]={m1};
	return ma;
}template <typename T>
match<int>* NewcastleUnited_matches()
{
	match <int> m1("Leeds United","Premier League","16:30","13th May","Elland Road",36);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<int>* AstonVilla_matches()
{
	match <int> m1("Tottenham Hotspurs","Premier League","19:00","13th May","Villa Park",36);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<int>* Brighton_matches()
{
	match <int> m1("Arsenal","Premier League","20:30","14th May","Emirates Stadium",36);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<int>* LeicesterCity_matches()
{
	match <int> m1("Liverpool","Premier League","00:00","16th May","King Power Stadium",36);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<string>* Juventus_matches()
{
	match <string> m1("Cremonese","Seria A","23:45","14th May","Allianz Stadium","35");
	match <string> m2("Sevilla","UEFA Europa League","00:00","12th May","Allianz Stadium","Semi-Finals 1st Leg");
	static match<string> ma[2]={m2,m1};
	return ma;
}
template <typename T>
match<int>* Napoli_matches()
{
	match <int> m1("Monza","Seria A","18:00","14th May","U-Power Stadium",35);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<string>* AcMilan_matches()
{
	match <string> m1("Spezia","Seria A","21:00","13th May","Alberto Picco","35");
	match <string> m2("Inter Milan","UEFA Champions League","00:00","11th May","Giuseppe Meazza","Semi-Finals 1st Leg");
	static match<string> ma[2]={m2,m1};
	return ma;
}
template <typename T>
match<string>* InterMilan_matches()
{
	match <string> m1("Sassuolo","Seria A","23:45","13th May","Giuseppe Meazza","35");
	match <string> m2("AC Milan","UEFA Champions League","00:00","11th May","Giuseppe Meazza","Semi-Finals 1st Leg");
	match <string> m3("Fiorentina","Coppa Italia","00:00","25th May","Olimpico","Final");
	static match<string> ma[3]={m1,m2,m3};
	return ma;
}
template <typename T>
match<string>* AsRoma_matches()
{
	match <string> m2("Bayern Leverkusen 04","UEFA Europa League","00:00","12th May","Olimpico","Semi-Finals 1st Leg");
	match <string> m1("Bologna","Seria A","21:00","14th May","Renato Dall'Ara","35");
	static match<string> ma[2]={m2,m1};
	return ma;
}
template <typename T>
match<int>* Lazio_matches()
{
	match <int> m1("Lecce","Seria A","23:45","12th May","Olimpico",35);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<int>* Atalanta_matches()
{
	match <int> m1("Salernitana","Seria A","18:00","13th May","Arechi",35);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<int>* ParisSaintGermain_matches()
{
	match <int> m1("Auxerre","Ligue 1 Uber Eats","23:45","21st May","Stade de I'Abbe-Deschamps",36);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename T>
match<int>* Lyon_matches()
{
	match <int> m1("AS Monaco","Ligue 1 Uber Eats","00:00","20th May","Groupama Stadium",36);
	static match<int> ma[1]={m1};
	return ma;
}
template <typename t>
class club
{
private:
	players *p;
	match<t> *m;
	coach manager;
	string owner;
	string stadium;
	string name;
	int trophies;
	int championsleague;
	int legauetitle;
	int wins;
	int losses;
	int squadvalue;
	int ties;
	int points;
	int position;
	int i;
	int matches;
	int capacity;
	float avgpoint;
public:
	club(players *p,match<t> *mi,coach e,string name,string owner,string stadium,int trophies,int championsleague,int legauetitle,int wins,int losses,int ties,int position,int w,int matches,int z)
	{
		int j;
		this->p=p;
		this->manager=e;
		this->i=w;
		this->name=name;
		this->matches=matches;
		this->capacity=z;
		m=new match<t>[w];
		for(j=0;j<i;j++)
		{
		 m[j]= mi[j];
	    }
	    this->squadvalue=p[0].totalvalue(p);
		this->owner=owner;
		this->stadium=stadium;
		this->trophies=trophies;
		this->championsleague=championsleague;
		this->legauetitle=legauetitle;
		this->wins=wins;
		this->losses=losses;
		this->ties=ties;
		this->position=position;
	}
	void setOwner(const string owner)
    {
        this->owner=owner;
    }
    void setStadium(const string stadium)
    {
        this->stadium=stadium;
    }
    void setTrophies(const int trophies)
    {
        this->trophies=trophies;
    }
    void setMatches(const int matches)
    {
        this->matches=matches;
    }
    void setAvgPoint(const float avgpoint)
    {
        this->avgpoint=avgpoint;
    }
    void setChampionsLeague(const int championsleague)
    {
        this->championsleague=championsleague;
    }
    void setLeagueTitle(const int legauetitle)
    {
        this->legauetitle=legauetitle;
    }
    void setWins(const int wins)
    {
        this->wins=wins;
    }
    void setLosses(const int losses)
    {
        this->losses=losses;
    }
    void setTies(const int ties)
    {
        this->ties=ties;
    }
    void setCapacity(const int capacity)
    {
        this->capacity=capacity;
    }
    void setPosition(const int position)
    {
        this->position=position;
    }
    const string getOwner() const
    {
        return owner;
    }
    const string getStadium() const
    {
        return stadium;
    }
    void increctrophies()
    {
    	++trophies;
	}
    int getTrophies() const
    {
        return trophies;
    }
    int getMatches() const
    {
        return matches;
    }
    void increcmatches()
    {
    	++matches;
	}
    float getAvgPoint() const
    {
        return avgpoint;
    }
    int getChampionsLeague() const
    {
        return championsleague;
    }
    int getLeagueTitle() const
    {
        return legauetitle;
    }
    void increchampionsleague()
    {
    	++championsleague;
    	increctrophies();
    	
	}
    void increleaguetitles()
    {
    	++legauetitle;
    	increctrophies();
	}
    int getWins() const
    {
        return wins;
    }
    int getLosses() const
    {
        return losses;
    }
    int getTies() const
    {
        return ties;
    }
    int getPosition() const
    {
        return position;
    }
    void decrePostion()
    {
    	--position;
	}
    void increPostion()
    {
    	++position;
	}
    void increLosses()
    {
    	++losses;
	}
    void increWins()
    {
    	++wins;
	}
    void increTies()
    {
    	++ties;
	}
    int getCapacity() const
    {
        return capacity;
    }
    void editclub()
    {
    	
	}
    float calculateavgage()
    {
    	float a=0;
    	int x;
    	for(x=0;x<25;x++)
    	{
    		a=a+p[x].getage();
		}
		return a/25;
	}
	void forgeinercalculation(string a)
	{
		int f=0;
		cout<<"FORGEIN PLAYERS"<<endl;
		cout<<"***************"<<endl;
		cout<<"\t\t\t\t\tPLAYERS INFO"<<endl;
        cout<<"\t\t\t\t\t************"<<endl<<endl;
        cout<<"   NAME           NATIONALITY        POSITION      AGE  NUMBER  MATCHES  GOALS  ASSISTS  MARKETVALUE    "<<endl;
		for(int x=0;x<25;x++)
		{
			if(p[x].getnationality()==a)
			{			
			}
			else 
			{
				cout<<f+1<<".";
                p[x].display();
                cout<<endl;
				f++;
			}
		}
		cout<<"\n\nNUMBER OF FORGEINERS"<<endl;
		cout<<"********************"<<endl;
		cout<<"The Total Amount Of Forgeiners In The Team Are : "<<f<<endl<<endl<<endl;
	}
	void pointcalculation()
	{
		points=3*wins+1*ties;
		avgpoint=points/matches;
		cout<<"MATCHES"<<endl;
		cout<<"*******"<<endl;
		cout<<"The Total Matches Played In All Competitions in 2022/2022 Season is : "<<matches<<endl;
		cout<<"The Total Matches Won In All Competitions in 2022/2022 Season is    : "<<wins<<endl;
		cout<<"The Total Matches Lost In All Competitions in 2022/2022 Season is   : "<<losses<<endl;
		cout<<"The Total Matches Tied In All Competitions in 2022/2022 Season is   : "<<ties<<endl<<endl<<endl;
		cout<<"POINTS"<<endl;
		cout<<"******"<<endl;
		cout<<"The Total Points Won In ALL Competitions in 2022/2023 Season is     : "<<points<<endl<<endl<<endl;
		cout<<"AVERAGE POINTS PER GAME"<<endl;
		cout<<"***********************"<<endl;
		cout<<"The Avg Points Acquired In ALL Competitions in 2022/2023 Season is  : "<<avgpoint<<endl<<endl<<endl;	
	}
	void mostassists()
	{
		cout<<"HIGHEST ASSISTS"<<endl;
		cout<<"***************"<<endl;
		int x;
		players p1,p2;
		p1.setassists(0);
		for(x=0;x<25;x++)
		{
			if(p[x].getassists()>p1.getassists())
			{
				p1=p[x];
			}
		}
		    cout<<"The PLayer With The Most Assists For "<<name<<" Is "<<endl;
			cout<<"Name : "<<p1.getname()<<endl;
			cout<<"Shirt Number : "<<p1.getnum()<<endl;
			cout<<"Age : "<<p1.getage()<<endl;
			cout<<"Nationality : "<<p1.getnationality()<<endl;
			cout<<"Total Assists : "<<p1.getassists()<<endl<<endl<<endl;
	}
	void mostgoals()
	{
		cout<<"HIGHEST GOALS"<<endl;
		cout<<"*************"<<endl;
		int x;
		players p1,p2;
		p1.setgoals(0);
		for(x=0;x<25;x++)
		{
			if(p[x].getgoals()>p1.getgoals())
			{
				p1=p[x];
			}
		}
		    cout<<"The PLayer With The Most Goals For "<<name<<" Is "<<endl;
			cout<<"Name : "<<p1.getname()<<endl;
			cout<<"Shirt Number : "<<p1.getnum()<<endl;
			cout<<"Age : "<<p1.getage()<<endl;
			cout<<"Nationality : "<<p1.getnationality()<<endl;
			cout<<"Total Goals : "<<p1.getgoals()<<endl<<endl<<endl;
	}
	void mostmatches()
	{
		cout<<"HIGHEST MATCHES"<<endl;
		cout<<"***************"<<endl;
		int x;
		players p1,p2;
		p1.setmatches(0);
		for(x=0;x<25;x++)
		{
			if(p[x].getmatches()>p1.getmatches())
			{
				p1=p[x];
			}
		}
		    cout<<"The PLayer With The Most Matches For "<<name<<" Is "<<endl;
			cout<<"Name : "<<p1.getname()<<endl;
			cout<<"Shirt Number : "<<p1.getnum()<<endl;
			cout<<"Age : "<<p1.getage()<<endl;
			cout<<"Nationality : "<<p1.getnationality()<<endl;
			cout<<"Total Matches : "<<p1.getmatches()<<endl<<endl<<endl;
	}
	void mostage()
	{
		cout<<"OLDEST PLAYER"<<endl;
		cout<<"*************"<<endl;
		int x;
		players p1,p2;
		p1.setage(0);
		for(x=0;x<25;x++)
		{
			if(p[x].getage()>p1.getage())
			{
				p1=p[x];
			}
		}
		    cout<<"The Oldest Player For "<<name<<" Is "<<endl;
			cout<<"Name : "<<p1.getname()<<endl;
			cout<<"Shirt Number : "<<p1.getnum()<<endl;
			cout<<"Nationality : "<<p1.getnationality()<<endl;
			cout<<"Age : "<<p1.getage()<<endl<<endl<<endl;		
	}
	void lessage()
	{
		cout<<"YOUNGEST PLAYER"<<endl;
		cout<<"***************"<<endl;
		int x;
		players p1,p2;
		p1.setage(100);
		for(x=0;x<25;x++)
		{
			if(p[x].getage()<p1.getage())
			{
				p1=p[x];
			}
		}
		    cout<<"The Youngest Player For "<<name<<" Is "<<endl;
			cout<<"Name : "<<p1.getname()<<endl;
			cout<<"Shirt Number : "<<p1.getnum()<<endl;
			cout<<"Nationality : "<<p1.getnationality()<<endl;
			cout<<"Age : "<<p1.getage()<<endl<<endl<<endl;		
	}
	void mostvalueable()
	{
		cout<<"VALUEABLE PLAYER"<<endl;
		cout<<"****************"<<endl;
		int x;
		players p1,p2;
		p1.setmatches(0);
		for(x=0;x<25;x++)
		{
			if(p[x].getvalue()>p1.getvalue())
			{
				p1=p[x];
			}
		}
		    cout<<"The PLayer With The Most Market Value For "<<name<<" Is "<<endl;
			cout<<"Name : "<<p1.getname()<<endl;
			cout<<"Shirt Number : "<<p1.getnum()<<endl;
			cout<<"Age : "<<p1.getage()<<endl;
			cout<<"Nationality : "<<p1.getnationality()<<endl;
			cout<<"Market Value : "<<p1.getvalue()<<"M"<<endl<<endl<<endl;
	}
	void mostga()
	{
		cout<<"HIGHEST GOALS+ASSISTS"<<endl;
		cout<<"*********************"<<endl;
		int x,ga;
		players p1,p2;
		p1.setgoals(0);
		p1.setassists(0);
		ga=0;
		for(x=0;x<25;x++)
		{
			if(p[x].getgoals()+p[x].getassists()>p1.getgoals()+p1.getassists())
			{
				p1=p[x];
			}
		}
		    cout<<"The PLayer With The Most Goals And Assists For "<<name<<" Is "<<endl;
			cout<<"Name : "<<p1.getname()<<endl;
			cout<<"Shirt Number : "<<p1.getnum()<<endl;
			cout<<"Age : "<<p1.getage()<<endl;
			cout<<"Nationality : "<<p1.getnationality()<<endl;
			cout<<"Total Goals : "<<p1.getgoals()<<endl;
			cout<<"Total Assists : "<<p1.getassists()<<endl;
			cout<<"Total Goals/Assists : "<<p1.getgoals()+p1.getassists()<<endl<<endl<<endl;
	}
	void detailpositions()
	{
		int a=0,b=0,c=0,d=0,x;
		for(x=0;x<25;x++)
		{
			if(p[x].getposition()=="Goalkeeper")
			{                      
				a++;
			}
			else if(p[x].getposition()=="Defender  ")
			{
				b++;
			}
			else if(p[x].getposition()=="Midfielder")
			{
				c++;
			}
			else if(p[x].getposition()=="Attacker  ")
			{
				++d;
			}
		}
			cout<<"PLAYERS POSITIONS"<<endl;
			cout<<"*****************"<<endl;
			cout<<"\nGOALKEEPERS"<<endl;
			cout<<"***********"<<endl;
			cout<<"Number Of Goalkeepers Are : "<<a<<endl;
			cout<<"\nDEFENDERS"<<endl;
			cout<<"**********"<<endl;
			cout<<"Number Of Defenders   Are : "<<b<<endl;
			cout<<"\nMIDFIELDERS"<<endl;
			cout<<"***********"<<endl;
			cout<<"Number Of Midfielders Are : "<<c<<endl;
			cout<<"\nATTACKERS"<<endl;
			cout<<"*********"<<endl;
			cout<<"Number Of Attackers   Are : "<<d<<endl<<endl<<endl;
	}
	float calculateavgvalue()
    {
    	float a=0;
    	int x;
    	for(x=0;x<25;x++)
    	{
    		a=a+p[x].getvalue();
		}
		return a/25;
	}
	void ClubMenu(string a)
	{
		int choice,c;
		cout<<"\n\nWelcome To The Menu Of "<<name<<endl<<endl;
		for(;;)
		{
		cout<<"Enter From The Following Choices"<<endl;
		cout<<"1-SQUAD DETAILS"<<endl;
		cout<<"2-CLUB TROPHIES"<<endl;
		cout<<"3-LEAGUE POSITION"<<endl;
		cout<<"4-MANAGER DETAILS"<<endl;
		cout<<"5-OWNER DETAILS"<<endl;
		cout<<"6-UPCOMING MATCHES"<<endl;
		cout<<"7-STADIUM"<<endl;
		cout<<"8-EXIT"<<endl;
		label:
		cout<<"\nChoice : ";
		cin>>choice;
		cout<<endl;
		if(choice==1)
		{
			cout<<"SQUAD DETAILS"<<endl;
			cout<<"*************"<<endl;
			cout<<"\t\t\t\t\tPLAYERS INFO"<<endl;
            cout<<"\t\t\t\t\t************"<<endl<<endl;
            cout<<"   NAME           NATIONALITY        POSITION      AGE  NUMBER  MATCHES  GOALS  ASSISTS  MARKETVALUE    "<<endl;
	        for(c=0;c<25;c++)
            {
    	        cout<<c+1<<".";
                p[c].display();
                cout<<endl;
            }
			mostassists();	
            mostgoals();
            mostmatches();
            mostage();
            lessage();
            mostvalueable();
            mostga();
            detailpositions();
            forgeinercalculation(a);
            cout<<"SQUAD VALUE"<<endl;
            cout<<"***********"<<endl;
            cout<<"The Total Squad Value Of "<<name<<" Is : "<<squadvalue<<"M"<<endl<<endl<<endl;
            cout<<"AVERAGE VALUE OF SQUAD"<<endl;
            cout<<"***********************"<<endl;
            cout<<"The Average Squad Value Of "<<name<<" Is : "<<calculateavgvalue()<<"M"<<endl<<endl<<endl;
            cout<<"AVERAGE AGE OF SQUAD"<<endl;
            cout<<"********************"<<endl;
            cout<<"The Average Squad Age Of "<<name<<" Is : "<<calculateavgage()<<endl<<endl<<endl;
		}
		else if(choice==2)
		{
			cout<<"TROPHY CABINET"<<endl;
			cout<<"**************"<<endl;
			cout<<"Welcome To The Trophy Cabinet Of "<<name<<endl<<endl;
			cout<<"TOTAL TROPHIES"<<endl;
			cout<<"**************"<<endl;
			cout<<"Total Trophies In All Competitions : "<<trophies<<endl<<endl;
			cout<<"CHAMPIONS LEAGUE TROPHIES"<<endl;
			cout<<"*************************"<<endl;
			cout<<"Total UEFA Champions Legaue Trophies : "<<championsleague<<endl<<endl;
			cout<<"LEAGUE TROPHIES"<<endl;
			cout<<"***************"<<endl;
			cout<<"Total League Trophies : "<<legauetitle<<endl<<endl;
		}
		else if(choice==3)
		{
			cout<<"CURRENT LEAGUE POSITION"<<endl;
			cout<<"***********************"<<endl;
			cout<<a<<"\b\b\b Tier 1"<<endl;
			cout<<"Current Position : "<<position<<endl<<endl;
			pointcalculation();		
		}
		else if(choice==4)
		{
			cout<<"COACH DETAILS"<<endl;
			cout<<"*************"<<endl;
			cout<<"NAME           NATIONALITY        POSITION       AGE  TROPHIES  DURATION   "<<endl;
			manager.display();
			cout<<endl<<endl;
		}
		else if(choice==5)
		{
			cout<<"\nOWNER"<<endl;
			cout<<"*****"<<endl;
			cout<<"Owner/President : "<<owner<<endl<<endl<<endl;
		}
		else if(choice==6)
		{
			cout<<"UPCOMING MATCHES"<<endl;
			cout<<"****************"<<endl<<endl;
			for(int x=0;x<i;x++)
			{
				if(m[x].getCompetition()=="Laliga"||m[x].getCompetition()=="Seria A"||m[x].getCompetition()=="Bundesliga"||m[x].getCompetition()=="Premier League"||m[x].getCompetition()=="Ligue 1 Uber Eats")
				{
					cout<<"LEAGUE MATCH"<<endl;
					cout<<"************"<<endl;
					m[x].printMatchInfo();
					cout<<endl<<endl;
				}
				else if(m[x].getCompetition()=="UEFA Champions League"||m[x].getCompetition()=="UEFA Europa League")
				{
					cout<<"CHAMPIONS LEAGUE"<<endl;
					cout<<"****************"<<endl;
					m[x].printMatchInfo();
					cout<<endl<<endl;
				}
				else if(m[x].getCompetition()=="FA Cup"||m[x].getCompetition()=="Coppa Italia")
				{
					cout<<"CUP "<<endl;
					cout<<"***"<<endl;
					m[x].printMatchInfo();
					cout<<endl<<endl;
				}
			}
		}
		else if(choice==7)
		{
			cout<<"STADIUM"<<endl;
			cout<<"*******"<<endl;
			cout<<"Stadium : "<<stadium<<endl<<endl;
			cout<<"CAPACITY"<<endl;
			cout<<"********"<<endl;
			cout<<"Capacity : "<<capacity<<"K PEOPLE"<<endl<<endl<<endl;
		}
		else if(choice==8)
		{
			break;
		}
		else 
		{
			cout<<"RE-ENTER A CORRECT OPTION FROM THE FOLLOWING"<<endl;
			cout<<"1-SQUAD DETAILS"<<endl;
		    cout<<"2-CLUB TROPHIES"<<endl;
		    cout<<"3-LEAGUE POSITION"<<endl;
		    cout<<"4-MANAGER DETAILS"<<endl;
		    cout<<"5-OWNER"<<endl;
			cout<<"6-UPCOMING MATCHES"<<endl;
		    cout<<"7-STADIUM"<<endl;
		    cout<<"8-EXIT"<<endl;
			goto label;
		}
	    }
	}
};
class Player
{
	protected:
	string name, club;
    int age;
    int pace;
    int passing;
    int physicality;
public:
   Player(int age, int pace, int passing, int physicality, string a, string b) {
    	name=a;
    	club=b;
        this->age = age;
        this->passing = passing;
        this->pace = pace;
        this->physicality = physicality;
    }

 void print(){
 	cout<<"Age: "<<age<<endl<<"Name: "<<name<<"      Club: "<<club<<endl;
 	cout<<"PAC: "<<pace<<"      PAS: "<<passing<<"      PHY: "<<physicality<<endl;
 }

    void changestats() {
        age=age+5;
        if(age<26){
        	pace=pace + (pace*0.05);
        	passing = passing + (passing * 0.04);
        	physicality=physicality + (physicality * 0.03);
		}
		 if(age>=26 && age<=32){
					pace=pace + (pace*0.025);
        	passing = passing + (passing * 0.02);
        	physicality=physicality + (physicality * 0.02);
		}
		if(age>32){
					pace=pace - (pace*0.025);
        	passing = passing - (passing * 0.02);
        	physicality=physicality - (physicality * 0.02);
    }

}
};

class Goalkeeper : public Player {
	    int shooting, handling;

public:
    Goalkeeper(string x, string y,int age, int a, int b, int c, int d, int e)
        : Player(age, a, b, c, x,y) {
        shooting = d;
        handling =e;
    }

  void changestats(){
  Player::changestats();
  if(age<26)
  shooting=shooting+(shooting*0.03);
    handling=handling+(handling*0.04);

  	 if(age>=26 && age<=32)
  shooting=shooting+(shooting*0.02);
    handling=handling+(handling*0.025);

   if(age>32)
  shooting=shooting-(shooting*0.03);
    handling=handling+(handling*0.04);

  }
  
  void print(){
  	Player::print();
  	cout<<"SHO: "<<shooting<<endl;
  	  	cout<<"HANDLING: "<<handling<<endl;

  	
  }
};

class Defender : public Player {
public:
    Defender(string x, string y,int age, int a, int b, int c, int d, int e)
        :Player(age, a, b, c,x,y) {
        tackling = d;
        defense=e;
    }

   
    void changestats(){
    	  Player::changestats();

    	if(age<26){
    		tackling = tackling + (tackling * 0.03);
    		defense = defense + (defense * 0.03);
		}
		if(age>=26 && age<=32){
			tackling = tackling + (tackling * 0.02);
    		defense = defense + (defense * 0.02);
			
		}
		if(age>32){
			tackling = tackling - (tackling * 0.03);
    		defense = defense - (defense * 0.02);
		}
	}
void print(){
	Player::print();
	cout<<"DEF: "<<defense<<"      TACKLING: "<<tackling<<endl;
}
private:
    int tackling, defense;
};

class Forward : public Player {
public:
    Forward(string x, string y, int age, int a, int b, int c, int d, int e)
        :Player(age, a, b, c, x,y) {
        dribbling = d;
        shooting=e;
    }

void print(){
	Player::print();
	cout<<"DRI: "<<dribbling<<"      SHO: "<<shooting<<endl;
}  

    void changestats() {
        Player::changestats();
 	if(age<26){
 		dribbling=dribbling + (dribbling*0.05);
 		shooting=shooting    + (shooting* 0.03);
		}
		if(age>=26 && age<=32){
			dribbling=dribbling + (dribbling*0.03);
 		shooting=shooting    + (shooting* 0.02);	
		}
		if(age>32){
				dribbling=dribbling - (dribbling*0.03);
 		shooting=shooting    -(shooting* 0.02);
		}
    }

private:
    int shooting, dribbling;
};

class midfielder : public Player {
public:
    midfielder(string x, string y, int age, int a, int b, int c, int d, int e)
        :Player(age, a, b, c, x,y) {
        attacking = d;
        defending=e;
    }

void print(){
	Player::print();
	cout<<"ATTACK: "<<attacking<<"      DEF: "<<defending<<endl;
}  

    void changestats() {
        Player::changestats();
 	if(age<26){
 		attacking=attacking + (attacking*0.05);
 		defending=defending    + (defending* 0.05);
		}
		if(age>=26 && age<=32)
		{
			attacking=attacking + (attacking*0.03);
 		defending=defending    + (defending* 0.03);	
		}
		if(age>32)
		{
		attacking=attacking - (attacking*0.03);
 		defending=defending    -(defending* 0.02);
		}
    }
    private:
    int attacking, defending;
};
void card()
{
	cout<<"WELCOME TO BUILD YOUR OWN LEGACY HERE YOU COULD SEE YOUR TRUE POTENTIAL"<<endl;
	cout<<"Enter The Position You Play In : "<<endl;
	monkey:
	printf("1-FORWARD\n2-DEFENDER\n3-GOALKEEPER\n4-MIDFIELDER");
    int ops;
    cout<<"\n\nCHOICE : ";
    cin>>ops;
    cout<<endl<<endl;

switch(ops)
{
	case 1:
		{
		cout<<"Enter Your Name : "<<endl;
		int a,b,c,d,e,f;
		string x,y;
		cin>>x;
		cout<<"\nEnter Your Favourite Club : "<<endl;
		cin>>y;
		cout<<"\nEnter Your Age : "<<endl;
try{
					cin>>a;
if(cin.fail())
throw a;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}		cout<<"\nNow Enter Stats of the Player"<<endl;
		cout<<"Enter Your Pace: "<<endl;
try{
					cin>>b;
if(cin.fail())
throw b;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}		cout<<"Enter Your Passing: "<<endl;
try{
					cin>>c;
if(cin.fail())
throw c;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}	
	cout<<"Enter Your Physiciality: "<<endl;
try{
					cin>>d;
if(cin.fail())
throw d;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}	
	cout<<"Enter Your Dribbling: "<<endl;
try{
					cin>>e;
if(cin.fail())
throw e;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}		cout<<"Enter Your Shooting: "<<endl;
try{
					cin>>f;
if(cin.fail())
throw f;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}	
	Forward f1(x,y,a,b,c,d,e,f);
		printf("\n\n");
		cout<<"Your Current Stats : "<<endl;
        f1.print();
        printf("\n\n");
        cout<<"Your Stats After 5 Years: "<<endl;
        f1.changestats();
        f1.print();
        break;
	}
	case 2:
	{
		cout<<"Enter Your Name : "<<endl;
		int a,b,c,d,e,f;
		string x,y;
		cin>>x;
		cout<<"Enter Your Favourite Club: "<<endl;
		cin>>y;
		cout<<"Enter Your Age : "<<endl;
try{
					cin>>a;
if(cin.fail())
throw 1;
		}
		catch(int a){
	cout<<"Invalid Input"<<endl;
}		cout<<"Now Enter Your Stats"<<endl;
		cout<<"Enter Your Pace : "<<endl;
		try{
					cin>>b;
if(cin.fail())
throw b;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}

		cout<<"Enter Your Passing : "<<endl;
try{
					cin>>c;
if(cin.fail())
throw c;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}		cout<<"Enter Your Physiciality: "<<endl;
try{
					cin>>d;
if(cin.fail())
throw d;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}		cout<<"Enter Your Tackling: "<<endl;
try{
					cin>>e;
if(cin.fail())
throw e;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}		cout<<"Enter Your Defense: "<<endl;
try{
					cin>>f;
if(cin.fail())
throw f;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}		Defender f1(x,y,a,b,c,d,e,f);
		printf("\n\n");
		cout<<"Your Current Stats :"<<endl;
        f1.print();
        printf("\n\n");
        cout<<"Your Stats After 5 Years: "<<endl;
        f1.changestats();
        f1.print();
		break;
		}
		case 3:
		{
		cout<<"Enter Your Name : "<<endl;
		int a,b,c,d,e,f;
		string x,y;
		cin>>x;
		cout<<"Enter Your Favourite Club: "<<endl;
		cin>>y;
		cout<<"Enter Your Age : "<<endl;
try{
					cin>>a;
if(cin.fail())
throw a;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}	
	cout<<"Now Enter Your Stats"<<endl;
		cout<<"Enter Your Pace : "<<endl;
try{
					cin>>b;
if(cin.fail())
throw b;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}	

	cout<<"Enter Your Passing: "<<endl;
try{
					cin>>c;
if(cin.fail())
throw c;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}	
	cout<<"Enter Your Physiciality: "<<endl;
try{
					cin>>d;
if(cin.fail())
throw d;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}		cout<<"Enter Your Shooting: "<<endl;
try{
					cin>>e;
if(cin.fail())
throw e;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}	
	cout<<"Enter Your Handling: "<<endl;
try{
					cin>>f;
if(cin.fail())
throw f;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}
		Goalkeeper f1(x,y,a,b,c,d,e,f);
		printf("\n\n");
		cout<<"Your Current Stats :"<<endl;
        f1.print();
        printf("\n\n");
        cout<<"Your Stats After 5 Years: "<<endl;
        f1.changestats();
        f1.print();
		break;
		}		
		case 4:
		{
		cout<<"Enter Your Name : "<<endl;
		int a,b,c,d,e,f;
		string x,y;
		cin>>x;
		cout<<"Enter Your Favourite Club : "<<endl;
		cin>>y;
		cout<<"Enter Your Age : "<<endl;
try{
					cin>>a;
if(cin.fail())
throw a;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}	
	cout<<"Now Enter Your Stats"<<endl;
		cout<<"Enter Your Pace : "<<endl;
try{
					cin>>b;
if(cin.fail())
throw b;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}		
cout<<"Enter Your Passing : "<<endl;
try{
					cin>>c;
if(cin.fail())
throw c;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}
		cout<<"Enter Your Physiciality : "<<endl;
try{
					cin>>d;
if(cin.fail())
throw d;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}
		cout<<"Enter Your Attacking : "<<endl;
try{
					cin>>e;
if(cin.fail())
throw e;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}
		cout<<"Enter Your Defending : "<<endl;
try{
					cin>>f;
if(cin.fail())
throw f;
		}
		catch(char a){
	cout<<"Invalid Input"<<endl;
}

		midfielder f1(x,y,a,b,c,d,e,f);
		printf("\n\n");
		cout<<"Your Current Stats :"<<endl;
        f1.print();
        printf("\n\n");
        cout<<"Your Stats After 5 Years: "<<endl;
        f1.changestats();
        f1.print();	
		break;
		}
		default:
			cout<<"ERROR: Invalid Choice!"<<endl;
			cout<<"RE-ENTER FROM THE GIVEN CHOICES"<<endl;
			goto monkey;
}


}
void suggestion()
{
int o;
int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0,k=0;
int choices[11];
int index=0;	
cout<<"We Welcome You To Our Assistant Who Would Suggest You A Suitable Team As Per Your Prefernece "<<endl;
peach:
cout<<"\nTRAIT AND ATTRIBUITES"<<endl;
cout<<"*********************"<<endl;	
cout<<"1-COUNTER ATTACKING\n2-AGGRESSIVE\n3-GOOD LINK UPS\n4-LOW BLOCK\n5-POSSESSION \n6-TIKI TAKKA \n7-SLOW BUILD UP \n8-FAST BUILD UP \n9-WING PLAY \n10-LONG BALLS \n11-ONE TOUCH PASSING \n12-CONFIRM AND EXIT"<<endl;
cout<<"Select From the Following Attributes: "<<endl;
cout<<"\nCHOICE : ";

while(o!=12)
{
	cin>>o;
	cout<<endl;
if(o<1 || o>12)
{
	cout<<"INVALID CHOICE ENTERED"<<endl;
	cout<<"RE-ENTER IT CORRECTLY"<<endl;
	goto peach;
}
	
	if(o==12)
	{
		choices[index]=o;
	    index++;
		break;
	}
if(o==1 && a==0)
{
	cout<<"Attribute Selected : COUNTER ATTACKING"<<endl;
	a++;
	choices[index]=o;
	index++;
}
else if(o==1 && a!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}
if(o==2 && b==0)
{
	cout<<"Attribute Selected : AGGRESSIVE"<<endl;
	b++;
	choices[index]=o;
	index++;
}
else if(o==2 && b!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}
if(o==3 && c==0)
{
	cout<<"Attribute Selected : GOOD LINK UPS"<<endl;
	c++;
	choices[index]=o;
	index++;
}
else if(o==3 && c!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}

if(o==4 && d==0)
{
	cout<<"Attribute Selected : LOW BLOCK"<<endl;
	d++;
	choices[index]=o;
	index++;
}
else if(o==4 && d!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}
if(o==5 && e==0)
{
	cout<<"Attribute Selected : POSSESSION"<<endl;
	e++;
	choices[index]=o;
	index++;
}
else if(o==5 && e!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}
if(o==6 && f==0)
{
	cout<<"Attribute Selected : TIKI TAKKA"<<endl;
	f++;
	choices[index]=o;
	index++;
}
else if(o==6 && f!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}
if(o==7 && g==0)
{
	cout<<"Attribute Selected : SLOW BUILD UP"<<endl;
	g++;
	choices[index]=o;
	index++;
}
else if(o==7 && g!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}
if(o==8 && h==0)
{
	cout<<"Attribute Selected : FAST BUILD UP"<<endl;
	h++;
	choices[index]=o;
	index++;
}
else if(o==8 && h!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}
if(o==9 && i==0)
{
	cout<<"Attribute Selected : WING PLAY"<<endl;
	i++;
	choices[index]=o;
	index++;
}
else if(o==9 && i!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}
if(o==10 && j==0)
{
	cout<<"Attribute Selected : LONG BALLS"<<endl;
	j++;
	choices[index]=o;
	index++;
}
else if(o==10 && j!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}
if(o==11 && k==0)
{
	cout<<"Attribute Selected : ONE TOUCH PASSING"<<endl;
	k++;
	choices[index]=o;
	index++;
}
else if(o==11 && k!=0)
{
	cout<<"Attribute Already Selected, Please Select Any Other Attribute"<<endl;
	goto peach;
}
}
//1-COUNTER ATTACKING\n
//2-AGGRESSIVE\n
//3-GOOD LINK UPS\n
//4-LOW BLOCK\n
//5-POSSESSION \n
//6-TIKI TAKKA \n
//7-SLOW BUILD UP \
//n8-FAST BUILD UP \
//n9-WING PLAY \n
//10-LONG BALLS
cout<<"HERE ARE SOME TEAMS WE SUGGEST YOU TO WATCH , ENJOY!"<<endl<<endl; 
for(int x=0;x<index;x++)
{                                 
    if(choices[x]==1 && (choices[x]==2||choices[x]==8))
	{
		cout<<"1-BAYER MUNICH"<<endl;
		cout<<"2-MANCHESTER UNITED"<<endl;
		cout<<"3-BORUSSIA DORTMUND"<<endl;
		cout<<"4-RB LEIPZIG"<<endl;
		cout<<"5-LIVERPOOL"<<endl;
		break;
	}                              
	else if(choices[x]==5 && choices[x]==6 && choices[x]==7)
	{
		cout<<"1-FC BARCELONA"<<endl;
		cout<<"2-MANCHESTER CITY"<<endl;
		cout<<"3-MANCHESTER UNITED"<<endl;
		break;
	}
	else if(choices[x]==2 && (choices[x]==5||choices[x]==7||choices[x]==9)) 
	{
		cout<<"1-FC BARCELONA"<<endl;
		cout<<"2-MANCHESTER CITY"<<endl;
		cout<<"3-MANCHESTER UNITED"<<endl;
		cout<<"4-PARIS SAINT GERMAIN"<<endl;
		cout<<"5-ARSENAL"<<endl;
		cout<<"6-BRIGHTON"<<endl;
		break;
	}
	else if((choices[x]==1||choices[x]==3)&&(choices[x]==8||choices[x]==11))
	{
		cout<<"1-REAL MADRID"<<endl;
		cout<<"2-AC MILAN"<<endl;
		cout<<"3-BAYER MUNICH"<<endl;
		break;
	}
	else if(choices[x]==1)
	{
		cout<<"1-BAYERN MUNICH"<<endl;
		cout<<"2-REAL MADRID"<<endl;
		cout<<"3-BORUSSIA DORTMUND"<<endl;
		cout<<"4-LIVERPOOL"<<endl;
		cout<<"5-TOTTENHAM HOTSPURS"<<endl;
		cout<<"6-CHELSEA"<<endl;
		cout<<"7-ATHELTICO MADRID"<<endl;
		cout<<"8-NAPOLI"<<endl;
		cout<<"9-AS ROMA"<<endl;
		cout<<"10-LAZIO"<<endl;
		cout<<"11-AC MILAN"<<endl;
		cout<<"12-JUVENTUS"<<endl;
		cout<<"13-PARIS SAINT GERMAIN"<<endl;
		break;
	}
	else if(choices[x]==2)
	{
		cout<<"1-FC BARCELONA"<<endl;
		cout<<"2-VILLARREAL"<<endl;
		cout<<"3-ATHLETIC BILBAO"<<endl;
		cout<<"4-REAL SOCIEDAD"<<endl;
		cout<<"5-BAYERN MUNICH"<<endl;
		cout<<"6-EINTRACHT FREANKFURT"<<endl;
		cout<<"7-BORUSSIA DORTMUND"<<endl;
		cout<<"8-LIVERPOOL"<<endl;
		cout<<"9-MANCHESTER CITY"<<endl;
		cout<<"10-MANCHETSER UNITED"<<endl;
		cout<<"11-NAPOLI"<<endl;
		cout<<"12-INTER MILAN"<<endl;
		cout<<"13-AC MILAN"<<endl;
		break;		
	}
	else if(choices[x]==3)
	{
		cout<<"1-BAYERN MUNICH"<<endl;
		cout<<"2-BORUSSIA DORTMUND"<<endl;
		cout<<"3-REAL MADRID"<<endl;
		cout<<"4-VILLARREAL"<<endl;
		cout<<"5-MANCHESTER CITY"<<endl;
		cout<<"6-LIVERPOOL"<<endl;
		cout<<"7-NAPOLI"<<endl;
		break;
	}
	else if(choices[x]==4)
	{
		cout<<"1-ATHETICO MADRID"<<endl;
		cout<<"2-SEVILLA"<<endl;
		cout<<"3-ATHELTIC BILBAO"<<endl;
		cout<<"4-REAL BETIS"<<endl;
		cout<<"5-ASTON VILLA"<<endl;
		cout<<"6-TOTTENHAM HOTSPURS"<<endl;
		cout<<"7-JUVENTUS"<<endl;
		break;	
	}
	else if(choices[x]==5)
	{
		cout<<"1-FC BARCELONA"<<endl;
		cout<<"2-MANCHESTER CITY"<<endl;
		cout<<"3-MANCHESTER UNITED"<<endl;
		cout<<"4-ARSENAL"<<endl;
		cout<<"5-LIVERPOOL"<<endl;
		cout<<"6-PARIS SAINT GERMAIN"<<endl;
		break;
	}
	else if(choices[x]==6)
	{
		cout<<"1-FC BARCELONA"<<endl;
		cout<<"2-REAL MADRID"<<endl;
		cout<<"3-VILLARREAL"<<endl;
		cout<<"4-ATHELTICO MADRID"<<endl;
		cout<<"5-MANCHESTER CITY"<<endl;
		cout<<"6-MANCHESTER UNITED"<<endl;
		cout<<"7-BAYERN MUNICH"<<endl;
		cout<<"8-AC MILAN"<<endl;
		cout<<"9-INTER MILAN"<<endl;
		break;
	}
	else if(choices[x]==7)
	{
		cout<<"1-FC BARCELONA"<<endl;
		cout<<"2-SEVILLA"<<endl;
		cout<<"3-MANCHESTER CITY"<<endl;
		cout<<"4-MANCHESTER UNITED"<<endl;
		cout<<"5-BRIGHTON"<<endl;
		cout<<"6-PARIS SAINT GERMAIN"<<endl;
		break;
	}
	else if(choices[x]==8)
	{
		cout<<"1-REAL MADRID"<<endl;
		cout<<"2-ATHLETICO MADRID"<<endl;
		cout<<"3-BAYERN MUNICH"<<endl;
		cout<<"4-BORUSSIA DORTMUND"<<endl;
		cout<<"5-AC MILAN"<<endl;
		cout<<"6-INTER MILAN"<<endl;
		break;
	}
	else if(choices[x]==9)
	{
		cout<<"1-FC BARCELONA"<<endl;
		cout<<"2-REAL MADRID"<<endl;
		cout<<"3-ATHELTICO MADRID"<<endl;
		cout<<"4-BAYERN MUNICH"<<endl;
		cout<<"5-BORUSSIA DORTMUND"<<endl;
		cout<<"6-RB LEIPZIG"<<endl;
		cout<<"7-BAYER 04 LEVERKUSEN"<<endl;
		cout<<"8-AC MILAN"<<endl;
		cout<<"9-INTER MILAN"<<endl;
		cout<<"10-NAPOLI"<<endl;
		cout<<"11-JUVENTUS"<<endl;
		cout<<"12-MANCHESTER CITY"<<endl;
		cout<<"13-MANCHESTER UNITED"<<endl;
		cout<<"14-LIVERPOOL"<<endl;
		cout<<"15-CHELSEA"<<endl;
		break;
	}
	else if(choices[x]==10)
	{
		cout<<"1-REAL MADRID"<<endl;
		cout<<"2-BAYERN MUNICH"<<endl;
		cout<<"3-BORUSSIA DORTMUND"<<endl;
		cout<<"4-LIVERPOOL"<<endl;
		cout<<"5-TOTTENHAM HOTSPURS"<<endl;
		cout<<"6-ASTON VILLA"<<endl;
		cout<<"7-NEWCASTLE"<<endl;
		cout<<"8-LAZIO"<<endl;
		cout<<"9-NAPOLI"<<endl;
		cout<<"10-AS ROMA"<<endl;
		cout<<"11-AC MILAN"<<endl;
		cout<<"12-JUVENTUS"<<endl;
		break;
	}
	else if(choices[x]==11)
	{
		cout<<"1-REAL MADRID"<<endl;
		cout<<"2-SEVILLA"<<endl;
		cout<<"3-BAYERN MUNICH"<<endl;
		cout<<"4-AC MILAN"<<endl;
		cout<<"5-AS ROMA"<<endl;
		cout<<"6-MANCHESTER CITY"<<endl;
		cout<<"7-MANCHESTER UNITED"<<endl;
		cout<<"8-LIVERPOOL"<<endl;
		cout<<"9-ARSENAL"<<endl;
		cout<<"10-PARIS SAINT GERMAIN"<<endl;
		break;
	}
	else
	{
		cout<<"ALL TEAMS"<<endl;
	}
}	
cout<<endl<<endl;
}
void menu(players fl[154])
{
	int x,op,po,oppo;
	for(;;)
	{
	cout<<"\nPlease Choose From The Following Options : "<<endl<<endl;
	cout<<"1-CLUB DETAILS\n2-FANTASY FOOTBALL\n3-TOURNAMENT\n4-DESIGN YOUR OWN CAREER\n5-TEAM SUGGESTIONS\n6-FOOTBALL QUIZ\n7-EXIT"<<endl;
	orange:
	cout<<"\nCHOICE : ";	
    cin>>op;
    cout<<endl<<endl;
	    if(op==1)
		{
			for(;;)
			{
			cout<<"SELECT A LEAGUE FROM THE FOLLOWING"<<endl<<endl;
			cout<<"1-LALIGA\n2-BUNDESLIGA\n3-PREMIER LEAGUE\n4-SERIA A\n5-LIGUE 1 UBER EATS\n6-EXIT"<<endl<<endl;
			apple:
			cout<<"CHOICE : ";
			cin>>po;
			cout<<endl<<endl;
			if(po==1)
			{
				for(;;)
				{
				cout<<"LALIGA SPAINISH LEAGUE"<<endl;
				cout<<"**********************"<<endl;
				cout<<"SELECT FROM THE FOLLOWING SPANISH TEAMS"<<endl<<endl;
				cout<<"1-FC BARCELONA"<<endl;
				cout<<"2-REAL MADRID"<<endl;
				cout<<"3-ATHLETICO MADRID"<<endl;
				cout<<"4-SEVILLA"<<endl;
				cout<<"5-VILLARREAL"<<endl;
				cout<<"6-VALENCIA"<<endl;
				cout<<"7-REAL BETIS"<<endl;
				cout<<"8-REAL SOCIEDAD"<<endl;
				cout<<"9-ATHLETIC BILBAO"<<endl;
				cout<<"10-EXIT"<<endl<<endl;
				banana:
				cout<<"CHOICE : ";
				cin>>oppo;
				if(oppo==1)
				{
					players* FCB_players=Barcelona_players();
                    coach FCB_coach=Barcelona_manager();
                    match<int>* FCB_match = Barcelona_matches<int>();
	                club<int> FCB(FCB_players,FCB_match,FCB_coach,"FC Barcelona","Joan Laporta","Spotify Camp Nou",98,5,26,34,8,6,1,1,48,99);
	                FCB.ClubMenu("Spain         ");
					
				}
				else if(oppo==2)
				{
					players* RMA_players=RealMadrid_players();
                    coach RMA_coach=RealMadrid_manager();
	                match<string>* RMA_match = RealMadrid_matches<string>();
	                club<string> RMA(RMA_players,RMA_match,RMA_coach,"Real Madrid","Florentino Perez","Santiago Bernabeu",99,14,32,38,10,7,3,2,55,81);
	                RMA.ClubMenu("Spain         ");
				}
				else if(oppo==3)
				{
					players* ATM_players=AthleticoMadrid_players();
                    coach ATM_coach=AthleticoMadrid_manager();
                    match<int>* ATM_match = AthleticoMadrid_matches<int>();
                    club<int> ATM(ATM_players,ATM_match,ATM_coach,"Athletico Madrid","Enrique Cerezo","Civitas Metropolitan",32,3,11,26,10,8,2,1,44,68);
                    ATM.ClubMenu("Spain         ");
				}
				else if(oppo==4)
				{
					players* SEV_players=Sevilla_players();
                    coach SEV_coach=Sevilla_manager();
                    match<string>* SEV_match = Sevilla_matches<string>();
                    club<string> SEV(SEV_players,SEV_match,SEV_coach,"Sevilla","Jose Castro","Ramon Sanchez-Pizjuan",18,6,1,20,19,11,11,2,50,43);
                    SEV.ClubMenu("Spain         ");					
				}
				else if(oppo==5)
				{
					players* VIL_players=Villarreal_players();
                    coach VIL_coach=Villarreal_manager();
                    match<int>* VIL_match = Villarreal_matches<int>();
                    club<int> VIL(VIL_players,VIL_match,VIL_coach,"Villarreal","Fernando Roig","Estadi de la Ceramica",1,1,0,25,14,8,5,1,47,24);
                    VIL.ClubMenu("Spain         ");					
				}
				else if(oppo==6)
				{
					players* VAL_players=Valencia_players();
                    coach VAL_coach=Valencia_manager();
                    match<int>* VAL_match = Valencia_matches<int>();
                    club<int> VAL(VAL_players,VAL_match,VAL_coach,"Valencia","Layhoon Chan","Mestalla",23,1,6,11,19,7,17,1,37,49);
                    VAL.ClubMenu("Spain         ");					
				}
				else if(oppo==7)
				{
					players* BET_players=RealBetis_players();
                    coach BET_coach=RealBetis_manager();
                    match<int>* BET_match = RealBetis_matches<int>();
	                club<int> BET(BET_players,BET_match,BET_coach,"Real Betis","Angel Haro","Benito Villamarin",11,0,1,21,15,8,6,1,44,60);
	                BET.ClubMenu("Spain         ");					
				}
				else if(oppo==8)
				{
					players* SOC_players=RealSociedad_players();
                    coach SOC_coach=RealSociedad_manager();
                    match<int>* SOC_match = RealSociedad_matches<int>();
	                club<int> SOC(SOC_players,SOC_match,SOC_coach,"Real Sociedad","Jokin Aperribay","Reale Arena",12,0,2,27,11,8,4,1,46,39);
					SOC.ClubMenu("Spain         ");					
				}
				else if(oppo==9)
				{
					players* ATB_players=AthleticBilbao_players();
                    coach ATB_coach=AthleticBilbao_manager();
                    match<int>* ATB_match = AthleticBilbao_matches<int>();
                    club <int> ATB(ATB_players,ATB_match,ATB_coach,"Athletic Bilbao","Jon Uriarte","San Mames",35,0,8,18,13,8,7,1,39,52);
					ATB.ClubMenu("Spain         ");					
				}
				else if(oppo==10)
				{
					break;
				}
				else 
				{
					cout<<"RE-ENTER THE CORRECT CHOICE "<<endl;
			        goto banana;
				}				 
			    }
			}
			else if(po==2)
			{
				for(;;)
				{
				cout<<"BUNDESLIGA GERMAN LEAGUE"<<endl;
				cout<<"************************"<<endl;
				cout<<"SELECT FROM THE FOLLOWING TEAMS"<<endl<<endl;
				cout<<"1-BAYERN MUNICH"<<endl;
				cout<<"2-BORUSSIA DORTMUND"<<endl;
				cout<<"3-RB LEIPZIG"<<endl;
				cout<<"4-EINTRACHT FRANKFURT"<<endl;
				cout<<"5-BORUSSIA MONCHENGLADBACH"<<endl;
				cout<<"6-BAYER 04 LEVERKUSEN"<<endl;
				cout<<"7-EXIT"<<endl<<endl;
				grapes:
				cout<<"CHOICE : ";
				cin>>oppo;
				if(oppo==1)
				{
					players* BAY_players=BayernMunich_players();
                    coach BAY_coach=BayernMunich_manager();
                    match<int>* BAY_match = BayernMunich_matches<int>();
                    club<int> BAY(BAY_players,BAY_match,BAY_coach,"Bayern Munich","Herbert Hainer","Allianz Arena",82,6,32,31,6,9,1,1,46,75);
                    BAY.ClubMenu("Germany       ");
				}
				else if(oppo==2)
				{
					players* BVB_players=BorussiaDortmund_players();
                    coach BVB_coach=BorussiaDortmund_manager();
                    match<int>* BVB_match = BorussiaDortmund_matches<int>();
                    club<int> BVB(BVB_players,BVB_match,BVB_coach,"Borussia Dortmund","Reinhold Lunow","Signal Iduna Park",24,1,8,26,10,7,2,1,43,81);
                    BVB.ClubMenu("Germany       ");
				}
				else if(oppo==3)
				{
					players* RBL_players=RBLeipzig_players();
                    coach RBL_coach=RBLeipzig_manager();
                    match<string>* RBL_match = RBLeipzig_matches<int>();
                    club<string> RBL(RBL_players,RBL_match,RBL_coach,"Red Bull Leipzig","Red Bull GmbH","Red Bull Arena",4,0,0,26,12,7,3,2,45,47);
                    RBL.ClubMenu("Germany       ");
				}
				else if(oppo==4)
				{
					players* FRA_players=EintrachtFrankfurt_players();
                    coach FRA_coach=EintrachtFrankfurt_manager();
	                match<string>* FRA_match = EintrachtFrankfurt_matches<int>();
	                club<string> FRA(FRA_players,FRA_match,FRA_coach,"Eintracht Frankfurt","Peter Fischer","Deutsche Bank Park",10,1,1,19,15,11,9,2,45,52);
	                FRA.ClubMenu("Germany       ");	
				}
				else if(oppo==5)
				{
					players* BOM_players=BorussiaMonchengladbach_players();
                    coach BOM_coach=BorussiaMonchengladbach_manager();
	                match<int>* BOM_match = BorussiaMonchengladbach_matches<int>();
	                club<int> BOM(BOM_players,BOM_match,BOM_coach,"Borussia Monchengladbach","Rolf Konigs","BORUSSIA-PARK",12,2,5,11,13,9,10,1,33,54);
	                BOM.ClubMenu("Germany       ");
				}
				else if(oppo==6)
				{
					players* BAL_players=Bayer04Leverkusen_players();
                    coach BAL_coach=Bayer04Leverkusen_manager();
                    match<string>* BAL_match = Bayer04Leverkusen_matches<string>();
                    club<string> BAL(BAL_players,BAL_match,BAL_coach,"Bayer 04 Leverkusen","Bayer AG","BayArena",3,1,0,19,16,9,6,2,44,30);
                    BAL.ClubMenu("Germany       ");
				}
				else if(oppo==7)
				{
					break;
				}
				else 
				{
					cout<<"RE-ENTER THE CORRECT CHOICE "<<endl;
			        goto grapes;
				}
			    }
		    }
		    else if(po==3)
		    {
				for(;;)
				{
				cout<<"PREMIER LEAGUE ENGLISH LEAGUE"<<endl;
				cout<<"**********************"<<endl;
				cout<<"SELECT FROM THE FOLLOWING ENGLISH TEAMS"<<endl<<endl;
				cout<<"1-CHELSEA"<<endl;
				cout<<"2-MANCHESTER UNITED"<<endl;
				cout<<"3-MANCHETER CITY"<<endl;
				cout<<"4-LIVERPOOL"<<endl;
				cout<<"5-ARSENAL"<<endl;
				cout<<"6-TOTTENHAM SPURS"<<endl;
				cout<<"7-NEWCASTLE UNITED"<<endl;
				cout<<"8-ASTON VILLA"<<endl;
				cout<<"9-BRIGHTON"<<endl;
				cout<<"10-LIECESTER CITY"<<endl;
				cout<<"11-EXIT"<<endl<<endl;
				beet:
				cout<<"CHOICE : ";
				cin>>oppo;
			    if(oppo==1)
			    {
			    	players* CHE_players=Chelsea_players();
                    coach CHE_coach=Chelsea_manager();
                    match<int>* CHE_match = Chelsea_matches<int>();
                    club<int> CHE(CHE_players,CHE_match,CHE_coach,"Chelsea","Todd Boehly","Stamford Bridge",34,4,6,16,20,10,11,1,46,40);
                    CHE.ClubMenu("England       ");
				}
				else if(oppo==2)
				{
					players* MUN_players=ManchesterUnited_players();
                    coach MUN_coach=ManchesterUnited_manager();
                    match<string>* MUN_match = ManchesterUnited_matches<string>();
                    club<string> MUN(MUN_players,MUN_match,MUN_coach,"Manchester United","The Glazers","Old Trafford",61,3,20,38,11,8,4,2,57,75);
                    MUN.ClubMenu("England       ");
				}
				else if(oppo==3)
				{
					players* MCI_players=ManchesterCity_players();
                    coach MCI_coach=ManchesterCity_manager();
                    match<string>* MCI_match = ManchesterCity_matches<string>(); 
                	club<string> MCI(MCI_players,MCI_match,MCI_coach,"Manchester City","Sheikh Mansour","The Etihad",36,0,8,39,6,9,1,3,54,55);
	                MCI.ClubMenu("England       ");
				}
				else if(oppo==4)
				{
					players* LIV_players=Liverpool_players();
                    coach LIV_coach=Liverpool_manager();
	                match<int>* LIV_match = Liverpool_matches<int>();
	                club<int> LIV(LIV_players,LIV_match,LIV_coach,"Liverpool","Fenway Sports Group","Anfield",70,6,19,26,14,9,5,1,49,54);
	                LIV.ClubMenu("England       ");
				}
				else if(oppo==5)
				{
					players* ARS_players=Arsenal_players();
                    coach ARS_coach=Arsenal_manager();
                    match<int>* ARS_match = Arsenal_matches<int>();
                	club<int> ARS(ARS_players,ARS_match,ARS_coach,"Arsenal","Stan Kroenke","Emirates",47,0,13,31,8,7,2,1,46,61);
	                ARS.ClubMenu("England       ");
				}
				else if(oppo==6)
				{
					players* SPU_players=TottenhamHotspurs_players();
                    coach SPU_coach=TottenhamHotspurs_manager();
	                match<int>* SPU_match = TottenhamHotspurs_matches<int>();
	                club<int> SPU(SPU_players,SPU_match,SPU_coach,"Tottenham Hotspurs","ENIC Group","Tottenham Hotspur Stadium",26,0,2,22,16,9,6,1,47,62);
	                SPU.ClubMenu("England       ");
				}
				else if(oppo==7)
				{
					players* NEW_players=NewcastleUnited_players();
                    coach NEW_coach=NewcastleUnited_manager();
	                match<int>* NEW_match = NewcastleUnited_matches<int>();
	                club<int> NEW(NEW_players,NEW_match,NEW_coach,"Newcastle United","Public Investment Fund","St. James' Park",16,0,4,24,7,11,3,1,42,52);
	                NEW.ClubMenu("England       ");
				}
				else if(oppo==8)
				{
					players* ATV_players=AstonVilla_players();
                    coach ATV_coach=AstonVilla_manager();
	                match<int>* ATV_match = AstonVilla_matches<int>();
	                club<int> ATV(ATV_players,ATV_match,ATV_coach,"Aston Villa","Nassef Sawiris Wes Edens","Villa Park",24,2,7,17,15,6,8,1,38,43);
	                ATV.ClubMenu("England       ");
				}
				else if(oppo==9)
				{
					players* BRI_players=Brighton_players();
                    coach BRI_coach=Brighton_manager();
	                match<int>* BRI_match = Brighton_matches<int>();
	                club<int> BRI(BRI_players,BRI_match,BRI_coach,"Brighton","Tony Bloom","American Express Community",5,0,0,22,12,7,7,1,41,32);
	                BRI.ClubMenu("England       ");
				}
				else if(oppo==10)
				{
					players* LIE_players=LeicesterCity_players();
                    coach LIE_coach=LeicesterCity_manager();
                    match<int>* LIE_match = LeicesterCity_matches<int>();
                    club<int> LIE(LIE_players,LIE_match,LIE_coach,"Leicester City","King Power","King Power",15,0,1,13,23,6,18,1,45,32);
                    LIE.ClubMenu("England       ");
				}
				else if(oppo==11)
				{
					break;
				}
				else 
				{
					cout<<"RE-ENTER THE CORRECT CHOICE "<<endl;
			        goto beet;
				}
				
			    }//loop
			  }//po
			  else if(po==4)
			  {
			  	for(;;)
				{
				cout<<"SERIA A ITALIAN LEAGUE"<<endl;
				cout<<"**********************"<<endl;
				cout<<"SELECT FROM THE FOLLOWING ITALIAN TEAMS"<<endl<<endl;
				cout<<"1-JUVENTUS"<<endl;
				cout<<"2-NAPOLI"<<endl;
				cout<<"3-AC MILAN"<<endl;
				cout<<"4-INTER MILAN"<<endl;
				cout<<"5-AS ROMA"<<endl;
				cout<<"6-LAZIO"<<endl;
				cout<<"7-ATALANTA"<<endl;
				cout<<"8-EXIT"<<endl<<endl;
				carrot:
				cout<<"CHOICE : ";
				cin>>oppo;
			    if(oppo==1)
			    {
			    	players* JUV_players=Juventus_players();
                    coach JUV_coach=Juventus_manager();
	                match<string>* JUV_match = Juventus_matches<string>();
	                club<string> JUV(JUV_players,JUV_match,JUV_coach,"Juventus","Agnelli family","Allianz",70,2,36,27,14,9,2,2,50,41);
	                JUV.ClubMenu("Italy         ");
				}
				else if(oppo=2)
				{
					players* NAP_players=Napoli_players();
                    coach NAP_coach=Napoli_manager();
	                match<int>* NAP_match = Napoli_matches<int>();
	                club<int> NAP(NAP_players,NAP_match,NAP_coach,"Napoli","Aurelio De Laurentiis","Diego Armando Maradona Stadium",14,1,3,33,6,6,1,1,45,54);
	                NAP.ClubMenu("Italy         ");
					
				}
				else if(oppo=3)
				{
					players* ACM_players=AcMilan_players();
                    coach ACM_coach=AcMilan_manager();
	                match<string>* ACM_match = AcMilan_matches<string>();
	                club<string> ACM(ACM_players,ACM_match,ACM_coach,"AC Milan","RedBird Capital Partners","San Siro",52,19,7,22,12,13,5,2,47,76);
	                ACM.ClubMenu("Italy         ");
				}
				else if(oppo=4)
				{
					players* INT_players=InterMilan_players();
                    coach INT_coach=InterMilan_manager();
	                match<string>* INT_match = InterMilan_matches<string>();
	                club<string> INT(INT_players,INT_match,INT_coach,"Inter Milan","Suning Holdings Group","San Siro",40,3,19,30,13,7,4,3,50,76);
	                INT.ClubMenu("Italy         ");
				}
				else if(oppo=5)
				{
					players* ASR_players=AsRoma_players();
                    coach ASR_coach=AsRoma_manager();
	                match<string>* ASR_match = AsRoma_matches<string>();
	                club <string> ASR(ASR_players,ASR_match,ASR_coach,"AS Roma","The Friedkin Group, Inc.","Stadio Olimpico",17,1,3,24,15,9,7,2,48,74);
	                ASR.ClubMenu("Italy         ");
				}
				else if(oppo=6)
				{
					players* LAZ_players=Lazio_players();
                    coach LAZ_coach=Lazio_manager();
	                match<int>* LAZ_match = Lazio_matches<int>();
	                club<int> LAZ(LAZ_players,LAZ_match,LAZ_coach,"Lazio","Claudio Lotito","Stadio Olimpico",17,1,2,23,13,10,3,1,46,73);
	                LAZ.ClubMenu("Italy         ");
				}
				else if(oppo=7)
				{
					players* ATA_players=Atalanta_players();
                    coach ATA_coach=Atalanta_manager();
                    match<int>* ATA_match = Atalanta_matches<int>();
                    club<int> ATA(ATA_players,ATA_match,ATA_coach,"Atalanta","Stephen Pagliuca","Gewiss",7,0,0,18,11,7,6,1,36,22);
                    ATA.ClubMenu("Italy         ");
				}
				else if(oppo=8)
				{
					break;
				}
				else
				{
					cout<<"RE-ENTER THE CORRECT CHOICE "<<endl;
			        goto carrot;
				}
				}
			  }
			  else if(po==5)
			  {
			  	for(;;)
				{
				cout<<"SERIA A ITALIAN LEAGUE"<<endl;
				cout<<"**********************"<<endl;
				cout<<"SELECT FROM THE FOLLOWING ITALIAN TEAMS"<<endl<<endl;
				cout<<"1-PARIS SAINT GERMAIN"<<endl;
				cout<<"2-OLYMPIQUE LYONNAIS"<<endl;
				cout<<"3-EXIT"<<endl<<endl;
				mango:
				cout<<"CHOICE : ";
				cin>>oppo;
			    if(oppo==1)
			    {
			    	players* PSG_players=ParisSaintGermain_players();
                    coach PSG_coach=ParisSaintGermain_manager();
	                match<int>* PSG_match = ParisSaintGermain_matches<int>();
	                club<int> PSG(PSG_players,PSG_match,PSG_coach,"Paris Saint Germain","Nasser Al-Khelaifi","Le Parc des Princes",45,0,10,32,9,5,1,1,46,50);
	                PSG.ClubMenu("France        ");
				}
				else if(oppo==2)
				{
				    players* LYO_players=Lyon_players();
                    coach LYO_coach=Lyon_manager();
                    match<int>* LYO_match = Lyon_matches<int>();
                    club<int> LYO(LYO_players,LYO_match,LYO_coach,"Olympique Lyonnais","John Textor","Groupama",20,0,7,20,11,8,7,1,39,59);
                    LYO.ClubMenu("France        ");
				}
				else if(oppo==3)
				{
					break;
				}
				else 
				{
				    cout<<"RE-ENTER THE CORRECT CHOICE "<<endl;
					goto mango;
				}
				
				}			  	
			  }
			else if(po==6)
			{
				break;
			}
			else
			{
				cout<<"RE-ENTER THE CORRECT CHOICE "<<endl;
				goto apple;
			}
			}//oploop
	    
		}//op
	    else if(op==2)
		{
	      x=fantasy(fl);
		}
	    else if(op==3)
		{
		tournament();
		}
		else if(op==4)
		{
			card();
		}
		else if(op==5)
		{
			suggestion();
		}
		else if(op==6)
		{
        quiz player1, player2;
        cout<<"Player 1 :"<<endl;
        player1.menu_driven();
        cout<<"Player 2 :"<<endl;
        player2.menu_driven();
        int total_points = player1 + player2;
        cout << "Total points: " << total_points/2 << endl;
		}
		//else if(op==7)
		//{
		//	editor_func();
		//}
		else if(op==7)
		{
			break;
		}
		else 
		{
			cout<<"RE-ENTER THE CORRECT CHOICE "<<endl;
			goto orange;
		}
    }

}
int main() 
{
	cout<<"WELCOME TO FUT STATS"<<endl;
    int i;
	players* FCB_players=Barcelona_players();
    coach FCB_coach=Barcelona_manager();
    match<int>* FCB_match = Barcelona_matches<int>();
	club<int> FCB(FCB_players,FCB_match,FCB_coach,"FC Barcelona","Joan Laporta","Spotify Camp Nou",98,5,26,34,8,6,1,1,48,99);
	//FCB.ClubMenu("Spain         ");
	
	players* RMA_players=RealMadrid_players();
	coach RMA_coach=RealMadrid_manager();
	match<string>* RMA_match = RealMadrid_matches<string>();
	club<string> RMA(RMA_players,RMA_match,RMA_coach,"Real Madrid","Florentino Perez","Santiago Bernabeu",99,14,32,38,10,7,3,2,55,81);
	//RMA.ClubMenu("Spain         ");
	//RMA_match[1].editmatch();
	//RMA_match[1].printMatchInfo();
	players* ATM_players=AthleticoMadrid_players();
    coach ATM_coach=AthleticoMadrid_manager();
    match<int>* ATM_match = AthleticoMadrid_matches<int>();
    club<int> ATM(ATM_players,ATM_match,ATM_coach,"Athletico Madrid","Enrique Cerezo","Civitas Metropolitan",32,3,11,26,10,8,2,1,44,68);
    //ATM.ClubMenu("Spain         ");
    
	players* SEV_players=Sevilla_players();
    coach SEV_coach=Sevilla_manager();
    match<string>* SEV_match = Sevilla_matches<string>();
    club<string> SEV(SEV_players,SEV_match,SEV_coach,"Sevilla","Jose Castro","Ramon Sanchez-Pizjuan",18,6,1,20,19,11,11,2,50,43);
    //SEV.ClubMenu("Spain         ");
    
	players* VIL_players=Villarreal_players();
    coach VIL_coach=Villarreal_manager();
    match<int>* VIL_match = Villarreal_matches<int>();
    club<int> VIL(VIL_players,VIL_match,VIL_coach,"Villarreal","Fernando Roig","Estadi de la Ceramica",1,1,0,25,14,8,5,1,47,24);
    
    
	players* VAL_players=Valencia_players();
    coach VAL_coach=Valencia_manager();
    match<int>* VAL_match = Valencia_matches<int>();
    club<int> VAL(VAL_players,VAL_match,VAL_coach,"Valencia","Layhoon Chan","Mestalla",23,1,6,11,19,7,17,1,37,49);
    
    
	players* BET_players=RealBetis_players();
    coach BET_coach=RealBetis_manager();
    match<int>* BET_match = RealBetis_matches<int>();
	club<int> BET(BET_players,BET_match,BET_coach,"Real Betis","Angel Haro","Benito Villamarin",11,0,1,21,15,8,6,1,44,60);
	
	
	players* SOC_players=RealSociedad_players();
    coach SOC_coach=RealSociedad_manager();
    match<int>* SOC_match = RealSociedad_matches<int>();
	club<int> SOC(SOC_players,SOC_match,SOC_coach,"Real Sociedad","Jokin Aperribay","Reale Arena",12,0,2,27,11,8,4,1,46,39);
	
	
	players* ATB_players=AthleticBilbao_players();
    coach ATB_coach=AthleticBilbao_manager();
    match<int>* ATB_match = AthleticBilbao_matches<int>();
    club <int> ATB(ATB_players,ATB_match,ATB_coach,"Athletic Bilbao","Jon Uriarte","San Mames",35,0,8,18,13,8,7,1,39,52);
    
	players* BAY_players=BayernMunich_players();
    coach BAY_coach=BayernMunich_manager();
    match<int>* BAY_match = BayernMunich_matches<int>();
    club<int> BAY(BAY_players,BAY_match,BAY_coach,"Bayern Munich","Herbert Hainer","Allianz Arena",82,6,32,31,6,9,1,1,46,75);
    //BAY.ClubMenu("Germany       ");
    
    
	players* BVB_players=BorussiaDortmund_players();
    coach BVB_coach=BorussiaDortmund_manager();
    match<int>* BVB_match = BorussiaDortmund_matches<int>();
    club<int> BVB(BVB_players,BVB_match,BVB_coach,"Borussia Dortmund","Reinhold Lunow","Signal Iduna Park",24,1,8,26,10,7,2,1,43,81);
    
    
	players* RBL_players=RBLeipzig_players();
    coach RBL_coach=RBLeipzig_manager();
    match<string>* RBL_match = RBLeipzig_matches<int>();
    club<string> RBL(RBL_players,RBL_match,RBL_coach,"Red Bull Leipzig","Red Bull GmbH","Red Bull Arena",4,0,0,26,12,7,3,2,45,47);
    //RBL.ClubMenu("Germany       ");
    
	players* FRA_players=EintrachtFrankfurt_players();
    coach FRA_coach=EintrachtFrankfurt_manager();
	match<string>* FRA_match = EintrachtFrankfurt_matches<int>();
	club<string> FRA(FRA_players,FRA_match,FRA_coach,"Eintracht Frankfurt","Peter Fischer","Deutsche Bank Park",10,1,1,19,15,11,9,2,45,52);
		
	players* BOM_players=BorussiaMonchengladbach_players();
    coach BOM_coach=BorussiaMonchengladbach_manager();
	match<int>* BOM_match = BorussiaMonchengladbach_matches<int>();
	club<int> BOM(BOM_players,BOM_match,BOM_coach,"Borussia Monchengladbach","Rolf Konigs","BORUSSIA-PARK",12,2,5,11,13,9,10,1,33,54);
	
	
	players* BAL_players=Bayer04Leverkusen_players();
    coach BAL_coach=Bayer04Leverkusen_manager();
    match<string>* BAL_match = Bayer04Leverkusen_matches<string>();
    club<string> BAL(BAL_players,BAL_match,BAL_coach,"Bayer 04 Leverkusen","Bayer AG","BayArena",3,1,0,19,16,9,6,2,44,30);
    

    players* CHE_players=Chelsea_players();
    coach CHE_coach=Chelsea_manager();
    match<int>* CHE_match = Chelsea_matches<int>();
    club<int> CHE(CHE_players,CHE_match,CHE_coach,"Chelsea","Todd Boehly","Stamford Bridge",34,4,6,16,20,10,11,1,46,40);
    

	players* MUN_players=ManchesterUnited_players();
    coach MUN_coach=ManchesterUnited_manager();
    match<string>* MUN_match = ManchesterUnited_matches<string>();
    club<string> MUN(MUN_players,MUN_match,MUN_coach,"Manchester United","The Glazers","Old Trafford",61,3,20,38,11,8,4,2,57,75);

    
	players* MCI_players=ManchesterCity_players();
    coach MCI_coach=ManchesterCity_manager();
	match<string>* MCI_match = ManchesterCity_matches<string>();
	club<string> MCI(MCI_players,MCI_match,MCI_coach,"Manchester City","Sheikh Mansour","The Etihad",36,0,8,39,6,9,1,3,54,55);

	players* LIV_players=Liverpool_players();
    coach LIV_coach=Liverpool_manager();
	match<int>* LIV_match = Liverpool_matches<int>();
	club<int> LIV(LIV_players,LIV_match,LIV_coach,"Liverpool","Fenway Sports Group","Anfield",70,6,19,26,14,9,5,1,49,54);
		
	players* ARS_players=Arsenal_players();
    coach ARS_coach=Arsenal_manager();
	match<int>* ARS_match = Arsenal_matches<int>();
	club<int> ARS(ARS_players,ARS_match,ARS_coach,"Arsenal","Stan Kroenke","Emirates",47,0,13,31,8,7,2,1,46,61);
	
	
	players* SPU_players=TottenhamHotspurs_players();
    coach SPU_coach=TottenhamHotspurs_manager();
	match<int>* SPU_match = TottenhamHotspurs_matches<int>();
	club<int> SPU(SPU_players,SPU_match,SPU_coach,"Tottenham Hotspurs","ENIC Group","Tottenham Hotspur Stadium",26,0,2,22,16,9,6,1,47,62);
	//SPU.ClubMenu("England       ");
	
	players* NEW_players=NewcastleUnited_players();
    coach NEW_coach=NewcastleUnited_manager();
	match<int>* NEW_match = NewcastleUnited_matches<int>();
	club<int> NEW(NEW_players,NEW_match,NEW_coach,"Newcastle United","Public Investment Fund","St. James' Park",16,0,4,24,7,11,3,1,42,52);
	
	players* ATV_players=AstonVilla_players();
    coach ATV_coach=AstonVilla_manager();
	match<int>* ATV_match = AstonVilla_matches<int>();
	club<int> ATV(ATV_players,ATV_match,ATV_coach,"Aston Villa","Nassef Sawiris Wes Edens","Villa Park",24,2,7,17,15,6,8,1,38,43);
	
	players* BRI_players=Brighton_players();
    coach BRI_coach=Brighton_manager();
	match<int>* BRI_match = Brighton_matches<int>();
	club<int> BRI(BRI_players,BRI_match,BRI_coach,"Brighton","Tony Bloom","American Express Community",5,0,0,22,12,7,7,1,41,32);
	
	players* LIE_players=LeicesterCity_players();
    coach LIE_coach=LeicesterCity_manager();
    match<int>* LIE_match = LeicesterCity_matches<int>();
    club<int> LIE(LIE_players,LIE_match,LIE_coach,"Leicester City","King Power","King Power",15,0,1,13,23,6,18,1,45,32);
    
    players* JUV_players=Juventus_players();
    coach JUV_coach=Juventus_manager();
	match<string>* JUV_match = Juventus_matches<string>();
	club<string> JUV(JUV_players,JUV_match,JUV_coach,"Juventus","Agnelli family","Allianz",70,2,36,27,14,9,2,2,50,41);
	
	
	players* NAP_players=Napoli_players();
    coach NAP_coach=Napoli_manager();
	match<int>* NAP_match = Napoli_matches<int>();
	club<int> NAP(NAP_players,NAP_match,NAP_coach,"Napoli","Aurelio De Laurentiis","Diego Armando Maradona Stadium",14,1,3,33,6,6,1,1,45,54);
	
	
	players* ACM_players=AcMilan_players();
    coach ACM_coach=AcMilan_manager();
	match<string>* ACM_match = AcMilan_matches<string>();
	club<string> ACM(ACM_players,ACM_match,ACM_coach,"AC Milan","RedBird Capital Partners","San Siro",52,19,7,22,12,13,5,2,47,76);
	//ACM.ClubMenu("Italy         ");
	fflush(stdin);
	
	players* INT_players=InterMilan_players();
    coach INT_coach=InterMilan_manager();
	match<string>* INT_match = InterMilan_matches<string>();
	club<string> INT(INT_players,INT_match,INT_coach,"Inter Milan","Suning Holdings Group","San Siro",40,3,19,30,13,7,4,3,50,76);
	
	players* ASR_players=AsRoma_players();
    coach ASR_coach=AsRoma_manager();
	match<string>* ASR_match = AsRoma_matches<string>();
	club <string> ASR(ASR_players,ASR_match,ASR_coach,"AS Roma","The Friedkin Group, Inc.","Stadio Olimpico",17,1,3,24,15,9,7,2,48,74);
	
	players* LAZ_players=Lazio_players();
    coach LAZ_coach=Lazio_manager();
	match<int>* LAZ_match = Lazio_matches<int>();
	club<int> LAZ(LAZ_players,LAZ_match,LAZ_coach,"Lazio","Claudio Lotito","Stadio Olimpico",17,1,2,23,13,10,3,1,46,73);
	
	
	players* ATA_players=Atalanta_players();
    coach ATA_coach=Atalanta_manager();
    match<int>* ATA_match = Atalanta_matches<int>();
    club<int> ATA(ATA_players,ATA_match,ATA_coach,"Atalanta","Stephen Pagliuca","Gewiss",7,0,0,18,11,7,6,1,36,22);
    
    
    players* PSG_players=ParisSaintGermain_players();
    coach PSG_coach=ParisSaintGermain_manager();
	match<int>* PSG_match = ParisSaintGermain_matches<int>();
	club<int> PSG(PSG_players,PSG_match,PSG_coach,"Paris Saint Germain","Nasser Al-Khelaifi","Le Parc des Princes",45,0,10,32,9,5,1,1,46,50);
	//PSG.ClubMenu("France        ");
	
	players* LYO_players=Lyon_players();
    coach LYO_coach=Lyon_manager();
    match<int>* LYO_match = Lyon_matches<int>();
    club<int> LYO(LYO_players,LYO_match,LYO_coach,"Olympique Lyonnais","John Textor","Groupama",20,0,7,20,11,8,7,1,39,59);
        
    
	/*cout<<"PLAYERS INFO"<<endl;
    cout<<"************"<<endl<<endl;
    cout<<"   NAME           NATIONALITY        POSITION      AGE  NUMBER  MATCHES  GOALS  ASSISTS  MARKETVALUE    "<<endl;
	for(i=0;i<25;i++)
    {
    	cout<<i+1<<".";
        LYO_players[i].display();
        cout<<endl;
    }*/
   // cout<<"\n\nTotal Squad Value Is :"<<FCB_players[0].totalvalue(FCB_players)<<"M"<<endl;

//Dawood
	//menu(fl);

//Irtiza
players p[4] = {
        players("Lionel Messi","Argentina","Attacker",35,10,1000,799,345,50),
        players("Cristiano Ronaldo","Portugal","Attacker",37,7,1100,823,200,25),
        players("Kylian Mbappe","France","Attacker",23,7,250,200,50,120),
        players("Neymar","Brazil","Attacker",32,10,500,369,125,80),
    };
	//attackers=3+3+1+6+1+2+1+3+4+2+3++2+1+1+3JUV+2+1+3+2+1+3+1=49
	//mid=3+5+1+3+2+1+1+1+3+4+1+2+1+1JUV+1+1+2+1=34
	//def=4+3+2+1+5+1+1+4+3+4+4+4+1+1+2+4+5=49
players fl[154]={FCB_players[21],FCB_players[20],FCB_players[18],RMA_players[20],RMA_players[18],RMA_players[19],ATM_players[21],BAY_players[24],BAY_players[23],
               BAY_players[21],BAY_players[20],BAY_players[19],BAY_players[18],BVB_players[20],RBL_players[21],RBL_players[22],FRA_players[20],MUN_players[22],
			   MUN_players[19],MUN_players[20],MCI_players[19],MCI_players[20],MCI_players[21],MCI_players[22],LIV_players[21],LIV_players[20],ARS_players[20],
			   ARS_players[19],ARS_players[18],SPU_players[20],SPU_players[19],NEW_players[19],ATV_players[18],JUV_players[22],JUV_players[19],JUV_players[18],
			   NAP_players[19],NAP_players[18],ACM_players[18],INT_players[21],INT_players[22],INT_players[23],ASR_players[20],ASR_players[21],LAZ_players[20],
/**/		   PSG_players[22],PSG_players[21],PSG_players[20],LYO_players[19],/**/
			   FCB_players[14],FCB_players[13],FCB_players[12],RMA_players[15],RMA_players[14],RMA_players[13],RMA_players[12],RMA_players[11],ATM_players[10],
			   BAY_players[14],BAY_players[13],BAY_players[12],BVB_players[17],BVB_players[12],RBL_players[13],FRA_players[12],CHE_players[11],MUN_players[13],
			   MUN_players[12],MUN_players[11],MCI_players[16],MCI_players[14],MCI_players[13],MCI_players[12],NEW_players[13],BRI_players[11],BRI_players[10],
/**/		   LIE_players[13],JUV_players[10],NAP_players[10],ACM_players[10],INT_players[14],INT_players[15],PSG_players[12],/**/
		       FCB_players[ 3],FCB_players[ 4],FCB_players[ 5],FCB_players[ 7],RMA_players[ 3],RMA_players[ 4],RMA_players[ 2],VIL_players[ 3],VIL_players[ 4],
               ATB_players[ 3],BAY_players[ 7],BAY_players[ 6],BAY_players[ 5],BAY_players[ 4],BAY_players[ 3],BVB_players[ 3],RBL_players[ 4],CHE_players[ 2],
			   CHE_players[ 3],CHE_players[ 5],CHE_players[10],MUN_players[ 3],MUN_players[ 2],MUN_players[ 5],MCI_players[ 3],MCI_players[ 5],MCI_players[ 6],
			   MCI_players[ 8],LIV_players[ 2],LIV_players[ 3],LIV_players[ 4],LIV_players[ 5],ARS_players[ 2],ARS_players[ 3],ARS_players[ 4],ARS_players[ 5],
			   NEW_players[ 5],NAP_players[ 2],ACM_players[ 2],ACM_players[ 3],INT_players[ 2],INT_players[ 3],INT_players[ 4],INT_players[ 5],PSG_players[ 4],
			   PSG_players[ 5],PSG_players[ 6],PSG_players[11],PSG_players[ 7],   
    
/**/    FCB_players[0],RMA_players[0],ATM_players[0],BAY_players[0],
               BVB_players[0],RBL_players[0],FRA_players[0],MUN_players[0],
			   MCI_players[0],LIV_players[0],ARS_players[0],
			   SPU_players[0],NEW_players[0],ATV_players[0],JUV_players[0],
			   NAP_players[0],ACM_players[0],INT_players[0],ASR_players[0],LAZ_players[0],
/**/		   PSG_players[0],LYO_players[0]
};    

menu(fl);	//fantasy(fl);




    return 1;
}
void editor_func()
{
	Admin Talha("talha","abc");
	Talha.verify();
}





