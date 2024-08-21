#include "iostream"

using namespace std;

class Carro{

    public:
        string nome;
        int kilometragem;
        string ano_fabricacao;
        string marca;
        string cor;
        float preco;

        Carro(
            string nome,
            int kilometragem,
            string ano_fabricacao,
            string marca,
            string cor,
            float preco
        ){
            this -> nome = nome;
            this -> kilometragem = kilometragem;
            this -> ano_fabricacao = ano_fabricacao;
            this -> marca = marca;
            this -> cor = cor;
            this -> preco = preco;
        }

        void printer(){
            cout << nome << endl << kilometragem << endl << ano_fabricacao << endl << marca << endl << cor << endl << preco << endl << "______________________" << endl;
        }
};


int main(){

    Carro instancia("Belina", 1000, "1999", "Ford", "Bege", 10000.50);
    Carro instancia2("Fox", 2000, "2010", "Volks", "Azul", 60000.50);
    instancia.printer();
    instancia2.printer();
    return 0;
}
