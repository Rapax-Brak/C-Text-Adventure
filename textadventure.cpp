#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout <<"\tWelcome to my text based game!\n";
    char userName[100];
    cout <<"\nPlease enter your character name: ";
    cin >>userName;
    cout <<"Hello, "<<userName<<"!\n\n";
    int dif;
    cout << "Chooose a difficulty\n1. Cry Baby \n2. Rookie\n3. Veteran\n4. Hell\n\n ";
    cin >> dif;
    switch (dif)
    {
        case 1: dif = 1;
            break;
        case 2: dif = 2;
            break;
        case 3: dif = 3;
            break;
        case 4: dif = 4;
            break;
    }
    cout <<"Please pick your race: \n";
    cout <<"1 - Human\n";
    cout <<"2 - Orc\n";
    cout <<"3 - Elf\n";
    int pickRace;
    cout <<"Pick your race: ";
    cin >>pickRace;

    switch (pickRace)
    {
           case 1:
                cout <<"\nYou picked the Human race.\n";
                break;
           case 2:
                cout <<"\nYou picked the Orc race.\n";
                break;
           case 3:
               cout <<"\nYou picked the Elf race.\n";
               break;
           default:
                   cout <<"Error - Invalid input; only 1, 2 or 3 allowed.\n";
    }


    int pickClass;
    cout <<"\nPick your class: \n";
    cout <<"1 - Wizard\n";
    cout <<"2 - Warrior\n";
    cout <<"3 - Assassin\n";

    cout <<"Pick your class: ";
    cin >> pickClass;

    switch (pickClass)
    {
           case 1:
                cout <<"\nYou chose to be a Wizard.\n\n";
                break;
           case 2:
                cout <<"\nYou chose to be a Warrior.\n\n";
                break;
           case 3:
                cout <<"\nYou chose to be a Assassin.\n\n";
                break;
           default:
                   cout <<"Error - Invalid input; only 1, 2 or 3 allowed.\n";
    }

    {
cout<<"You awake from a deep sleep and slowly become aware of your surroundings. "<<endl;
cout<<"You try to move your arms and legs, but  it's useless as you realize you've been chained to a wall inside what appears to be a dungeon. "<<endl;
cout<<"Everything is dark, until you see a distant light source slowly getting bigger \n and bigger as it comes towards you."<<endl;
cout<<"You begin to panic, but regain your composure and:\n"<<endl;
cout<<"1. You close your eyes and focus your mind as you transform into a rat."<<endl;
cout<<"2. You try using brute strength to bust loose."<<endl;
cout<<"3. You're intrigued by the light and patiently wait until it reaches you.\n"<<endl;
label2:
string answer;
int answert;
cout << "Selection: ";
cin >> answer;
if (answer == "1")
{
    if (pickClass == 1) {
cout<<"\nYou carefully scamper away unharmed, avoiding the light source as you find the \nentrance and escape\n"<<endl;
cout << "You see a large figure in a black robe.\n It looks like one of the professors at the academy\n1. Run to the exit\n2. talk to him\n";
    cout << "Selection: ";
    cin >> answert;
    switch (answert) {

        case 1: cout << "As you are running he appears infront of you\nHe puts a necklace around your neck and vanishes\n the necklace starts to grow and you start to wonder.\n";
            break;
        case 2: cout << userName << ": Hey where did you come from. \nunknown: ...\n He comes up to you, He puts a necklace around your neck and vanishes\n the necklace starts to grow and you start to wonder.\n";
            break;
    }
    }
    else {cout << "you are not a wizard \n";
         goto label2;
         }
}
else if (answer == "2")
{
cout<<"\nYou've managed to break free, but you're exhausted and the light source is \ncoming at you even faster now"<<endl;
}
else if (answer == "3")
{
cout<<"\nYou notice a rather large figure covered in a black robe carrying a sconce \napproaching you. "<<endl;
cout<<"The unworldly creature lets out a maniacle laugh as it lifts a necklace over \nyour head and places it around your neck. "<<endl;
cout<<"The creature vanishes into thin air. The necklace immediately begins to glow, \nand you feel empowered as the chains become loose. "<<endl;
cin.get();
cin.ignore();
}
else
{
cout<<"That wasn't a choice."<<endl;
}
    }
{
    char wait;
    cin >> wait;
    return 1;
}
}
