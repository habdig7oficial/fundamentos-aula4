#include "iostream"

using namespace std;

class Pessoa {

    public:
        string nome;
        int idade;
        string rg;
        string cpf;
        float renda;

        Pessoa(string nome, int idade, string rg, string cpf, float renda){
            this -> nome = nome;
            this -> idade = idade;
            this -> rg = rg;
            this -> cpf = cpf;
            this -> renda = renda;
        }

        void printer(){
            cout << nome << endl << idade << endl << rg << endl << cpf << endl << renda << endl << "______________________" << endl;
        }
};


int main(){

    Pessoa instancia("Mateus Felipe", 18, "XXX-XXX", "CFP", 1000.50);
    Pessoa instancia2("Alexandre", 83, "XXX-XXX", "CFP", 7000);
    instancia.printer();
    instancia2.printer();
    return 0;
}
