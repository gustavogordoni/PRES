#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    string nome = "", comida = "", sonho = "", materia = "";
    char gostaDeMusica;
    int idade = 0, esporte= 0, vezes = 0;
    float nota = 0.0, notaChata = 0.0;

    cout << "Ei, você! Vamos bater um papo? Não tem escolha, vai ser assim mesmo.\n" << endl;

    // Pergunta 1 -------------------------------------------------------------------------------------------
    cout << "Qual é o seu nome? ";
    getline(cin, nome);
    cout << "Sério que seu nome é " << nome << "? Já ouvi piores, mas esse aí tá quase no topo.\n" << endl;

    // Pergunta 2 -------------------------------------------------------------------------------------------
    cout << "Quantos anos você tem? ";
    cin >> idade;

    if (idade < 10)
        cout << "Nossa, uma criança mexendo no computador? Cadê os pais?" << endl;
    else if (idade < 18)
        cout << "Ah, um adolescente... agora tudo faz sentido!" << endl;
    else if (idade <= 30)
        cout << "Tá na idade de fazer escolhas ruins na vida, cuidado." << endl;
    else
        cout << "Já devia estar pagando boletos em paz, mas tá aqui respondendo perguntas minhas." << endl;
    cout << endl;

    // Pergunta 3 -------------------------------------------------------------------------------------------
    cout << "Qual sua comida favorita? ";
    cin.ignore();
    getline(cin, comida);
    cout << comida << "? Isso explica muita coisa sobre você.\n" << endl;

    // Pergunta 4 -------------------------------------------------------------------------------------------
    cout << "Você gosta de música? (s/n): ";
    cin >> gostaDeMusica;
    gostaDeMusica = tolower(gostaDeMusica);

    switch(gostaDeMusica) {
        case 's':
            cout << "Aposto que escuta aquelas playlists vergonhosas escondido." << endl;
            break;
        case 'n':
            cout << "Como assim não gosta de música? Você vive em silêncio mesmo ou é só por pose?" << endl;
            break;
        default:
            cout << "Até uma pergunta de sim ou não você erra... complicado." << endl;
    }
    cout << endl;

    // Pergunta 5 -------------------------------------------------------------------------------------------

    cout << "Qual área do conhecimento você mais gosta?" << endl;
    cout << "Escolha entre as opções abaixo, digitando exatamente como está:" << endl;
    cout << "- Exatas" << endl;
    cout << "- Linguagens" << endl;
    cout << "- Humanas" << endl;
    cout << "- Biológicas" << endl;
    cout << "- Nenhuma" << endl;

    cin.ignore();
    getline(cin, materia);

    if (materia == "Exatas" || materia == "exatas")
        cout << "Ah, o famoso sofredor de matemática. Gosta de sofrer com cálculo, né?" << endl;
    else if (materia == "Linguagens" || materia == "linguagens")
        cout << "Adora interpretar texto e fingir que entendeu algo profundo, né?" << endl;
    else if (materia == "Humanas" || materia == "humanas")
        cout << "Claro, gosta de falar bonito e não resolver nada." << endl;
    else if (materia == "Biológicas" || materia == "biológicas" || materia == "Biologicas" || materia == "biologicas")
        cout << "Quer salvar o mundo, mas mal cuida da própria saúde, né?" << endl;
    else if (materia == "Nenhuma" || materia == "nenhuma")
        cout << "Bom... pelo menos você é honesto(a). Pena que preguiça não dá diploma." << endl;
    else
        cout << "Nem pra copiar uma opção certa você serve... Parabéns!" << endl;

    cout << endl;

    // Pergunta 6 -------------------------------------------------------------------------------------------
    cout << "Escolha seu esporte preferido:\n";
    cout << "1 - Futebol\n2 - Basquete\n3 - Natação\n4 - Nenhum\n";
    cin >> esporte;

    switch(esporte) {
        case 1:
            cout << "Mais um que acha que vai virar Neymar..." << endl;
            break;
        case 2:
            cout << "Acha que é alto mas nem encosta na rede." << endl;
            break;
        case 3:
            cout << "Nada bem no esporte, né?" << endl;
            break;
        case 4:
            cout << "Sedentarismo que chama, né?" << endl;
            break;
        default:
            cout << "Número errado imbecil. Você nem consegue escolher direito." << endl;
    }
    cout << endl;

    // Pergunta 7 -------------------------------------------------------------------------------------------
    cout << "Qual foi sua última nota em alguma prova importante? ";
    cin >> nota;

    if (nota >= 9)
        cout << "Duvido. Aposto que foi colando." << endl;
    else if (nota >= 6)
        cout << "Passou raspando, hein. Foi sorte." << endl;
    else
        cout << "Essa foi feia. Você estuda ou só dorme?" << endl;
    cout << endl;

    // Pergunta 8 -------------------------------------------------------------------------------------------
    cout << "Qual é o seu maior sonho? ";
    cin.ignore();
    getline(cin, sonho);

    cout << "\"" << sonho << "\"? Você sonha alto... mas senta que vai demorar." << endl;
    cout << endl;

    // Repetição -------------------------------------------------------------------------------------------
    cout << "Agora quero que você me dê uma nota de 0 a 10." << endl;

    while (true) {
        cout << "Digite sua nota: ";
        cin >> notaChata;

        if (notaChata == 10) {
            cout << "\nAí sim! Finalmente acertou UMA vez na vida." << endl;
            break;
        } else if (notaChata >= 0 && notaChata < 10) {
            cout << "\nNota " << notaChata << "? Tá de brincadeira? Tem que ser DEZ!" << endl;
        } else {
            cout << "\nVocê tem dificuldade de entender entre 0 e 10?" << endl;
        }
    }

    cout << "\nPronto, acabou. Não sei como eu tive paciência de te aturar até aqui. Tchau!" << endl;

    return 0;
}
