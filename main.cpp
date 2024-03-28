#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int escolha;

    cout << "Os Guardi�es de Arkhan\n";
    cout << "No reino de Arkhan, um equil�brio delicado mant�m a paz entre os v�rios povos e reinos. Contudo, rumores de um antigo mal ressurgindo nas Terras Sombrias ao norte come�am a espalhar medo e desespero. Um grupo de aventureiros, conhecido como Os Guardi�es de Arkhan, � formado para investigar esses rumores e descobrir a verdade. Cada membro foi escolhido por suas habilidades �nicas: Aria, a maga; Thorin, o guerreiro; Elara, a ranger; e Cedric, o ladr�o. Juntos, eles devem atravessar terras perigosas, enfrentar criaturas tem�veis e resolver enigmas antigos para salvar Arkhan da destrui��o.\n\n";

    cout << "1. Investigar o �ltimo local onde Malakar foi visto, a Floresta das Sombras\n";
    cout << "2. Buscar o artefato que selou Malakar, o Cristal de Eterna\n";
    cout << "Escolha um caminho (1-2): ";
    cin >> escolha;

    if (escolha == 1) {
        cout << "\nNa Floresta das Sombras, os Guardi�es se deparam com uma tribo de elfos sombrios.\n";
        cout << "1. Tentar negociar com os elfos sombrios por informa��es.\n";
        cout << "2. Evitar os elfos e continuar a busca secretamente.\n";
        cout << "Escolha um caminho (1-2): ";
        cin >> escolha;
        if (escolha == 1) {
            cout << "\nVoc� tenta negociar com os elfos, mas eles s�o desconfiados de estranhos...\n";
        } else {
            cout << "\nVoc� decide evitar os elfos e continua sua busca pela floresta...\n";
        }
    } else if (escolha == 2) {
        cout << "\nA busca pelo Cristal de Eterna leva os Guardi�es ao Deserto dos Sussurros...\n";
        cout << "1. Pedir a Aria para tentar comunicar-se com o esp�rito e resolver o enigma.\n";
        cout << "2. Procurar ao redor das ru�nas por pistas adicionais sobre o enigma.\n";
        cout << "Escolha um caminho (1-2): ";
        cin >> escolha;
        if (escolha == 1) {
            cout << "\nAria tenta se comunicar com o esp�rito, buscando resolver o enigma...\n";
        } else {
            cout << "\nVoc� decide procurar ao redor das ru�nas por pistas adicionais...\n";
        }
    } else {
        cout << "Escolha inv�lida. Reinicie o jogo e tente novamente.\n";
    }

    return 0;
}
