// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).
#include<>
#include<iostream>
#include<ctime>
using namespace std;

// No hay en el C++ estandar una funcion equivalente a "esperar", pero puede programarse una similar
void esperar(double t);

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float ganancias=0;
	float cambio=50000;
	float cr;
	float d;
	int op;
	float v;
	do {
		cout << "-----------------------" << endl;
		cout << "Maquina de productos simulacion" << endl;
		cout << "-----------------------" << endl;
		cout << "1. Tinto           2000" << endl;
		cout << "2. Te              3000" << endl;
		cout << "3. Aromatica       5000" << endl;
		cout << "4. Capuchino       4000" << endl;
		cout << "5. Apagar maquina" << endl;
		cin >> op;
		switch (op) {
		case 1:
			cout << "Por favor ingrese el dinero" << endl;
			cin >> d;
			if (d>1999) {
			    cout << "Muchas gracias por su compra " << endl;
				if (d>2000) {
				    	v = d-2000;
				    cout << "su cambio es " << v << endl;
				        ganancias = ganancias + 2000;
				        cambio = cambio - v + ganancias;
				    cout << "ganancias generadas por el momento "<< ganancias << endl;
				    cout << "cambio restante la maquina "<< cambio << endl;
			}
			}
			
			 else {
				cout << "saldo insuficiente" << endl;
			}
			esperar(3*1000);
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			break;
		case 2:
			cout << "Por favor ingrese el dinero" << endl;
			cin >> d;
			if (d>2999) {
			    cout << "Muchas gracias por su compra " << endl;
				if (d>3000) {
				    	v = d-3000;
				    cout << "su cambio es " << v << endl;
				        cambio = cambio - v;
				    cout << "cambio restante la maquina "<< cambio << endl;
			}
			}
			else {
				cout << "saldo insuficiente" << endl;
			}
			esperar(3*1000);
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			break;
		case 3:
			cout << "Por favor ingrese el dinero" << endl;
			cin >> d;
		    if (d>4999) {
			    cout << "Muchas gracias por su compra " << endl;
				if (d>5000) {
				    	v = d-5000;
				    cout << "su cambio es " << v << endl;
				        cambio = cambio - v;
				    cout << "cambio restante la maquina "<< cambio << endl;
			}
			}
			 else {
				cout << "saldo insuficiente" << endl;
			}
			esperar(3*1000);
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			break;
		case 4:
			cout << "Por favor ingrese el dinero" << endl;
			cin >> d;
			if (d>3999) {
			    cout << "Muchas gracias por su compra " << endl;
				if (d>4000) {
				    	v = d-4000;
				    cout << "su cambio es " << v << endl;
				        cambio = cambio - v;
				    cout << "cambio restante la maquina "<< cambio << endl;
				    
			}
			}
			 else {
				cout << "saldo insuficiente" << endl;
			}
			esperar(3*1000);
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			break;
		case 5:
			cout << "apagar maquina" << endl;
			break;
		default:
			cout << "opcion invalida" << endl;
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			esperar(3*1000);
		}
	} while (op!=5);
	return 0;
}


void esperar(double t) {
	clock_t t0 = clock();
	double e = 0;
	do {
		e = 1000*double(clock()-t0)/CLOCKS_PER_SEC;
	} while (e<t);
}

