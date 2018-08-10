#include <iostream>
#include <string>
#include <list>
#include <iterator> //iterator voor een list


using namespace std; //Standard

//class Vaardigheid
class Vaardigheid {
   private:
       string sType;
       string sItem;
       string sWaarde;
       int iScore;

   public:
       //Getters & Setters
        // Member functions definitions
        string getType(void) {
           return sType ;
        }

        void setType( string type) {
           sType = type;
        }

        string getItem(void) {
           return sItem ;
        }

        void setItem( string item) {
           sItem = item;
        }

        int getScore(void) {
           return iScore ;
        }

        void setScore( int score) {
           iScore = score;
        }


       //Constructor
        Vaardigheid(string typeVdh, string itemVdh, int scoreVdh){
            sType = typeVdh;
            sItem = itemVdh;
            iScore = scoreVdh;
        }

       //Functies
       string bepaalWaarde (int score)
       {
        if(score >= 1 && score <= 5)
        {
            return "Basis";
        }else if(score > 5 && score <= 7){
            return "Goed";
        }else
        {
            return "Zeer goed";
        }
       }

       string printVaardigheid(Vaardigheid v){
        return v.getType() + " - " + v.getItem() + " - " + v.bepaalWaarde(v.getScore());
       }

};







int main()
{
    cout << "CV Laurens Bourgeois!" << endl;

    //Info
    cout << "-- INFO --" << endl; //cout: Standard Character Output, endl: einde en nieuwe lijn toevoegen
    // Initialize String Array 'cvinfo'
    string cvinfo[] = {"Naam: Laurens Bourgeois", "Adres: IJshoutestraat 53, 9520 Sint-Lievens-Houtem", "E-mail: laurens.bourgeois@telenet.be", "GSM: 0477/344703"};

    // Print Strings with for-lus
    for (int i = 0; i < (end(cvinfo) - begin(cvinfo)); i++)
    {
        cout << cvinfo[i] << "\n";
    }
    cout << endl;

    cout << "-- VAARDIGHEDEN --" << endl;

    list<Vaardigheid> listOfVaardigheden;

    Vaardigheid v1 ("Programmeertalen", "HTML", 9);
    Vaardigheid v2 ("Programmeertalen", "Laravel", 5);
    Vaardigheid v3 ("Programmeertalen", "PHP", 5);
    Vaardigheid v4 ("Programmeertalen", "Github", 5);
    //cout << v1.printVaardigheid(v1) << endl;

    listOfVaardigheden.push_back(v1);
    listOfVaardigheden.push_back(v2);
    listOfVaardigheden.push_back(v3);
    listOfVaardigheden.push_back(v4);

    for (std::list<Vaardigheid>::iterator itv = listOfVaardigheden.begin(); itv != listOfVaardigheden.end(); itv++)
    {
        std::cout << itv->getType() << " - " << itv->getItem() << " - " << itv->bepaalWaarde(itv->getScore()) << endl;
        //std::cout << itv->printVaardigheid(listOfVaardigheden[itv]) << endl;
    }


    return 0; //End of the program
}

