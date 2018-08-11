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

       string printVaardigheid(){
        return getType() + " - " + getItem() + " - " + bepaalWaarde(getScore());
       }


};


class Werkervaring {

    //Members
    private:
       string sBedrijf;
       string sPeriode;
       string sTechnologie;

    public:
       //Getters & Setters
        // Member functions definitions
        string getBedrijf() {
           return sBedrijf;
        }

        void setBedrijf(string bedrijf) {
           sBedrijf = bedrijf;
        }

        string getPeriode() {
           return sPeriode;
        }

        void setPeriode(string periode) {
           sPeriode = periode;
        }

        string getTechnologie() {
           return sTechnologie;
        }

        void setTechnologie( string technologie) {
           sTechnologie = technologie;
        }

        //Constructor
        Werkervaring(string bedrijf, string periode, string technologie){
            sBedrijf = bedrijf;
            sPeriode = periode;
            sTechnologie = technologie;
        }

        //Functions
        string printWerkervaring()
        {
            return "* " + getBedrijf() + " (" + getPeriode() + ") \n Technologie: " + getTechnologie() + '\n';
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
        //std::cout << itv->getType() << " - " << itv->getItem() << " - " << itv->bepaalWaarde(itv->getScore()) << endl;
        std::cout << itv->printVaardigheid() << endl;
    }

    cout << endl;

    cout << "-- WERKERVARINGEN --" << endl;
    list<Werkervaring> listOfWerkervaringen;

    Werkervaring w1 ("AZ Maria Middelares", "01/2018 => 05/2018", ".Net (Visual Basic), MS SQL Server (sql: stored procedures,indexes, constraints, ...");
    Werkervaring w2 ("Authority", "08/2017 => 09/2017", "Google Analytics: tracking visitors, conversies, ...");
    Werkervaring w3 ("Tradecom", "10/2016 => 12/2016", "C#, MySQL");
    Werkervaring w4 ("Nationale Loterij", "09/2014 => 12/2015", "sql, Oracle SQL Developer, MS Office 2010, Windows 7");
    Werkervaring w5 ("CM Midden-Vlaanderen", "08/2013 => 08/2014", "html, css, jQuery, Javascript, xml, jsf, Java Struts 1.2, sql, Oracle SQL Developer, Eclipse, MS Office 2013, Windows 7");
    Werkervaring w6 ("Interim", "02/2011 => 07/2013", "");
    //cout << w1.printWerkervaring() << endl;

    listOfWerkervaringen.push_back(w1);
    listOfWerkervaringen.push_back(w2);
    listOfWerkervaringen.push_back(w3);
    listOfWerkervaringen.push_back(w4);
    listOfWerkervaringen.push_back(w5);
    listOfWerkervaringen.push_back(w6);


    for (std::list<Werkervaring>::iterator itw = listOfWerkervaringen.begin(); itw != listOfWerkervaringen.end(); itw++)
    {
        std::cout << itw->printWerkervaring() << endl;
    }

    return 0; //End of the program
}

