#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Classe pour représenter une question et la bonne réponse
class Quiz {
public:
    string question;
    char bonne_reponse;
};

// Tableau de questions
Quiz questions[] = {
    { "Quel est le langage de programmation le plus utilisé ? A) java B) c++ C) python ", 'A'}, // A) java
    { "Quel est le langage de programmation utilisé dans la programmation web ? A) css B) js C) html ", 'B' }, // B) js
    { "Quel est le langage de programmation utilisé pour le développement d'applications Android ? A) c++ B) php C) C ", 'C' }, // C) C
    { "Lequel de ces langages n'est pas 'orienté objet' ? A) A) C++ B) Java C) Assembleur ", 'C' }, // C) Assembleur
    { "Quelle est la différence entre les technologies *HTTP* et *HTTPS* ? A)HTTP est plus sécurisé que HTTPS  B) HTTPS utilise un protocole de transfert sécurisé pour chiffrer les données C)HTTP et HTTPS sont des protocoles différents pour accéder à Internet  ", 'B' }, // B) HTTPS utilise un protocole de transfert sécurisé pour chiffrer les données
    { "Quel symbole est utilisé pour définir un membre d'une classe extérieurement ? ? - A)# B):: C) !!", 'B' }, // B) ::
    { "Lequel est une déclaration de classe valide ? A) public classe A {} B)classe A {} C)classe A {int x };", 'C' }, // C)classe A {int x};
    { "Les membres d'une classe en C++ sont par défaut ? A) private B) protected C) public ", 'A' },// A) private
    { "Quelle est la syntaxe correcte pour accéder à un membre statique d'une classe ? A)A->val B)A.val C)A::val",'C' } // C) A::val
};
