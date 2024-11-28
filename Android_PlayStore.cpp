#include <iostream>
using namespace std;

class Action
{
    public:
    void actionDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                          Top 5 Free Games in Action                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           Game Name               Developer               Size(in MB)                  Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.          Free Fire Max               Garena                   590 mb                     4.3/5       |       " <<endl;
        cout << "| 2.         Hunter Assassin           Ruby Games AS                85 mb                     4.1/5       |       " <<endl;
        cout << "| 3.    Battlegrounds Mobile India        KRAFTON                  950 mb                     4.4/5       |       " <<endl;
        cout << "| 4.          Temple Run 2            Imangi Studios               126 mb                     4.1/5       |       " <<endl;
        cout << "| 5.           Agent Hunt                  Homa                    158 mb                     4.1/5       |       " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Adventure
{
    public:
    void adventureDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                        Top 5 Free Games in Adventure                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           Game Name               Developer               Size(in MB)                  Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.           Farm Land                  Homa                     94 mb                      4.2/5       |       " <<endl;
        cout << "| 2.         Hit Perfect 3D         Supersonic Studios             77 mb                      3.7/5       |       " <<endl;
        cout << "| 3.            Roblox              Roblox Corporation            135 mb                      4.5/5       |       " <<endl;
        cout << "| 4.       School Party craft        Candy Room Games              66 mb                      4.6/5       |       " <<endl;
        cout << "| 5.          Ninja Arashi            Black panther                69 mb                      4.1/5       |       " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Arcade
{
    public:
    void arcadeDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                         Top 5 Free Games in Arcade                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           Game Name               Developer               Size(in MB)                  Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.      Subway Princess Runner           Ivy                    112 mb                      4.1/5       |       " <<endl;
        cout << "| 2.         Subway Surfers               SYBO                    136 mb                      4.4/5       |       " <<endl;
        cout << "| 3.         Galaxy Attack                1SOFT                   140 mb                      4.3/5       |       " <<endl;
        cout << "| 4.          Temple Run             Imangi Studios                67 mb                      4.0/5       |       " <<endl;
        cout << "| 5.           Granny                    DVloper                  129 mb                      4.2/5       |       " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Board
{
    public:
    void boardDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                         Top 5 Free Games in Board                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           Game Name               Developer               Size(in MB)                  Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.           Ludo King             Gametion Global              88 mb                       4.1/5       |       " <<endl;
        cout << "| 2.             Zupee                    Zupee                   26 mb                       4.1/5       |       " <<endl;
        cout << "| 3.             Chess                 Chess Prince              2.4 mb                       4.4/5       |       " <<endl;
        cout << "| 4.          Carrom Lite                Yocheer                  54 mb                       4.0/5       |       " <<endl;
        cout << "| 5.           Monopoly                  Scopely                 125 mb                       4.1/5       |       " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Card
{
    public:
    void cardDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                          Top 5 Free Games in Card                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           Game Name               Developer               Size(in MB)                  Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.           Rummy Circle               Games24x7                54 mb                      4.2/5       |       " <<endl;
        cout << "| 2.               A23               Head Digital Works            34 mb                      4.2/5       |       " <<endl;
        cout << "| 3.            CallBreak                 teslatech               950 mb                      4.4/5       |       " <<endl;
        cout << "| 4.               MPL              Mobile Premier League          89 mb                      4.1/5       |       " <<endl;
        cout << "| 5.              UNO!                    Mattel163               325 mb                      4.5/5       |       " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Games: public Action, public Adventure, public Arcade, public Board, public Card
{
    public:
    void GamesDisplay()
    {
        char choice1;
        cout << "\n-----------------------------------------                          "<<endl;
        cout << "SELECT THE SUB-CATEGORY FOLLOWING OPTIONS:                          "<<endl;
        cout << "------------------------------------------                           " <<endl; 
        cout << "\n(A): Action\n(B): Adventure\n(C): Arcade\n(D): Board\n(E): Card\nYOUR CHOICE :- ";
        cin >> choice1;
        switch (choice1)
        {
            case 'A':
            case 'a':
            actionDisplay();
            break;
            case 'B':
            case 'b':
            adventureDisplay();
            break;
            case 'C':
            case 'c':
            arcadeDisplay();
            break;
            case 'D':
            case 'd':
            boardDisplay();
            break;
            case 'E':
            case 'e':
            cardDisplay();
            break;
            default:
            cout << "Invalid value. Please check your input value" <<endl;
            break;
        }
    }
};

class AllGames: public Games
{
    public:
    void DisplayAllGames()
    {
        actionDisplay();
        adventureDisplay();
        arcadeDisplay();
        boardDisplay();
        cardDisplay();
    }
};

class Art 
{
    public:
    void artDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                       Top 5 Free Apps in Art & Design                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           App Name               Developer               Size(in MB)                  Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.         Adobe Express               Adobe                    67 mb                      4.3/5       |       " <<endl;
        cout << "| 2.            Crafto                Kutumb Apps                 60 mb                      4.3/5       |       " <<endl;
        cout << "| 3.            Canva                    Canva                   9.2 mb                      4.5/5       |       " <<endl;
        cout << "| 4.          Sketchbook               Sketchbook                 78 mb                      4.1/5       |       " <<endl;
        cout << "| 5.         Mehndi Design            Style Studio               6.6 mb                      4.4/5       |       " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Buisness 
{
    public:
    void buisnessDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                       Top 5 Free Apps in Buisness                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           App Name               Developer               Size(in MB)                  Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.            GlowRoad               GlowRoad                  9.4 mb                      4.2/5       |       " <<endl;
        cout << "| 2.              Zoom                 Zoom.us                   117 mb                      4.1/5       |       " <<endl;
        cout << "| 3.            LinkedIn               LinkedIn                   37 mb                      4.1/5       |       " <<endl;
        cout << "| 4.          Document Scan         TrustedOffice                 36 mb                      3.8/5       |       " <<endl;
        cout << "| 5.        Indeed Job Search        Style Studio                 21 mb                      4.4/5       |       " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Communication 
{
    public:
    void communicationDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                       Top 5 Free Apps in Communication                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           App Name               Developer               Size(in MB)                  Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.            Whatsapp              Whatsapp LLC               106 mb                      4.1/5       |       " <<endl;
        cout << "| 2.           TrueCaller              Truecaller                 40 mb                      4.4/5       |       " <<endl;
        cout << "| 3.            Snapchat                  Snap                    70 mb                      4.3/5       |       " <<endl;
        cout << "| 4.        whatsapp buisness         Whatsapp LLC                51 mb                      4.2/5       |       " <<endl;
        cout << "| 5.            telegram            Telegram FZ-LLC               79 mb                      4.2/5       |       " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class  Education
{
    public:
    void educationDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                        Top 5 Free Apps in Education                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           App Name               Developer               Size(in MB)                  Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.            Seekho                Seekho App                  26 mb                      4.5/5       |       " <<endl;
        cout << "| 2.           Unacademy              Unacademy                   69 mb                      3.9/5       |       " <<endl;
        cout << "| 3.           Duolingo               Duolingo                    34 mb                      4.5/5       |       " <<endl;
        cout << "| 4.        Physics wallah          Alakh Pandey                  61 mb                      4.6/5       |       " <<endl;
        cout << "| 5.            ALLEN                   ALLEN                     17 mb                      3.9/5       |       " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Entertainment
{
    public:
    void entertainmentDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                       Top 5 Free Apps in Entertainment                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           App Name               Developer               Size(in MB)                  Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.         Disney+ Hotstar           STAR INDIA                 50 mb                      4.0/5       |       " <<endl;
        cout << "| 2.           Jio Cinema                 Jio                     39 mb                      3.6/5       |       " <<endl;
        cout << "| 3.           ZEE5                Z5X Global FZ LLC              31 mb                      4.5/5       |       " <<endl;
        cout << "| 4.        Youtube kids                 Google                   32 mb                      4.0/5       |       " <<endl;
        cout << "| 5.      Amazon Prime Video        Amazon Mobile LLC             43 mb                      3.8/5       |       " <<endl;
        cout << "---------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Apps: public Art, public Buisness, public Communication, public Education, public Entertainment
{
    public:
    void AppsDisplay()
    {
        char choice2;
        cout << "\n-----------------------------------------                          "<<endl;
        cout << "SELECT THE SUB-CATEGORY FOLLOWING OPTIONS:                          "<<endl;
        cout << "------------------------------------------                           " <<endl;     
        cout << "\n(A): Art\n(B): Buisness\n(C): Communication\n(D): Education\n(E): Entertainment\nYOUR CHOICE :- ";
        cin >> choice2;
        switch (choice2)
        {
            case 'A':
            case 'a':
            artDisplay();
            break;
            case 'B':
            case 'b':
            buisnessDisplay();
            break;
            case 'C':
            case 'c':
            communicationDisplay();
            break;
            case 'D':
            case 'd':
            educationDisplay();
            break;
            case 'E':
            case 'e':
            entertainmentDisplay();
            break;
            default:
            cout << "Invalid value. Please check your input value" <<endl;
            break;
        }
    }
    
};

class AllApps: public Apps
{
    public:
    void DisplayAllApps()
    {
        artDisplay();
        buisnessDisplay();
        communicationDisplay();
        educationDisplay();
        entertainmentDisplay();
    }
};

class New 
{
    public:
    void newDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                         Top 5 New release E-Books                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           Book Name               Author               Price(in rupees)               Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.          Divya Sanket           Dale Carnegie                 22.42                     4.1/5       |       " <<endl;
        cout << "| 2.          Enchantment        William Walker Atkinson            9.44                     4.0/5       |       " <<endl;
        cout << "| 3.          Alien Clay            Adrin Tchaikovsky             421.43                     3.7/5       |       " <<endl;
        cout << "| 4.      Lucifer was Innocent      Tirth Raj Parsana               179                      4.4/5       |       " <<endl;
        cout << "| 5.      The Power of Silence      Prabhat Prakashan              57.82                     4.0/5       |       " <<endl;
        cout << "---------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Top 
{
    public:
    void topDisplay()
    {
        cout << "                                        -----------------------------                           "<<endl;
        cout << "                                         Top 5 Top Seller E-Books                              "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "|S.NO           Book Name               Author               Price(in rupees)               Ratings      |" <<endl;
        cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        cout << "| 1.      HACK YOUR OWN SUCCESS     Birister Sharma                236                       4.3/5       |       " <<endl;
        cout << "| 2.        General Knowledge     Mocktime publication             151                       4.0/5       |       " <<endl;
        cout << "| 3.         Bhagavad-gita         Swami prabhupada                316                       4.5/5       |       " <<endl;
        cout << "| 4.           Mind magic              James Doty                  280                       4.1/5       |       " <<endl;
        cout << "| 5.           Dead Fall                Brad Thor                  336                       4.2/5       |       " <<endl;
        cout << "---------------------------------------------------------------------------------------------------------" << endl;
    }   
};

class Books: public New, public Top
{
    public:
    void BooksDisplay()
    {
        char choice3;
        cout << "\n--------------------------------                          "<<endl;
        cout << "SELECT FROM THE FOLLOWING OPTIONS:                          "<<endl;
        cout << "---------------------------------                           " <<endl;    
        cout << "\n(A): New Releases\n(B): Top Sellers\nYOUR CHOICE :- ";
        cin >> choice3;
        switch (choice3)
        {
            case 'A':
            case 'a':
            newDisplay();
            break;
            case 'B':
            case 'b':
            topDisplay();
            default:
            cout << "Invalid value. Please check your input value" <<endl;
            break;
        }
    }
    
};

class AllBooks: public Books
{
    public:
    void DisplayAllBooks()
    {
        newDisplay();
        topDisplay();
    }
};

class Choice: public Games, public Apps, public Books
{
    public:
    void ChoiceDisplay()
    {
        char choice4;
        cout << "\n--------------------------------                          "<<endl;
        cout << "SELECT FROM THE FOLLOWING OPTIONS:                          "<<endl;
        cout << "---------------------------------                           " <<endl;    
        cout << "\n(A): Games\n(B): Apps\n(C): E-Books\nYOUR CHOICE :- ";
        cin >> choice4;
        switch (choice4)
        {
            case 'A':
            case 'a':
            cout << "\n                                        -----------------------------                           "<<endl;
            cout << "                                                GAMES SECTION                                   "<< endl;
            cout << "                                        -----------------------------                           " <<endl;
            GamesDisplay();
            break;
            case 'B':
            case 'b':
            cout << "\n                                        -----------------------------                           "<<endl;
            cout << "                                                APPS SECTION                                   "<< endl;
            cout << "                                        -----------------------------                           " <<endl;
            AppsDisplay();
            break;
            case 'C':
            case 'c':
            cout << "\n                                        -----------------------------                           "<<endl;
            cout << "                                                E-BOOKS SECTION                                   "<< endl;
            cout << "                                        -----------------------------                           " <<endl;
            BooksDisplay();
            break;
            default:
            cout << "Invalid value. Please check your input value" <<endl;
            break;
        }
    }
};

class All: public AllGames, public AllApps, public AllBooks
{
    public:
    void AllDisplay()
    {
        cout << "\n                                        -----------------------------                           "<<endl;
        cout << "                                                GAMES SECTION                                   "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        DisplayAllGames();
        cout << "\n                                        -----------------------------                           "<<endl;
        cout << "                                                APPS SECTION                                   "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        DisplayAllApps();
        cout << "\n                                        -----------------------------                           "<<endl;
        cout << "                                                E-BOOKS SECTION                                   "<< endl;
        cout << "                                        -----------------------------                           " <<endl;
        DisplayAllBooks();
    }   
};

int main()
{
    Choice choice;
    All all;
    char options;
    cout << "\n                                   ----------------------------------------------                           "<<endl;
    cout << "                                       -:ANDROID GOOGLE PLAY STORE TOP CHARTS:-                                   "<< endl;
    cout << "                                   ----------------------------------------------                           " <<endl;      
    while (true) {
        cout << "\nPLEASE SELECT FROM FOLLOWING OPTIONS :\n(A): SHOW CATEGORY WISE CHARTS\n(B): SHOW ALL CATEGORY CHARTS\n(E): TO EXIT"<< endl;
        cout << "YOUR CHOICE : ";
        cin >> options;

        switch (options)
        {
            case 'A':
            case 'a':
                choice.ChoiceDisplay();
                break;
            case 'B':
            case 'b':
                all.AllDisplay();
                break;
            case 'E':
            case 'e':
                cout << "\n                                        ----------------------------------------------                           "<<endl;
                cout << "                                           QUITING THE PROGRAM ! HAVE A GOOD DAY......                                  "<< endl;
                cout << "                                         ----------------------------------------------                           " <<endl;   
                return 0;
            default:
                cout << "Invalid value, please type (A) for Show Category or (B) for Show All Charts. To exit, type (E)." << endl;
                break;
        }
    }
    
    return 0;
                              
}