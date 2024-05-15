#include "iostream"
#include "Quiz.cpp"
using namespace std;





int main() {
    int score = 0; // Score final ^_^

    cout << "Bienvenue au quiz informatique ! bonne chance :)" << endl;
    cout << "Répondez avec A, B, ou C." << endl;
    // Champ de poser les questions
    for (int i = 0; i < 3; ++i) {
        cout << questions[i].question << endl;
        char réponse_utilisateur;
        cin >> réponse_utilisateur;

        // Tester la réponse
        if (toupper(réponse_utilisateur) == questions[i].bonne_reponse) {
            cout << "Bonne réponse !" << endl;
            ++score;
        }
        else {
            cout << "Mauvaise réponse :(" << endl;
        }
    }

    // Affichage du score final
    cout << "Votre score final : " << score << " sur 9." << endl;

    return 0;
