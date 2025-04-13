#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <list>

using namespace std;


vector<string> split(const string& str, char div) {
    vector<string> pezzi;
    stringstream ss(str); // crea uno stream dalla stringa
    string token;

    while (getline(ss, token, div)) {
        pezzi.push_back(token);
    }

    return pezzi;
}

int main()
{
    string riga;
    ifstream datiDaLeggere("data.txt");
    char divisore= ';';
    vector<string> vettoreDati;
    
    double s;
    int n;
    //vector<double> w;
    //vector<double> r;
    

    getline (datiDaLeggere, riga);
    vettoreDati = split(riga, divisore);
    s=stod(vettoreDati[1]);
    getline (datiDaLeggere, riga);
    vettoreDati = split(riga, divisore);
    n=stoi(vettoreDati[1]);
    getline (datiDaLeggere, riga);
    double w[n+1];
    double r[n+1];
    
    int counter=0;
    while (getline (datiDaLeggere, riga)) {
        vettoreDati = split(riga, divisore);
        w[counter]=stod(vettoreDati[0]);
        r[counter]=stod(vettoreDati[1]);
        counter+=1;
        
    }
    datiDaLeggere.close();
    double rtot=0;
  
    for (int i=0; i<n; i+=1){
        
        rtot=rtot + w[i]*r[i];
    }

    double ris= s*(1+rtot);
    

    //stampa




    ofstream fileRis("result.txt");
    

    //stampe Dati iniziali
    fileRis << "S = " << fixed << setprecision(2) << s;
    fileRis << ", n = "<< n ;
    fileRis << "\n" ;
    //stampa di w
    fileRis << "w = [ ";
    for (int j=0; j<n; j+=1){
        
        fileRis << w[j]<< " ";
    }
    fileRis << "]";
    fileRis << "\n" ;

    //stampa di r
    fileRis << "r = [ ";
    for (int j=0; j<n; j+=1){
        
        fileRis << r[j]<< " ";
    }
    fileRis << "]";
    fileRis << "\n" ;


    //stampa dei risultati
    fileRis << "Rate of return of the portfolio: " << rtot ;
    fileRis << "\n" ;
    fileRis << "V: " << fixed << setprecision(2) << ris;

    fileRis.close();
   
    return 0;
}

