#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <iomanip>
#include<fstream>
#include<graphics.h>
using namespace std;
// a servant's skill function, it outputs the skill's effects, then updates that the skill has been used, then starts a counter that counts down to the skill effects wearing off
void gilgamesh1Function(double& servant1attack,double& servant2attack,double& servant3attack,int& gilgamesh1counter, bool& gilgamesh1cooldownb)
{
    gilgamesh1cooldownb=true;
    gilgamesh1counter=3;
    servant1attack=1.2*servant1attack;
    servant2attack=1.2*servant2attack;
        servant3attack=1.2*servant3attack;

}

void gilgamesh2Function(double& gilgameshnpgen, bool& gilgamesh2cooldownb, int& gilgamesh2counter)
{
    gilgamesh2cooldownb=true;
    gilgamesh2counter=3;
    gilgameshnpgen=1.5*gilgameshnpgen;
}


void gilgamesh3Function(double& enemydefensedebuff, bool& gilgamesh3cooldownb)
{

    gilgamesh3cooldownb=true;
    enemydefensedebuff=1;
}



void jack1Function(double& servant3defensedebuff, double& servant3attack, bool& jack1cooldownb, int& jack1counter)
{

    servant3defensedebuff=0;
    servant3attack=4*servant3attack;
    jack1cooldownb=true;
    jack1counter=2;


}

void jack2Function(int& criticalrate,bool& jack2cooldownb, int& jack2counter )
{
    criticalrate-=5;
    if (criticalrate<0)
    {
        criticalrate=0;
    }

    jack2cooldownb=true;
    jack2counter=3;


}

void jack3Function (double& servant1health, double& servant2health, double& servant3health, bool& jack3cooldownb)
{
    string z;
    jack3cooldownb=true;
    int selection; //selection to determine which ally should receive the heal
    cout<<"1. Merlin         2. Gilgamesh        3. Jack"<<endl;

    while(1)
    {
    cin>>selection;


    if (selection==1)
    {
        servant1health+=60000;
        cout<<"Merlin HP++"<<endl;
        break;
    }
    if (selection==2)
    {
        servant2health+=60000;
                cout<<"Gilgamesh HP++"<<endl;

        break;
    }
      if (selection==3)
    {
                cout<<"Jack HP++"<<endl;

        servant3health+=60000;
        break;
    }


    cin.clear();
    getline(cin,z);

    }


}












void dreamlikeCharismaFunction(int& merlinnpgauge,int& gilgameshnpgauge,
                               int& jacknpgauge,bool& merlin1cooldownb,
                               double&  servant1attack, double& servant2attack, double& servant3attack,int& merlin1counter  )
{

    gilgameshnpgauge+=20;
    jacknpgauge+=20;
    merlinnpgauge+=20;
    servant1attack=1.2*servant1attack;
        servant2attack=1.2*servant2attack;
    servant3attack=1.2*servant3attack;

    merlin1cooldownb=true;


    merlin1counter=3;




}

void illusionFunction(double& servant1defensedebuff, double& servant2defensedebuff,
                       double& servant3defensedebuff,bool& merlin2cooldownb,int& merlin2counter)
{
    servant1defensedebuff=0;
    servant2defensedebuff=0;
    servant3defensedebuff=0;
    merlin2cooldownb=true;
    merlin2counter=2;



}


void heroCreationFunction(double& allybusterdamage, int& merlin3counter, bool& merlin3cooldownb, double& servant1health,
                          double& servant2health, double& servant3health )
{

    merlin3cooldownb=true;
    merlin3counter=3;
    allybusterdamage=3;
    servant1health+=30000;
    servant2health+=30000;
    servant3health+=30000;


}

void SlowType(string &message) //produces typewriter effect
{
    int x=0;
        while(message[x] !='\0')
        {
            cout<<message[x];
            Sleep(50);
            x++;
        }
}


void enumaElishFunction(int& gilgameshnpgauge, bool& gilgameshspecial)
{

    gilgameshnpgauge=0;
    for (int i=0;i<25;i++)

    {

        cout<<endl;



    }
    system("COLOR 04");
    Sleep(500);
    string message="";
    message="\" Judgement is upon you!\"";
    SlowType(message);
    cout<<endl;

    for (int i=0;i<5;i++)

    {
        cout<<".."<<endl;
        Sleep(50);
    }


    message="\"I shall offer this one strike as the ceremony of separation!\"";
     for (int i=0;i<5;i++)

    {
        cout<<".."<<endl;
        Sleep(50);
    }

    message="\"I speak of the beginning. Heaven and earth are divided and nothingness celebrates Creation. My Sword of Rupture rends the world apart.\"";
    SlowType(message);
    cout<<endl;
    message="\"The vortex that turns the stars, this heavenly hell signifies the end of the eve of genesis. Subside with death!\"";
    SlowType(message);
    cout<<endl;
    message="....";
    SlowType(message);
    cout<<endl;
    message="ENUMA ELISH!";
    SlowType(message);
    cout<<endl;
       for (int i=0;i<5;i++)

    {
        cout<<endl;
        Sleep(50);
    }
message="Gilgamesh unleashes his ultimate weapon, your enemy takes massive damage.";
SlowType(message);
    cout<<endl;
       for (int i=0;i<5;i++)

    {
        cout<<endl;
        Sleep(50);
    }
 message=".....................LOADING.......................";
 SlowType(message);
           for (int i=0;i<5;i++)

    {
        cout<<endl;
    }

system("COLOR 07");
gilgameshspecial=false;





}


void jackTheRipperFunction(int& jacknpgauge, bool& jackspecial)
{
    jacknpgauge=0;
    for (int i=0;i<25;i++)

    {

        cout<<endl;
        Sleep(50);


    }

    for (int i=0;i<5;i++)

    {
        cout<<".."<<endl;
        Sleep(50);
    }


     for (int i=0;i<5;i++)

    {
        cout<<".."<<endl;
        Sleep(50);
    }

    string message="";
    message="....";
 SlowType(message);
        cout<<endl;
    message="DIE!";
     SlowType(message);
        cout<<endl;
       for (int i=0;i<5;i++)

    {
        cout<<endl;
        Sleep(50);
    }
message="Jack inflicts massive damage on your enemy, and produces a massive amount of stars as a bonus.";
 SlowType(message);
        cout<<endl;
       for (int i=0;i<5;i++)

    {
        cout<<endl;
        Sleep(50);
    }
 message=".....................LOADING.......................";
 SlowType(message);
           for (int i=0;i<5;i++)

    {
        cout<<endl;
    }

system("COLOR 07");


jackspecial=false;

}




void gardenOfAvalonFunction(int& merlinnpgauge, bool& merlinspecial,int& gardenofavaloncounter)
{
    merlinnpgauge=0;
    for (int i=0;i<25;i++)

    {

        cout<<endl;



    }
    system("COLOR 02");
    string message="";
    message="\" Let me tell you the story of a king.\"";
    SlowType(message); //to produce typewriter effect
    cout<<endl;

    for (int i=0;i<5;i++)

    {
        cout<<".."<<endl;
        Sleep(50);
    }


    message="\"The inner sea of the planet. The platform of the watchtower.\"";
    SlowType(message);
    cout<<endl;
     for (int i=0;i<5;i++)

    {
        cout<<".."<<endl;
        Sleep(50);
    }

    message="\"From the edge of paradise, you shall hear my words. Your story shall be full of blessings.\"";
    SlowType(message);
    cout<<endl;

    message="....";
    SlowType(message);
    cout<<endl;
    message="GARDEN OF AVALON!";
    SlowType(message);
    cout<<endl;
       for (int i=0;i<5;i++)

    {
        cout<<endl;
    }
message="Merlin extends his blessings towards your team, your team will now heal 10000hp every turn for 5 turns";
SlowType(message); //to produce typewriter effect
          for (int i=0;i<5;i++)

    {
        cout<<endl;
    }
 message=".....................LOADING.......................";
 SlowType(message);
           for (int i=0;i<5;i++)

    {
        cout<<endl;
    }


 Sleep(1000); //makes console wait
gardenofavaloncounter=5;

merlinspecial=false; //now that it has been used, merlin's special will not be available until you recharge his np gauge to 100
system("COLOR 07");
}







int gilgameshCriticalrateFunction(double starstobeused)
{
    if (starstobeused>0)
    {


    return ((starstobeused/100)*250);
    }
    else
    {
        return 0;
    }
}
int merlinCriticalrateFunction(double starstobeused)

{
if (starstobeused>0)

{


return ((starstobeused/100)*150);

}

else
{
    return 0;
}



}

int jackCriticalrateFunction(double starstobeused) //returns the critical chance of a servant's cards. Every servant has a unique multiplier.

{
if (starstobeused>0)

{


return ((starstobeused/100)*100);

}

else
{
    return 0; //if less than 0 or 0 stars, 0 critical chance
}



}
string typeOfDebuffFunction() //determines what type of debuff will be applied (attack or defense)

{
    int number=rand()%100;
    if (number>=0 && number<50)
    {
        return "Attack"; // 1/3 chance
    }
    else
    {
        return "Defense"; // 1/3 chance
    }

}




string enemyTargetFunction(bool servant1death,bool servant2death,bool servant3death) //determines which ally the enemy will attack
{
while (1)
    {
        int number=rand()%100;

    if (number>=0 && number<33)
    {
        if (servant1death==false) //if servant 1 is dead, it will go onto the next statement
        {


        return "Servant 1";
        }
    }
     if (number>=33 && number<66)
    {
        if (servant2death==false) //if servant 2 is dead, it will go onto the next statement
        {

                return "Servant 2";
        }

     if (servant3death==false) //if servant 3 is dead, it will go onto the next statement
    {
        return "Servant 3";
    }
    }
    }
}








//cout<<"WIN!";


void enemyTurnFunction (double& turnnumber,double& servant1attack,
double& servant2attack,
double &servant3attack,
double &servant1defensedebuff,
double &servant2defensedebuff,
double &servant3defensedebuff,
double& enemydamage,
double &servant1health,
double& servant2health,
double &servant3health,
bool& servant1death,
bool &servant2death,
bool &servant3death,
int& criticalrate,

string& servant1,
string &servant2,
string &servant3,int &cardarraycount, double& starstobeused,int& enemyimmunitycounter,double& enemydefensedebuff, int& deathcount)
{
if (enemyimmunitycounter>0) //if enemy immunity counter is positive, it will be decremented,
{
    enemyimmunitycounter--;
    if (enemyimmunitycounter==0)
    {
        enemydefensedebuff=1; //if counter reaches 0, the enemy will no longer be immune
    }
}
bool selfbuff=false; // If true, the enemy will buff itself, if false, it will debuff allies


string enemytarget; // The ally that the enemy will attack
string typeofdebuff; // the type of debuff that the enemy will inflict on ally
for (int z=1;z<2;z++)

{
int critical=1; //resets the value of the critical to 1 at the start of every turn

    cout<<"Turn "<<turnnumber<<"!"<<endl;
    cout<<"Enemy ATK: "<<enemydamage<<endl;

                enemytarget=enemyTargetFunction(servant1death,servant2death,servant3death); //function will be called which basically determines the enemy's target

    int number=rand()%100;

if (number>=0 && number<50) //to know if skill will be applied or not
{
// if skill= YES
    int number2=rand()%100;

    if (number2>50) //to know which kind of skill should be applied
    {
        selfbuff=true;
    }
    else
    {
        selfbuff=false;
    }

    if (selfbuff==false)  //enemy will debuff ally
        {
            typeofdebuff=typeOfDebuffFunction();  //function will be called which basically determines the type of debuff

            if (typeofdebuff=="Defense") //if type of debuff is defense

            {


            if (enemytarget=="Servant 1" ) //if servant 1 is the target then servant 1 is debuffed and so on
            {
                cout<<"Enemy debuffed "<<servant1<<"'s defense!"<<endl;
                servant1defensedebuff+=0.5; //you will take 50% extra damage
                                  cout<<servant1<<": Ugh!"<<endl;

            }
            else if (enemytarget=="Servant 2")
            {
            cout<<"Enemy debuffed "<<servant2<<"'s defense!"<<endl;
                servant2defensedebuff+=0.5;
                                  cout<<servant2<<": Curse you!"<<endl;

            }
            else
            {
            cout<<"Enemy debuffed "<<servant3<<"'s defense!"<<endl;
                servant3defensedebuff+=0.5;
                                  cout<<servant3<<": Ow!"<<endl;
            }
            }
            else //if debuff type is attack

            {
                 if (enemytarget=="Servant 1" )
            {
                cout<<"Enemy debuffed "<<servant1<<"'s attack!"<<endl;
                servant1attack-=(0.2*servant1attack); //decrease by 20%
                cout<<servant1<<"'s attack is now "<<servant1attack<<"!"<<endl;
                                  cout<<servant1<<": I'm feeling weak....."<<endl;

            }
            else if (enemytarget=="Servant 2")
            {
            cout<<"Enemy debuffed "<<servant2<<"'s attack!"<<endl;
                servant2attack-=(0.2*servant2attack); //decrease by 20%
                                cout<<servant2<<"'s attack is now "<<servant2attack<<"!"<<endl;
                                    cout<<servant2<<": I'm feeling weak....."<<endl;

            }
            else
            {
            cout<<"Enemy debuffed "<<servant3<<"'s attack!"<<endl;
                servant3attack-=(0.2*servant3attack); //decrease by 20%
                                cout<<servant3<<"'s attack is now "<<servant3attack<<"!"<<endl;
                  cout<<servant3<<": I'm feeling weak....."<<endl;
            }
            }


        }
    else //if enemy decides to buff itself

    {
        number=rand()%100;

        if (number>=0 && number<25) // 50% chance applied

        {
        // buff own damage= YES



        cout<<"Enemy buffed it's damage!"<<endl;
        enemydamage+=(enemydamage*0.25); //increase by x%
        cout<<"Enemy's damage is now "<<enemydamage<<"!"<<endl;
        }
        else if (number>=25 && number<50)//50% chance applied
        {
                        criticalrate++; //critical rate increases

            cout<<"Enemy buffed it's critical rate to "<<criticalrate<<"!"<<endl;
        }
else if (number>-50 && number<75)
{
    cout<<"Enemy decreased all of your critical stars!"<<endl;
    starstobeused=-50; //your stars are reduced to -50
}
else
{
    enemydefensedebuff=0; //in this way the enemy is immune to all attacks
    enemyimmunitycounter=4; //will remain immune only temporarily
    cout<<"Enemy has temporarily gained immunity to all attacks!"<<endl;
}
    }


}
else      //this is when the enemy doesn't use abilities, but rather attacks
{

number=rand()%100;

if (number>=0 && number<(10*criticalrate)) //10% chance when criticalrate=1, and chance increases as critical rate increases

{
    critical=2; //this signifies that critical hit will occur
    cout<<"CRITICAL HIT!"<<endl;

}


if (enemytarget=="Servant 1")
{
    cout<<"Enemy dealt "<<enemydamage*servant1defensedebuff*critical<<" damage to "<<servant1<<"!"<<endl;
    servant1health-=(enemydamage*servant1defensedebuff*critical);

if (servant1health>0) //if servant has health left, his remaining health will be displayed
{
    cout<<servant1<<"'s"<<" health: "<<servant1health<<endl;
}
else //if health reaches 0, servant will exit the battle
    {
        servant1death=true; //to indicate that servant has died
        cout<<servant1<<" has died!"<<endl;
cout<<servant1<<": Sorry, but this was a bit too much for me..."<<endl;
deathcount++;
cardarraycount=0; //everytime servant dies, cardarraycount is reset
    }

}

else if (enemytarget=="Servant 2")
{
    cout<<"Enemy dealt "<<enemydamage*servant2defensedebuff*critical<<" damage to "<<servant2<<"!"<<endl;
    servant2health-=(enemydamage*servant2defensedebuff*critical);
if (servant2health>0)
{
    cout<<servant2<<"'s"<<" health: "<<servant2health<<endl;
}
else
    {
        servant2death=true;
        cout<<servant2<<" has died!"<<endl;
cout<<servant2<<": I won't forgive this!"<<endl;
deathcount++;
cardarraycount=0;
    }


}
else if (enemytarget=="Servant 3")
{
    cout<<"Enemy dealt "<<enemydamage*servant3defensedebuff*critical<<" damage to "<<servant3<<"!"<<endl;
    servant3health-=(enemydamage*servant3defensedebuff*critical);

    if (servant3health>0)
{
    cout<<servant3<<"'s"<<" health: "<<servant3health<<endl;
}
else
    {
        servant3death=true;
        cout<<servant3<<" has died!"<<endl;
cout<<servant3<<": Too strong-!"<<endl;
deathcount++;
cardarraycount=0;

    }



}
}

cout<<"\n"<<"\n";
if (deathcount==3) //if all 3 servants have died, the battle will end
{
    cout<<"YOU HAVE LOST"<<endl;
    return ;
}
}
turnnumber++; //turn number is incremented after every calling of this function
}


































void servant1DeathCardsFunction(string commandcards[], int &size,  int& count_Abuster,int& count_Bbuster,int& count_Cbuster,int& count_Aarts,
           int& count_Barts,int& count_Carts,int& count_Aquick,int& count_Bquick,int& count_Cquick)

{
// this function called when servant 1 dies

for(int i=0;i<10;i++)   // for deck of 10 cards
    {

       while(1)// to ensure that all places in array of size 10 are filled with cards.
        {
            int x=rand()%100;




             if(x>=0 && x<18)             //for Buster of Player B
            {
                if(count_Bbuster<2 )
                {
                     commandcards[i]="2.Bbuster";
                count_Bbuster++;
                break;
                }

            }
           else if(x>=18 && x<36)             //for Buster of Player C
            {
                if(count_Cbuster<2)
                {
                commandcards[i]="3.Cbuster";
                count_Cbuster++;
                break;
                                }


            }



            else if(x>=36 && x<54)            //for arts of Player B
            {
                if(count_Barts<2)
                {
commandcards[i]="5.Barts";
               count_Barts++;
               break;
                               }

            }
            else if(x>=54 && x<72)            //for arts of Player C
            {
                if(count_Carts<2)
                {
 commandcards[i]="6.Carts";
                count_Carts++;
                break;
                           }



            }

            else if(x>=72 && x<90)           //for quick of Player B
            {
                if(count_Bquick<1)
                {
                      commandcards[i]="8.Bquick";
                count_Bquick++;
                break;
                }

            }
           else if(x>=90 && x<=99)           //for quick of Player C
            {
                if(count_Cquick<1)
                {
  commandcards[i]="9.Cquick";
                count_Cquick++;
                break;
                                }

            }
          }
    }








}

void servant2DeathCardsFunction(string commandcards[], int &size,  int& count_Abuster,int& count_Bbuster,int& count_Cbuster,int& count_Aarts,
           int& count_Barts,int& count_Carts,int& count_Aquick,int& count_Bquick,int& count_Cquick)
{

// this function called when servant 2 dies

 for(int i=0;i<10;i++)   // for deck of 10 cards
    {

       while(1)// to ensure that all places in array of size 10 are filled with cards.
        {
            int x=rand()%100;
            if(x>=0 && x<18)             //for Buster of Player A
            {
                if(count_Abuster<2)
                {


                commandcards[i]="1.Abuster";
                count_Abuster++;
                break;
                }

            }

           else if(x>=18 && x<36)             //for Buster of Player C
            {
                if(count_Cbuster<2)
                {
                commandcards[i]="3.Cbuster";
                count_Cbuster++;
                break;
                                }


            }
           else if(x>=36 && x<54)             //for Arts of Player A
            {
                if(count_Aarts<2)
                {
 commandcards[i]="4.Aarts";
                count_Aarts++;
                break;
                                }

            }

            else if(x>=54 && x<72)            //for arts of Player C
            {
                if(count_Carts<2)
                {
 commandcards[i]="6.Carts";
                count_Carts++;
                break;
                           }



            }
           else  if(x>=72 && x<90)            //for quick of Player A
            {
                if(count_Aquick<1)
                {
                      commandcards[i]="7.Aquick";
                count_Aquick++;
                break;
                }


            }

           else if(x>=90 && x<=99)           //for quick of Player C
            {
                if(count_Cquick<1)
                {
  commandcards[i]="9.Cquick";
                count_Cquick++;
                break;
                                }

            }
          }
    }
}
void servant3DeathCardsFunction(string commandcards[], int &size,  int& count_Abuster,int& count_Bbuster,int& count_Cbuster,int& count_Aarts,
           int& count_Barts,int& count_Carts,int& count_Aquick,int& count_Bquick,int& count_Cquick)


// this function called when servant 3 dies
{
    commandcards[size];     // an array of command cards
    for(int i=0;i<10;i++)   // for deck of 10 cards
    {

       while(1)// to ensure that all places in array of size 10 are filled with cards.
        {
            int x=rand()%100;
            if(x>=0 && x<18)             //for Buster of Player A
            {
                if(count_Abuster<2)
                {


                commandcards[i]="1.Abuster";
                count_Abuster++;
                break;
                }

            }
            else if(x>=18 && x<36)             //for Buster of Player B
            {
                if(count_Bbuster<2 )
                {
                     commandcards[i]="2.Bbuster";
                count_Bbuster++;
                break;
                }

            }

           else if(x>=36 && x<54)             //for Arts of Player A
            {
                if(count_Aarts<2)
                {
 commandcards[i]="4.Aarts";
                count_Aarts++;
                break;
                                }

            }
            else if(x>=54 && x<72)            //for arts of Player B
            {
                if(count_Barts<2)
                {
commandcards[i]="5.Barts";
               count_Barts++;
               break;
                               }

            }

           else  if(x>=72 && x<90)            //for quick of Player A
            {
                if(count_Aquick<1)
                {
                      commandcards[i]="7.Aquick";
                count_Aquick++;
                break;
                }


            }
            else if(x>=90 && x<=99)           //for quick of Player B
            {
                if(count_Bquick<1)
                {
                      commandcards[i]="8.Bquick";
                count_Bquick++;
                break;
                }

            }

          }
    }
}






 void cardsFunction(string commandcards[], int &size,  int& count_Abuster,int& count_Bbuster,int& count_Cbuster,int& count_Aarts,
           int& count_Barts,int& count_Carts,int& count_Aquick,int& count_Bquick,int& count_Cquick)
{
    commandcards[size];     // an array of command cards
    for(int i=0;i<15;i++)   // for deck of 15 cards
    {

       while(1)// to ensure that all places in array of size 15 are filled with cards.
        {
            int x=rand()%100;
            if(x>0 && x<11)             //for Buster of Player A
            {
                if(count_Abuster<2)
                {


                commandcards[i]="1.Abuster";
                count_Abuster++;
                break;
                }

            }
            else if(x>11 && x<22)             //for Buster of Player B
            {
                if(count_Bbuster<2 )
                {
                     commandcards[i]="2.Bbuster";
                count_Bbuster++;
                break;
                }

            }
           else if(x>22 && x<33)             //for Buster of Player C
            {
                if(count_Cbuster<2)
                {
                commandcards[i]="3.Cbuster";
                count_Cbuster++;
                break;
                                }


            }
           else if(x>33 && x<44)             //for Arts of Player A
            {
                if(count_Aarts<2)
                {
 commandcards[i]="4.Aarts";
                count_Aarts++;
                break;
                                }

            }
            else if(x>44 && x<55)            //for arts of Player B
            {
                if(count_Barts<2)
                {
commandcards[i]="5.Barts";
               count_Barts++;
               break;
                               }

            }
            else if(x>55 && x<66)            //for arts of Player C
            {
                if(count_Carts<2)
                {
 commandcards[i]="6.Carts";
                count_Carts++;
                break;
                           }



            }
           else  if(x>66 && x<77)            //for quick of Player A
            {
                if(count_Aquick<1)
                {
                      commandcards[i]="7.Aquick";
                count_Aquick++;
                break;
                }


            }
            else if(x>77 && x<88)           //for quick of Player B
            {
                if(count_Bquick<1)
                {
                      commandcards[i]="8.Bquick";
                count_Bquick++;
                break;
                }

            }
           else if(x>88 && x<99)           //for quick of Player C
            {
                if(count_Cquick<1)
                {
  commandcards[i]="9.Cquick";
                count_Cquick++;
                break;
                                }

            }
          }
    }
}

void onlyBCardsFunction(string commandcards[], int &size,  int& count_Abuster,int& count_Bbuster,int& count_Cbuster,int& count_Aarts,
           int& count_Barts,int& count_Carts,int& count_Aquick,int& count_Bquick,int& count_Cquick)
{
    commandcards[size];     // an array of command cards
    for(int i=0;i<5;i++)   // for deck of 5 cards
    {

       while(1)// to ensure that all places in array of size 5 are filled with cards.
        {
            int x=rand()%100;

             if(x>=0 && x<33)             //for Buster of Player B
            {
                if(count_Bbuster<2 )
                {
                     commandcards[i]="2.Bbuster";
                count_Bbuster++;
                break;
                }

            }


            else if(x>=33 && x<66)            //for arts of Player B
            {
                if(count_Barts<2)
                {
commandcards[i]="5.Barts";
               count_Barts++;
               break;
                               }

            }



            else if(x>=66 && x<=99)           //for quick of Player B
            {
                if(count_Bquick<1)
                {
                      commandcards[i]="8.Bquick";
                count_Bquick++;
                break;
                }

            }

          }
    }
}


void onlyCCardsFunction(string commandcards[], int &size,  int& count_Abuster,int& count_Bbuster,int& count_Cbuster,int& count_Aarts,
           int& count_Barts,int& count_Carts,int& count_Aquick,int& count_Bquick,int& count_Cquick)
{
    commandcards[size];     // an array of command cards
    for(int i=0;i<5;i++)   // for deck of 5 cards
    {

       while(1)// to ensure that all places in array of size 5 are filled with cards.
        {
            int x=rand()%100;

            if(x>=0 && x<33)             //for Buster of Player C
            {
                if(count_Cbuster<2)
                {
                commandcards[i]="3.Cbuster";
                count_Cbuster++;
                break;
                                }


            }


            else if(x>=33 && x<66)            //for arts of Player C
            {
                if(count_Carts<2)
                {
 commandcards[i]="6.Carts";
                count_Carts++;
                break;
                           }



            }


           else if(x>=66 && x<=99)           //for quick of Player C
            {
                if(count_Cquick<1)
                {
  commandcards[i]="9.Cquick";
                count_Cquick++;
                break;
                                }

            }
          }
    }
}


void onlyACardsFunction(string commandcards[], int &size,  int& count_Abuster,int& count_Bbuster,int& count_Cbuster,int& count_Aarts,
           int& count_Barts,int& count_Carts,int& count_Aquick,int& count_Bquick,int& count_Cquick)
{
    commandcards[size];     // an array of command cards
    for(int i=0;i<5;i++)   // for deck of 15 cards
    {

       while(1)// to ensure that all places in array of size 5 are filled with cards.
        {
            int x=rand()%100;
            if(x>=0 && x<33)             //for Buster of Player A
            {
                if(count_Abuster<2)
                {


                commandcards[i]="1.Abuster";
                count_Abuster++;
                break;
                }

            }


           else if(x>=33 && x<66)             //for Arts of Player A
            {
                if(count_Aarts<2)
                {
 commandcards[i]="4.Aarts";
                count_Aarts++;
                break;
                                }

            }


           else  if(x>=66 && x<=99)            //for quick of Player A
            {
                if(count_Aquick<1)
                {
                      commandcards[i]="7.Aquick";
                count_Aquick++;
                break;
                }


            }

          }
    }
}
















/*
  Function for printing 5 cards out of deck of 15 cards.User is allowed to choose 3 cards only.
*/
  void printCardsfunction(string commandcards[], int& size,int &j,int &cardarraycount,
    bool& aplayerAbuster,
        bool& aplayerAarts,
    bool& aplayerAquick,
    bool& aplayerBbuster,
    bool& aplayerBarts,
    bool& aplayerBquick,
    bool& aplayerCbuster,
    bool& aplayerCarts,
    bool &aplayerCquick,

    bool &bplayerAbuster,
    bool &bplayerAarts,
    bool &bplayerAquick,
    bool &bplayerBbuster,
    bool &bplayerBarts,
    bool &bplayerBquick,
    bool& bplayerCbuster,
    bool& bplayerCarts,
    bool& bplayerCquick,

    bool &cplayerAbuster,
    bool& cplayerAarts,
    bool& cplayerAquick,
    bool& cplayerBbuster,
    bool &cplayerBarts,
    bool& cplayerBquick,
    bool &cplayerCbuster,
    bool &cplayerCarts,
    bool& cplayerCquick,
      double& cardstargenmod,
       double& carddamagemod,
       double& cardnpgenmod,
       bool& servant1death, bool& servant2death, bool&servant3death,
       double starstobeused,int merlinnpgauge, int gilgameshnpgauge,
       int jacknpgauge, bool& merlinspecial, bool& gilgameshspecial, bool& jackspecial,bool& jack1cooldownb,
        bool& jack2cooldownb,
        bool& jack3cooldownb,
        bool& merlin1cooldownb,
        bool& merlin2cooldownb,
        bool& merlin3cooldownb,
        bool& gilgamesh1cooldownb,
        bool& gilgamesh2cooldownb,
       bool& gilgamesh3cooldownb)
{
   int choice;


     for(int i = j;i < (j+5); i++)         //prints 5 cards from the deck.j is values that prompts the sequential selection..
    {
        cout<<commandcards[i]<<" | ";  //.. of 5 elements from array
        if (commandcards[i]=="1.Abuster" || commandcards[i]=="7.Aquick" ||commandcards[i]=="4.Aarts") //if any of the card belong's to a specific servant, his critical hit chance is displayed with it
           {


           cout<<" ("<<merlinCriticalrateFunction(starstobeused)<<"%)  "; //outputs crit chance

           }
 else if (commandcards[i]=="2.Bbuster" || commandcards[i]=="8.Bquick" ||commandcards[i]=="5.Barts")
           {


           cout<<" ("<<gilgameshCriticalrateFunction(starstobeused)<<"%)  ";

           }
           else
           {
                          cout<<" ("<<jackCriticalrateFunction(starstobeused)<<"%)  ";

           }
    }
cout<<endl;




 if (merlinnpgauge>=100)  //if a servant's np gauge is full, his special attack becomes available

 {
     cout<<"           0.Garden of Avalon";
 }

if (gilgameshnpgauge>=100)
{
    cout<<"            10.Enuma Elish";
}

if (jacknpgauge>=100)
{
    cout<<"            11.Jack the Ripper";
}

cout<<endl;


    //cardarraycount++;
    j+=5; //j is increased by 5 to ensure that next time function is called, next 2 cards are selected

    cout<<endl;
    cout<<"Select three cards.Enter card number"<<endl;   // user chooses three cards

    for (int i=1;i<=3;i++) //in this loop user is asked to select cards and if they do they are alerted of their selected
  {
string y;











    while (1)
    {


    cin>>choice;

    if (choice>=0 && choice<=11)
    {

        break;
    }
cout<<"Invalid selection"<<endl;
cin.clear();
getline(cin,y);
    }
if (choice==0)
{
    cout<<"Special Attack unleashed"<<endl;
               cout<<"All cards arts effect gained!"<<endl;
cardnpgenmod+=0.5;
merlinspecial=true; //indicates that a servant's special is in effect


}
if (choice==11)
{
    cout<<"Special Attack unleashed"<<endl;
               cout<<"All cards quick effect gained!"<<endl;
cardstargenmod+=0.5;
jackspecial=true;

}
if (choice==10)
{
    cout<<"Special Attack unleashed"<<endl;
               cout<<"All cards buster effect gained!"<<endl;
carddamagemod+=0.5;
gilgameshspecial=true;

}

     if(choice==1 )              //if any of the choices is 1,then buster card is acquired and so on..
    {
        cout<<"Buster Card for Player A acquired "<<endl;

     if (i==1) //if i is 1, then the card is first in the order of cards, and so on....
     {
         aplayerAbuster=true; //indicates that this card has been chosen
           cout<<"All cards buster effect gained!"<<endl;
         carddamagemod+=0.5; //for the first card, there is always a bonus, buster cards increase damage modifier, quick cards increase star gen modifier, and arts cards increase arts gen modifier of all subsequent cards
     }
     else if (i==2)
{
    bplayerAbuster=true;
}
else
{
    cplayerAbuster=true;
}

    }
    if(choice==2 )
    {
        cout<<"Buster Card for Player B acquired "<<endl;
         if (i==1)
     {
         aplayerBbuster=true;
           cout<<"All cards buster effect gained!"<<endl;
         carddamagemod+=0.5;
     }
     else if (i==2)
{
    bplayerBbuster=true;
}
else
{
    cplayerBbuster=true;
}

    }
    if(choice==3 )
    {
        cout<<"Buster Card for Player C acquired "<<endl;
         if (i==1)
     {
         aplayerCbuster=true;
         cout<<"All cards buster effect gained!"<<endl;
         carddamagemod+=0.5;
     }
     else if (i==2)
{
    bplayerCbuster=true;
}
else
{
    cplayerCbuster=true;
}

    }
    if(choice==4 )
    {
        cout<<"Arts Card for Player A acquired "<<endl;
         if (i==1)
     {
         aplayerAarts=true;
           cout<<"All cards arts effect gained!"<<endl;
         cardnpgenmod+=0.5;
     }
     else if (i==2)
{
    bplayerAarts=true;
}
else
{
    cplayerAarts=true;
}

    }
    if(choice==5)
    {
        cout<<"Arts Card for Player B acquired"<<endl;
          if (i==1)
     {
         aplayerBarts=true;
          cout<<"All cards arts effect gained!"<<endl;
         cardnpgenmod+=0.5;
     }
     else if (i==2)
{
    bplayerBarts=true;
}
else
{
    cplayerBarts=true;
}

    }
    if(choice==6)
    {
        cout<<"Arts Card for Player C acquired"<<endl;
          if (i==1)
     {
         aplayerCarts=true;
          cout<<"All cards arts effect gained!"<<endl;
         cardnpgenmod+=0.5;
     }
     else if (i==2)
{
    bplayerCarts=true;
}
else
{
    cplayerCarts=true;
}

    }
    if(choice==7)
    {
        cout<<"Quick Card for Player A acquired"<<endl;
          if (i==1)
     {
         aplayerAquick=true;
          cout<<"All cards quick effect gained!"<<endl;
         cardstargenmod+=0.2;
     }
     else if (i==2)
{
    bplayerAquick=true;
}
else
{
    cplayerAquick=true;
}

    }
    if(choice==8)
    {
        cout<<"Quick Card for Player B acquired"<<endl;
         if (i==1)
     {
         aplayerBquick=true;
          cout<<"All cards quick effect gained!"<<endl;
         cardstargenmod+=0.2;
     }
     else if (i==2)
{
    bplayerBquick=true;
}
else
{
    cplayerBquick=true;
}
    }
    if(choice==9)
    {
        cout<<"Quick Card for Player C acquired"<<endl;
         if (i==1)
     {
         aplayerCquick=true;
          cout<<"All cards quick effect gained!"<<endl;
         cardstargenmod+=0.2;
     }
     else if (i==2)
{
    bplayerCquick=true;
}
else
{
    cplayerCquick=true;
}
    }

    cout<<endl;

  }




}




void playerTurnfunction(string commandcards[],int size,string servant1,string servant2, //function for the player's turn
                        string servant3,double& servant1health,double& servant2health ,
                        double& servant3health,double& servant1attack,double& servant2attack,
                        double& servant3attack,
                        double& servant1criticalrate,double&servant2criticalrate,double&servant3criticalrate
                        , double& enemyhealth, double& enemydefensedebuff, int& cardarraycount,
                        double cardstargenmod,
       double carddamagemod,
       double cardnpgenmod,
      double& merlinstargen, double& gilgameshstargen, double& jackstargen, double& merlinnpgen,
       double& gilgameshnpgen, double& jacknpgen,int& j,bool servant1death,bool servant2death,
       bool servant3death, double& starstobeused,int& merlinnpgauge, int& gilgameshnpgauge, int &jacknpgauge, bool& merlinspecial
       , bool& gilgameshspecial, bool& jackspecial,
       int& merlin1counter,int& merlin1cooldown,
       int &merlin2cooldown,int& merlin3counter,int& merlin3cooldown,int& gilgamesh1counter,int& gilgamesh1cooldown,
       int& gilgamesh2counter, int& gilgamesh2cooldown, int& gilgamesh3counter,
        int& gilgamesh3cooldown, int& jack1counter, int& jack1cooldown, int&
        jack2counter, int& jack2cooldown, int& jack3cooldown, bool& jack1cooldownb,
        bool& jack2cooldownb,
        bool& jack3cooldownb,
        bool& merlin1cooldownb,
        bool& merlin2cooldownb,
        bool& merlin3cooldownb,
        bool& gilgamesh1cooldownb,
        bool& gilgamesh2cooldownb,
       bool& gilgamesh3cooldownb,int& merlin2counter,double& servant1defensedebuff,
       double& servant2defensedebuff,double& servant3defensedebuff,
double& allybusterdamage,int& criticalrate,int& gardenofavaloncounter)
                        {


double starsgenerated=0; //generated stars are stored here
    bool aplayerAbuster=false;  //(1,2,or3rd order)Servantname(Cardtype) these are bool variables which decide which cards have been selected
        bool aplayerAarts=false;
    bool aplayerAquick=false;
    bool aplayerBbuster=false;
    bool aplayerBarts=false;
    bool aplayerBquick=false;
    bool aplayerCbuster=false;
    bool aplayerCarts=false;
    bool aplayerCquick=false;

    bool bplayerAbuster=false;
    bool bplayerAarts=false;
    bool bplayerAquick=false;
    bool bplayerBbuster=false;
    bool bplayerBarts=false;
    bool bplayerBquick=false;
    bool bplayerCbuster=false;
    bool bplayerCarts=false;
    bool bplayerCquick=false;

    bool cplayerAbuster=false;
    bool cplayerAarts=false;
    bool cplayerAquick=false;
    bool cplayerBbuster=false;
    bool cplayerBarts=false;
    bool cplayerBquick=false;
    bool cplayerCbuster=false;
    bool cplayerCarts=false;
    bool cplayerCquick=false;

      int count_Abuster=0;      //counters for command cards
       int count_Bbuster=0;
       int count_Cbuster=0;
       int count_Aarts=0;
       int count_Barts=0;
       int count_Carts=0;
       int count_Aquick=0;
       int count_Bquick=0;
       int count_Cquick=0;

      if (servant1death==false && servant2death==false && servant3death==false) //if all 3 servants are alive

      {


      if (cardarraycount%3==0) //then variable should reset after every three turns
      {
 j=0;


      }
      }
      else if (servant1death==true && servant2death==false && servant3death==false)
      {
          if (cardarraycount%2==0) //if 2 alive then it should reset after 2 turns
            j=0;
      }
      else if (servant1death==false && servant2death==true && servant3death==false)
      {
          if (cardarraycount%2==0)
            j=0;
      }
      else if (servant1death==false && servant2death==false && servant3death==true)
      {
          if (cardarraycount%2==0)
            j=0;
      }
      else
      {
          j=0; //if only 1 alive then it should reset every turn
      }

     srand(time(0));

  if (cardarraycount%3==0 && servant1death==false && servant2death==false && servant3death==false )
  {


    cardsFunction(commandcards,size, count_Abuster, count_Bbuster, count_Cbuster, count_Aarts, count_Barts, count_Carts, count_Aquick,
          count_Bquick,count_Cquick); //if all 3 are alive then this function will shuffle all 3 servant's cards into a 15 size array every 3 turns
  }
  if ( cardarraycount%2==0 && servant1death==true && servant2death==false && servant3death==false)
  {


      servant1DeathCardsFunction(commandcards,size, count_Abuster, count_Bbuster, count_Cbuster, count_Aarts, count_Barts, count_Carts, count_Aquick,
          count_Bquick,count_Cquick); //if a specific servant is dead then 10 cards will be shuffled into an array, excluding the dead servant's cards,every 2 turns
  }
    if ( cardarraycount%2==0 && servant1death==false && servant2death==true && servant3death==false)
  {


      servant2DeathCardsFunction(commandcards,size, count_Abuster, count_Bbuster, count_Cbuster, count_Aarts, count_Barts, count_Carts, count_Aquick,
          count_Bquick,count_Cquick);
  }
    if ( cardarraycount%2==0 && servant1death==false && servant2death==false && servant3death==true)
  {


      servant3DeathCardsFunction(commandcards,size, count_Abuster, count_Bbuster, count_Cbuster, count_Aarts, count_Barts, count_Carts, count_Aquick,
          count_Bquick,count_Cquick);
  }
  if (  servant1death==false && servant2death==true && servant3death==true)
  {


      onlyACardsFunction(commandcards,size, count_Abuster, count_Bbuster, count_Cbuster, count_Aarts, count_Barts, count_Carts, count_Aquick,
          count_Bquick,count_Cquick); //if only 1 servant is alive then his cards will be shuffled into a 5 size array every turn
  }
 if (  servant1death==true && servant2death==false && servant3death==true)
  {


      onlyBCardsFunction(commandcards,size, count_Abuster, count_Bbuster, count_Cbuster, count_Aarts, count_Barts, count_Carts, count_Aquick,
          count_Bquick,count_Cquick);
  }
 if (  servant1death==true && servant2death==true && servant3death==false)
  {


      onlyCCardsFunction(commandcards,size, count_Abuster, count_Bbuster, count_Cbuster, count_Aarts, count_Barts, count_Carts, count_Aquick,
          count_Bquick,count_Cquick);
  }
  int input=1;

  if (servant1health>0)
  {


cout<<servant1<<endl;
cout<<"Health: "<<servant1health<<endl;
cout<<"ATK: "<<servant1attack<<endl;
cout<<"NP: "<<merlinnpgauge<<"%"<<endl;
cout<<endl;
cout<<"0.Exit to command cards selection"<<endl;
cout<<endl;
if (merlin1cooldownb==false && merlin2cooldownb==false && merlin3cooldownb==false) //if none of merlin's skills are on cooldown
{
    cout<<"1.Dreamlike charisma \t"<<"| Increase npgauge of team by 20, and increase attack of team by 20%"<<endl;
    cout<<"2.Illusion \t"<<"| Grant team invincibility for 1 turn"<<endl;
    cout<<"3.Hero Creation \t"<<"| Increase buster damage of team by 150%,and heal the team"<<endl;


}
if (merlin1cooldownb==true && merlin2cooldownb==false && merlin3cooldownb==false) //if one of merlin's skills are on cooldown then display the other 2
{
    cout<<"2.Illusion \t"<<"| Grant team invincibility for 1 turn"<<endl;
    cout<<"3.Hero Creation \t"<<"| Increase buster damage of team by 150%,and heal the team"<<endl;


}
if (merlin1cooldownb==false && merlin2cooldownb==true && merlin3cooldownb==false)
{
        cout<<"1.Dreamlike charisma \t"<<"| Increase npgauge of team by 20, and increase attack of team by 20%"<<endl;

    cout<<"3.Hero Creation \t"<<"| Increase buster damage of team by 150%,and heal the team"<<endl;


}
if (merlin1cooldownb==false && merlin2cooldownb==false && merlin3cooldownb==true)
{
    cout<<"1.Dreamlike charisma \t"<<"| Increase npgauge of team by 20, and increase attack of team by 20%"<<endl;
    cout<<"2.Illusion \t"<<"| Grant team invincibility for 1 turn"<<endl;


}
if (merlin1cooldownb==true && merlin2cooldownb==true && merlin3cooldownb==false) //if 2 are on cooldown then display the only one that isnt
{
    cout<<"3.Hero Creation \t"<<"| Increase buster damage of team by 150%,and heal the team"<<endl;


}
if (merlin1cooldownb==false && merlin2cooldownb==true && merlin3cooldownb==true)
{
    cout<<"3.Hero Creation \t"<<"| Increase buster damage of team by 150%,and heal the team"<<endl;


}
if (merlin1cooldownb==true && merlin2cooldownb==false && merlin3cooldownb==true)
{
    cout<<"2.Illusion \t"<<"| Grant team invincibility for 1 turn"<<endl;


}
  }
cout<<endl;
if (servant2health>0)
{


cout<<servant2<<endl;
cout<<"Health: "<<servant2health<<endl;
cout<<"ATK: "<<servant2attack<<endl;
cout<<"NP: "<<gilgameshnpgauge<<"%"<<endl;
if (gilgamesh1cooldownb==false && gilgamesh2cooldownb==false && gilgamesh3cooldownb==false) //same condition is applied for the other 2 servants
{
    cout<<"4. Charisma \t"<<"| Increase attack of team by 20%"<<endl;
    cout<<"5.Golden Rule \t"<<"| Increase np generation rate by 50%"<<endl;
    cout<<"6.Collector \t"<<"| Ignore Enemy's Invincibility"<<endl;

}
if (gilgamesh1cooldownb==true && gilgamesh2cooldownb==false && gilgamesh3cooldownb==false)
{
    cout<<"5.Golden Rule \t"<<"| Increase np generation rate by 50%"<<endl;
    cout<<"6.Collector \t"<<"| Ignore Enemy's Invincibility"<<endl;


}
if (gilgamesh1cooldownb==false && gilgamesh2cooldownb==true && gilgamesh3cooldownb==false)
{
    cout<<"4. Charisma \t"<<"| Increase attack of team by 20%"<<endl;

    cout<<"6.Collector \t"<<"| Ignore Enemy's Invincibility"<<endl;


}
if (gilgamesh1cooldownb==false && gilgamesh2cooldownb==false && gilgamesh3cooldownb==true)
{
   cout<<"4. Charisma \t"<<"| Increase attack of team by 20%"<<endl;
    cout<<"5.Golden Rule \t"<<"| Increase np generation rate by 50%"<<endl;


}
if (gilgamesh1cooldownb==true && gilgamesh2cooldownb==true && gilgamesh3cooldownb==false)
{
    cout<<"6.Collector \t"<<"| Ignore Enemy's Invincibility"<<endl;


}
if (gilgamesh1cooldownb==false && gilgamesh2cooldownb==true && gilgamesh3cooldownb==true)
{
   cout<<"4. Charisma \t"<<"| Increase attack of team by 20%"<<endl;


}
if (gilgamesh1cooldownb==true && gilgamesh2cooldownb==false && gilgamesh3cooldownb==true)
{
    cout<<"5.Golden Rule \t"<<"| Increase np generation rate by 50%"<<endl;


}
}
string z;
cout<<endl;
if (servant3health>0)
{


cout<<servant3<<endl;
cout<<"Health: "<<servant3health<<endl;
cout<<"ATK: "<<servant3attack<<endl;
cout<<"NP: "<<jacknpgauge<<"%"<<endl;
cout<<endl;

if (jack1cooldownb==false && jack2cooldownb==false && jack3cooldownb==false)
{
    cout<<"7.Murderer of the mist \t"<<"| Render yourself invincible for 1 turn and increase your own quick card performance"<<endl;
    cout<<"8.Sabotage \t"<<"| Decrease enemy's critchance for 3 turns"<<endl;
    cout<<"9.Surgery \t"<<"| Heal an ally"<<endl;


}
if (jack1cooldownb==true && jack2cooldownb==false && jack3cooldownb==false)
{
    cout<<"8.Sabotage \t"<<"| Decrease enemy's critchance for 3 turns"<<endl;
    cout<<"9.Surgery \t"<<"| Heal an ally"<<endl;

}
if (jack1cooldownb==false && jack2cooldownb==true && jack3cooldownb==false)
{
    cout<<"7.Murderer of the mist \t"<<"| Render yourself invincible for 1 turn and increase your own quick card performance"<<endl;

    cout<<"9.Surgery \t"<<"| Heal an ally"<<endl;


}
if (jack1cooldownb==false && jack2cooldownb==false && jack3cooldownb==true)
{

    cout<<"7.Murderer of the mist \t"<<"| Render yourself invincible for 1 turn and increase your own quick card performance"<<endl;
    cout<<"8.Sabotage \t"<<"| Decrease enemy's critchance for 3 turns"<<endl;


}
if (jack1cooldownb==true && jack2cooldownb==true && jack3cooldownb==false)
{
    cout<<"9.Surgery \t"<<"| Heal an ally"<<endl;


}
if (jack1cooldownb==false && jack2cooldownb==true && jack3cooldownb==true)
{
    cout<<"7.Murderer of the mist \t"<<"| Render yourself invincible for 1 turn and increase your own quick card performance"<<endl;


}
if (jack1cooldownb==true && jack2cooldownb==false && jack3cooldownb==true)
{
    cout<<"8.Sabotage \t"<<"| Decrease enemy's critchance for 3 turns"<<endl;


}
}

while (input!=0) //input is taken to choose skill and respective functions are called which output the effects of the skills

{
    cin>>input;

    if (input==1)
    {
        dreamlikeCharismaFunction( merlinnpgauge,gilgameshnpgauge,
                                jacknpgauge,merlin1cooldownb,
                                 servant1attack, servant2attack,  servant3attack,merlin1counter );

                                 cout<<"Team 20np++, Team ATK++"<<endl;


    }
    if (input==2)
    {
        illusionFunction( servant1defensedebuff,  servant2defensedebuff,
                        servant3defensedebuff, merlin2cooldownb, merlin2counter);
                        cout<<"Team is now immune to all attacks"<<endl;
    }
    if (input==3)
    {
        heroCreationFunction( allybusterdamage,  merlin3counter,  merlin3cooldownb,  servant1health,
                           servant2health,  servant3health );
                           cout<<"Team Buster damage++, Team HP++"<<endl;
    }

    if (input==7)
    {
         jack1Function( servant3defensedebuff,  servant3attack,  jack1cooldownb,  jack1counter);
        cout<<"Jack is immune to all attacks, Jack's ATK++"<<endl;
    }

    if (input==8)
    {
         jack2Function( criticalrate, jack2cooldownb, jack2counter );
  cout<<"Enemy critchance--"<<endl;
    }
    if (input==9)
    {
         jack3Function ( servant1health,  servant2health,  servant3health,    jack3cooldownb);

    }
    if (input==4)
    {
        gilgamesh1Function( servant1attack, servant2attack, servant3attack, gilgamesh1counter,  gilgamesh1cooldownb);
        cout<<"Teak ATK++"<<endl;
    }
    if (input==5)
    {
        gilgamesh2Function(gilgameshnpgen, gilgamesh2cooldownb, gilgamesh2counter);
        cout<<"Gilgamesh NPgain++"<<endl;
    }
    if (input==6)
    {
        gilgamesh3Function( enemydefensedebuff, gilgamesh3cooldownb);
        cout<<"Enemy is now vulnerable to your attacks"<<endl;
    }

if (input<0 || input>9)
{
    cout<<"wrong input"<<endl; //if invalid input then input is asked again
    cin.clear();
    getline(cin,z);
    continue;
}



}









cout<<endl;


    printCardsfunction(commandcards,size,j,cardarraycount, //this function is called which outputs five random cards and asks player for input to select a specific card
                  aplayerAbuster,
         aplayerAarts,
     aplayerAquick,
     aplayerBbuster,
     aplayerBarts,
    aplayerBquick,
     aplayerCbuster,
     aplayerCarts,
    aplayerCquick,

    bplayerAbuster,
   bplayerAarts,
    bplayerAquick,
    bplayerBbuster,
  bplayerBarts,
    bplayerBquick,
     bplayerCbuster,
     bplayerCarts,
     bplayerCquick,

   cplayerAbuster,
    cplayerAarts,
     cplayerAquick,
     cplayerBbuster,
   cplayerBarts,
     cplayerBquick,
    cplayerCbuster,
    cplayerCarts,
    cplayerCquick,
    cardstargenmod,
    carddamagemod,
   cardnpgenmod,servant1death,servant2death,servant3death,starstobeused,merlinnpgauge,
   gilgameshnpgauge,jacknpgauge,merlinspecial,gilgameshspecial,jackspecial,jack1cooldownb,
         jack2cooldownb,
        jack3cooldownb,
        merlin1cooldownb,
         merlin2cooldownb,
         merlin3cooldownb,
         gilgamesh1cooldownb,
        gilgamesh2cooldownb,
        gilgamesh3cooldownb );  //It will return some bool values which will indicate that those cards have been chosen...

if (merlinspecial)  //if a specific card bool is true, then that card's function is output
{

    gardenOfAvalonFunction(merlinnpgauge,merlinspecial,gardenofavaloncounter);


}

if (gilgameshspecial)
{

    enumaElishFunction(gilgameshnpgauge,gilgameshspecial);
    cout<<"Gilgamesh did "<<servant1attack*25*allybusterdamage<<" damage to the enemy!"<<endl;

}
if (jackspecial)
{
    jackTheRipperFunction(jacknpgauge,jackspecial);
        cout<<"Jack did "<<servant3attack*20<<" damage to the enemy!"<<endl;

}

       if (aplayerAbuster)
       {
        if ((rand()%100)>=0 && (rand()%100)<=merlinCriticalrateFunction(starstobeused)) //chance is applied for critical
{

cout<<"CRITICAL ATTACK!"<<endl; //if it's true then damage and extra effect are multiplied by 2
       cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1.5*2*allybusterdamage<<" damage to the enemy!"<<endl;
         enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1.5*2*allybusterdamage; //formula to deal damage
         starsgenerated+=(0.1*merlinstargen*cardstargenmod*2); //formula to generate stars

}
else //if it's false then normal damage and special effect is output, and this is repeated for every card but every servant has different critical attack chance
{
    cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1.5*allybusterdamage<<" damage to the enemy!"<<endl;
         enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1.5*allybusterdamage;
         starsgenerated+=(0.1*merlinstargen*cardstargenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;}

       if (aplayerBbuster)
       {
                   if ((rand()%100)>=0 && (rand()%100)<=gilgameshCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1.5*2*allybusterdamage<<" damage to the enemy!"<<endl;
         enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1.5*2*allybusterdamage;
 starsgenerated+=(0.1*gilgameshstargen*cardstargenmod)*2;
}
 else
 {
     cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1.5*allybusterdamage<<" damage to the enemy!"<<endl;
         enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1.5*allybusterdamage;
 starsgenerated+=(0.1*gilgameshstargen*cardstargenmod);
 }
        cout<<"Enemy health: "<<enemyhealth<<endl;
       }
       if (aplayerCbuster)
       {

                   if ((rand()%100)>=0 && (rand()%100)<=jackCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;


       cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1.5*2*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1.5*2*allybusterdamage;
   starsgenerated+=(0.1*jackstargen*cardstargenmod)*2;
}
      else
      {
          cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1.5*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1.5*allybusterdamage;
   starsgenerated+=(0.1*jackstargen*cardstargenmod);
      }

        cout<<"Enemy health: "<<enemyhealth<<endl;
       }

       if (bplayerAbuster)
       {   if ((rand()%100)>=0 && (rand()%100)<=merlinCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;


       cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1.8*2*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1.8*2*allybusterdamage;
         starsgenerated+=(0.15*merlinstargen*cardstargenmod)*2;
}
else
{
    cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1.8*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1.8*allybusterdamage;
         starsgenerated+=(0.15*merlinstargen*cardstargenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;}

       if (bplayerBbuster)
       {
if ((rand()%100)>=0 && (rand()%100)<=gilgameshCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1.8*2*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1.8*2*allybusterdamage;
         starsgenerated+=(0.15*gilgameshstargen*cardstargenmod)*2;
}
else
{
    cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1.8*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1.8*allybusterdamage;
         starsgenerated+=(0.15*gilgameshstargen*cardstargenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;}

       if (bplayerCbuster)
       {
if ((rand()%100)>=0 && (rand()%100)<=jackCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1.8*2*allybusterdamage<<" damage to the enemy!"<<endl;
          enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1.8*2*allybusterdamage;
         starsgenerated+=(0.15*jackstargen*cardstargenmod)*2;

}
else
{
      cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1.8*allybusterdamage<<" damage to the enemy!"<<endl;
          enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1.8*allybusterdamage;
         starsgenerated+=(0.15*jackstargen*cardstargenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;}

       if (aplayerAarts)
       {
if ((rand()%100)>=0 && (rand()%100)<=merlinCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1*2<<" damage to the enemy!"<<endl;
          enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1*2;
          merlinnpgauge+=(merlinnpgen*3*2*cardnpgenmod); //formula to generate np gauge
}
else
{
     cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1<<" damage to the enemy!"<<endl;
          enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1;
          merlinnpgauge+=(merlinnpgen*3*cardnpgenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (aplayerBarts)
       {

if ((rand()%100)>=0 && (rand()%100)<=gilgameshCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;
       cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1*2<<" damage to the enemy!"<<endl;
          enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1*2;
          gilgameshnpgauge+=(gilgameshnpgen*3*2*cardnpgenmod);
}
else
{
    cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1<<" damage to the enemy!"<<endl;
          enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1;
                    gilgameshnpgauge+=(gilgameshnpgen*3*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (aplayerCarts)
       {
if ((rand()%100)>=0 && (rand()%100)<=jackCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*2;
                           jacknpgauge+=(jacknpgen*3*2*cardnpgenmod);

}
else
{
      cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1;
                                  jacknpgauge+=(jacknpgen*3*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (bplayerAarts)
       {
if ((rand()%100)>=0 && (rand()%100)<=merlinCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1.2*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1.2*2;
                                         merlinnpgauge+=(merlinnpgen*4.5*2*cardnpgenmod);

}
else
{
      cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1.2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1.2;
                                                merlinnpgauge+=(merlinnpgen*4.5*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (bplayerBarts)
       {
if ((rand()%100)>=0 && (rand()%100)<=gilgameshCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1.2*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1.2*2;
                                                gilgameshnpgauge+=(gilgameshnpgen*4.5*2*cardnpgenmod);

}
else
{
    cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1.2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1.2;
                                                       gilgameshnpgauge+=(gilgameshnpgen*4.5*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (bplayerCarts)
       {

if ((rand()%100)>=0 && (rand()%100)<=jackCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;
       cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1.2*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1.2*2;
                                                       jacknpgauge+=(jacknpgen*4.5*2*cardnpgenmod);

}
else
{
     cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1.2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1.2;
                                                              jacknpgauge+=(jacknpgen*4.5*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (aplayerAquick)
       {
if ((rand()%100)>=0 && (rand()%100)<=merlinCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*0.8*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*0.8*2;
         starsgenerated+=(0.8*merlinstargen*cardstargenmod)*2;
                                                                merlinnpgauge+=(merlinnpgen*2*cardnpgenmod);

}
else
{
    cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*0.8<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*0.8;
         starsgenerated+=(0.8*merlinstargen*cardstargenmod);
                                                                         merlinnpgauge+=(merlinnpgen*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (aplayerBquick)
       {
if ((rand()%100)>=0 && (rand()%100)<=gilgameshCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*0.8*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*0.8*2;
         starsgenerated+=(0.8*gilgameshstargen*cardstargenmod)*2;
                                                                         gilgameshnpgauge+=(gilgameshnpgen*2*cardnpgenmod);

}
else
{
      cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*0.8<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*0.8;
         starsgenerated+=(0.8*gilgameshstargen*cardstargenmod);
                                                                         gilgameshnpgauge+=(gilgameshnpgen*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (aplayerCquick)
       {
if ((rand()%100)>=0 && (rand()%100)<=jackCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*0.8*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*0.8*2;
         starsgenerated+=(0.8*jackstargen*cardstargenmod)*2;
                                                                                  jacknpgauge+=(jacknpgen*2*cardnpgenmod);

}

else
{
        cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*0.8<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*0.8;
         starsgenerated+=(0.8*jackstargen*cardstargenmod);
                                                                                           jacknpgauge+=(jacknpgen*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;}

       if (bplayerAquick)
       {
if ((rand()%100)>=0 && (rand()%100)<=merlinCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*0.96*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*0.96*2;
         starsgenerated+=(1.3*merlinstargen*cardstargenmod)*2;
                                                                                           merlinnpgauge+=(merlinnpgen*1.5*2*cardnpgenmod);

}
else
{
    cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*0.96<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*0.96;
         starsgenerated+=(1.3*merlinstargen*cardstargenmod);
                                            merlinnpgauge+=(merlinnpgen*1.5*cardnpgenmod);

}
}
        cout<<"Enemy health: "<<enemyhealth<<endl;


       if (bplayerBquick)
       {
if ((rand()%100)>=0 && (rand()%100)<=gilgameshCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*0.96*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*0.96*2;
         starsgenerated+=(1.3*gilgameshstargen*cardstargenmod)*2;
                        gilgameshnpgauge+=(gilgameshnpgen*1.5*2*cardnpgenmod);

}
else
{
       cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*0.96<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*0.96;
         starsgenerated+=(1.3*gilgameshstargen*cardstargenmod);
gilgameshnpgauge+=(gilgameshnpgen*1.5*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (bplayerCquick)
       {
if ((rand()%100)>=0 && (rand()%100)<=jackCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*0.96*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*0.96*2;
         starsgenerated+=(1.3*jackstargen*cardstargenmod)*2;
         jacknpgauge+=(jacknpgen*1.5*2*cardnpgenmod);
}
else
{
    cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*0.96<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*0.96;
         starsgenerated+=(1.3*jackstargen*cardstargenmod);
         jacknpgauge+=(jacknpgen*1.5*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (cplayerAquick)
       {
if ((rand()%100)>=0 && (rand()%100)<=merlinCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;


       cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1.12*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1.12*2;
         starsgenerated+=(1.8*merlinstargen*cardstargenmod)*2;
         merlinnpgauge+=(merlinnpgen*2*2*cardnpgenmod);
}
else
{
     cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1.12<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1.12;
         starsgenerated+=(1.8*merlinstargen*cardstargenmod);
         merlinnpgauge+=(merlinnpgen*2*cardnpgenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (cplayerBquick)
       {
if ((rand()%100)>=0 && (rand()%100)<=gilgameshCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1.12*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1.12*2;
         starsgenerated+=(1.8*gilgameshstargen*cardstargenmod)*2;
         gilgameshnpgauge+=(gilgameshnpgen*2*2*cardnpgenmod);
}
else
{cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1.12<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1.12;
         starsgenerated+=(1.8*gilgameshstargen*cardstargenmod);
         gilgameshnpgauge+=(gilgameshnpgen*2*cardnpgenmod);

}
        cout<<"Enemy health: "<<enemyhealth<<endl;
       }


       if (cplayerCquick)
       {

if ((rand()%100)>=0 && (rand()%100)<=jackCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;



       cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1.12*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1.12*2;
         starsgenerated+=(1.8*jackstargen*cardstargenmod)*2;
         jacknpgauge+=(jacknpgen*2*2*cardnpgenmod);
}
else
{
     cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1.12<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1.12;
         starsgenerated+=(1.8*jackstargen*cardstargenmod);
         jacknpgauge+=(jacknpgen*2*cardnpgenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;}




       if (cplayerAbuster)
       {
if ((rand()%100)>=0 && (rand()%100)<=merlinCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*2.1*2*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*2.1*2*allybusterdamage;
         starsgenerated+=(0.2*merlinstargen*cardstargenmod)*2;
}
else
{
     cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*2.1*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*2.1*allybusterdamage;
         starsgenerated+=(0.2*merlinstargen*cardstargenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (cplayerBbuster)
       {
if ((rand()%100)>=0 && (rand()%100)<=gilgameshCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*2.1*2*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*2.1*2*allybusterdamage;
         starsgenerated+=(0.2*gilgameshstargen*cardstargenmod)*2;
}
else
{
     cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*2.1*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*2.1*allybusterdamage;
         starsgenerated+=(0.2*gilgameshstargen*cardstargenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;}


       if (cplayerCbuster)
       {

if ((rand()%100)>=0 && (rand()%100)<=jackCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;
       cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*2.1*2*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*2.1*2*allybusterdamage;
         starsgenerated+=(0.2*jackstargen*cardstargenmod)*2;
}
else
{
     cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*2.1*allybusterdamage<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*2.1*allybusterdamage;
         starsgenerated+=(0.2*jackstargen*cardstargenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;


        }



       if (cplayerAarts)
       {
if ((rand()%100)>=0 && (rand()%100)<=merlinCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1.4*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1.4*2;
       merlinnpgauge+=(merlinnpgen*6*2*cardnpgenmod);
}
else
{

       cout<<servant1<<" did "<< servant1attack*enemydefensedebuff*carddamagemod*1.4<<" damage to the enemy!"<<endl;
       enemyhealth-=servant1attack*enemydefensedebuff*carddamagemod*1.4;
       merlinnpgauge+=(merlinnpgen*6*cardnpgenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;
       }


       if (cplayerBarts)
       {
if ((rand()%100)>=0 && (rand()%100)<=gilgameshCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1.4*2<<" damage to the enemy!"<<endl;
              enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1.4*2;
              gilgameshnpgauge+=(gilgameshnpgen*6*2*cardnpgenmod);
}
else
{
    cout<<servant2<<" did "<< servant2attack*enemydefensedebuff*carddamagemod*1.4<<" damage to the enemy!"<<endl;
              enemyhealth-=servant2attack*enemydefensedebuff*carddamagemod*1.4;
              gilgameshnpgauge+=(gilgameshnpgen*6*cardnpgenmod);
}
        cout<<"Enemy health: "<<enemyhealth<<endl;
       }


       if (cplayerCarts)
       {
if ((rand()%100)>=0 && (rand()%100)<=jackCriticalrateFunction(starstobeused))
{



cout<<"CRITICAL ATTACK!"<<endl;

       cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1.4*2<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1.4*2;
       jacknpgauge+=(jacknpgen*6*2*cardnpgenmod);
}
else
{
      cout<<servant3<<" did "<< servant3attack*enemydefensedebuff*carddamagemod*1.4<<" damage to the enemy!"<<endl;
       enemyhealth-=servant3attack*enemydefensedebuff*carddamagemod*1.4;
       jacknpgauge+=(jacknpgen*6*cardnpgenmod);
}
       cout<<"Enemy health: "<<enemyhealth<<endl;

       }

       cardarraycount++; //this counter is incremented in order to reshuffle and pick out random cards after every few turns
        cout<<endl;
        starsgenerated=static_cast<int>(starsgenerated)/1;    //converted into int
                cout<<"Stars generated: "<<starsgenerated<<endl;
                starstobeused=static_cast<int>(starsgenerated)/1;
                if (merlinnpgauge>100)
                {
                    merlinnpgauge=100;   //an np gauge cannot exceed 100 this way
                }
                 if (gilgameshnpgauge>100)
                {
                    gilgameshnpgauge=100;
                } if (jacknpgauge>100)
                {
                    jacknpgauge=100;
                }


                if (merlin1cooldownb==true) //if a specific skill's cooldown is true....
                {
                    merlin1cooldown++; //then its cooldown counter is incremented

                    if (merlin1cooldown==5) //and if it reached a specific value...
                    {
                        merlin1cooldown=0; //cooldown is reset
                        merlin1cooldownb=false; //and the skill becomes available to use again
                    }
                }
                if (merlin2cooldownb==true)
                {
                    merlin2cooldown++;

                    if (merlin2cooldown==7)
                    {
                        merlin2cooldown=0;
                        merlin2cooldownb=false;
                    }


                }
                    if (merlin3cooldownb==true)
                {
                    merlin3cooldown++;

                    if (merlin3cooldown==6)
                    {
                        merlin3cooldown=0;
                        merlin3cooldownb=false;
                    }


                }
                if (gilgamesh1cooldownb==true)
                {
                    gilgamesh1cooldown++;

                    if (gilgamesh1cooldown==5)
                    {
                        gilgamesh1cooldown=0;
                        gilgamesh1cooldownb=false;
                    }
                }
                if (gilgamesh2cooldownb==true)
                {
                   gilgamesh2cooldown++;

                    if (gilgamesh2cooldown==6)
                    {
                        gilgamesh2cooldown=0;
                        gilgamesh2cooldownb=false;
                    }


                }
                    if (gilgamesh3cooldownb==true)
                {
                    gilgamesh3cooldown++;

                    if (gilgamesh3cooldown==6)
                    {
                        gilgamesh3cooldown=0;
                        gilgamesh3cooldownb=false;
                    }


                }
                 if (jack1cooldownb==true)
                {
                    jack1cooldown++;

                    if (jack1cooldown==5)
                    {
                        jack1cooldown=0;
                        jack1cooldownb=false;
                    }
                }
                if (jack2cooldownb==true)
                {
                    jack2cooldown++;

                    if (jack2cooldown==5)
                    {
                        jack2cooldown=0;
                        jack2cooldownb=false;
                    }


                }
                    if (jack3cooldownb==true)
                {
                    jack3cooldown++;

                    if (jack3cooldown==5)
                    {
                        jack3cooldown=0;
                        jack3cooldownb=false;
                    }


                }
                merlin3counter--;  //at the end of every turn, a servant's skill's counter is decremented
                if (merlin3counter==0) //if it reaches zero...
                {
                    allybusterdamage=1; //its effect wears off
                }


  merlin2counter--;
  if (merlin2counter==0)
  {
      servant1defensedebuff=1;
      servant2defensedebuff=1;
      servant3defensedebuff=1;
  }

                jack1counter--;
                if (jack1counter==0)
                {
                    servant3defensedebuff=1;
                    servant3attack=10000;
                }

merlin1counter--;
if (merlin1counter==0)
{
    servant1attack=9000;
    servant2attack=10000;
    servant3attack=11000;
}

jack2counter--;
if (jack2counter==0)
{

    criticalrate+=5;

}
gilgamesh1counter--;
if (gilgamesh1counter==0)
{
    servant1attack=9000;
    servant2attack=10000;
    servant3attack=11000;


}

gilgamesh2counter--;
if (gilgamesh2counter==0)
{


    gilgameshnpgen=5;
}




if (gardenofavaloncounter>0) //special attack's counter
{
    cout<<"Team heal 10000+"<<endl;  //as long as it is greater than 0, the attack's effects will be applied
    servant1health+=10000;
    servant2health+=10000;
    servant3health+=10000;
    gardenofavaloncounter--; //it is decremented to eventually bring it to 0
}

if (enemyhealth<=0) //if enemy's health depletes, you win
{
    cout<<"You have won!"<<endl;
}

        cout<<endl;
   }














int main()
{


    srand(time(0)); //seed for random number
//Tutorial battle!

double turnnumber=1;
double allycriticaldamage=1; //unusued variable
double allybusterdamage=1; //multiplier for buster damage of all allies
double servant1attack=9000; //ATK stat of a servant, which will determine the health reduction of the enemy per attack endured by the said servant
double servant2attack=11000;
double servant3attack=10000;
double servant1defensedebuff=1; //How vulnerable the servant is. Higher the value, higher the damage the servant will take
double servant2defensedebuff=1;
double servant3defensedebuff=1;
double enemydamage=25000; //ATK stat of the enemy
double servant1health=40000; //health points of said servant
double servant2health=100000;
double servant3health=60000;
bool servant1death=false; //shows the alive/dead status of the servants
bool servant2death=false;
bool servant3death=false;
int deathcount=0; //shows the amount of allies that have died
int criticalrate=1; //the critical rate of the enemy
int merlinnpgauge=0; //np gauge of merlin
int gilgameshnpgauge=0; //np gauge of gilgamesh
int jacknpgauge=0; //np gauge of jack
double enemyhealth=500000; //health of enemy
double enemydefensedebuff=1; //how vulnerable the enemy is
double merlinstargen=5;  //multiplier for stargeneration of a servant
double gilgameshstargen=15;
double jackstargen=30;
double merlinnpgen=10; //multiplier for np generation of a servant
double gilgameshnpgen=2;
double jacknpgen=3;
double cardstargenmod=1;   //multiplier for star generation of an attack
       double carddamagemod=1; //multiplier for damage dealt by an attack

        double cardnpgenmod=1;   //multiplier for np gained through an attack
       double starstobeused=0; //stars that can be used
       bool merlinspecial=false; //indicates that merlin's special attack is not available and so on
       bool gilgameshspecial=false;
       bool jackspecial=false;
       bool merlinnpeffect=false;
       int merlinnpcounter=0;   //to stop merlin np's effect after 5 turns
       int merlin1counter=0; //to stop a servant's 1st skill's effects after some turns
       int merlin1cooldown=0; //variable through which a servant's 1st skill becomes unavailable for use temporarily after being used
       int gilgamesh1counter=0;
       int gilgamesh2counter=0; //to stop a servant's 1st skill's effects after some turns
       int gilgamesh3counter=0; //to stop a servant's 1st skill's effects after some turns
       int gilgamesh1cooldown=0;
       int gilgamesh2cooldown=0; //variable through which a servant's 2nd skill becomes unavailable for use temporarily after being used
       int gilgamesh3cooldown=0; //variable through which a servant's 3rd skill becomes unavailable for use temporarily after being used
       int merlin2cooldown=0;
       int merlin3counter=0;
       int merlin3cooldown=0;
       int jack1counter=0;
       int jack2counter=0;
       int jack3cooldown=0;
       int jack1cooldown=0;
       int jack2cooldown=0;
       double merlincriticalrate=0; //these 3 were left unused
double gilgameshcriticalrate=0;
double jackcriticalrate=0;


       bool jack1cooldownb=false;   //ServantNameSkill#cooldown  with a true or false to show whether it is on cooldown or not
       bool jack2cooldownb=false;
       bool jack3cooldownb=false;
       bool merlin1cooldownb=false;
       bool merlin2cooldownb=false;
       bool merlin3cooldownb=false;
       bool gilgamesh1cooldownb=false;
       bool gilgamesh2cooldownb=false;
       bool gilgamesh3cooldownb=false;
       int merlin2counter=1;
int gardenofavaloncounter=0;
int cardarraycount=3;   //this variable is through which the command card array reset and variable j reset is controlled
int enemyimmunitycounter=0; //variable to control enemy's immunity for a few turns
int j=0;  //variable which controls which index# printCards function will start printing from
int size=15;
string commandcards[15]; //array for storing shuffled command cards

string servant1="Merlin"; //name of servant1

string servant2="Gilgamesh"; //name of servant2
string servant3="Jack"; //name of servant3


while (enemyhealth>0 || deathcount<3)
{
enemyTurnFunction (turnnumber,servant1attack,
servant2attack,
servant3attack,
servant1defensedebuff,
servant2defensedebuff,
servant3defensedebuff,
 enemydamage,
servant1health,
servant2health,
servant3health,
 servant1death,
servant2death,
servant3death,
criticalrate,

servant1,
servant2,
servant3,cardarraycount,starstobeused,enemyimmunitycounter,enemydefensedebuff,deathcount);
if (enemyhealth<=0 || deathcount==3)
{
    break;
}

playerTurnfunction(  commandcards, size, servant1, servant2,
                         servant3, servant1health, servant2health ,
                         servant3health, servant1attack, servant2attack,
                         servant3attack,
                         merlincriticalrate,gilgameshcriticalrate,jackcriticalrate
                        , enemyhealth,  enemydefensedebuff,  cardarraycount,
                         cardstargenmod,
        carddamagemod,
        cardnpgenmod,
merlinstargen,gilgameshstargen,jackstargen, merlinnpgen,
       gilgameshnpgen,  jacknpgen,j, servant1death,servant2death,servant3death,
       starstobeused,merlinnpgauge,gilgameshnpgauge,
       jacknpgauge,merlinspecial,gilgameshspecial,
       jackspecial,merlin1counter,merlin1cooldown,
       merlin2cooldown,merlin3counter,merlin3cooldown,gilgamesh1counter,gilgamesh1cooldown,
       gilgamesh2counter,gilgamesh2cooldown,gilgamesh3counter,
       gilgamesh3cooldown,jack1counter,jack1cooldown,jack2counter,jack2cooldown,jack3cooldown,jack1cooldownb,
        jack2cooldownb,
        jack3cooldownb,
        merlin1cooldownb,
        merlin2cooldownb,
        merlin3cooldownb,
        gilgamesh1cooldownb,
        gilgamesh2cooldownb,
        gilgamesh3cooldownb,merlin2counter,servant1defensedebuff,servant2defensedebuff,servant3defensedebuff
        ,
allybusterdamage,criticalrate,gardenofavaloncounter);
}
if (deathcount==3)
{
    cout<<"YOU HAVE LOST"<<endl;

}
else
{

   int score= 1/turnnumber*1000;
   int highscore;

   ifstream readScore;
   readScore.open("ScoreList.txt");
   if(readScore.is_open( ))
   {
       while(!readScore.eof( ))
       {
           readScore>>highscore;
       }
   }

   readScore.close();

   ofstream writeScore("ScoreList.txt");

   if(writeScore.is_open( ))
   {
       if(score>highscore)
       {
           highscore=score;
       }
       writeScore<<highscore;
   }
  writeScore.close();
  cout<<"Score   :"<<score<<endl;
cout<<"Highscore   :"<<highscore<<endl;
}
    return 0;
}
