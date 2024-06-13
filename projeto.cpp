#include <iostream>
#include <limits>
#include <vector>
#include <string>

using namespace std;

vector<string> nomes;
vector<string> origens;
vector<string> destinos;
vector<string> datas;
void desenharPassagensAeras()
{

    cout << endl;
    cout << "Escolha a opcao desejada:\n";
    cout << " -------------MENU-------------" << endl;
    cout << "|                              |\n";
    cout << "|   1) Cadastrar passagens.    |\n";
    cout << "|   2) Listagem de passagens.  |\n";
    cout << "|   0) Saida                   |\n";
    cout << " ------------MENU------------- " << endl;
    cout << "opcao: ";
}

void DesenharBoasVinda()
{

    cout << " _____________________________" << endl;
    cout << "|                             |\n";
    cout << "|    Bem Vindo ao programa    |\n";
    cout << "|      Lista de passagens     |\n";
    cout << "|_____________________________|" << endl;
}
void Desenharbemvindo()
{

    cout << " ______________________________" << endl;
    cout << "|                              |\n";
    cout << "|    Bem Vindo ao programa     |\n";
    cout << "|              de              |" << endl;
    cout << "|      Lista de passageiros    |\n";
    cout << "|______________________________|" << endl;
    cout << "\n";
    cout << "Quantidadee de passagens: " << nomes.size() << endl;
    for (int i = 0; i < nomes.size(); i++)
    {
    

        cout << "******************************" << endl;
        cout << "*      Bilhete de Viagem     *" << endl;
        cout << "******************************" << endl;
        cout << "* Passageiro: " << nomes[i] << endl;
        cout << "* Origem: " << origens[i] << endl;
        cout << "* Destino: " << destinos[i] << endl;
        cout << "* Data: " << datas[i] << endl;
        cout << "******************************" << endl;
        cout << endl;
    }

    
}

void limparBuffeerDoCin()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void cadastrarPassagem()
{
    string nome, origem, destino, dataViajem;

    limparBuffeerDoCin();

    cout << "***Digite o Nome do passageiro: ";
    getline(cin, nome);
    cout << "\n";
    nomes.push_back(nome);

    cout << "***Digite a origem: ";
    cin >> origem;
    cout << "\n";
    origens.push_back(origem);

    cout << "***Digite o Destino: ";
    cin >> destino;
    cout << "\n";
    destinos.push_back(destino);

    cout << "***Digite a dataViagem: ";
    cin >> dataViajem;
    cout << "\n";
    datas.push_back(dataViajem);
    
    cout << "\n";
    cout << " *******************\n";
    cout << "| Cadastro concluido! | \n";
    cout << " *******************";
}

int main()
{
    system("cls");
    int opcao = -1;

    string Nomecompleto, origem, destino, dataViagem;
string continuar ="";
    DesenharBoasVinda();

    desenharPassagensAeras();

    do
    {
        desenharPassagensAeras();
        cin >> opcao;
        cout << endl;

        switch (opcao)
        {
        case 0:
            cout << " Voce escolheu a opcao: Sair.\n\n";
            break;
        cin >> continuar;
        case 1:
            cout << "******************************************\n";
            cout << " Voce escolheu a opcao: Cadastrar passagem.\n";
            cout << "******************************************\n";
            cout << endl;
            cadastrarPassagem();
            break;

        case 2:
            cout << "********************************************\n";
            cout << " Voce escolheu a opcao:Listagem de passagem.\n";
            cout << "********************************************\n";
            cout << endl;
            Desenharbemvindo();
           cin >> continuar;
            break;

        default:
            cout << "*****Opcao Invalida!*****";
            break;
        }
        limparBuffeerDoCin();
        cout << "\n";

    } while (opcao != 0);

    cout << "Obrigado por utilizar o programa\n\n";
}