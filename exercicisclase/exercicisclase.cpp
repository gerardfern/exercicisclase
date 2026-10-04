/*//Exercici 1
#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    int edat;
    string nom;

public:
    Persona(string nomPersona, int edatPersona)
    {
        nom = nomPersona;
        edat = edatPersona;
    }

    bool majorEdat()
    {
        return edat >= 18;
    }
    
    void consultarNom()
    {
        cout << "Nom: " << nom << endl;
    }

    void consultarEdat()
    {
        cout << "Edat: " << edat << endl;
    }
};

int main()
{
    Persona persona1("Gerard", 21);

    persona1.consultarNom();
    persona1.consultarEdat();

    if (persona1.majorEdat())
    {
        cout << "La persona es major d'edat." << endl;
    }

    return 0;
}

//Exercici 2
#include <iostream>

using namespace std;

class Rectangle {
private:
    double amplada;
    double alcada;

public:
    Rectangle(double a, double h) {
        amplada = a;
        alcada = h;
    }

    double calcularArea() {
        return amplada * alcada;
    }

    double calcularPerimetre() {
        return 2 * (amplada + alcada);
    }

    void mostrarDimensions() {
        cout << "Amplada: " << amplada << " cm, Alcada: " << alcada << " cm" << endl;
    }
};

int main() {
    Rectangle r1(5.5, 3.0);

    cout << "- Dades del Rectangle -" << endl;

    r1.mostrarDimensions();

    cout << "Area: " << r1.calcularArea() << " cm^2" << endl;

    cout << "Perimetre: " << r1.calcularPerimetre() << " cm" << endl;

    return 0;
}

//Exercici 3
#include <iostream>

using namespace std;

class Llum {
private:
    bool encesa;

public:
    Llum() {
        encesa = false;
    }

    void encendre() {
        encesa = true;
    }

    void apagar() {
        encesa = false;
    }

    bool estaEncesa() {
        return encesa;
    }

    void mostrarEstat() {
        if (encesa) {
            cout << "El llum esta ences." << endl;
        }
        else {
            cout << "El llum esta apagat." << endl;
        }
    }
};

int main() {
    Llum laMevaLlum;

    cout << "Estat inicial: ";
    laMevaLlum.mostrarEstat();

    cout << "\nEncenent el llum..." << endl;
    laMevaLlum.encendre();
    laMevaLlum.mostrarEstat();

    cout << "\nApagant el llum..." << endl;
    laMevaLlum.apagar();
    laMevaLlum.mostrarEstat();

    return 0;
}

//Exercici 4
#include <iostream>

using namespace std;

class Termometre {
private:
    double temperatura;

public:
    // Constructor
    Termometre(double tempInicial) {
        if (tempInicial >= -50.0 && tempInicial <= 60.0) {
            temperatura = tempInicial;
        }
        else {
            cout << "Atencio: Temperatura inicial fora de rang. S'assigna 0 C per defecte." << endl;
            temperatura = 0.0;
        }
    }

    double consultarTemperatura() {
        return temperatura;
    }

    void modificarTemperatura(double novaTemp) {
        if (novaTemp >= -50.0 && novaTemp <= 60.0) {
            temperatura = novaTemp;
            cout << "Temperatura actualitzada correctament a " << temperatura << " C." << endl;
        }
        else {
            cout << "Error: No es pot canviar a " << novaTemp
                << " C. La temperatura ha d'estar entre -50 C i 60 C." << endl;
        }
    }
};

int main() {
    Termometre t1(21.5);

    cout << "Temperatura inicial: " << t1.consultarTemperatura() << " C" << endl;

    t1.modificarTemperatura(35.0);
    cout << "Temperatura actual: " << t1.consultarTemperatura() << " C" << endl;

    t1.modificarTemperatura(70.0);
    cout << "Temperatura actual: " << t1.consultarTemperatura() << " C" << endl;

    t1.modificarTemperatura(-60.0);
    cout << "Temperatura actual: " << t1.consultarTemperatura() << " C" << endl;

    return 0;
}

//Exercici 5
#include <iostream>
#include <string>

using namespace std;

class Jugador {
private:
    string nom;
    int punts;
    int vides;

public:
    // Constructor: rep el nom, comença amb 0 punts i 10 vides
    Jugador(string nomJugador) {
        nom = nomJugador;
        punts = 0;
        vides = 10;
    }

    void afegirPunts(int puntuacio) {
        if (puntuacio > 0) {
            punts += puntuacio;
            cout << "S'han afegit " << puntuacio << " punts a " << nom << "." << endl;
        }
    }

    void perdreVida() {
        if (vides > 0) {
            vides--;
            cout << nom << " ha perdut una vida! (Vides restants: " << vides << ")" << endl;
        }
        else {
            cout << nom << " ja no te mes vides!" << endl;
        }
    }

    int consultarPunts() {
        return punts;
    }

    int consultarVides() {
        return vides;
    }

    bool estaViu() {
        return vides > 0;
    }
};

int main() {
    Jugador j1("Mario");

    cout << "--- Estat Inicial ---" << endl;
    cout << "Punts: " << j1.consultarPunts() << endl;
    cout << "Vides: " << j1.consultarVides() << endl;

    if (j1.estaViu()) {
        cout << "El jugador esta viu!" << endl;
    }

    cout << "\n--- Jugant ---" << endl;

    // 2. Afegim punts
    j1.afegirPunts(50);
    cout << "Punts actuals: " << j1.consultarPunts() << endl;

    // 3. El jugador perd una vida
    j1.perdreVida();
    cout << "Vides actuals: " << j1.consultarVides() << endl;

    return 0;
}

//Exercici 6
#include <iostream>
#include <string>

using namespace std;

class Producte {
private:
    string nom;
    double preu;
    int estoc;

public:
    // Constructor
    Producte(string nomProducte, double preuInicial, int estocInicial) {
        nom = nomProducte;

        if (preuInicial >= 0.0) {
            preu = preuInicial;
        }
        else {
            preu = 0.0;
        }

        if (estocInicial >= 0) {
            estoc = estocInicial;
        }
        else {
            estoc = 0;
        }
    }

    double consultarPreu() {
        return preu;
    }

    void canviarPreu(double nouPreu) {
        if (nouPreu >= 0.0) {
            preu = nouPreu;
            cout << "El preu de " << nom << " s'ha canviat a " << preu << " EUR." << endl;
        }
        else {
            cout << "Error: El preu no pot ser negatiu." << endl;
        }
    }

    void afegirEstoc(int quantitat) {
        if (quantitat > 0) {
            estoc += quantitat;
            cout << "S'han afegit " << quantitat << " unitats. Estoc actual de " << nom << ": " << estoc << endl;
        }
    }

    void vendre() {
        if (estoc > 0) {
            estoc--;
            cout << "S'ha venut una unitat de " << nom << ". Queden " << estoc << " unitats." << endl;
        }
        else {
            cout << "Error: No es pot vendre. No hi ha estoc de " << nom << "!" << endl;
        }
    }
};

int main() {
    // 1. Creem un producte amb nom, preu de 1.50 EUR i 2 unitats d'estoc
    Producte p1("Llauna de Cola", 1.50, 2);

    cout << "Preu inicial: " << p1.consultarPreu() << " EUR" << endl;
    cout << "----------------------------------------" << endl;

    p1.canviarPreu(1.75);

    p1.vendre(); // Queda 1 unitat
    p1.vendre(); // Queden 0 unitats
    p1.vendre(); // Intenta vendre sense estoc (Error)

    cout << "----------------------------------------" << endl;

    // 4. Afegim nou estoc i venem de nou
    p1.afegirEstoc(5);
    p1.vendre();

    return 0;
}*/

//Exercici 7
#include <iostream>
#include <string>

using namespace std;

class Reserva {
private:
    string nomClient;
    int nombreNits;
    double preuPerNit;
    bool activa; // true si està activa, false si està cancel·lada

public:
    // Constructor
    Reserva(string nom, int nits, double preu) {
        nomClient = nom;
        nombreNits = (nits > 0) ? nits : 1; // Mínim 1 nit
        preuPerNit = (preu >= 0.0) ? preu : 0.0;
        activa = true; // Per defecte, la reserva neix activa
    }

    string consultarNomClient() {
        return nomClient;
    }

    void canviarNombreNits(int novesNits) {
        if (!activa) {
            cout << "Error: No es poden modificar les nits d'una reserva cancel·lada." << endl;
        }
        else if (novesNits <= 0) {
            cout << "Error: El nombre de nits ha de ser major que 0." << endl;
        }
        else {
            nombreNits = novesNits;
            cout << "S'ha actualitzat la reserva a " << nombreNits << " nits." << endl;
        }
    }

    double calcularPreuTotal() {
        return nombreNits * preuPerNit;
    }

    void cancelarReserva() {
        if (activa) {
            activa = false;
            cout << "La reserva de " << nomClient << " s'ha cancel·lat correctament." << endl;
        }
        else {
            cout << "La reserva ja estava cancel·lada anteriorment." << endl;
        }
    }

    bool estaActiva() {
        return activa;
    }
};

int main() {
    // 1. Creem una reserva de 3 nits a 75.0 EUR/nit per a "Laura"
    Reserva r1("Laura", 3, 75.0);

    cout << "Client: " << r1.consultarNomClient() << endl;
    cout << "Preu total inicial: " << r1.calcularPreuTotal() << " EUR" << endl;

    if (r1.estaActiva()) {
        cout << "Estat: Reserva activa" << endl;
    }
    cout << "----------------------------------------" << endl;

    // 2. Modifiquem el nombre de nits
    r1.canviarNombreNits(5);
    cout << "Nou preu total: " << r1.calcularPreuTotal() << " EUR" << endl;
    cout << "----------------------------------------" << endl;

    // 3. Cancel·lem la reserva
    r1.cancelarReserva();

    if (!r1.estaActiva()) {
        cout << "Estat: Reserva inactiva/cancel·lada" << endl;
    }
    cout << "----------------------------------------" << endl;

    // 4. Intentem modificar les nits d'una reserva cancel·lada (Error)
    r1.canviarNombreNits(7);

    return 0;
}