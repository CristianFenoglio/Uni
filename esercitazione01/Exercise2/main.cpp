#include <iostream>
#include <fstream>
#include <list>
#include <iomanip>
// per aprire in lettura ifstream MyReadFile("filename.txt");
// per aprire in scrittura ofstream MyFile("filename.txt")
// chiudere un file MyReadFile.close()
int MAXorig=5;
int MINorig=1;
int MINmap=-1;
int MAXmap=2;
double trasformaEMappa(std::string x){
    double numero;
    numero = stod(x);
    numero = (numero-(MINorig - MINmap)) *(MAXmap-MINmap)/(MAXorig/MINorig) ;
    return numero;
    
} 
int main()
{
    std::string testo;
    std::ifstream datiF("data.txt");
    std::list<double> numeri;
    while (getline (datiF, testo)) {
        // Output the text from the file
        //std::cout <<"\n" + testo;
        numeri.push_back(trasformaEMappa(testo));
    }
    datiF.close();
    std::ofstream fileRis("result.txt");
    for (double n : numeri){
        //std::cout <<n << std::scientific;
        //std::cout << "\n" ;
        fileRis << std::scientific << n;
        fileRis << "\n" ;
        //fileRis << std::to_string(n) + "\n";
    } 
    fileRis.close();
    return 0;
}
