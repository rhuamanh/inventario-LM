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
	int p4297008;
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
	int cable;
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
	int periodo, f=0, g ,m;
	cout<<"\n---FICHA DE INVENTARIO LEGO MINDSTORMS NXT 2.0---"<<endl;
	cout<<"\nIngrese la actividad:";
	cin>>actividad;
	cout<<"\nIngrese el periodo:";
	cin>>periodo;
	cout<<"\nIngrese el tipo de inventario:";
	cin>>tipo;
	//bucle while para que el usuario digitar datos en los diferentes grupos 
	while (f==0){
		cout<<"\n==>Ingrese el grupo a modificar (cualquier otro numero finalizara el programa):";
		cin>>g;
		switch (g){
			case 1:
				cout<<"\n--GRUPO 1--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4255563):";
				cin>>grupo1[1].p4255563;
				if(grupo1[1].p4255563<2){
				}
				if(grupo1[1].p4255563>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(4177430):";
				cin>>grupo1[1].p4177430;
				if(grupo1[1].p4177430<2){
				}
				if(grupo1[1].p4177430>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(4177431):";
				cin>>grupo1[1].p4177431;
				if(grupo1[1].p4177431<2){
				}
				if(grupo1[1].p4177431>2){
				}
			break;
			case 2:
				cout<<"\n--GRUPO 2--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4121715):";
				cin>>grupo2[1].p4121715;
				if(grupo2[1].p4121715<88){
				}
				if(grupo2[1].p4121715>88){
				}
			break;
			case 3:
				cout<<"\n--GRUPO 3--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4184169):";
				cin>>grupo3[1].p4184169;
				if(grupo3[1].p4184169<10){
				}
				if(grupo3[1].p4184169>10){
				}
				cout<<"\nIngrese la cantidad de la pieza(4107085):";
				cin>>grupo3[1].p4107085;
				if(grupo3[1].p4107085<5){
				}
				if(grupo3[1].p4107085>5){
				}
				cout<<"\nIngrese la cantidad de la pieza(4107783):";
				cin>>grupo3[1].p4107783;
				if(grupo3[1].p4107783<6){
				}
				if(grupo3[1].p4107783>6){
				}
			break;
			case 4:
				cout<<"\n--GRUPO 4--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4107767):";
				cin>>grupo4[1].p4107767;
				if(grupo4[1].p4107767<12){
				}
				if(grupo4[1].p4107767>12){
				}
				cout<<"\nIngrese la cantidad de la pieza(4515185):";
				cin>>grupo4[1].p4515185;
				if(grupo4[1].p4515185<8){
				}
				if(grupo4[1].p4515185>8){
				}
			break;
			case 5:
				cout<<"\n--GRUPO 5--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4107081):";
				cin>>grupo5[1].p4107081;
				if(grupo5[1].p4107081<6){
				}
				if(grupo5[1].p4107081>6){
				}
				cout<<"\nIngrese la cantidad de la pieza(4248204):";
				cin>>grupo5[1].p4248204;
				if(grupo5[1].p4248204<4){
				}
				if(grupo5[1].p4248204>4){
				}
				cout<<"\nIngrese la cantidad de la pieza(4143466):";
				cin>>grupo5[1].p4143466;
				if(grupo5[1].p4143466<6){
				}
				if(grupo5[1].p4143466>6){
				}
			break;
			case 6:
				cout<<"\n--GRUPO 6--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4121667):";
				cin>>grupo6[1].p4121667;
				if(grupo6[1].p4121667<5){
				}
				if(grupo6[1].p4121667>5){
				}
				cout<<"\nIngrese la cantidad de la pieza(4198367):";
				cin>>grupo6[1].p4198367;
				if(grupo6[1].p4198367<4){
				}
				if(grupo6[1].p4198367>4){
				}
			break;
			case 7:
				cout<<"\n--GRUPO 7--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4296059):";
				cin>>grupo7[1].p4296059;
				if(grupo7[1].p4296059<6){
				}
				if(grupo7[1].p4296059>6){
				}
			break;
			case 8:
				cout<<"\n--GRUPO 8--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4225033):";
				cin>>grupo8[1].p4225033;
				if(grupo8[1].p4225033<14){
				}
				if(grupo8[1].p4225033>14){
				}
			break;
			case 9:
				cout<<"\n--GRUPO 9--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211865):";
				cin>>grupo9[1].p4211865;
				if(grupo9[1].p4211865<10){
				}
				if(grupo9[1].p4211865>10){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211807):";
				cin>>grupo9[1].p4211807;
				if(grupo9[1].p4211807<6){
				}
				if(grupo9[1].p4211807>6){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211483):";
				cin>>grupo9[1].p4211483;
				if(grupo9[1].p4211483<2){
				}
				if(grupo9[1].p4211483>2){
				}
			break;
			case 10:
				cout<<"\n--GRUPO 10--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211889):";
				cin>>grupo10[1].p4211889;
				if(grupo10[1].p4211889<8){
				}
				if(grupo10[1].p4211889>8){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211629):";
				cin>>grupo10[1].p4211629;
				if(grupo10[1].p4211629<4){
				}
				if(grupo10[1].p4211629>4){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211880):";
				cin>>grupo10[1].p4211880;
				if(grupo10[1].p4211880<1){
				}
				if(grupo10[1].p4211880>1){
				}
			break;
			case 11:
				cout<<"\n--GRUPO 11--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211775):";
				cin>>grupo11[1].p4211775;
				if(grupo11[1].p4211775<8){
				}
				if(grupo11[1].p4211775>8){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211779):";
				cin>>grupo11[1].p4211779;
				if(grupo11[1].p4211779<16){
				}
				if(grupo11[1].p4211779>16){
				}
				cout<<"\nIngrese la cantidad de la pieza(4552348):";
				cin>>grupo11[1].p4552348;
				if(grupo11[1].p4552348<2){
				}
				if(grupo11[1].p4552348>2){
				}
			break;
			case 12:
				cout<<"\n--GRUPO 12--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211622):";
				cin>>grupo12[1].p4211622;
				if(grupo12[1].p4211622<11){
				}
				if(grupo12[1].p4211622>11){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211573):";
				cin>>grupo12[1].p4211573;
				if(grupo12[1].p4211573<9){
				}
				if(grupo12[1].p4211573>9){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211375):";
				cin>>grupo12[1].p4211375;
				if(grupo12[1].p4211375<2){
				}
				if(grupo12[1].p4211375>2){
				}
			break;
			case 13:
				cout<<"\n--GRUPO 13--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4544140):";
				cin>>grupo13[1].p4544140;
				if(grupo13[1].p4544140<2){
				}
				if(grupo13[1].p4544140>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(4281515):";
				cin>>grupo13[1].p4281515;
				if(grupo13[1].p4281515<10){
				}
				if(grupo13[1].p4281515>10){
				}
				cout<<"\nIngrese la cantidad de la pieza(306901):";
				cin>>grupo13[1].p306901;
				if(grupo13[1].p306901<1){
				}
				if(grupo13[1].p306901>1){
				}
				cout<<"\nIngrese la cantidad de la pieza(4508664):";
				cin>>grupo13[1].p4508664;
				if(grupo13[1].p4508664<4){
				}
				if(grupo13[1].p4508664>4){
				}
			break;
			case 14:
				cout<<"\n--GRUPO 14--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4142865):";
				cin>>grupo14[1].p4142865;
				if(grupo14[1].p4142865<9){
				}
				if(grupo14[1].p4142865>9){
				}
				cout<<"\nIngrese la cantidad de la pieza(4206482):";
				cin>>grupo14[1].p4206482;
				if(grupo14[1].p4206482<24){
				}
				if(grupo14[1].p4206482>24){
				}
			break;
			case 15:
				cout<<"\n--GRUPO 15--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4514553):";
				cin>>grupo15[1].p4514553;
				if(grupo15[1].p4514553<52){
				}
				if(grupo15[1].p4514553>52){
				}
			break;
			case 16:
				cout<<"\n--GRUPO 16--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4514554):";
				cin>>grupo16[1].p4514554;
				if(grupo16[1].p4514554<6){
				}
				if(grupo16[1].p4514554>6){
				}
				cout<<"\nIngrese la cantidad de la pieza(4565452):";
				cin>>grupo16[1].p4565452;
				if(grupo16[1].p4565452<1){
				}
				if(grupo16[1].p4514554>1){
				}
				cout<<"\nIngrese la cantidad de la pieza(4186017):";
				cin>>grupo16[1].p4186017;
				if(grupo16[1].p4186017<4){
				}
				if(grupo16[1].p4186017>4){
				}
			break;
			case 17:
				cout<<"\n--GRUPO 17--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4119589):";
				cin>>grupo17[1].p4119589;
				if(grupo17[1].p4119589<3){
				}
				if(grupo17[1].p4119589>3){
				}
				cout<<"\nIngrese la cantidad de la pieza(p4512360):";
				cin>>grupo17[1].p4512360;
				if(grupo17[1].p4512360<4){
				}
				if(grupo17[1].p4512360>4){
				}
				cout<<"\nIngrese la cantidad de la pieza(4210759):";
				cin>>grupo17[1].p4210759;
				if(grupo17[1].p4210759<2){
				}
				if(grupo17[1].p4210759>2){
				}
			break;
			case 18:
				cout<<"\n--GRUPO 18--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4535768):";
				cin>>grupo18[1].p4535768;
				if(grupo18[1].p4535768<2){
				}
				if(grupo18[1].p4535768>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211639):";
				cin>>grupo18[1].p4211639;
				if(grupo18[1].p4211639<8){
				}
				if(grupo18[1].p4211639>8){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211805):";
				cin>>grupo18[1].p4211805;
				if(grupo18[1].p4211805<4){
				}
				if(grupo18[1].p4211805>4){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211815):";
				cin>>grupo18[1].p4211815;
				if(grupo18[1].p4211815<19){
				}
				if(grupo18[1].p4211815>19){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211086):";
				cin>>grupo18[1].p4211086;
				if(grupo18[1].p4211086<6){
				}
				if(grupo18[1].p4211086>6){
				}
			break;
			case 19:
				cout<<"\n--GRUPO 19--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4545430):";
				cin>>grupo19[1].p4545430;
				if(grupo19[1].p4545430<3){
				}
				if(grupo19[1].p4545430>3){
				}
				cout<<"\nIngrese la cantidad de la pieza(4545434):";
				cin>>grupo19[1].p4545434;
				if(grupo19[1].p4545434<3){
				}
				if(grupo19[1].p4545434>3){
				}
				cout<<"\nIngrese la cantidad de la pieza(4545435):";
				cin>>grupo19[1].p4545435;
				if(grupo19[1].p4545435<3){
				}
				if(grupo19[1].p4545435>3){
				}
				cout<<"\nIngrese la cantidad de la pieza(4297031):";
				cin>>grupo19[1].p4297031;
				if(grupo19[1].p4297031<3){
				}
				if(grupo19[1].p4297031>3){
				}
			break;
			case 20:
				cout<<"\n--GRUPO 20--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(370526):";
				cin>>grupo20[1].p370526;
				if(grupo20[1].p370526<4){
				}
				if(grupo20[1].p370526>4){
				}
				cout<<"\nIngrese la cantidad de la pieza(4508553):";
				cin>>grupo20[1].p4508553;
				if(grupo20[1].p4508553<2){
				}
				if(grupo20[1].p4508553>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(370626):";
				cin>>grupo20[1].p370626;
				if(grupo20[1].p370626<2){
				}
				if(grupo20[1].p370626>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(4141300):";
				cin>>grupo20[1].p4141300;
				if(grupo20[1].p4141300<4){
				}
				if(grupo20[1].p4141300>4){
				}
				cout<<"\nIngrese la cantidad de la pieza(370826):";
				cin>>grupo20[1].p370826;
				if(grupo20[1].p370826<1){
				}
				if(grupo20[1].p370826>1){
				}
				cout<<"\nIngrese la cantidad de la pieza(4499858):";
				cin>>grupo20[1].p4499858;
				if(grupo20[1].p4499858<4){
				}
				if(grupo20[1].p4499858>4){
				}
			break;
			case 21:
				cout<<"\n--GRUPO 21--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4297210):";
				cin>>grupo21[1].p4297210;
				if(grupo21[1].p4297210<4){
				}
				if(grupo21[1].p4297210>4){
				}
				cout<<"\nIngrese la cantidad de la pieza(4184286):";
				cin>>grupo21[1].p4184286;
				if(grupo21[1].p4184286<4){
				}
				if(grupo21[1].p4184286>4){
				}
			break;
			case 22:
				cout<<"\n--GRUPO 22--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4537417):";
				cin>>grupo22[1].p4537417;
				if(grupo22[1].p4537417<10){
				}
				if(grupo22[1].p4537417>10){
				}
				cout<<"\nIngrese la cantidad de la pieza(4495932):";
				cin>>grupo22[1].p4495932;
				if(grupo22[1].p4495932<20){
				}
				if(grupo22[1].p4495932>20){
				}
				cout<<"\nIngrese la cantidad de la pieza(4297202):";
				cin>>grupo22[1].p4297202;
				if(grupo22[1].p4297202<14){
				}
				if(grupo22[1].p4297202>14){
				}
				cout<<"\nIngrese la cantidad de la pieza(4297200):";
				cin>>grupo22[1].p4297200;
				if(grupo22[1].p4297200<6){
				}
				if(grupo22[1].p4297200>6){
				}
				cout<<"\nIngrese la cantidad de la pieza(4522939):";
				cin>>grupo22[1].p4522939;
				if(grupo22[1].p4522939<10){
				}
				if(grupo22[1].p4522939>10){
				}
				cout<<"\nIngrese la cantidad de la pieza(4297197):";
				cin>>grupo22[1].p4297197;
				if(grupo22[1].p4297197<2){
				}
				if(grupo22[1].p4297197>2){
				}
			break;
			case 23:
				cout<<"\n--GRUPO 23--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4210751):";
				cin>>grupo23[1].p4210751;
				if(grupo23[1].p4210751<10){
				}
				if(grupo23[1].p4210751>10){
				}
				cout<<"\nIngrese la cantidad de la pieza(4210668):";
				cin>>grupo23[1].p4210668;
				if(grupo23[1].p4210668<2){
				}
				if(grupo23[1].p4210668>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(4210667):";
				cin>>grupo23[1].p4210667;
				if(grupo23[1].p4210667<13){
				}
				if(grupo23[1].p4210667>13){
				}   
				cout<<"\nIngrese la cantidad de la pieza(4234240):";
				cin>>grupo23[1].p4234240;
				if(grupo23[1].p4234240<4){
				}
				if(grupo23[1].p4234240>4){
				}  
				cout<<"\nIngrese la cantidad de la pieza(4210753):";
				cin>>grupo23[1].p4210753;
				if(grupo23[1].p4210753<14){
				}
				if(grupo23[1].p4210753>14){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211668):";
				cin>>grupo23[1].p4211668;
				if(grupo23[1].p4211668<6){
				}
				if(grupo23[1].p4211668>6){
				}
				cout<<"\nIngrese la cantidad de la pieza(4210638):";
				cin>>grupo23[1].p4210638;
				if(grupo23[1].p4210638<4){
				}
				if(grupo23[1].p4210638>4){
				}
				cout<<"\nIngrese la cantidad de la pieza(4211651):";
				cin>>grupo23[1].p4211651;
				if(grupo23[1].p4211651<18){
				}
				if(grupo23[1].p4211651>18){
				}
			break;
			case 24:
				cout<<"\n--GRUPO 24--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4297008):";
				cin>>grupo24[1].p4297008;
				if(grupo24[1].p4297008<3){
				}
				if(grupo24[1].p4297008>3){
				}
				cout<<"\nIngrese la cantidad de la pieza(4297174):";
				cin>>grupo24[1].p4297174;
				if(grupo24[1].p4297174<1){
				}
				if(grupo24[1].p4297174>1){
				}
				cout<<"\nIngrese la cantidad de la pieza(4296929):";
				cin>>grupo24[1].p4296929;
				if(grupo24[1].p4296929<2){
				}
				if(grupo24[1].p4296929>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(4546542):";
				cin>>grupo24[1].p4546542;
				if(grupo24[1].p4546542<1){
				}
				if(grupo24[1].p4546542>1){
				}
			break;
			case 25:
				cout<<"\n--GRUPO 25--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4548553):";
				cin>>grupo25[1].p4548553;
				if(grupo25[1].p4548553<3){
				}
				if(grupo25[1].p4548553>3){
				}
				cout<<"\nIngrese la cantidad de la pieza(4547402):";
				cin>>grupo25[1].p4547402;
				if(grupo25[1].p4547402<2){
				}
				if(grupo25[1].p4547402>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(4547403):";
				cin>>grupo25[1].p4547403;
				if(grupo25[1].p4547403<2){
				}
				if(grupo25[1].p4547403>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(4288099):";
				cin>>grupo25[1].p4288099;
				if(grupo25[1].p4288099<1){
				}
				if(grupo25[1].p4288099>1){
				}
				cout<<"\nIngrese la cantidad de la pieza(4292468):";
				cin>>grupo25[1].p4292468;
				if(grupo25[1].p4292468<2){
				}
				if(grupo25[1].p4292468>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(4502834):";
				cin>>grupo25[1].p4502834;
				if(grupo25[1].p4502834<2){
				}
				if(grupo25[1].p4502834>2){
				}
			break;
			case 26:
				cout<<"\n--GRUPO 26--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4297187):";
				cin>>grupo26[1].p4297187;
				if(grupo26[1].p4297187<1){
				}
				if(grupo26[1].p4297187>1){
				}
				cout<<"\nIngrese la cantidad de la pieza(4297188):";
				cin>>grupo26[1].p4297188;
				if(grupo26[1].p4297188<4){
				}
				if(grupo26[1].p4297188>4){
				}
				cout<<"\nIngrese la cantidad de la pieza(4297185):";
				cin>>grupo26[1].p4297185;
				if(grupo26[1].p4297185<2){
				}
				if(grupo26[1].p4297185>2){
				}
				cout<<"\nIngrese la cantidad de la pieza(cable):";
				cin>>grupo26[1].cable;
				if(grupo26[1].cable<1){
				}
				if(grupo26[1].cable>1){
				}
			break;
			case 27:
				cout<<"\n--GRUPO 27--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4558295):";
				cin>>grupo27[1].p4558295;
				if(grupo27[1].p4558295<1){
				}
				if(grupo27[1].p4558295>1){
				}
			break;
			case 28:
				cout<<"\n--GRUPO 28--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(guia):";
				cin>>grupo28[1].guia;
				if(grupo28[1].guia<1){
				}
				if(grupo28[1].guia>1){
				}
				cout<<"\nIngrese la cantidad de la pieza(test):";
				cin>>grupo28[1].test;
				if(grupo28[1].test<1){
				}
				if(grupo28[1].test>1){
				}
				cout<<"\nIngrese la cantidad de la pieza(disco):";
				cin>>grupo28[1].disco;
				if(grupo28[1].disco<1){
				}
				if(grupo28[1].disco>1){
				}
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
