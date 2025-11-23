
#include <iostream>
#include <vector>
using namespace std;

// Estructura para representar un cono
struct Cone {
    float x;
    float y;
};

// Función para extraer el cono en la posición i
Cone extractCone(vector<float>& X, vector<float>& Y, int i) {
    Cone c = {X[i], Y[i]};
    X.erase(X.begin() + i);
    Y.erase(Y.begin() + i);
    return c;
}

int main() {
    // Vectores de ejemplo
    vector<float> X = {1.0, 2.0, 3.0};
    vector<float> Y = {4.0, 5.0, 6.0};

    cout << "Antes de la extracción:" << endl;
    for (size_t j = 0; j < X.size(); j++) {
        cout << "Cono " << j << ": (" << X[j] << ", " << Y[j] << ")" << endl;
    }

    // Extraer el cono en índice 1
    Cone extracted = extractCone(X, Y, 1);

    cout << "\nCono extraído: (" << extracted.x << ", " << extracted.y << ")" << endl;

    cout << "\nDespués de la extracción:" << endl;
    for (size_t j = 0; j < X.size(); j++) {
        cout << "Cono " << j << ": (" << X[j] << ", " << Y[j] << ")" << endl;
    }

    return 0;
}

cout << "Modificación realizada en la rama ivan" << endl;