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
	string grp[50];
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
					grp[1]="-Faltan del Grupo 1 la pieza p4255563: ";
				}
				if(grupo1[1].p4255563>2){
					grp[2]="-Sobran del Grupo 1 la pieza p4255563: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4177430):";
				cin>>grupo1[1].p4177430;
				if(grupo1[1].p4177430<2){
					grp[3]="-Faltan del Grupo 1 la pieza p4177430: ";
				}
				if(grupo1[1].p4177430>2){
					grp[4]="-Sobran del Grupo 1 la pieza p4177430: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4177431):";
				cin>>grupo1[1].p4177431;
				if(grupo1[1].p4177431<2){
					grp[5]="-Faltan del Grupo 1 la pieza p4177431: ";
				}
				if(grupo1[1].p4177431>2){
					grp[6]="-Sobran del Grupo 1 la pieza p4177431: ";
				}
			break;
			case 2:
				cout<<"\n--GRUPO 2--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4121715):";
				cin>>grupo2[1].p4121715;
				if(grupo2[1].p4121715<88){
					grp[7]="-Faltan del Grupo 2 la pieza p4121715: ";
				}
				if(grupo2[1].p4121715>88){
					grp[8]="-Sobran del Grupo 2 la pieza p4121715: ";
				}
			break;
			case 3:
				cout<<"\n--GRUPO 3--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4184169):";
				cin>>grupo3[1].p4184169;
				if(grupo3[1].p4184169<10){
					grp[9]="-Faltan del Grupo 3 la pieza p4184169: ";
				}
				if(grupo3[1].p4184169>10){
					grp[10]="-Sobran del Grupo 3 la pieza p4184169: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4107085):";
				cin>>grupo3[1].p4107085;
				if(grupo3[1].p4107085<5){
					grp[11]="-Faltan del Grupo 3 la pieza p4107085: ";
				}
				if(grupo3[1].p4107085>5){
					grp[12]="-Sobran del Grupo 3 la pieza p4107085: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4107783):";
				cin>>grupo3[1].p4107783;
				if(grupo3[1].p4107783<6){
					grp[13]="-Faltan del Grupo 3 la pieza p4107783: ";
				}
				if(grupo3[1].p4107783>6){
					grp[14]="-Sobran del Grupo 3 la pieza p4107783: ";
				}
			break;
			case 4:
				cout<<"\n--GRUPO 4--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4107767):";
				cin>>grupo4[1].p4107767;
				if(grupo4[1].p4107767<12){
					grp[15]="-Faltan del Grupo 4 la pieza p4107767: ";
				}
				if(grupo4[1].p4107767>12){
					grp[16]="-Sobran del Grupo 4 la pieza p4107767: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4515185):";
				cin>>grupo4[1].p4515185;
				if(grupo4[1].p4515185<8){
					grp[17]="-Faltan del Grupo 4 la pieza p4515185: ";
				}
				if(grupo4[1].p4515185>8){
					grp[18]="-Sobran del Grupo 4 la pieza p4515185: ";
				}
			break;
			case 5:
				cout<<"\n--GRUPO 5--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4107081):";
				cin>>grupo5[1].p4107081;
				if(grupo5[1].p4107081<6){
					grp[19]="-Faltan del Grupo 5 la pieza p4107081: ";
				}
				if(grupo5[1].p4107081>6){
					grp[20]="-Sobran del Grupo 5 la pieza p4107081: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4248204):";
				cin>>grupo5[1].p4248204;
				if(grupo5[1].p4248204<4){
					grp[21]="-Faltan del Grupo 5 la pieza p4248204: ";
				}
				if(grupo5[1].p4248204>4){
					grp[22]="-Sobran del Grupo 5 la pieza p4248204: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4143466):";
				cin>>grupo5[1].p4143466;
				if(grupo5[1].p4143466<6){
					grp[23]="-Faltan del Grupo 5 la pieza p4143466: ";
				}
				if(grupo5[1].p4143466>6){
					grp[24]="-Sobran del Grupo 5 la pieza p4143466: ";
				}
			break;
			case 6:
				cout<<"\n--GRUPO 6--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4121667):";
				cin>>grupo6[1].p4121667;
				if(grupo6[1].p4121667<5){
					grp[25]="-Faltan del Grupo 6 la pieza p4121667: ";
				}
				if(grupo6[1].p4121667>5){
					grp[26]="-Sobran del Grupo 6 la pieza p4121667: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4198367):";
				cin>>grupo6[1].p4198367;
				if(grupo6[1].p4198367<4){
					grp[27]="-Faltan del Grupo 6 la pieza p4198367: ";
				}
				if(grupo6[1].p4198367>4){
					grp[28]="-Sobran del Grupo 6 la pieza p4198367: ";
				}
			break;
			case 7:
				cout<<"\n--GRUPO 7--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4296059):";
				cin>>grupo7[1].p4296059;
				if(grupo7[1].p4296059<6){
					grp[29]="-Faltan del Grupo 7 la pieza p4296059: ";
				}
				if(grupo7[1].p4296059>6){
					grp[30]="-Sobran del Grupo 7 la pieza p4296059: ";
				}
			break;
			case 8:
				cout<<"\n--GRUPO 8--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4225033):";
				cin>>grupo8[1].p4225033;
				if(grupo8[1].p4225033<14){
					grp[31]="-Faltan del Grupo 8 la pieza p4225033: ";
				}
				if(grupo8[1].p4225033>14){
					grp[32]="-Sobran del Grupo 8 la pieza p4225033: ";
				}
			break;
			case 9:
				cout<<"\n--GRUPO 9--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211865):";
				cin>>grupo9[1].p4211865;
				if(grupo9[1].p4211865<10){
					grp[33]="-Faltan del Grupo 9 la pieza p4211865: ";
				}
				if(grupo9[1].p4211865>10){
					grp[34]="-Sobran del Grupo 9 la pieza p4211865: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211807):";
				cin>>grupo9[1].p4211807;
				if(grupo9[1].p4211807<6){
					grp[35]="-Faltan del Grupo 9 la pieza p4211807: ";
				}
				if(grupo9[1].p4211807>6){
					grp[36]="-Sobran del Grupo 9 la pieza p4211807: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211483):";
				cin>>grupo9[1].p4211483;
				if(grupo9[1].p4211483<2){
					grp[37]="-Faltan del Grupo 9 la pieza p4211483: ";
				}
				if(grupo9[1].p4211483>2){
					grp[38]="-Sobran del Grupo 9 la pieza p4211483: ";
				}
			break;
			case 10:
				cout<<"\n--GRUPO 10--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211889):";
				cin>>grupo10[1].p4211889;
				if(grupo10[1].p4211889<8){
					grp[39]="-Faltan del Grupo 10 la pieza p4211889: ";
				}
				if(grupo10[1].p4211889>8){
					grp[40]="-Sobran del Grupo 10 la pieza p4211889: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211629):";
				cin>>grupo10[1].p4211629;
				if(grupo10[1].p4211629<4){
					grp[41]="-Faltan del Grupo 10 la pieza p4211629: ";
				}
				if(grupo10[1].p4211629>4){
					grp[42]="-Sobran del Grupo 10 la pieza p4211629: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211880):";
				cin>>grupo10[1].p4211880;
				if(grupo10[1].p4211880<1){
					grp[43]="-Faltan del Grupo 10 la pieza p4211880: ";
				}
				if(grupo10[1].p4211880>1){
					grp[44]="-Sobran del Grupo 10 la pieza p4211880: ";
				}
			break;
			case 11:
				cout<<"\n--GRUPO 11--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211775):";
				cin>>grupo11[1].p4211775;
				if(grupo11[1].p4211775<8){
					grp[45]="-Faltan del Grupo 11 la pieza p4211775: ";
				}
				if(grupo11[1].p4211775>8){
					grp[46]="-Sobran del Grupo 11 la pieza p4211775: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211779):";
				cin>>grupo11[1].p4211779;
				if(grupo11[1].p4211779<16){
					grp[47]="-Faltan del Grupo 11 la pieza p4211779: ";
				}
				if(grupo11[1].p4211779>16){
					grp[48]="-Sobran del Grupo 11 la pieza p4211779: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4552348):";
				cin>>grupo11[1].p4552348;
				if(grupo11[1].p4552348<2){
					grp[49]="-Faltan del Grupo 11 la pieza p4552348: ";
				}
				if(grupo11[1].p4552348>2){
					grp[50]="-Sobran del Grupo 11 la pieza p4552348: ";
				}
			break;
			case 12:
				cout<<"\n--GRUPO 12--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4211622):";
				cin>>grupo12[1].p4211622;
				if(grupo12[1].p4211622<11){
					grp[51]="-Faltan del Grupo 12 la pieza p4211622: ";
				}
				if(grupo12[1].p4211622>11){
					grp[52]="-Sobran del Grupo 12 la pieza p4211622: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211573):";
				cin>>grupo12[1].p4211573;
				if(grupo12[1].p4211573<9){
					grp[53]="-Faltan del Grupo 12 la pieza p4211573: ";
				}
				if(grupo12[1].p4211573>9){
					grp[54]="-Sobran del Grupo 12 la pieza p4211573: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211375):";
				cin>>grupo12[1].p4211375;
				if(grupo12[1].p4211375<2){
					grp[55]="-Faltan del Grupo 12 la pieza p4211375: ";
				}
				if(grupo12[1].p4211375>2){
					grp[56]="-Sobran del Grupo 12 la pieza p4211375: ";
				}
			break;
			case 13:
				cout<<"\n--GRUPO 13--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4544140):";
				cin>>grupo13[1].p4544140;
				if(grupo13[1].p4544140<2){
					grp[57]="-Faltan del Grupo 13 la pieza p4544140: ";
				}
				if(grupo13[1].p4544140>2){
					grp[58]="-Sobran del Grupo 13 la pieza p4544140: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4281515):";
				cin>>grupo13[1].p4281515;
				if(grupo13[1].p4281515<10){
					grp[59]="-Faltan del Grupo 13 la pieza p4281515: ";
				}
				if(grupo13[1].p4281515>10){
					grp[60]="-Sobran del Grupo 13 la pieza p4281515: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(306901):";
				cin>>grupo13[1].p306901;
				if(grupo13[1].p306901<1){
					grp[61]="-Faltan del Grupo 13 la pieza p306901: ";
				}
				if(grupo13[1].p306901>1){
					grp[62]="-Sobran del Grupo 13 la pieza p306901: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4508664):";
				cin>>grupo13[1].p4508664;
				if(grupo13[1].p4508664<4){
					grp[63]="-Faltan del Grupo 13 la pieza p4508664: ";
				}
				if(grupo13[1].p4508664>4){
					grp[64]="-Sobran del Grupo 13 la pieza p4508664: ";
				}
			break;
			case 14:
				cout<<"\n--GRUPO 14--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4142865):";
				cin>>grupo14[1].p4142865;
				if(grupo14[1].p4142865<9){
					grp[65]="-Faltan del Grupo 14 la pieza p4142865: ";
				}
				if(grupo14[1].p4142865>9){
					grp[66]="-Sobran del Grupo 14 la pieza p4142865: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4206482):";
				cin>>grupo14[1].p4206482;
				if(grupo14[1].p4206482<24){
					grp[67]="-Faltan del Grupo 14 la pieza p4206482: ";
				}
				if(grupo14[1].p4206482>24){
					grp[68]="-Sobran del Grupo 14 la pieza p4206482: ";
				}
			break;
			case 15:
				cout<<"\n--GRUPO 15--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4514553):";
				cin>>grupo15[1].p4514553;
				if(grupo15[1].p4514553<52){
					grp[69]="-Faltan del Grupo 15 la pieza p4514553: ";
				}
				if(grupo15[1].p4514553>52){
					grp[70]="-Sobran del Grupo 15 la pieza p4514553: ";
				}
			break;
			case 16:
				cout<<"\n--GRUPO 16--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4514554):";
				cin>>grupo16[1].p4514554;
				if(grupo16[1].p4514554<6){
					grp[71]="-Faltan del Grupo 16 la pieza p4514554: ";
				}
				if(grupo16[1].p4514554>6){
					grp[72]="-Sobran del Grupo 16 la pieza p4514554: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4565452):";
				cin>>grupo16[1].p4565452;
				if(grupo16[1].p4565452<1){
					grp[73]="-Faltan del Grupo 16 la pieza p4565452: ";
				}
				if(grupo16[1].p4514554>1){
					grp[74]="-Sobran del Grupo 16 la pieza p4565452: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4186017):";
				cin>>grupo16[1].p4186017;
				if(grupo16[1].p4186017<4){
					grp[75]="-Faltan del Grupo 16 la pieza p4186017: ";
				}
				if(grupo16[1].p4186017>4){
					grp[76]="-Sobran del Grupo 16 la pieza p4186017: ";
				}
			break;
			case 17:
				cout<<"\n--GRUPO 17--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4119589):";
				cin>>grupo17[1].p4119589;
				if(grupo17[1].p4119589<3){
					grp[77]="-Faltan del Grupo 17 la pieza p4119589: ";
				}
				if(grupo17[1].p4119589>3){
					grp[78]="-Sobran del Grupo 17 la pieza p4119589: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(p4512360):";
				cin>>grupo17[1].p4512360;
				if(grupo17[1].p4512360<4){
					grp[79]="-Faltan del Grupo 17 la pieza p4512360: ";
				}
				if(grupo17[1].p4512360>4){
					grp[80]="-Sobran del Grupo 17 la pieza p4512360: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4210759):";
				cin>>grupo17[1].p4210759;
				if(grupo17[1].p4210759<2){
					grp[81]="-Faltan del Grupo 17 la pieza p4210759: ";
				}
				if(grupo17[1].p4210759>2){
					grp[82]="-Sobran del Grupo 17 la pieza p4210759: ";
				}
			break;
			case 18:
				cout<<"\n--GRUPO 18--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4535768):";
				cin>>grupo18[1].p4535768;
				if(grupo18[1].p4535768<2){
					grp[83]="-Faltan del Grupo 18 la pieza p4535768: ";
				}
				if(grupo18[1].p4535768>2){
					grp[84]="-Sobran del Grupo 18 la pieza p4535768: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211639):";
				cin>>grupo18[1].p4211639;
				if(grupo18[1].p4211639<8){
					grp[85]="-Faltan del Grupo 18 la pieza p4211639: ";
				}
				if(grupo18[1].p4211639>8){
					grp[86]="-Sobran del Grupo 18 la pieza p4211639: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211805):";
				cin>>grupo18[1].p4211805;
				if(grupo18[1].p4211805<4){
					grp[87]="-Faltan del Grupo 18 la pieza p4211805: ";
				}
				if(grupo18[1].p4211805>4){
					grp[88]="-Sobran del Grupo 18 la pieza p4211805: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211815):";
				cin>>grupo18[1].p4211815;
				if(grupo18[1].p4211815<19){
					grp[89]="-Faltan del Grupo 18 la pieza p4211815: ";
				}
				if(grupo18[1].p4211815>19){
					grp[90]="-Sobran del Grupo 18 la pieza p4211815: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211086):";
				cin>>grupo18[1].p4211086;
				if(grupo18[1].p4211086<6){
					grp[91]="-Faltan del Grupo 18 la pieza p4211086: ";
				}
				if(grupo18[1].p4211086>6){
					grp[92]="-Sobran del Grupo 18 la pieza p4211086: ";
				}
			break;
			case 19:
				cout<<"\n--GRUPO 19--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4545430):";
				cin>>grupo19[1].p4545430;
				if(grupo19[1].p4545430<3){
					grp[93]="-Faltan del Grupo 19 la pieza p4545430: ";
				}
				if(grupo19[1].p4545430>3){
					grp[94]="-Sobran del Grupo 19 la pieza p4545430: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4545434):";
				cin>>grupo19[1].p4545434;
				if(grupo19[1].p4545434<3){
					grp[95]="-Faltan del Grupo 19 la pieza p4545434: ";
				}
				if(grupo19[1].p4545434>3){
					grp[96]="-Sobran del Grupo 19 la pieza p4545434: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4545435):";
				cin>>grupo19[1].p4545435;
				if(grupo19[1].p4545435<3){
					grp[97]="-Faltan del Grupo 19 la pieza p4545435: ";
				}
				if(grupo19[1].p4545435>3){
					grp[98]="-Sobran del Grupo 19 la pieza p4545435: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4297031):";
				cin>>grupo19[1].p4297031;
				if(grupo19[1].p4297031<3){
					grp[99]="-Faltan del Grupo 19 la pieza p4297031: ";
				}
				if(grupo19[1].p4297031>3){
					grp[100]="-Sobran del Grupo 19 la pieza p4297031: ";
				}
			break;
			case 20:
				cout<<"\n--GRUPO 20--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(370526):";
				cin>>grupo20[1].p370526;
				if(grupo20[1].p370526<4){
					grp[101]="-Faltan del Grupo 20 la pieza p370526: ";
				}
				if(grupo20[1].p370526>4){
					grp[102]="-Sobran del Grupo 20 la pieza p370526: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4508553):";
				cin>>grupo20[1].p4508553;
				if(grupo20[1].p4508553<2){
					grp[103]="-Faltan del Grupo 20 la pieza p4508553: ";
				}
				if(grupo20[1].p4508553>2){
					grp[104]="-Sobran del Grupo 20 la pieza p4508553: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(370626):";
				cin>>grupo20[1].p370626;
				if(grupo20[1].p370626<2){
					grp[105]="-Faltan del Grupo 20 la pieza p370626: ";
				}
				if(grupo20[1].p370626>2){
					grp[106]="-Sobran del Grupo 20 la pieza p370626: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4141300):";
				cin>>grupo20[1].p4141300;
				if(grupo20[1].p4141300<4){
					grp[107]="-Faltan del Grupo 20 la pieza p4141300: ";
				}
				if(grupo20[1].p4141300>4){
					grp[108]="-Sobran del Grupo 20 la pieza p4141300: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(370826):";
				cin>>grupo20[1].p370826;
				if(grupo20[1].p370826<1){
					grp[109]="-Faltan del Grupo 20 la pieza p370826: ";
				}
				if(grupo20[1].p370826>1){
					grp[110]="-Sobran del Grupo 20 la pieza p370826: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4499858):";
				cin>>grupo20[1].p4499858;
				if(grupo20[1].p4499858<4){
					grp[111]="-Faltan del Grupo 20 la pieza p4499858: ";
				}
				if(grupo20[1].p4499858>4){
					grp[112]="-Sobran del Grupo 20 la pieza p4499858: ";
				}
			break;
			case 21:
				cout<<"\n--GRUPO 21--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4297210):";
				cin>>grupo21[1].p4297210;
				if(grupo21[1].p4297210<4){
					grp[113]="-Faltan del Grupo 21 la pieza p4297210: ";
				}
				if(grupo21[1].p4297210>4){
					grp[114]="-Sobran del Grupo 21 la pieza p4297210: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4184286):";
				cin>>grupo21[1].p4184286;
				if(grupo21[1].p4184286<4){
					grp[115]="-Faltan del Grupo 21 la pieza p4184286: ";
				}
				if(grupo21[1].p4184286>4){
					grp[116]="-Sobran del Grupo 21 la pieza p4184286: ";
				}
			break;
			case 22:
				cout<<"\n--GRUPO 22--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4537417):";
				cin>>grupo22[1].p4537417;
				if(grupo22[1].p4537417<10){
					grp[117]="-Faltan del Grupo 22 la pieza p4537417: ";
				}
				if(grupo22[1].p4537417>10){
					grp[118]="-Sobran del Grupo 22 la pieza p4537417: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4495932):";
				cin>>grupo22[1].p4495932;
				if(grupo22[1].p4495932<20){
					grp[119]="-Faltan del Grupo 22 la pieza p4495932: ";
				}
				if(grupo22[1].p4495932>20){
					grp[120]="-Sobran del Grupo 22 la pieza p4495932: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4297202):";
				cin>>grupo22[1].p4297202;
				if(grupo22[1].p4297202<14){
					grp[121]="-Faltan del Grupo 22 la pieza p4297202: ";
				}
				if(grupo22[1].p4297202>14){
					grp[122]="-Sobran del Grupo 22 la pieza p4297202: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4297200):";
				cin>>grupo22[1].p4297200;
				if(grupo22[1].p4297200<6){
					grp[123]="-Faltan del Grupo 22 la pieza p4297200: ";
				}
				if(grupo22[1].p4297200>6){
					grp[124]="-Sobran del Grupo 22 la pieza p4297200: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4522939):";
				cin>>grupo22[1].p4522939;
				if(grupo22[1].p4522939<10){
					grp[125]="-Faltan del Grupo 22 la pieza p4522939: ";
				}
				if(grupo22[1].p4522939>10){
					grp[126]="-Sobran del Grupo 22 la pieza p4522939: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4297197):";
				cin>>grupo22[1].p4297197;
				if(grupo22[1].p4297197<2){
					grp[127]="-Faltan del Grupo 22 la pieza p4297197: ";
				}
				if(grupo22[1].p4297197>2){
					grp[128]="-Sobran del Grupo 22 la pieza p4297197: ";
				}
			break;
			case 23:
				cout<<"\n--GRUPO 23--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4210751):";
				cin>>grupo23[1].p4210751;
				if(grupo23[1].p4210751<10){
					grp[129]="-Faltan del Grupo 23 la pieza p4210751: ";
				}
				if(grupo23[1].p4210751>10){
					grp[130]="-Sobran del Grupo 23 la pieza p4210751: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4210668):";
				cin>>grupo23[1].p4210668;
				if(grupo23[1].p4210668<2){
					grp[131]="-Faltan del Grupo 23 la pieza p4210668: ";
				}
				if(grupo23[1].p4210668>2){
					grp[132]="-Sobran del Grupo 23 la pieza p4210668: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4210667):";
				cin>>grupo23[1].p4210667;
				if(grupo23[1].p4210667<13){
					grp[133]="-Faltan del Grupo 23 la pieza p4210667: ";
				}
				if(grupo23[1].p4210667>13){
					grp[134]="-Sobran del Grupo 23 la pieza p4210667: ";
				}   
				cout<<"\nIngrese la cantidad de la pieza(4234240):";
				cin>>grupo23[1].p4234240;
				if(grupo23[1].p4234240<4){
					grp[135]="-Faltan del Grupo 23 la pieza p4234240: ";
				}
				if(grupo23[1].p4234240>4){
					grp[136]="-Sobran del Grupo 23 la pieza p4234240: ";
				}  
				cout<<"\nIngrese la cantidad de la pieza(4210753):";
				cin>>grupo23[1].p4210753;
				if(grupo23[1].p4210753<14){
					grp[137]="-Faltan del Grupo 23 la pieza p4210753: ";
				}
				if(grupo23[1].p4210753>14){
					grp[138]="-Sobran del Grupo 23 la pieza p4210753: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211668):";
				cin>>grupo23[1].p4211668;
				if(grupo23[1].p4211668<6){
					grp[139]="-Faltan del Grupo 23 la pieza p4211668: ";
				}
				if(grupo23[1].p4211668>6){
					grp[140]="-Sobran del Grupo 23 la pieza p4211668: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4210638):";
				cin>>grupo23[1].p4210638;
				if(grupo23[1].p4210638<4){
					grp[141]="-Faltan del Grupo 23 la pieza p4210638: ";
				}
				if(grupo23[1].p4210638>4){
					grp[142]="-Sobran del Grupo 23 la pieza p4210638: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4211651):";
				cin>>grupo23[1].p4211651;
				if(grupo23[1].p4211651<18){
					grp[143]="-Faltan del Grupo 23 la pieza p4211651: ";
				}
				if(grupo23[1].p4211651>18){
					grp[144]="-Sobran del Grupo 23 la pieza p4211651: ";
				}
			break;
			case 24:
				cout<<"\n--GRUPO 24--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4297008):";
				cin>>grupo24[1].p4297008;
				if(grupo24[1].p4297008<3){
					grp[145]="-Faltan del Grupo 24 la pieza p4297008: ";
				}
				if(grupo24[1].p4297008>3){
					grp[146]="-Sobran del Grupo 24 la pieza p4297008: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4297174):";
				cin>>grupo24[1].p4297174;
				if(grupo24[1].p4297174<1){
					grp[147]="-Faltan del Grupo 24 la pieza p4297174: ";
				}
				if(grupo24[1].p4297174>1){
					grp[148]="-Sobran del Grupo 24 la pieza p4297174: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4296929):";
				cin>>grupo24[1].p4296929;
				if(grupo24[1].p4296929<2){
					grp[149]="-Faltan del Grupo 24 la pieza p4296929: ";
				}
				if(grupo24[1].p4296929>2){
					grp[150]="-Sobran del Grupo 24 la pieza p4296929: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4546542):";
				cin>>grupo24[1].p4546542;
				if(grupo24[1].p4546542<1){
					grp[151]="-Faltan del Grupo 24 la pieza p4546542: ";
				}
				if(grupo24[1].p4546542>1){
					grp[152]="-Sobran del Grupo 24 la pieza p4546542: ";
				}
			break;
			case 25:
				cout<<"\n--GRUPO 25--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4548553):";
				cin>>grupo25[1].p4548553;
				if(grupo25[1].p4548553<3){
					grp[153]="-Faltan del Grupo 25 la pieza p4548553: ";
				}
				if(grupo25[1].p4548553>3){
					grp[154]="-Sobran del Grupo 25 la pieza p4548553: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4547402):";
				cin>>grupo25[1].p4547402;
				if(grupo25[1].p4547402<2){
					grp[155]="-Faltan del Grupo 25 la pieza p4547402: ";
				}
				if(grupo25[1].p4547402>2){
					grp[156]="-Sobran del Grupo 25 la pieza p4547402: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4547403):";
				cin>>grupo25[1].p4547403;
				if(grupo25[1].p4547403<2){
					grp[157]="-Faltan del Grupo 25 la pieza p4547403: ";
				}
				if(grupo25[1].p4547403>2){
					grp[158]="-Sobran del Grupo 25 la pieza p4547403: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4288099):";
				cin>>grupo25[1].p4288099;
				if(grupo25[1].p4288099<1){
					grp[159]="-Faltan del Grupo 25 la pieza p4288099: ";
				}
				if(grupo25[1].p4288099>1){
					grp[160]="-Sobran del Grupo 25 la pieza p4288099: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4292468):";
				cin>>grupo25[1].p4292468;
				if(grupo25[1].p4292468<2){
					grp[161]="-Faltan del Grupo 25 la pieza p4292468: ";
				}
				if(grupo25[1].p4292468>2){
					grp[162]="-Sobran del Grupo 25 la pieza p4292468: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4502834):";
				cin>>grupo25[1].p4502834;
				if(grupo25[1].p4502834<2){
					grp[163]="-Faltan del Grupo 25 la pieza p4502834: ";
				}
				if(grupo25[1].p4502834>2){
					grp[164]="-Sobran del Grupo 25 la pieza p4502834: ";
				}
			break;
			case 26:
				cout<<"\n--GRUPO 26--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4297187):";
				cin>>grupo26[1].p4297187;
				if(grupo26[1].p4297187<1){
					grp[165]="-Faltan del Grupo 26 la pieza p4297187: ";
				}
				if(grupo26[1].p4297187>1){
					grp[166]="-Sobran del Grupo 26 la pieza p4297187: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4297188):";
				cin>>grupo26[1].p4297188;
				if(grupo26[1].p4297188<4){
					grp[167]="-Faltan del Grupo 26 la pieza p4297188: ";
				}
				if(grupo26[1].p4297188>4){
					grp[168]="-Sobran del Grupo 26 la pieza p4297188: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(4297185):";
				cin>>grupo26[1].p4297185;
				if(grupo26[1].p4297185<2){
					grp[169]="-Faltan del Grupo 26 la pieza p4297185: ";
				}
				if(grupo26[1].p4297185>2){
					grp[170]="-Sobran del Grupo 26 la pieza p4297185: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(cable):";
				cin>>grupo26[1].cable;
				if(grupo26[1].cable<1){
					grp[171]="-Faltan del Grupo 26 el cable: ";
				}
				if(grupo26[1].cable>1){
					grp[172]="-Sobran del Grupo 26 el cable: ";
				}
			break;
			case 27:
				cout<<"\n--GRUPO 27--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(4558295):";
				cin>>grupo27[1].p4558295;
				if(grupo27[1].p4558295<1){
					grp[173]="-Faltan del Grupo 27 la pieza p4558295: ";
				}
				if(grupo27[1].p4558295>1){
					grp[174]="-Sobran del Grupo 27 la pieza p4558295: ";
				}
			break;
			case 28:
				cout<<"\n--GRUPO 28--"<<endl;
				cout<<"\nIngrese la cantidad de la pieza(guia):";
				cin>>grupo28[1].guia;
				if(grupo28[1].guia<1){
					grp[175]="-Faltan del Grupo 28 la guia: ";
				}
				if(grupo28[1].guia>1){
					grp[176]="-Sobran del Grupo 28 la guia: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(test):";
				cin>>grupo28[1].test;
				if(grupo28[1].test<1){
					grp[177]="-Faltan del Grupo 28 el test: ";
				}
				if(grupo28[1].test>1){
					grp[178]="-Sobran del Grupo 28 el test: ";
				}
				cout<<"\nIngrese la cantidad de la pieza(disco):";
				cin>>grupo28[1].disco;
				if(grupo28[1].disco<1){
					grp[179]="-Faltan del Grupo 28 el disco: ";
				}
				if(grupo28[1].disco>1){
					grp[180]="-Sobran del Grupo 28 el disco: ";
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
