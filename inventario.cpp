#include <iostream>
#include <string>
using namespace std;
//Aqui definimos todas la estructuras segun la cantidad de grupos en la ficha de inventario
struct gruposPiezas1{
	int p4255563;
	int p4177430;
	int p4177431;
}grupo1[1];

struct gruposPiezas2{
	int p4121715;
}grupo2[1];

struct gruposPiezas3{
	int p4184169;
	int p4107085;
	int p4107783;
}grupo3[1];

struct gruposPiezas4{
	int p4107767;
	int p4515185;
}grupo4[1];

struct gruposPiezas5{
	int p4107081;
	int p4248204;
	int p4143466;
}grupo5[1];

struct gruposPiezas6{
	int p4121667;
	int p4198367;
}grupo6[1];

struct gruposPiezas7{
	int p4296059;
}grupo7[1];

struct gruposPiezas8{
	int p4225033;
}grupo8[1];

struct gruposPiezas9{
	int p4211865;
	int p4211807;
	int p4211483;
}grupo9[1];

struct gruposPiezas10{
	int p4211889;
	int p4211629;
	int p4211880;
}grupo10[1];

struct gruposPiezas11{
	int p4211775;
	int p4211779;
	int p4552348;
}grupo11[1];

struct gruposPiezas12{
	int p4211622;
	int p4211573;
	int p4211375;
}grupo12[1];

struct gruposPiezas13{
	int p4544140;
	int p4281515;
	int p306901;
	int p4508664;
}grupo13[1];

struct gruposPiezas14{
	int p4142865;
	int p4206482;
}grupo14[1];

struct gruposPiezas15{
	int p4514553;
}grupo15[1];

struct gruposPiezas16{
	int p4514554;
	int p4565452;
	int p4186017;
}grupo16[1];

struct gruposPiezas17{
	int p4119589;
	int p4512360;
	int p4210759;
}grupo17[1];

struct gruposPiezas18{
	int p4535768;
	int p4211639;
	int p4211805;
	int p4211815;
	int p4211086;
}grupo18[1];

struct gruposPiezas19{
	int p4545430;
	int p4545434;
	int p4545435;
	int p4297031;
}grupo19[1];

struct gruposPiezas20{
	int p370526;
	int p4508553;
	int p370626;
	int p4141300;
	int p370826;
	int p4499858;
}grupo20[1];

struct gruposPiezas21{
	int p4297210;
	int p4184286;
}grupo21[1];

struct gruposPiezas22{
	int p4537417;
	int p4495932;
	int p4297202;
	int p4297200;
	int p4522939;
	int p4297197;
}grupo22[1];

struct gruposPiezas23{
	int p4210751;
	int p4210668;
	int p4210667;
	int p4234240;
	int p4210753;
	int p4211668;
	int p4210638;
	int p4211651;
}grupo23[1];

struct gruposPiezas24{
	int p4297006;
	int p4297174;
	int p4296929;
	int p4546542;
}grupo24[1];

struct gruposPiezas25{
	int p4548553;
	int p4547402;
	int p4547403;
	int p4288099;
	int p4292468;
	int p4502834;
}grupo25[1];

struct gruposPiezas26{
	int p4297187;
	int p4297188;
	int p4297185;
	string cable;
}grupo26[1];

struct gruposPiezas27{
	int p4558295;
}grupo27[1];

struct gruposPiezas28{
	int guia;
	int test;
	int disco;
}grupo28[1];
//Aqui empieza nuestra función principal
int main ()
{
	string actividad, tipo, estado;
	int periodo, f=0, g;
	cout<<"\n---FICHA DE INVENTARIO LEGO MINDSTORMS NXT 2.0---"<<endl;
	cout<<"\nIngrese la actividad:";
	cin>>actividad;
	cout<<"ingrese el periodo:";
	cin>>periodo;
	cout<<"Ingrese el tipo de inventario:";
	cin>>tipo;
	//bucle while para que el usuario digitar datos en los diferentes grupos 
	while (f==0){
		cout<<"\n==>Ingrese el grupo a modificar(cualquier otro numero finalizara el programa):";
		cin>>g;
		switch (g){
			case 1:
				cout<<"\n--GRUPO 1--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4255563):";
				cin>>grupo1[1].p4255563;
				cout<<"\nIngrese la cantidad de la pieza(4177430):";
				cin>>grupo1[1].p4177430;
				cout<<"\nIngrese la cantidad de la pieza(4177431):";
				cin>>grupo1[1].p4177431;
			break;
			case 2:
				cout<<"\n--GRUPO 2--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4121715):";
				cin>>grupo2[1].p4121715;
			break;
			case 3:
				cout<<"\n--GRUPO 3--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4184169):";
				cin>>grupo3[1].p4184169;
				cout<<"\nIngrese la cantidad de la pieza(4107085):";
				cin>>grupo3[1].p4107085;
				cout<<"\nIngrese la cantidad de la pieza(4107783):";
				cin>>grupo3[1].p4107783;
			break;
			case 4:
				cout<<"\n--GRUPO 4--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4107767):";
				cin>>grupo4[1].p4107767;
				cout<<"\nIngrese la cantidad de la pieza(4515185):";
				cin>>grupo4[1].p4515185;
			break;
			case 5:
				cout<<"\n--GRUPO 5--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4107081):";
				cin>>grupo5[1].p4107081;
				cout<<"\nIngrese la cantidad de la pieza(4248204):";
				cin>>grupo5[1].p4248204;
				cout<<"\nIngrese la cantidad de la pieza(4143466):";
				cin>>grupo5[1].p4143466;
			break;
			case 6:
				cout<<"\n--GRUPO 6--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4121667):";
				cin>>grupo6[1].p4121667;
				cout<<"\nIngrese la cantidad de la pieza(4198367):";
				cin>>grupo6[1].p4198367;
			break;
			case 7:
				cout<<"\n--GRUPO 7--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4296059):";
				cin>>grupo7[1].p4296059;
			break;
			case 8:
				cout<<"\n--GRUPO 8--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4225033):";
				cin>>grupo8[1].p4225033;
			break;
			case 9:
				cout<<"\n--GRUPO 9--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211865):";
				cin>>grupo9[1].p4211865;
				cout<<"\nIngrese la cantidad de la pieza(4211807):";
				cin>>grupo9[1].p4211807;
				cout<<"\nIngrese la cantidad de la pieza(4211483):";
				cin>>grupo9[1].p4211483;
			break;
			case 10:
				cout<<"\n--GRUPO 10--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211889):";
				cin>>grupo10[1].p4211889;
				cout<<"\nIngrese la cantidad de la pieza(4211629):";
				cin>>grupo10[1].p4211629;
				cout<<"\nIngrese la cantidad de la pieza(4211880):";
				cin>>grupo10[1].p4211880;
			break;
			case 11:
				cout<<"\n--GRUPO 11--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211775):";
				cin>>grupo11[1].p4211775;
				cout<<"\nIngrese la cantidad de la pieza(4211779):";
				cin>>grupo11[1].p4211779;
				cout<<"\nIngrese la cantidad de la pieza(4552348):";
				cin>>grupo11[1].p4552348;
			break;
			case 12:
				cout<<"\n--GRUPO 12--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211622):";
				cin>>grupo12[1].p4211622;
				cout<<"\nIngrese la cantidad de la pieza(4211573):";
				cin>>grupo12[1].p4211573;
				cout<<"\nIngrese la cantidad de la pieza(4211375):";
				cin>>grupo12[1].p4211375;
			break;
			case 13:
				cout<<"\n--GRUPO 13--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4544140):";
				cin>>grupo13[1].p4544140;
				cout<<"\nIngrese la cantidad de la pieza(4281515):";
				cin>>grupo13[1].p4281515;
				cout<<"\nIngrese la cantidad de la pieza(306901):";
				cin>>grupo13[1].p306901;
				cout<<"\nIngrese la cantidad de la pieza(4508664):";
				cin>>grupo13[1].p4508664;
			break;
			case 14:
				cout<<"\n--GRUPO 14--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4142865):";
				cin>>grupo14[1].p4142865;
				cout<<"\nIngrese la cantidad de la pieza(4206482):";
				cin>>grupo14[1].p4206482;
			break;
			case 15:
				cout<<"\n--GRUPO 15--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4514553):";
				cin>>grupo15[1].p4514553;
			break;
			case 16:
				cout<<"\n--GRUPO 16--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4514554):";
				cin>>grupo16[1].p4514554;
				cout<<"\nIngrese la cantidad de la pieza(4565452):";
				cin>>grupo16[1].p4565452;
				cout<<"\nIngrese la cantidad de la pieza(4186017):";
				cin>>grupo16[1].p4186017;
			break;
			case 17:
				cout<<"\n--GRUPO 17--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4119589):";
				cin>>grupo17[1].p4119589;
				cout<<"\nIngrese la cantidad de la pieza(p4512360):";
				cin>>grupo17[1].p4512360;
				cout<<"\nIngrese la cantidad de la pieza(4210759):";
				cin>>grupo17[1].p4210759;
			break;
			case 18:
				cout<<"\n--GRUPO 18--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4535768):";
				cin>>grupo18[1].p4535768;
				cout<<"\nIngrese la cantidad de la pieza(4211639):";
				cin>>grupo18[1].p4211639;
				cout<<"\nIngrese la cantidad de la pieza(4211805):";
				cin>>grupo18[1].p4211805;
				cout<<"\nIngrese la cantidad de la pieza(4211815):";
				cin>>grupo18[1].p4211815;
				cout<<"\nIngrese la cantidad de la pieza(4211086):";
				cin>>grupo18[1].p4211086;
			break;
			case 19:
				cout<<"\n--GRUPO 19--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4545430):";
				cin>>grupo19[1].p4545430;
				cout<<"\nIngrese la cantidad de la pieza(4545434):";
				cin>>grupo19[1].p4545434;
				cout<<"\nIngrese la cantidad de la pieza(4545435):";
				cin>>grupo19[1].p4545435;
				cout<<"\nIngrese la cantidad de la pieza(4297031):";
				cin>>grupo19[1].p4297031;
			break;
			case 20:
				cout<<"\n--GRUPO 20--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(370526):";
				cin>>grupo20[1].p370526;
				cout<<"\nIngrese la cantidad de la pieza(4508553):";
				cin>>grupo20[1].p4508553;
				cout<<"\nIngrese la cantidad de la pieza(370626):";
				cin>>grupo20[1].p370626;
				cout<<"\nIngrese la cantidad de la pieza(4141300):";
				cin>>grupo20[1].p4141300;
				cout<<"\nIngrese la cantidad de la pieza(370826):";
				cin>>grupo20[1].p370826;
				cout<<"\nIngrese la cantidad de la pieza(4499858):";
				cin>>grupo20[1].p4499858;
			break;
			case 21:
				cout<<"\n--GRUPO 21--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4297210):";
				cin>>grupo21[1].p4297210;
				cout<<"\nIngrese la cantidad de la pieza(4184286):";
				cin>>grupo21[1].p4184286;
			break;
			case 22:
				cout<<"\n--GRUPO 22--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4537417):";
				cin>>grupo22[1].p4537417;
				cout<<"\nIngrese la cantidad de la pieza(4495932):";
				cin>>grupo22[1].p4495932;
				cout<<"\nIngrese la cantidad de la pieza(4297202):";
				cin>>grupo22[1].p4297202;
				cout<<"\nIngrese la cantidad de la pieza(4297200):";
				cin>>grupo22[1].p4297200;
				cout<<"\nIngrese la cantidad de la pieza(4522939):";
				cin>>grupo22[1].p4522939;
				cout<<"\nIngrese la cantidad de la pieza(4297197):";
				cin>>grupo22[1].p4297197;
			break;
			case 23:
				cout<<"\n--GRUPO 23--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4210751):";
				cin>>grupo23[1].p4210751;
				cout<<"\nIngrese la cantidad de la pieza(4210668):";
				cin>>grupo23[1].p4210668;
				cout<<"\nIngrese la cantidad de la pieza(4210667):";
				cin>>grupo23[1].p4210667;
				cout<<"\nIngrese la cantidad de la pieza(4234240):";
				cin>>grupo23[1].p4234240;
				cout<<"\nIngrese la cantidad de la pieza(4210753):";
				cin>>grupo23[1].p4210753;
				cout<<"\nIngrese la cantidad de la pieza(4211668):";
				cin>>grupo23[1].p4211668;
				cout<<"\nIngrese la cantidad de la pieza(4210638):";
				cin>>grupo23[1].p4210638;
				cout<<"\nIngrese la cantidad de la pieza(4211651):";
				cin>>grupo23[1].p4211651;
			break;
			case 24:
				cout<<"\n--GRUPO 24--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4297006):";
				cin>>grupo24[1].p4297006;
				cout<<"\nIngrese la cantidad de la pieza(4297174):";
				cin>>grupo24[1].p4297174;
				cout<<"\nIngrese la cantidad de la pieza(4296929):";
				cin>>grupo24[1].p4296929;
				cout<<"\nIngrese la cantidad de la pieza(4546542):";
				cin>>grupo24[1].p4546542;
			break;
			case 25:
				cout<<"\n--GRUPO 25--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4548553):";
				cin>>grupo25[1].p4548553;
				cout<<"\nIngrese la cantidad de la pieza(4547402):";
				cin>>grupo25[1].p4547402;
				cout<<"\nIngrese la cantidad de la pieza(4547403):";
				cin>>grupo25[1].p4547403;
				cout<<"\nIngrese la cantidad de la pieza(4288099):";
				cin>>grupo25[1].p4288099;
				cout<<"\nIngrese la cantidad de la pieza(4292468):";
				cin>>grupo25[1].p4292468;
				cout<<"\nIngrese la cantidad de la pieza(4502834):";
				cin>>grupo25[1].p4502834;
			break;
			case 26:
				cout<<"\n--GRUPO 26--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4297187):";
				cin>>grupo26[1].p4297187;
				cout<<"\nIngrese la cantidad de la pieza(4297188):";
				cin>>grupo26[1].p4297188;
				cout<<"\nIngrese la cantidad de la pieza(4297185):";
				cin>>grupo26[1].p4297185;
				cout<<"\nIngrese la cantidad de la pieza(cable):";
				cin>>grupo26[1].cable;
			break;
			case 27:
				cout<<"\n--GRUPO 27--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4558295):";
				cin>>grupo27[1].p4558295;
			break;
			case 28:
				cout<<"\n--GRUPO 28--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(guia):";
				cin>>grupo28[1].guia;
				cout<<"\nIngrese la cantidad de la pieza(test):";
				cin>>grupo28[1].test;
				cout<<"\nIngrese la cantidad de la pieza(disco):";
				cin>>grupo28[1].disco;
			break;
			//Con la ayuda de un default haremos que cualquier otra opción digitada haga que finalize el bucle
			default:
				f=1;
			break;
			}
		}
	cout<<"\n***Ingrese el estado de la ficha de inventario:***";
	cin>>estado;
	return 0;	
}