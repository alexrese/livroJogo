#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int escolha;

    cout << "Os Guardiões de Arkhan\n";
    cout << "No reino de Arkhan, um equilíbrio delicado mantém a paz entre os vários povos e reinos. Contudo, rumores de um antigo mal ressurgindo nas Terras Sombrias ao norte começam a espalhar medo e desespero. Um grupo de aventureiros, conhecido como Os Guardiões de Arkhan, é formado para investigar esses rumores e descobrir a verdade. Cada membro foi escolhido por suas habilidades únicas: Aria, a maga; Thorin, o guerreiro; Elara, a ranger; e Cedric, o ladrão. Juntos, eles devem atravessar terras perigosas, enfrentar criaturas temíveis e resolver enigmas antigos para salvar Arkhan da destruição.\n\n";

    cout << "1. Investigar o último local onde Malakar foi visto, a Floresta das Sombras\n";
    cout << "2. Buscar o artefato que selou Malakar, o Cristal de Eterna\n";
    cout << "Escolha um caminho (1-2): ";
    cin >> escolha;

    if (escolha == 1) {
        cout << "\nNa Floresta das Sombras, os Guardiões se deparam com uma tribo de elfos sombrios.\n";
        cout << "1. Tentar negociar com os elfos sombrios por informações.\n";
        cout << "2. Evitar os elfos e continuar a busca secretamente.\n";
        cout << "Escolha um caminho (1-2): ";
        cin >> escolha;
        if (escolha == 1) {
            cout << "\nVocê tenta negociar com os elfos, mas eles são desconfiados de estranhos...\n";
        } else {
            cout << "\nVocê decide evitar os elfos e continua sua busca pela floresta...\n";
        }
    } else if (escolha == 2) {
        cout << "\nA busca pelo Cristal de Eterna leva os Guardiões ao Deserto dos Sussurros...\n";
        cout << "1. Pedir a Aria para tentar comunicar-se com o espírito e resolver o enigma.\n";
        cout << "2. Procurar ao redor das ruínas por pistas adicionais sobre o enigma.\n";
        cout << "Escolha um caminho (1-2): ";
        cin >> escolha;
        if (escolha == 1) {
            cout << "\nAria tenta se comunicar com o espírito, buscando resolver o enigma...\n";
        } else {
            cout << "\nVocê decide procurar ao redor das ruínas por pistas adicionais...\n";
        }
    } else {
        cout << "Escolha inválida. Reinicie o jogo e tente novamente.\n";
    }

    return 0;
}
