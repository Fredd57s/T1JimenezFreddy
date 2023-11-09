#include<iostream>
using namespace std;

int main()
{
	string carrera, fecha, nombre, tema, tema2;
	int opcionmenu, res, res1, res2, res3, res4, resp, res5;
	float sumatotal=0;
	nombre = "Freddy Jimenez";
	fecha = "08/11/2023";
	carrera = "ITIN";
	tema = "Test Psicologico";
	tema2 = "Calculadora de puntuacion";
	cout << "Nombre: " << nombre << endl;
	cout << "Fecha: " << fecha << endl;
	cout << "Carrera: " << carrera << endl;
	do {
		cout << "/------------------------------/" << endl;
		cout << "       " << tema << endl;
		cout << "1: Nueva Partida" << endl;
		cout << "2: Salir" << endl;
		cout << "/------------------------------/" << endl;
		cout << "Ingresar la opcion que desee: " << endl;
		cin >> opcionmenu;
		switch (opcionmenu) {
		case 1:
			cout << "NOTA: ESCRIBIR LOS PUNTAJES OBTENIDOS PARA LUEGO CALCULAR Y MOSTRAR SUS RESULTADOS" << endl;
			cout << "/------------------------------/" << endl;
			cout << "PRIMERA PREGUNTA" << endl;

			do {
				cout << "Que estacion prefiere usted: " << endl;
				cout << "1. Verano" << endl;
				cout << "2. Otono" << endl;
				cout << "3. Invierno" << endl;
				cout << "4. Primavera" << endl;
				cin >> res1;
				switch(res1){
            case 1:
                cout << "+2 Puntos" << endl;
					sumatotal=sumatotal+2;
                break;
            case 2:
                cout << "+4 Puntos" << endl;
						sumatotal=sumatotal+4;
                break;
            case 3:
                cout << "+6 Puntos" << endl;
							sumatotal=sumatotal+6;
                break;
            case 4:
                cout << "+8 Puntos" << endl;
								sumatotal=sumatotal+8;
                break;
            default:
                cout<<"Error, opcion no valida, intente de nuevo"<<endl;
				}
			} while (res1<1 || res1>4);
			cout << "/------------------------------/" << endl;
			cout << "SEGUNDA PREGUNTA" << endl;
			do {
				cout << "Si a un nino se le cae un helado: " << endl;
				cout << "1. Vas y le compras otro" << endl;
				cout << "2. Solo lo ves y te pones triste" << endl;
				cout << "3. No haces nada" << endl;
				cout << "4. Te ries del nino" << endl;
				cin >> res2;
				switch(res2){
            case 1:
                cout << "+7 Puntos" << endl;
					sumatotal=sumatotal+7;
                break;
            case 2:
                cout << "+5 Puntos" << endl;
						sumatotal=sumatotal+5;
                break;
            case 3:
                cout << "+3 Puntos" << endl;
							sumatotal=sumatotal+3;
                break;
            case 4:
                cout << "+0 Puntos" << endl;
								sumatotal=sumatotal+0;
                break;
            default:
                cout<<"Error, opcion no valida, intente de nuevo"<<endl;
				}
			} while (res2<1 || res2>4);
			cout << "/------------------------------/" << endl;
			cout << "TERCER PREGUNTA" << endl;
			do {
				cout << "Si un indigente te pide dindero: " << endl;
				cout << "1. No le hago caso" << endl;
				cout << "2. Le doy unas monedas" << endl;
				cout << "3. Le invito una papa" << endl;
				cout << "4. Le compro una casa" << endl;
				cin >> res3;
				switch(res3){
            case 1:
                cout << "+0 Puntos" << endl;
					sumatotal=sumatotal+0;
                break;
            case 2:
                cout << "+1 Puntos" << endl;
						sumatotal=sumatotal+1;
                break;
            case 3:
                cout << "+3 Puntos" << endl;
							sumatotal=sumatotal+3;
                break;
            case 4:
                cout << "+4 Puntos" << endl;
								sumatotal=sumatotal+4;
                break;
            default:
                cout<<"Error, opcion no valida, intente de nuevo"<<endl;
				}

			} while (res3<1 || res3>4);
			cout << "/------------------------------/" << endl;
			cout << "CUARTA PREGUNTA" << endl;
			do {
				cout << "Cuando te levantan temprano: " << endl;
				cout << "1. Lo haces con muchas ganas y energia" << endl;
				cout << "2. Lo haces sin sentir nada" << endl;
				cout << "3. Lo haces con pereza" << endl;
				cout << "4. Lo haces enojado y estresado" << endl;
				cin >> res4;
				switch(res4){
            case 1:
                cout << "+10 Puntos" << endl;
					sumatotal=sumatotal+10;
                break;
            case 2:
                cout << "+8 Puntos" << endl;
						sumatotal=sumatotal+8;
                break;
            case 3:
                cout << "+5 Puntos" << endl;
							sumatotal=sumatotal+5;
                break;
            case 4:
                cout << "+0 Puntos" << endl;
								sumatotal=sumatotal+0;
                break;
            default:
                cout<<"Error, opcion no valida, intente de nuevo"<<endl;
				}
			} while (res4<1 || res4>4);
			cout << "/------------------------------/" << endl;
			cout << "QUINTA PREGUNTA" << endl;
			do {
				cout << "Cuando tienes muchos deberes: " << endl;
				cout << "1. Lo haces con tranquilidad" << endl;
				cout << "2. Lo haces con algo de desesperacion" << endl;
				cout << "3. Lo haces muy desesperado" << endl;
				cout << "4. Te estresas al punto de llorar" << endl;
				cin >> res5;
				switch(res5){
            case 1:
                cout << "+10 Puntos" << endl;
					sumatotal=sumatotal+10;
                break;
            case 2:
                cout << "+8 Puntos" << endl;
						sumatotal=sumatotal+8;
                break;
            case 3:
                cout << "+6 Puntos" << endl;
							sumatotal=sumatotal+6;
                break;
            case 4:
                cout << "+4 Puntos" << endl;
								sumatotal=sumatotal+4;
                break;
            default:
                cout<<"Error, opcion no valida, intente de nuevo"<<endl;
				}
			} while (res5<1 || res5>4);
			cout << "/------------------------------/" << endl;
			cout << "       " << tema2 << endl;
			if (sumatotal>13) {
				cout << "Eres una persona alegre y tranquila, su nota final es: " << sumatotal << "." << endl;
			} else {
				cout << "Eres una persona muy irritable y amargada, su nota final es: " << sumatotal << "." << endl;
			}
			break;
		case 2:
			cout << "Salir" << endl;
			break;
		default:
			cout << "Vuelva a intentar" << endl;
		}
	} while (opcionmenu!=2);
	return 0;
}
