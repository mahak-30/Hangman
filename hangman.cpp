#include <iostream>
#include <time.h>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;
int max_tries=5;
int letterfill(char, string, string&);
int main()
{
    int choice;
    int n;
    char letter;
    int incorrect=0;
    string word;
    string words_easy[]=
    {
    "dementor",
    "hufflepuff",
    "slytherin",
    "muggle",
    "wizard",

    "quidditch",
    "polyjuice",
    "azkaban",
    "obliviate",
    "imperio",


    "crucio",
    "alohomora",
    "reducto",
    "mudblood",
    "voldemort",


    "witch",
    "nagini",
    "potions",
    "hogwarts",
    "apparation"
    };
    string words_medium[]=
    {
    "butterbeer",
    "fluffy",
    "auror",
    "chaser",
    "phoenix",


    "veritaserum",
    "gringotts",
    "patronus",
    "buckbeak",
    "seeker",


    "potterhead",
    "dragon",
    "ollivander",
    "divination",
    "transfiguration",

    "charms",
    "horcrux",
    "hippogriff",
    "accio",
    "sectumsempra"

    };
    string words_hard[]=
    {
    "basilisk",
    "galleon",
    "grim",
    "bezoar",
    "acromantula",


    "aragog",
    "incendio",
    "protego",
    "nymphadora",
    "animagus",

    "wand",
    "gryffindor",
    "parseltongue",
    "gillyweed",
    "pensieve",

    "ravenclaw",
    "boggart",
    "expelliarmus",
    "bludger",
    "firebolt"

};
    cout<<"Welcome to hangman!! Now, if you are a potterhead just go ahead and guess any word related to the Harry Potter series"<<endl;
    cout<<"Each letter is represented by an asterisk"<<endl;
    cout<<"You have to type only one letter at a time"<<endl;
    cout<<"You will have maximum "<<max_tries<<" wrong choices to guess the word"<<endl;
    cout<<"Lets get started"<<endl;
    cout<<endl;
    char ch='y';
    do
    {
    cout<<"Level 1: Easy"<<endl;
    cout<<"Level 2: Medium"<<endl;
    cout<<"Level 3: Hard"<<endl;
    cout<<endl<<"Enter your choice of level"<<endl;
    cout<<"You will have maximum "<<max_tries<<" to guess the word"<<endl;
    cin>>choice;
    switch(choice)
    {
    case (1):
      {
    incorrect=0;
    srand(time(NULL));
    n=rand()%20;
    word=words_easy[n];
    string unknown(word.length(),'*');
    char c;
    cout<<"Do you want a hint? Enter y for yes and n for no"<<endl;
    cin>>c;
    if((c=='y')||(c=='Y'))
    {
        if(word=="dementor")
        {
            cout<<"The foulest beings on earth";
        }
        if(word=="hufflepuff")
        {
            cout<<"we know exactly how to lie low – and how to defend ourselves.";
        }
        if(word=="slytherin")
        {
            cout<<"sleek, powerful, and frequently misunderstood.";
        }
        if(word=="muggle")
        {
            cout<<"I am not blessed";
        }
        if(word=="wizard")
        {
            cout<<"The whole Harry Potter series is about me";
        }

        if(word=="quidditch")
        {
            cout<<"Through the ages";
        }
        if(word=="polyjuice")
        {
            cout<<"Ooh, you look much tastier than Crabbe and Goyle, Harry. ...Oh, you now what I mean";
        }
        if(word=="azkaban")
        {
            cout<<"depths of hell";
        }
        if(word=="obliviate")
        {
            cout<<"Say goodbye to your memories";
        }
        if(word=="imperio")
        {
            cout<<"It is still very dangerous but it is possible to resist it";
        }


        if(word=="crucio")
        {
            cout<<"Harry heard Krum and suddenly the air was full of Cedric's yells";
        }
        if(word=="alohormora")
        {
            cout<<"the thief’s friend";
        }
        if(word=="reducto")
        {
            cout<<"They used me to broke the prophecy";
        }
        if(word=="mudblood")
        {
            cout<<"a first generation entrepreneur";
        }
        if(word=="voldemort")
        {
            cout<<"My boggart is my own corpse";
        }


        if(word=="witch")
        {
            cout<<"I can teach, I can kill, I can see future and what else?";
        }
        if(word=="nagini")
        {
            cout<<"There will come a time when Lord Voldemort will seem to fear something of his own";
        }
        if(word=="potions")
        {
            cout<<"Snape conforms perfectly to the stereotype";
        }
        if(word=="hogwarts")
        {
            cout<<"welcome home";
        }
        if(word=="apparation")
        {
            cout<<"wizarding transportation.";
        }
    }
    cout<<endl;
    while(incorrect<max_tries)
    {
        cout<<unknown<<endl;
        cout<<"Guess a letter"<<endl;
        cin>>letter;
        if(letterfill(letter,word,unknown)==0)
        {
            cout<<"Oops! Sorry, wrong choice. The letter isn't there"<<endl;
            cout<<"Better luck next time"<<endl;
            incorrect++;
        }
        else
        {
            cout<<"You have found a letter. Isn't it exciting?"<<endl;
        }
        cout<<"You have now "<<max_tries-incorrect<<" guesses left"<<endl;
        if(word==unknown)
        {
            cout<<word<<endl;
            cout<<"Yeah... you got it. You are a true potterhead"<<endl;
            break;
        }
    }
    if(incorrect==max_tries)
    {
        cout<<"You lose... You've been hanged"<<endl;
        cout<<"The word is "<<word<<endl;
    }
    break;
    }
    case (2):
      {
    incorrect=0;
    srand(time(NULL));
    n=rand()%20;
    word=words_medium[n];
    string unknown(word.length(),'*');
    char c;
    cout<<"Do you want a hint? Enter y for yes and n for no"<<endl;
    cin>>c;
    if((c=='y')||(c=='Y'))
    {
        if(word=="butterbeer")
        {
            cout<<"Winky is getting through six bottles a day now";
        }
        if(word=="fluffy")
        {
            cout<<"The forbidden corridor";
        }
        if(word=="auror")
        {
            cout<<"Half the cells in Azkaban are filled, thanks to them";
        }
        if(word=="chaser")
        {
            cout<<"throw the Quaffle to each other and try and get it through one of the hoops to score a goal";
        }
        if(word=="phoenix")
        {
            cout<<"Burning day they resembles";
        }

         if(word=="transfiguration")
        {
            cout<<"turning something into something else, of course, it's supposed to be very difficult ";
        }
        if(word=="veritaserum")
        {
            cout<<"Three drops of this and even You-Know-Who himself would spill out his innermost secrets";
        }
        if(word=="gringotts")
        {
            cout<<"An ugly confrontation";
        }
        if(word=="patronus")
        {
            cout<<"Once you've become acquainted you'll be able to share your results";
        }
        if(word=="buckbeak")
        {
            cout<<"makes for a noble companion when shown respect";
        }
        if(word=="seeker")
        {
            cout<<"It is my job to catch it";
        }


        if(word=="potterhead")
        {
            cout<<"Qualifying to get the tag";
        }
        if(word=="dragon")
        {
            cout<<"the egg in the fire";
        }

        if(word=="divination")
        {
            cout<<"The Grim, my dear, the Grim";
        }

         if(word=="ollivander")
        {
            cout<<"Tricky customer, eh? Not to worry, we’ll find the perfect match here somewhere...";
        }

        if(word=="charms")
        {
            cout<<"a swish and a flick – and the right incantation...";
        }
        if(word=="horcrux")
        {
            cout<<"Not well enough’ might be Harry’s answer.";
        }
        if(word=="hippogriff")
        {
            cout<<"Half horse, half eagle";
        }
        if(word=="accio")
        {
            cout<<"First, in the First Task of the Triwizard Tournament to Summon his Firebolt broomstick; and secondly, to retrieve the Triwizard Cup when dueling Lord Voldemort.";
        }
        if(word=="sectumsempra")
        {
            cout<<"For enemies";
        }
    }
    cout<<endl;
    while(incorrect<max_tries)
    {
        cout<<unknown<<endl;
        cout<<"Guess a letter"<<endl;
        cin>>letter;
        if(letterfill(letter,word,unknown)==0)
        {
            cout<<"Oops! Sorry, wrong choice. The letter isn't there"<<endl;
            cout<<"Better luck next time"<<endl;
            incorrect++;
        }
        else
        {
            cout<<"You have found a letter. Isn't it exciting?"<<endl;
        }
        cout<<"You have now "<<max_tries-incorrect<<" guesses left"<<endl;
        if(word==unknown)
        {
            cout<<word<<endl;
            cout<<"Yeah... you got it. You are a true potterhead"<<endl;
            break;
        }
    }
    if(incorrect==max_tries)
    {
        cout<<"You lose... You've been hanged"<<endl;
        cout<<"The word is "<<word<<endl;
    }
    break;
    }
    case (3):
      {
    incorrect=0;
    srand(time(NULL));
    n=rand()%20;
    word=words_hard[n];
    string unknown(word.length(),'*');
    char c;
    cout<<"Do you want a hint? Enter y for yes and n for no"<<endl;
    cin>>c;
    if((c=='y')||(c=='Y'))
    {
        if(word=="basilisk")
        {
            cout<<"Look into my eyes and you'll be dead";
        }
        if(word=="galleon")
        {
            cout<<"17 silver Sickles or 493 bronze Knuts.";
        }
        if(word=="grim")
        {
            cout<<"The giant, spectral dog that haunts churchyards!";
        }
        if(word=="bezoar")
        {
            cout<<"In the stomach of a goat";
        }
        if(word=="acromantula")
        {
            cout<<"Ron's worst nightmare";
        }


        if(word=="aragog")
        {
            cout<<"Our kind like the dark and the quiet";
        }
        if(word=="incendio")
        {
            cout<<"We tried everything-nothing could penetrate the darkness";
        }
        if(word=="protego")
        {
            cout<<"If we’re staying, we should put some protective enchantments around the place,";
        }
        if(word=="nymphadora")
        {
            cout<<"A Metamorphmagus";
        }
        if(word=="animagus")
        {
            cout<<"Minerva McGonagall,Sirius Black and also Wormtail";
        }
        if(word=="wand")
        {
            cout<<"The last shop was narrow and shabby.";
        }
        if(word=="gryffindor")
        {
            cout<<"only if you look on heraldic crests";
        }
        if(word=="parseltongue")
        {
            cout<<"it served as a constant reminder of the part of Voldemort inside him.";
        }
        if(word=="gillyweed")
        {
            cout<<"It will make Harry Potter breathe underwater, sir!";
        }
        if(word=="pensieve")
        {
            cout<<"Where memories were siphoned and Harry gets answers to his questions";
        }

        if(word=="ravenclaw")
        {
            cout<<"Eagle which soars where others cannot climb";
        }
             if(word=="boggart")
        {
            cout<<"The more generally fearful a person is, the more susceptible they will be to me";
        }
        if(word=="expelliarmus")
        {
            cout<<"Both Harry’s and the Death Eater’s wands flew out of their hands and soared back towards the entrance to the Hall";
        }
        if(word=="bludger")
        {
            cout<<"bewitched to fly around and try to knock the players off of their brooms";
        }

        if(word=="firebolt")
        {
            cout<<"Little did the Nimbus designers realise that a racing broom was in development that would knock them from their number one spot within twelve months of its release. ";
        }
    }
    cout<<endl;
    while(incorrect<max_tries)
    {
        cout<<unknown<<endl;
        cout<<"Guess a letter"<<endl;
        cin>>letter;
        if(letterfill(letter,word,unknown)==0)
        {
            cout<<"Oops! Sorry, wrong choice. The letter isn't there"<<endl;
            cout<<"Better luck next time"<<endl;
            incorrect++;
        }
        else
        {
            cout<<"You have found a letter. Isn't it exciting?"<<endl;
        }
        cout<<"You have now "<<max_tries-incorrect<<" guesses left"<<endl;
        if(word==unknown)
        {
            cout<<word<<endl;
            cout<<"Yeah... you got it. You are a true potterhead"<<endl;
            break;
        }
    }
    if(incorrect==max_tries)
    {
        cout<<"You lose... You've been hanged"<<endl;
        cout<<"The word is "<<word<<endl;
    }
    break;
    }
    }
    cout<<endl<<"Do you still want to play the game. Enter y for yes and n for no"<<endl;
    cin>>ch;
    }while((ch=='y')||(ch=='Y'));
    return 0;
}
int letterfill(char letter, string word, string& unknown)
{
    int i;
    int len;
    int matches=0;
    len=word.length();
    for(i=0;i<len;i++)
    {
        if((letter==unknown[i]))
        {
            return 0;
        }
        else if((letter==word[i]))
        {
            unknown[i]=letter;
            matches++;
        }
    }
    return matches;
}
