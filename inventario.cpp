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
	int periodo, f=0, g , j, fs[1000], m;
	int PiezastotalLEGOMINDSTORM= 619;
	int  n;
	string grp[1000];
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
				cout<<"Ingrese la cantidad de la pieza(4255563):";
				cin>>grupo1[1].p4255563;
				if(grupo1[1].p4255563<2){             //  faltan piezas del inventario
					grp[0]="-Faltan del Grupo 1 la pieza p4255563: ";
					fs[0]=2-grupo1[1].p4255563;	
				cout<<"faltan:"<<fs[0]<<endl;
				}
				if(grupo1[1].p4255563>2){                //  excede las piezas del inventario
					grp[0]="-Sobran del Grupo 1 la pieza p4255563: ";
					fs[0]=grupo1[1].p4255563-2;
				cout<<"sobran:"<<fs[0]<<endl;
				}
				if(grupo1[1].p4255563==2){       // caso si conincide con las piezas del inventario
					grp[0]=" Grupo 1 las piezas p4255563 estan completas: ";
					fs[0]=grupo1[1].p4255563;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4177430):";
				cin>>grupo1[1].p4177430;
				if(grupo1[1].p4177430<2){
					grp[1]="-Faltan del Grupo 1 la pieza p4177430: ";
					fs[1]=2-grupo1[1].p4177430;
				cout<<"faltan:"<<fs[1]<<endl;
		        }
				if(grupo1[1].p4177430>2){
					grp[1]="-Sobran del Grupo 1 la pieza p4177430: ";
					fs[1]=grupo1[1].p4177430-2;
				cout<<"sobran:"<<fs[1]<<endl;
				}
				if(grupo1[1].p4177430==2){       
					grp[1]=" Grupo 1 las piezas p4177430 estan completas: ";
					fs[1]=grupo1[1].p4177430;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4177431):";
				cin>>grupo1[1].p4177431;
				if(grupo1[1].p4177431<2){
					grp[2]="-Faltan del Grupo 1 la pieza p4177431: ";
					fs[2]=2-grupo1[1].p4177431;
				cout<<"faltan:"<<fs[2];
				}
				if(grupo1[1].p4177431>2){
					grp[2]="_faltan del grupo 1 la pieza p4177431: ";
					fs[2]=grupo1[1].p4177431-2;
				cout<<"sobran:"<<fs[2];
				}
				if(grupo1[1].p4177431==2){
					grp[2]="-Sobran del Grupo 2 la pieza p4177431: ";
					fs[2]=grupo1[1].p4177431;
				cout<<"completo"<<endl;
				}
			break;
			case 2:
				cout<<"\n--GRUPO 2--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4121715):";
				cin>>grupo2[1].p4121715;
				if(grupo2[1].p4121715<88){
					grp[3]="-Faltan del Grupo 2 la pieza p4121715: ";
					fs[3]=88-grupo2[1].p4121715;
				cout<<"faltan:"<<fs[3]<<endl;
				}
				if(grupo2[1].p4121715>88){
					grp[3]="-Sobran del Grupo 2 la pieza p4121715: ";
					fs[3]=grupo2[1].p4121715-88;
				cout<<"sobran:"<<fs[3]<<endl;
				}
				if(grupo2[1].p4121715==88){
					grp[3]=" Grupo 2 la pieza completo p4121715: ";
					fs[3]=grupo1[1].p4177431;
				cout<<"completo"<<endl;
				}
			break;
			case 3:
				cout<<"\n--GRUPO 3--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4184169):";
				cin>>grupo3[1].p4184169;
				if(grupo3[1].p4184169<10){
					grp[4]="-Faltan del Grupo 3 la pieza p4184169: ";
					fs[4]=10-grupo3[1].p4184169;
				cout<<"faltan:"<<fs[4]<<endl;
				}
				if(grupo3[1].p4184169>10){
					grp[4]="-Sobran del Grupo 3 la pieza p4184169: ";
					fs[4]=grupo3[1].p4184169-10;
				cout<<"sobran:"<<fs[4]<<endl;
				}
				if(grupo3[1].p4184169==10){
					grp[4]=" Grupo 3 la pieza completo p4184169: ";
					fs[4]=grupo3[1].p4184169;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4107085):";
				cin>>grupo3[1].p4107085;
				if(grupo3[1].p4107085<5){
					grp[5]="-Faltan del Grupo 3 la pieza p4107085: ";
					fs[5]=5-grupo3[1].p4107085;
				cout<<"faltan:"<<fs[5]<<endl;
				}
				if(grupo3[1].p4107085>5){
					grp[5]="-Sobran del Grupo 3 la pieza p4107085: ";
					fs[5]=grupo3[1].p4107085-5;
				cout<<"sobran:"<<fs[5]<<endl;
				}
				if(grupo3[1].p4107085==5){
					grp[5]=" Grupo 3 la pieza completo p4107085: ";
					fs[5]=grupo3[1].p4107085;
				cout<<"completo"<<endl;
		 	    }
				cout<<"Ingrese la cantidad de la pieza(4107783):";
				cin>>grupo3[1].p4107783;
				if(grupo3[1].p4107783<6){
					grp[6]="-Faltan del Grupo 3 la pieza p4107783: ";
					fs[6]=6-grupo3[1].p4107783;
					cout<<"faltan:"<<fs[6]<<endl;
				}
				if(grupo3[1].p4107783>6){
					grp[6]="-Sobran del Grupo 3 la pieza p4107783: ";
					fs[6]=grupo3[1].p4107783-6;
				cout<<"sobran:"<<fs[6]<<endl;
				}
				if(grupo3[1].p4107783==6){
					grp[6]="-Completo del Grupo 3 la pieza p4107783: ";
					fs[6]=grupo3[1].p4107783;
				cout<<"completo"<<endl;
			    }
			break;
			case 4:
				cout<<"\n--GRUPO 4--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4107767):";
				cin>>grupo4[1].p4107767;
				if(grupo4[1].p4107767<12){
					grp[7]="-Faltan del Grupo 4 la pieza p4107767: ";
					fs[7]=12-grupo4[1].p4107767;
				cout<<"faltan:"<<fs[7]<<endl;
				}
				if(grupo4[1].p4107767>12){
					grp[7]="-Sobran del Grupo 4 la pieza p4107767: ";
					fs[7]=grupo4[1].p4107767-12;
				cout<<"sobran:"<<fs[7]<<endl;
				}
				if(grupo4[1].p4107767==12){
					grp[7]="-Completo del Grupo 4 la pieza p4107767: ";
					fs[7]=grupo4[1].p4107767;
				cout<<"completo"<<endl;	
			    }
				cout<<"Ingrese la cantidad de la pieza(4515185):";
				cin>>grupo4[1].p4515185;
				if(grupo4[1].p4515185<8){
					grp[8]="-Faltan del Grupo 4 la pieza p4515185: ";
					fs[8]=8-grupo4[1].p4515185;
				cout<<"faltan:"<<fs[8]<<endl;
				}
				if(grupo4[1].p4515185>8){
					grp[8]="-Sobran del Grupo 4 la pieza p4151585: ";
					fs[8]=grupo4[1].p4515185-8;
				cout<<"sobran:"<<fs[8]<<endl;
				}
				if(grupo4[1].p4515185==8){
				    grp[8]="-Completo del Grupo 4 la pieza p4515185 ";
					fs[8]=grupo4[1].p4515185;
				cout<<"completo"<<endl;
			    }
			break;
			case 5:
				cout<<"\n--GRUPO 5--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4107081):";
				cin>>grupo5[1].p4107081;
				if(grupo5[1].p4107081<6){
					grp[9]="-Faltan del Grupo 5 la pieza p4107081: ";
					fs[9]=6-grupo5[1].p4107081;
				cout<<"faltan:"<<fs[9]<<endl;
				}
				if(grupo5[1].p4107081>6){
					grp[9]="-Sobran del Grupo 5 la pieza p4107081: ";
					fs[9]=grupo5[1].p4107081-6;
				cout<<"sobran:"<<fs[9]<<endl;
				}
				if(grupo5[1].p4107081==6){
				    grp[9]="-Completo del Grupo 5 la pieza p4107081: ";
					fs[9]=grupo5[1].p4107081;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4248204):";
				cin>>grupo5[1].p4248204;
				if(grupo5[1].p4248204<4){
					grp[10]="-Faltan del Grupo 5 la pieza p4248204: ";
					fs[10]=4-grupo5[1].p4248204;
				cout<<"faltan:"<<fs[10]<<endl;
				}
				if(grupo5[1].p4248204>4){
					grp[10]="-Sobran del Grupo 5 la pieza p4248204: ";
					fs[10]=grupo5[1].p4248204-4;
				cout<<"sobran:"<<fs[10]<<endl;
				}
				if(grupo5[1].p4248204==4){
					grp[10]="-Completo del Grupo 5 la pieza p4248204: ";
					fs[10]=grupo3[1].p4107783;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4143466):";
				cin>>grupo5[1].p4143466;
				if(grupo5[1].p4143466<6){
					grp[11]="-Faltan del Grupo 5 la pieza p4143466: ";
					fs[11]=6-grupo5[1].p4143466;
				cout<<"faltan:"<<fs[11]<<endl;
				}
				if(grupo5[1].p4143466>6){
					grp[11]="-Sobran del Grupo 5 la pieza p4143466: ";
					fs[11]=grupo5[1].p4143466-6;
				cout<<"sobran:"<<fs[11]<<endl;
				}
				if(grupo5[1].p4143466==6){
				    grp[11]="-Completo del Grupo 5 la pieza p4143466: ";
					fs[11]=grupo5[1].p4143466;
				cout<<"completo"<<endl;
			    }
			break;
			case 6:
				cout<<"\n--GRUPO 6--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4121667):";
				cin>>grupo6[1].p4121667;
				if(grupo6[1].p4121667<5){
					grp[12]="-Faltan del Grupo 6 la pieza p4121667: ";
					fs[12]=5-grupo6[1].p4121667;
				cout<<"faltan:"<<fs[12]<<endl;
				}
				if(grupo6[1].p4121667>5){
					grp[12]="-Sobran del Grupo 6 la pieza p4121667: ";
					fs[12]=grupo6[1].p4121667-5;
				cout<<"sobran:"<<fs[12]<<endl;
				}
				if(grupo6[1].p4121667==5){
				    grp[12]="-Completo del Grupo 6 la pieza p4121667: ";
					fs[12]=grupo6[1].p4121667;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4198367):";
				cin>>grupo6[1].p4198367;
				if(grupo6[1].p4198367<4){
					grp[13]="-Faltan del Grupo 6 la pieza p4198367: ";
					fs[13]=4-grupo6[1].p4198367;
				cout<<"faltan:"<<fs[13]<<endl;
				}
				if(grupo6[1].p4198367>4){
					grp[13]="-Sobran del Grupo 6 la pieza p4198367: ";
					fs[13]=grupo6[1].p4198367-4;
				cout<<"sobran:"<<fs[13]<<endl;
				}
			    if(grupo6[1].p4198367==4){
				    grp[13]="-Completo del Grupo 6 la pieza p419867: ";
					fs[13]=grupo6[1].p4198367;
				cout<<"completo"<<endl;
			    }
			break;
			case 7:
				cout<<"\n--GRUPO 7--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4296059):";
				cin>>grupo7[1].p4296059;
				if(grupo7[1].p4296059<6){
					grp[14]="-Faltan del Grupo 7 la pieza p4296059: ";
					fs[14]=6-grupo7[1].p4296059;
				cout<<"faltan:"<<fs[14]<<endl;
				}
				if(grupo7[1].p4296059>6){
					grp[14]="-Sobran del Grupo 7 la pieza p4296059: ";
					fs[14]=grupo7[1].p4296059-6;
				cout<<"sobran:"<<fs[14]<<endl;
				}
				if(grupo7[1].p4296059==6){
				    grp[14]="-Completo del Grupo 7 la pieza p296059: ";
					fs[14]=grupo7[14].p4296059;
				cout<<"completo"<<endl;
			    }
			break;
			case 8:
				cout<<"\n--GRUPO 8--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4225033):";
				cin>>grupo8[1].p4225033;
				if(grupo8[1].p4225033<14){
					grp[15]="-Faltan del Grupo 8 la pieza p4225033: ";
					fs[15]=14-grupo8[1].p4225033;
				cout<<"faltan:"<<fs[15]<<endl;
				}
				if(grupo8[1].p4225033>14){
					grp[15]="-Sobran del Grupo 8 la pieza p4225033: ";
					fs[15]=grupo8[1].p4225033-14;
				cout<<"sobran:"<<fs[15]<<endl;
				}
				if(grupo8[1].p4225033==14){
		            grp[15]="-Completo del Grupo 8 la pieza p4225033: ";
					fs[15]=grupo8[1].p4225033;
				cout<<"completo"<<endl;
			    }
			break;
			case 9:
				cout<<"\n--GRUPO 9--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4211865):";
				cin>>grupo9[1].p4211865;
				if(grupo9[1].p4211865<10){
					grp[16]="-Faltan del Grupo 9 la pieza p4211865: ";
					fs[16]=10-grupo9[1].p4211865;
				cout<<"faltan:"<<fs[16]<<endl;	
				}
				if(grupo9[1].p4211865>10){
					grp[16]="-Sobran del Grupo 9 la pieza p4211865: ";
					fs[16]=grupo9[1].p4211865-10;
				cout<<"sobran:"<<fs[16]<<endl;
				}
			    if(grupo9[1].p4211865==10){
		            grp[16]="-Completo del Grupo 9 la pieza p4211865: ";
					fs[16]=grupo9[1].p4211865;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4211807):";
				cin>>grupo9[1].p4211807;
				if(grupo9[1].p4211807<6){
					grp[17]="-Faltan del Grupo 9 la pieza p4211807: ";
					fs[17]=6-grupo9[1].p4211807;
				cout<<"faltan:"<<fs[17]<<endl;
				}
				if(grupo9[1].p4211807>6){
					grp[17]="-Sobran del Grupo 9 la pieza p4211807: ";
					fs[17]=grupo9[1].p4211807-6;
				cout<<"sobran:"<<fs[17]<<endl;
				}
				if(grupo9[1].p4211807==6){
				    grp[17]="-Completo del Grupo 9 la pieza p4211807: ";
					fs[17]=grupo9[1].p4211807;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4211483):";
				cin>>grupo9[1].p4211483;
				if(grupo9[1].p4211483<2){
					grp[18]="-Faltan del Grupo 9 la pieza p4211483: ";
					fs[18]=2-grupo9[1].p4211483;
				cout<<"faltan:"<<fs[18]<<endl;
				}
				if(grupo9[1].p4211483>2){
					grp[18]="-Sobran del Grupo 9 la pieza p4211483: ";
					fs[18]=grupo9[1].p4211483-2;
				cout<<"sobran:"<<fs[18]<<endl;
				}
				if(grupo9[1].p4211483==2){
				    grp[18]="-Completo del Grupo 9 la pieza p4211483: ";
					fs[18]=grupo9[1].p4211483;
				cout<<"completo"<<endl;
			    }
			break;
			case 10:
				cout<<"\n--GRUPO 10--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4211889):";
				cin>>grupo10[1].p4211889;
				if(grupo10[1].p4211889<8){
					grp[19]="-Faltan del Grupo 10 la pieza p4211889: ";
					fs[19]=8-grupo10[1].p4211889;
				cout<<"faltan:"<<fs[19]<<endl;
				}
				if(grupo10[1].p4211889>8){
					grp[19]="-Sobran del Grupo 10 la pieza p4211889: ";
					fs[19]=grupo10[1].p4211889-8;
				cout<<"sobran:"<<fs[19]<<endl;
				}
				if(grupo10[1].p4211889==8){
				    grp[19]="-Completo del Grupo 10 la pieza p4211889: ";
					fs[19]=grupo10[1].p4211889;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4211629):";
				cin>>grupo10[1].p4211629;
				if(grupo10[1].p4211629<4){
					grp[20]="-Faltan del Grupo 10 la pieza p4211629: ";
					fs[20]=4-grupo10[1].p4211629;
				cout<<"faltan:"<<fs[20]<<endl;
				}
				if(grupo10[1].p4211629>4){
					grp[20]="-Sobran del Grupo 10 la pieza p4211629: ";
					fs[20]=grupo10[1].p4211629-4;
				cout<<"sobran:"<<fs[20]<<endl;
				}
				if(grupo10[1].p4211629==4){
				    grp[20]="-Completo del Grupo 10 la pieza p4211629: ";
					fs[20]=grupo10[1].p4211629;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4211880):";
				cin>>grupo10[1].p4211880;
				if(grupo10[1].p4211880<1){
					grp[21]="-Faltan del Grupo 10 la pieza p4211880: ";
					fs[21]=1-grupo10[1].p4211880;
				cout<<"faltan:"<<fs[21]<<endl;
				}
				if(grupo10[1].p4211880>1){
					grp[21]="-Sobran del Grupo 10 la pieza p4211880: ";
					fs[21]=grupo10[1].p4211880-1;
				cout<<"sobran:"<<fs[21]<<endl;
				}
				if(grupo10[1].p4211880==1){
				    grp[21]="-Completo del Grupo 10 la pieza p4211880: ";
					fs[21]=grupo10[1].p4211880;
				cout<<"completo"<<endl;
			    }
			break;
			case 11:
				cout<<"\n--GRUPO 11--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4211775):";
				cin>>grupo11[1].p4211775;
				if(grupo11[1].p4211775<8){
					grp[22]="-Faltan del Grupo 11 la pieza p4211775: ";
					fs[22]=8-grupo11[1].p4211775;
				cout<<"faltan:"<<fs[22]<<endl;
				}
				if(grupo11[1].p4211775>8){
					grp[22]="-Sobran del Grupo 11 la pieza p4211775: ";
					fs[22]=grupo11[1].p4211775-8;
				cout<<"sobran:"<<fs[22]<<endl;
				}
				if(grupo11[1].p4211775==8){
				    grp[22]="-Completo del Grupo 11 la pieza p4211775: ";
					fs[22]=grupo11[1].p4211775;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4211779):";
				cin>>grupo11[1].p4211779;
				if(grupo11[1].p4211779<16){
					grp[23]="-Faltan del Grupo 11 la pieza p4211779: ";
					fs[23]=16-grupo11[1].p4211779;
				cout<<"faltan:"<<fs[23]<<endl;
				}
				if(grupo11[1].p4211779>16){
					grp[23]="-Sobran del Grupo 11 la pieza p4211779: ";
					fs[23]=grupo11[1].p4211779-16;
				cout<<"sobran:"<<fs[23]<<endl;
				}
				if(grupo11[1].p4211779==16){
				    grp[23]="-Completo del Grupo 11 la pieza p4211779: ";
					fs[23]=grupo11[1].p4211779;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4552348):";
				cin>>grupo11[1].p4552348;
				if(grupo11[1].p4552348<2){
					grp[24]="-Faltan del Grupo 11 la pieza p4552348: ";
					fs[24]=2-grupo11[1].p4552348;
				cout<<"faltan:"<<fs[24]<<endl;
				}
				if(grupo11[1].p4552348>2){
					grp[24]="-Sobran del Grupo 11 la pieza p4552348: ";
					fs[24]=grupo11[1].p4552348-2;
				cout<<"sobran:"<<fs[24]<<endl;
				}
				if(grupo11[1].p4552348==2){
				    grp[24]="-Completo del Grupo 11 la pieza p4552348: ";
					fs[24]=grupo11[1].p4552348;
				cout<<"completo"<<endl;
			    }
			break;
			case 12:
				cout<<"\n--GRUPO 12--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4211622):";
				cin>>grupo12[1].p4211622;
				if(grupo12[1].p4211622<11){
					grp[25]="-Faltan del Grupo 12 la pieza p4211622: ";
					fs[25]=11-grupo12[1].p4211622;
				cout<<"faltan:"<<fs[25]<<endl;
				}
				if(grupo12[1].p4211622>11){
					grp[25]="-Sobran del Grupo 12 la pieza p4211622: ";
					fs[25]=grupo12[1].p4211622-11;
				cout<<"sobran:"<<fs[25]<<endl;
				}
				if(grupo12[1].p4211622==11){
				    grp[25]="-Completo del Grupo 12 la pieza p4211622: ";
					fs[25]=grupo12[1].p4211622;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4211573):";
				cin>>grupo12[1].p4211573;
				if(grupo12[1].p4211573<9){
					grp[26]="-Faltan del Grupo 12 la pieza p4211573: ";
					fs[26]=9-grupo12[1].p4211573;
				cout<<"faltan:"<<fs[26]<<endl;
				}
				if(grupo12[1].p4211573>9){
					grp[26]="-Sobran del Grupo 12 la pieza p4211573: ";
					fs[26]=grupo12[1].p4211573-9;
				cout<<"sobran:"<<fs[26]<<endl;
				}
				if(grupo12[1].p4211573==9){
				    grp[26]="-Completo del Grupo 12 la pieza p4211573: ";
					fs[26]=grupo12[1].p4211573;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4211375):";
				cin>>grupo12[1].p4211375;
				if(grupo12[1].p4211375<2){
					grp[27]="-Faltan del Grupo 12 la pieza p4211375: ";
					fs[27]=2-grupo12[1].p4211375;
				cout<<"faltan:"<<fs[27]<<endl;
				}
				if(grupo12[1].p4211375>2){
					grp[27]="-Sobran del Grupo 12 la pieza p4211375: ";
					fs[27]=grupo12[1].p4211375-2;
				cout<<"sobran:"<<fs[27]<<endl;
				}
			    if(grupo12[1].p4211375==2){
		            grp[27]="-Completo del Grupo 12 la pieza p4211375: ";
					fs[27]=grupo12[1].p4211375;
				cout<<"completo"<<endl;
			    } 
			break;
			case 13:
				cout<<"\n--GRUPO 13--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4544140):";
				cin>>grupo13[1].p4544140;
				if(grupo13[1].p4544140<2){
					grp[28]="-Faltan del Grupo 13 la pieza p4544140: ";
					fs[28]=2-grupo13[1].p4544140;
				cout<<"faltan:"<<fs[28]<<endl;
				}
				if(grupo13[1].p4544140>2){
					grp[28]="-Sobran del Grupo 13 la pieza p4544140: ";
					fs[28]=grupo13[1].p4544140-2;
				cout<<"sobran:"<<fs[28]<<endl;
				}
				if(grupo13[1].p4544140==2){
				    grp[28]="-Completo del Grupo 13 la pieza p4211375: ";
					fs[28]=grupo13[1].p4544140;
				cout<<"completo"<<endl;
			    }
				cout<<"Ingrese la cantidad de la pieza(4281515):";
				cin>>grupo13[1].p4281515;
				if(grupo13[1].p4281515<10){
					grp[29]="-Faltan del Grupo 13 la pieza p4281515: ";
					fs[29]=10-grupo13[1].p4281515;
				cout<<"faltan:"<<fs[29]<<endl;
				}
				if(grupo13[1].p4281515>10){
					grp[29]="-Sobran del Grupo 13 la pieza p4281515: ";
					fs[29]=grupo13[1].p4281515-10;
				cout<<"sobran:"<<fs[29]<<endl;
				}
				if(grupo13[1].p4281515==10){
				    grp[29]="-Completo del Grupo 13 la pieza p4281515: ";
					fs[29]=grupo13[1].p4281515;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(306901):";
				cin>>grupo13[1].p306901;
				if(grupo13[1].p306901<1){
					grp[30]="-Faltan del Grupo 13 la pieza p306901: ";
					fs[30]=1-grupo13[1].p306901;
				cout<<"faltan:"<<fs[30]<<endl;
				}
				if(grupo13[1].p306901>1){
					grp[30]="-Sobran del Grupo 13 la pieza p306901: ";
					fs[30]=grupo13[1].p306901-1;
		    	cout<<"sobran:"<<fs[30]<<endl;
				}
				if(grupo13[1].p306901==1){
				    grp[30]="-Completo del Grupo 13 la pieza p306901: ";
					fs[30]=grupo13[1].p306901;
				cout<<"completo"<<endl;
				}
			    cout<<"Ingrese la cantidad de la pieza(4508664):";
				cin>>grupo13[1].p4508664;
				if(grupo13[1].p4508664<4){
					grp[31]="-Faltan del Grupo 13 la pieza p4508664: ";
					fs[31]=4-grupo13[1].p4508664;
				cout<<"faltan:"<<fs[31]<<endl;
				}
				if(grupo13[1].p4508664>4){
					grp[31]="-Sobran del Grupo 13 la pieza p4508664: ";
					fs[31]=grupo13[1].p4508664-4;
				cout<<"sobran:"<<fs[31]<<endl;
				}
				if(grupo13[1].p4508664==4){
				    grp[31]="-Completo del Grupo 13 la pieza p4508664: ";
					fs[31]=grupo13[1].p4508664;
				cout<<"completo"<<endl;
				}
			break;
			case 14:
				cout<<"\n--GRUPO 14--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4142865):";
				cin>>grupo14[1].p4142865;
				if(grupo14[1].p4142865<9){
					grp[32]="-Faltan del Grupo 14 la pieza p4142865: ";
					fs[32]=9-grupo14[1].p4142865;
				cout<<"faltan:"<<fs[32]<<endl;
				}
				if(grupo14[1].p4142865>9){
					grp[32]="-Sobran del Grupo 14 la pieza p4142865: ";
					fs[32]=grupo14[1].p4142865-9;
				cout<<"sobran:"<<fs[32]<<endl;
				}
				if(grupo14[1].p4142865==9){
				    grp[32]="-Completo del Grupo 14 la pieza p4142865: ";
					fs[32]=grupo14[1].p4142865;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4206482):";
				cin>>grupo14[1].p4206482;
				if(grupo14[1].p4206482<24){
					grp[33]="-Faltan del Grupo 14 la pieza p4206482: ";
					fs[33]=24-grupo14[1].p4206482;
				cout<<"faltan:"<<fs[33]<<endl;
				}
				if(grupo14[1].p4206482>24){
					grp[33]="-Sobran del Grupo 14 la pieza p4206482: ";
					fs[33]=grupo14[1].p4206482-24;
				cout<<"sobran:"<<fs[33]<<endl;
				}
			    if(grupo14[1].p4206482==24){
				    grp[33]="-Completo del Grupo 14 la pieza p4206482: ";
					fs[33]=grupo14[1].p4206482;
				cout<<"completo"<<endl;
				}
			break;
			case 15:
				cout<<"\n--GRUPO 15--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4514553):";
				cin>>grupo15[1].p4514553;
				if(grupo15[1].p4514553<52){
					grp[34]="-Faltan del Grupo 15 la pieza p4514553: ";
					fs[34]=52-grupo15[1].p4514553;
				cout<<"faltan:"<<fs[34]<<endl;
				}
				if(grupo15[1].p4514553>52){
					grp[34]="-Sobran del Grupo 15 la pieza p4514553: ";
					fs[34]=grupo15[1].p4514553-52;
				cout<<"sobran:"<<fs[34]<<endl;
				}
			    if(grupo15[1].p4514553==52){
				    grp[34]="-Completo del Grupo 15 la pieza p4514553: ";
					fs[34]=grupo15[1].p4514553;
				cout<<"completo"<<endl;
				}
			break;
			case 16:
				cout<<"\n--GRUPO 16--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4514554):";
				cin>>grupo16[1].p4514554;
				if(grupo16[1].p4514554<6){
					grp[35]="-Faltan del Grupo 16 la pieza p4514554: ";
					fs[35]=6-grupo16[1].p4514554;
				cout<<"faltan:"<<fs[35]<<endl;
				}
				if(grupo16[1].p4514554>6){
					grp[35]="-Sobran del Grupo 16 la pieza p4514554: ";
					fs[35]=grupo16[1].p4514554-6;
				cout<<"sobran:"<<fs[35]<<endl;
				}
				if(grupo16[1].p4514554==6){
				    grp[35]="-Completo del Grupo 16 la pieza p4514554: ";
					fs[35]=grupo16[1].p4514554;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4565452):";
				cin>>grupo16[1].p4565452;
				if(grupo16[1].p4565452<1){
					grp[36]="-Faltan del Grupo 16 la pieza p4565452: ";
					fs[36]=1-grupo16[1].p4565452;
				cout<<"faltan:"<<fs[36]<<endl;
				}
				if(grupo16[1].p4565452>1){
					grp[36]="-Sobran del Grupo 16 la pieza p4565452: ";
					fs[36]=grupo16[1].p4565452-1;
				cout<<"Sobran:"<<fs[36]<<endl;
				}
				if(grupo16[1].p4565452==1){
				    grp[36]="-Completo del Grupo 16 la pieza p4565452: ";
					fs[36]=grupo16[1].p4565452;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4186017):";
				cin>>grupo16[1].p4186017;
				if(grupo16[1].p4186017<4){
					grp[37]="-Faltan del Grupo 16 la pieza p4186017: ";
					fs[37]=4-grupo16[1].p4186017;
				cout<<"faltan:"<<fs[37]<<endl;
				}
				if(grupo16[1].p4186017>4){
					grp[37]="-Sobran del Grupo 16 la pieza p4186017: ";
					fs[37]=grupo16[1].p4186017-4;
				cout<<"sobran:"<<fs[37]<<endl;
				}
			    if(grupo16[1].p4186017==4){
				    grp[37]="-Completo del Grupo 16 la pieza p4186017: ";
					fs[37]=grupo16[1].p4186017;
				cout<<"completo"<<endl;
				}
			break;
			case 17:
				cout<<"\n--GRUPO 17--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4119589):";
				cin>>grupo17[1].p4119589;
				if(grupo17[1].p4119589<3){
					grp[38]="-Faltan del Grupo 17 la pieza p4119589: ";
					fs[38]=3-grupo17[1].p4119589;
				cout<<"faltan:"<<fs[38]<<endl;
				}
				if(grupo17[1].p4119589>3){
					grp[38]="-Sobran del Grupo 17 la pieza p4119589: ";
					fs[38]=grupo17[1].p4119589-3;
				cout<<"sobran:"<<fs[38]<<endl;
				}
				if(grupo17[1].p4119589==3){
				    grp[38]="-Completo del Grupo 17 la pieza p4119589: ";
					fs[38]=grupo17[1].p4119589;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(p4512360):";
				cin>>grupo17[1].p4512360;
				if(grupo17[1].p4512360<4){
					grp[39]="-Faltan del Grupo 17 la pieza p4512360: ";
					fs[39]=4-grupo17[1].p4512360;
				cout<<"faltan:"<<fs[39]<<endl;
				}
				if(grupo17[1].p4512360>4){
					grp[39]="-Sobran del Grupo 17 la pieza p4512360: ";
					fs[39]=grupo17[1].p4512360-4;
				cout<<"sobran:"<<fs[39]<<endl;
				}
				if(grupo17[1].p4512360==4){
				    grp[39]="-Completo del Grupo 17 la pieza p4512360: ";
					fs[39]=grupo17[1].p4512360;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4210759):";
				cin>>grupo17[1].p4210759;
				if(grupo17[1].p4210759<2){
					grp[40]="-Faltan del Grupo 17 la pieza p4210759: ";
					fs[40]=2-grupo17[1].p4210759;
				cout<<"faltan:"<<fs[40]<<endl;
				}
				if(grupo17[1].p4210759>2){
					grp[40]="-Sobran del Grupo 17 la pieza p4210759: ";
					fs[40]=grupo17[1].p4210759-2;
				cout<<"sobran:"<<fs[40]<<endl;
				}
			    if(grupo17[1].p4210759==2){
				    grp[40]="-Completo del Grupo 17 la pieza p4210759: ";
					fs[40]=grupo17[1].p4210759;
				cout<<"completo"<<endl;
				}
			break;
			case 18:
				cout<<"\n--GRUPO 18--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4535768):";
				cin>>grupo18[1].p4535768;
				if(grupo18[1].p4535768<2){
					grp[41]="-Faltan del Grupo 18 la pieza p4535768: ";
					fs[41]=2-grupo18[1].p4535768;
				cout<<"faltan:"<<fs[41]<<endl;
				}
				if(grupo18[1].p4535768>2){
					grp[41]="-Sobran del Grupo 18 la pieza p4535768: ";
					fs[41]=grupo18[1].p4535768-2;
				cout<<"sobran:"<<fs[41]<<endl;
				}
				if(grupo18[1].p4535768==2){
				    grp[41]="-Completo del Grupo 17 la pieza p4535768: ";
					fs[41]=grupo18[1].p4535768;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4211639):";
				cin>>grupo18[1].p4211639;
				if(grupo18[1].p4211639<8){
					grp[42]="-Faltan del Grupo 18 la pieza p4211639: ";
					fs[42]=8-grupo18[1].p4211639;
				cout<<"faltan:"<<fs[42]<<endl;
				}
				if(grupo18[1].p4211639>8){
					grp[42]="-Sobran del Grupo 18 la pieza p4211639: ";
					fs[42]=grupo18[1].p4211639-8;
				cout<<"sobran:"<<fs[42]<<endl;
				}
				if(grupo18[1].p4211639==8){
				    grp[42]="-Completo del Grupo 18 la pieza p4211639: ";
					fs[42]=grupo18[1].p4211639;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4211805):";
				cin>>grupo18[1].p4211805;
				if(grupo18[1].p4211805<4){
					grp[43]="-Faltan del Grupo 18 la pieza p4211805: ";
					fs[43]=4-grupo18[1].p4211805;
				cout<<"faltan:"<<fs[43]<<endl;
				}
				if(grupo18[1].p4211805>4){
					grp[43]="-Sobran del Grupo 18 la pieza p4211805: ";
					fs[43]=grupo18[1].p4211805-4;
				cout<<"sobran:"<<fs[43]<<endl;
				}
				if(grupo18[1].p4211805==4){
				    grp[43]="-Completo del Grupo 18 la pieza p4211805: ";
					fs[43]=grupo18[1].p4211805;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4211815):";
				cin>>grupo18[1].p4211815;
				if(grupo18[1].p4211815<19){
					grp[44]="-Faltan del Grupo 18 la pieza p4211815: ";
					fs[44]=19-grupo18[1].p4211815;
				cout<<"faltan:"<<fs[44]<<endl;
				}
				if(grupo18[1].p4211815>19){
					grp[44]="-Sobran del Grupo 18 la pieza p4211815: ";
					fs[44]=grupo18[1].p4211815-19;
				cout<<"sobran:"<<fs[44]<<endl;
				}
				if(grupo18[1].p4211815==19){
				    grp[44]="-Completo del Grupo 18 la pieza p4211815: ";
					fs[44]=grupo18[1].p4211815;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4211086):";
				cin>>grupo18[1].p4211086;
				if(grupo18[1].p4211086<6){
					grp[45]="-Faltan del Grupo 18 la pieza p4211086: ";
					fs[45]=6-grupo18[1].p4211086;
				cout<<"faltan:"<<fs[45]<<endl;
				}
				if(grupo18[1].p4211086>6){
					grp[45]="-Sobran del Grupo 18 la pieza p4211086: ";
					fs[45]=grupo18[1].p4211086-6;
				cout<<"sobran:"<<fs[45]<<endl;
				}
			    if(grupo18[1].p4211086==6){
				    grp[45]="-Completo del Grupo 18 la pieza p4211086: ";
					fs[45]=grupo18[1].p4211086;
				cout<<"completo"<<endl;
				}
			break;
			case 19:
				cout<<"\n--GRUPO 19--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4545430):";
				cin>>grupo19[1].p4545430;
				if(grupo19[1].p4545430<3){
					grp[46]="-Faltan del Grupo 19 la pieza p4545430: ";
					fs[46]=3-grupo19[1].p4545430;
				cout<<"faltan:"<<fs[46]<<endl;
				}
				if(grupo19[1].p4545430>3){
					grp[46]="-Sobran del Grupo 19 la pieza p4545430: ";
					fs[46]=grupo19[1].p4545430-3;
				cout<<"sobran:"<<fs[46]<<endl;
				}
				if(grupo19[1].p4545430==3){
				    grp[46]="-Completo del Grupo 19 la pieza p4545430: ";
					fs[46]=grupo19[1].p4545430;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4545434):";
				cin>>grupo19[1].p4545434;
				if(grupo19[1].p4545434<3){
					grp[47]="-Faltan del Grupo 19 la pieza p4545434: ";
					fs[47]=3-grupo19[1].p4545434;
				cout<<"faltan:"<<fs[47]<<endl;
				}
				if(grupo19[1].p4545434>3){
					grp[47]="-Sobran del Grupo 19 la pieza p4545434: ";
					fs[47]=grupo19[1].p4545434-3;
				cout<<"sobran:"<<fs[47]<<endl;
				}
				if(grupo19[1].p4545434==3){
				    grp[47]="-Completo del Grupo 19 la pieza p4545434: ";
					fs[47]=grupo19[1].p4545434;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4545435):";
				cin>>grupo19[1].p4545435;
				if(grupo19[1].p4545435<3){
					grp[48]="-Faltan del Grupo 19 la pieza p4545435: ";
					fs[48]=3-grupo19[1].p4545435;
				cout<<"faltan:"<<fs[48]<<endl;
				}
				if(grupo19[1].p4545435>3){
					grp[48]="-Sobran del Grupo 19 la pieza p4545435: ";
					fs[48]=grupo19[1].p4545435-3;
				cout<<"sobran:"<<fs[48]<<endl;
				}
				if(grupo19[1].p4545435==3){
				    grp[48]="-Completo del Grupo 19 la pieza p4545435: ";
					fs[48]=grupo19[1].p4545435;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4297031):";
				cin>>grupo19[1].p4297031;
				if(grupo19[1].p4297031<3){
					grp[49]="-Faltan del Grupo 19 la pieza p4297031: ";
					fs[49]=3-grupo19[1].p4297031;
				cout<<"faltan:"<<fs[49]<<endl;
				}
				if(grupo19[1].p4297031>3){
					grp[49]="-Sobran del Grupo 19 la pieza p4297031: ";
					fs[49]=grupo19[1].p4297031-3;
				cout<<"sobran:"<<fs[49]<<endl;
				}
			    if(grupo19[1].p4297031==3){
				    grp[49]="-Completo del Grupo 19 la pieza p4297031: ";
					fs[49]=grupo19[1].p4297031;
				cout<<"completo"<<endl;
				}
			break;
			case 20:
				cout<<"\n--GRUPO 20--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(370526):";
				cin>>grupo20[1].p370526;
				if(grupo20[1].p370526<4){
					grp[50]="-Faltan del Grupo 20 la pieza p370526: ";
					fs[50]=4-grupo20[1].p370526;
				cout<<"faltan:"<<fs[50]<<endl;
				}
				if(grupo20[1].p370526>4){
					grp[50]="-Sobran del Grupo 20 la pieza p370526: ";
					fs[50]=grupo20[1].p370526-4;
				cout<<"sobran:"<<fs[50]<<endl;
				}
				if(grupo20[1].p370526==4){
				    grp[50]="-Completo del Grupo 19 la pieza p370526: ";
					fs[50]=grupo20[1].p370526;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4508553):";
				cin>>grupo20[1].p4508553;
				if(grupo20[1].p4508553<2){
					grp[51]="-Faltan del Grupo 20 la pieza p4508553: ";
					fs[51]=2-grupo20[1].p4508553;
				cout<<"faltan:"<<fs[51]<<endl;
				}
				if(grupo20[1].p4508553>2){
					grp[51]="-Sobran del Grupo 20 la pieza p4508553: ";
					fs[51]=grupo20[1].p4508553-2;
				cout<<"sobran:"<<fs[51]<<endl;
				}
				if(grupo20[1].p4508553==2){
				    grp[51]="-Completo del Grupo 20 la pieza p4508553: ";
					fs[51]=grupo20[1].p4508553;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(370626):";
				cin>>grupo20[1].p370626;
				if(grupo20[1].p370626<2){
					grp[52]="-Faltan del Grupo 20 la pieza p370626: ";
					fs[52]=2-grupo20[1].p370626;
				cout<<"faltan:"<<fs[52]<<endl;
				}
				if(grupo20[1].p370626>2){
					grp[52]="-Sobran del Grupo 20 la pieza p370626: ";
					fs[52]=grupo20[1].p370626-2;
				cout<<"sobran:"<<fs[52]<<endl;
				}
				if(grupo20[1].p370626==2){
				    grp[52]="-Completo del Grupo 20 la pieza p370626: ";
					fs[52]=grupo20[1].p370626;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4141300):";
				cin>>grupo20[1].p4141300;
				if(grupo20[1].p4141300<4){
					grp[53]="-Faltan del Grupo 20 la pieza p4141300: ";
					fs[53]=4-grupo20[1].p4141300;
				cout<<"faltan:"<<fs[53]<<endl;
				}
				if(grupo20[1].p4141300>4){
					grp[53]="-Sobran del Grupo 20 la pieza p4141300: ";
					fs[53]=grupo20[1].p4141300-4;
				cout<<"sobran:"<<fs[53]<<endl;
				}
				if(grupo20[1].p4141300==4){
				    grp[53]="-Completo del Grupo 20 la pieza p4141300: ";
					fs[53]=grupo20[1].p4141300;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(370826):";
				cin>>grupo20[1].p370826;
				if(grupo20[1].p370826<1){
					grp[54]="-Faltan del Grupo 20 la pieza p370826: ";
					fs[54]=1-grupo20[1].p370826;
				cout<<"faltan:"<<fs[54]<<endl;
				}
				if(grupo20[1].p370826>1){
					grp[54]="-Sobran del Grupo 20 la pieza p370826: ";
					fs[54]=grupo20[1].p370826-1;
				cout<<"sobran:"<<fs[54]<<endl;
				}
				if(grupo20[1].p370826==1){
				    grp[54]="-Completo del Grupo 20 la pieza p370826: ";
					fs[54]=grupo20[1].p370826;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4499858):";
				cin>>grupo20[1].p4499858;
				if(grupo20[1].p4499858<4){
					grp[55]="-Faltan del Grupo 20 la pieza p4499858: ";
					fs[55]=4-grupo20[1].p4499858;
				cout<<"faltan:"<<fs[55]<<endl;
				}
				if(grupo20[1].p4499858>4){
					grp[55]="-Sobran del Grupo 20 la pieza p4499858: ";
					fs[55]=grupo20[1].p4499858-4;
				cout<<"sobran:"<<fs[55]<<endl;
				}
			    if(grupo20[1].p4499858==4){
				    grp[55]="-Completo del Grupo 20 la pieza p4499858: ";
					fs[55]=grupo20[1].p4499858;
				cout<<"completo"<<endl;
				} 
			break;
			case 21:
				cout<<"\n--GRUPO 21--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4297210):";
				cin>>grupo21[1].p4297210;
				if(grupo21[1].p4297210<4){
					grp[56]="-Faltan del Grupo 21 la pieza p4297210: ";
					fs[56]=4-grupo21[1].p4297210;
				cout<<"faltan:"<<fs[56]<<endl;
				}
				if(grupo21[1].p4297210>4){
					grp[56]="-Sobran del Grupo 21 la pieza p4297210: ";
					fs[56]=grupo21[1].p4297210-4;
				cout<<"sobran:"<<fs[56]<<endl;
				}
				if(grupo21[1].p4297210==4){
				    grp[56]="-Completo del Grupo 21 la pieza p4297210: ";
					fs[56]=grupo21[1].p4297210;
				cout<<"completo"<<endl;
				} 
				cout<<"Ingrese la cantidad de la pieza(4184286):";
				cin>>grupo21[1].p4184286;
				if(grupo21[1].p4184286<4){
					grp[57]="-Faltan del Grupo 21 la pieza p4184286: ";
					fs[57]=4-grupo21[1].p4184286;
				cout<<"faltan:"<<fs[57]<<endl;
				}
				if(grupo21[1].p4184286>4){
					grp[57]="-Sobran del Grupo 21 la pieza p4184286: ";
					fs[57]=grupo21[1].p4184286-4;
				cout<<"sobran:"<<fs[57]<<endl;
				}
			    if(grupo21[1].p4184286==4){
				    grp[57]="-Completo del Grupo 21 la pieza p4184286: ";
					fs[57]=grupo21[1].p4184286;
				cout<<"completo"<<endl;
				} 
			break;
			case 22:
				cout<<"\n--GRUPO 22--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4537417):";
				cin>>grupo22[1].p4537417;
				if(grupo22[1].p4537417<10){
					grp[58]="-Faltan del Grupo 22 la pieza p4537417: ";
					fs[58]=10-grupo22[1].p4537417;
				cout<<"faltan:"<<fs[58]<<endl;
				}
				if(grupo22[1].p4537417>10){
					grp[58]="-Sobran del Grupo 22 la pieza p4537417: ";
					fs[58]=grupo22[1].p4537417-10;
				cout<<"sobran:"<<fs[58]<<endl;
				}
				if(grupo22[1].p4537417==10){
				    grp[58]="-Completo del Grupo 22 la pieza p4537417: ";
					fs[58]=grupo22[1].p4537417;
				cout<<"completo"<<endl;
				} 
				cout<<"Ingrese la cantidad de la pieza(4495932):";
				cin>>grupo22[1].p4495932;
				if(grupo22[1].p4495932<20){
					grp[59]="-Faltan del Grupo 22 la pieza p4495932: ";
					fs[59]=20-grupo22[1].p4495932;
				cout<<"faltan:"<<fs[59]<<endl;
				}
				if(grupo22[1].p4495932>20){
					grp[59]="-Sobran del Grupo 22 la pieza p4495932: ";
					fs[59]=grupo22[1].p4495932-20;
				cout<<"sobran:"<<fs[59]<<endl;
				}
				if(grupo22[1].p4495932==20){
				    grp[59]="-Completo del Grupo 22 la pieza p4495932: ";
					fs[59]=grupo22[1].p4495932;
				cout<<"completo"<<endl;
				} 
				cout<<"Ingrese la cantidad de la pieza(4297202):";
				cin>>grupo22[1].p4297202;
				if(grupo22[1].p4297202<14){
					grp[60]="-Faltan del Grupo 22 la pieza p4297202: ";
					fs[60]=14-grupo22[1].p4297202;
				cout<<"faltan:"<<fs[60]<<endl;
				}
				if(grupo22[1].p4297202>14){
					grp[60]="-Sobran del Grupo 22 la pieza p4297202: ";
					fs[60]=grupo22[1].p4297202-14;
				cout<<"sobran:"<<fs[60]<<endl;
				}
				if(grupo22[1].p4297202==14){
				    grp[60]="-Completo del Grupo 22 la pieza p4297202: ";
					fs[60]=grupo22[1].p4297202;
				cout<<"completo"<<endl;
				} 
				cout<<"Ingrese la cantidad de la pieza(4297200):";
				cin>>grupo22[1].p4297200;
				if(grupo22[1].p4297200<6){
					grp[61]="-Faltan del Grupo 22 la pieza p4297200: ";
					fs[61]=6-grupo22[1].p4297200;
				cout<<"faltan:"<<fs[61]<<endl;
				}
				if(grupo22[1].p4297200>6){
					grp[61]="-Sobran del Grupo 22 la pieza p4297200: ";
					fs[61]=grupo22[1].p4297200-6;
				cout<<"sobran:"<<fs[61]<<endl;
				}
				if(grupo22[1].p4297200==6){
				    grp[61]="-Completo del Grupo 22 la pieza p4297200: ";
					fs[61]=grupo22[1].p4297200;
				cout<<"completo"<<endl;
				} 
				cout<<"Ingrese la cantidad de la pieza(4522939):";
				cin>>grupo22[1].p4522939;
				if(grupo22[1].p4522939<10){
					grp[62]="-Faltan del Grupo 22 la pieza p4522939: ";
					fs[62]=10-grupo22[1].p4522939;
				cout<<"faltan:"<<fs[62]<<endl;
				}
				if(grupo22[1].p4522939>10){
					grp[62]="-Sobran del Grupo 22 la pieza p4522939: ";
					fs[62]=grupo22[1].p4522939-10;
				cout<<"sobran:"<<fs[62]<<endl;
				}
				if(grupo22[1].p4522939==10){
				    grp[62]="-Completo del Grupo 22 la pieza p4522939: ";
					fs[62]=grupo22[1].p4522939;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4297197):";
				cin>>grupo22[1].p4297197;
				if(grupo22[1].p4297197<2){
					grp[63]="-Faltan del Grupo 22 la pieza p4297197: ";
					fs[63]=2-grupo22[1].p4297197;
				cout<<"faltan:"<<fs[63]<<endl;
				}
				if(grupo22[1].p4297197>2){
					grp[63]="-Sobran del Grupo 22 la pieza p4297197: ";
					fs[63]=grupo22[1].p4297197-2;
				cout<<"sobran:"<<fs[63]<<endl;
				}
			    if(grupo22[1].p4297197==2){
				    grp[63]="-Completo del Grupo 22 la pieza p4297197: ";
					fs[63]=grupo22[1].p4297197;
				cout<<"completo"<<endl;
				}
			break;
			case 23:
				cout<<"\n--GRUPO 23--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4210751):";
				cin>>grupo23[1].p4210751;
				if(grupo23[1].p4210751<10){
					grp[64]="-Faltan del Grupo 23 la pieza p4210751: ";
					fs[64]=10-grupo23[1].p4210751;
				cout<<"faltan:"<<fs[64]<<endl;
				}
				if(grupo23[1].p4210751>10){
					grp[64]="-Sobran del Grupo 23 la pieza p4210751: ";
					fs[64]=grupo23[1].p4210751-10;
				cout<<"sobran:"<<fs[64]<<endl;
				}
				if(grupo23[1].p4210751==10){
				    grp[64]="-Completo del Grupo 23 la pieza p4210751: ";
					fs[64]=grupo23[1].p4210751;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4210668):";
				cin>>grupo23[1].p4210668;
				if(grupo23[1].p4210668<2){
					grp[65]="-Faltan del Grupo 23 la pieza p4210668: ";
					fs[65]=2-grupo23[1].p4210668;
				cout<<"faltan:"<<fs[65]<<endl;
				}
				if(grupo23[1].p4210668>2){
					grp[65]="-Sobran del Grupo 23 la pieza p4210668: ";
					fs[65]=grupo23[1].p4210668-2;
				cout<<"sobran:"<<fs[65]<<endl;
				}
				if(grupo23[1].p4210668==2){
				    grp[65]="-Completo del Grupo 23 la pieza p4210668: ";
					fs[65]=grupo23[1].p4210668;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4210667):";
				cin>>grupo23[1].p4210667;
				if(grupo23[1].p4210667<13){
					grp[66]="-Faltan del Grupo 23 la pieza p4210667: ";
					fs[66]=13-grupo23[1].p4210667;
				cout<<"faltan:"<<fs[66]<<endl;
				}
				if(grupo23[1].p4210667>13){
					grp[66]="-Sobran del Grupo 23 la pieza p4210667: ";
					fs[66]=grupo23[1].p4210667-13;
				cout<<"sobran:"<<fs[66]<<endl;
				}   
				if(grupo23[1].p4210667==13){
				    grp[66]="-Completo del Grupo 23 la pieza p4210667: ";
					fs[66]=grupo23[1].p4210667;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4234240):";
				cin>>grupo23[1].p4234240;
				if(grupo23[1].p4234240<4){
					grp[67]="-Faltan del Grupo 23 la pieza p4234240: ";
					fs[67]=4-grupo23[1].p4234240;
				cout<<"faltan:"<<fs[67]<<endl;
				}
				if(grupo23[1].p4234240>4){
					grp[67]="-Sobran del Grupo 23 la pieza p4234240: ";
					fs[67]=grupo23[1].p4234240-4;
				cout<<"sobran:"<<fs[67]<<endl;
				}  
				if(grupo23[1].p4234240==4){
				    grp[67]="-Completo del Grupo 23 la pieza p4234240: ";
					fs[67]=grupo23[1].p4234240;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4210753):";
				cin>>grupo23[1].p4210753;
				if(grupo23[1].p4210753<14){
					grp[68]="-Faltan del Grupo 23 la pieza p4210753: ";
					fs[68]=14-grupo23[1].p4210753;
				cout<<"faltan:"<<fs[68]<<endl;
				}
				if(grupo23[1].p4210753>14){
					grp[68]="-Sobran del Grupo 23 la pieza p4210753: ";
					fs[68]=grupo23[1].p4210753-14;
				cout<<"sobran:"<<fs[68]<<endl;
				}
				if(grupo23[1].p4210753==14){
				    grp[68]="-Completo del Grupo 23 la pieza p4210753: ";
					fs[68]=grupo23[1].p4210753;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4211668):";
				cin>>grupo23[1].p4211668;
				if(grupo23[1].p4211668<6){
					grp[69]="-Faltan del Grupo 23 la pieza p4211668: ";
					fs[69]=6-grupo23[1].p4211668;
				cout<<"faltan:"<<fs[69]<<endl;
				}
				if(grupo23[1].p4211668>6){
					grp[69]="-Sobran del Grupo 23 la pieza p4211668: ";
					fs[69]=grupo23[1].p4211668-6;
				cout<<"sobran:"<<fs[69]<<endl;
				}
				if(grupo23[1].p4211668==6){
					grp[69]="-Completo del Grupo 23 la pieza p4211668: ";
					fs[69]=grupo23[1].p4211668;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4210638):";
				cin>>grupo23[1].p4210638;
				if(grupo23[1].p4210638<4){
					grp[70]="-Faltan del Grupo 23 la pieza p4210638: ";
					fs[70]=4-grupo23[1].p4210638;
				cout<<"faltan:"<<fs[70]<<endl;
				}
				if(grupo23[1].p4210638>4){
					grp[70]="-Sobran del Grupo 23 la pieza p4210638: ";
					fs[70]=grupo23[1].p4210638-4;
				cout<<"sobran:"<<fs[70]<<endl;
				}
				if(grupo23[1].p4210638==4){
				    grp[70]="-Completo del Grupo 23 la pieza p4210638: ";
					fs[70]=grupo23[1].p4210638;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4211651):";
				cin>>grupo23[1].p4211651;
				if(grupo23[1].p4211651<18){
					grp[71]="-Faltan del Grupo 23 la pieza p4211651: ";
					fs[71]=18-grupo23[1].p4211651;
				cout<<"faltan:"<<fs[71]<<endl;
				}
				if(grupo23[1].p4211651>18){
					grp[71]="-Sobran del Grupo 23 la pieza p4211651: ";
					fs[71]=grupo23[1].p4211651-18;
				cout<<"sobran:"<<fs[71]<<endl;
				}
			    if(grupo23[1].p4211651==18){
				    grp[71]="-Completo del Grupo 23 la pieza p4211651: ";
					fs[71]=grupo23[1].p4211651;
				cout<<"completo"<<endl;
				}
			break;
			case 24:
				cout<<"\n--GRUPO 24--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4297008):";
				cin>>grupo24[1].p4297008;
				if(grupo24[1].p4297008<3){
					grp[72]="-Faltan del Grupo 24 la pieza p4297008: ";
					fs[72]=3-grupo24[1].p4297008;
				cout<<"faltan:"<<fs[72]<<endl;
				}
				if(grupo24[1].p4297008>3){
					grp[72]="-Sobran del Grupo 24 la pieza p4297008: ";
					fs[72]=grupo24[1].p4297008-3;
				cout<<"sobran:"<<fs[72]<<endl;
				}
				if(grupo24[1].p4297008==3){
				    grp[72]="-Completo del Grupo 24 la pieza p4297008: ";
					fs[72]=grupo24[1].p4297008;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4297174):";
				cin>>grupo24[1].p4297174;
				if(grupo24[1].p4297174<1){
					grp[73]="-Faltan del Grupo 24 la pieza p4297174: ";
					fs[73]=1-grupo24[1].p4297174;
				cout<<"faltan:"<<fs[73]<<endl;
				}
				if(grupo24[1].p4297174>1){
					grp[73]="-Sobran del Grupo 24 la pieza p4297174: ";
					fs[73]=grupo24[1].p4297174-1;
				cout<<"sobran:"<<fs[73]<<endl;
				}
				if(grupo24[1].p4297174==1){
				    grp[73]="-Completo del Grupo 24 la pieza p4297174: ";
					fs[73]=grupo24[1].p4297174;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4296929):";
				cin>>grupo24[1].p4296929;
				if(grupo24[1].p4296929<2){
					grp[74]="-Faltan del Grupo 24 la pieza p4296929: ";
					fs[74]=2-grupo24[1].p4296929;
				cout<<"faltan:"<<fs[74]<<endl;
				}
				if(grupo24[1].p4296929>2){
					grp[74]="-Sobran del Grupo 24 la pieza p4296929: ";
					fs[74]=grupo24[1].p4296929-2;
				cout<<"sobran:"<<fs[74]<<endl;
				}
				if(grupo24[1].p4296929==2){
				    grp[74]="-Completo del Grupo 24 la pieza p4296929: ";
					fs[74]=grupo24[1].p4296929;
				cout<<"completo"<<endl;
				}
				cout<<"Ingrese la cantidad de la pieza(4546542):";
				cin>>grupo24[1].p4546542;
				if(grupo24[1].p4546542<1){
					grp[75]="-Faltan del Grupo 24 la pieza p4546542: ";
					fs[75]=1-grupo24[1].p4546542;
				cout<<"faltan:"<<fs[75]<<endl;
				}
				if(grupo24[1].p4546542>1){
					grp[75]="-Sobran del Grupo 24 la pieza p4546542: ";
					fs[75]=grupo24[1].p4546542-1;
				cout<<"sobran:"<<fs[75]<<endl;
				}
			    if(grupo24[1].p4546542==2){
				    grp[75]="-Completo del Grupo 24 la pieza p4546542: ";
					fs[75]=grupo24[1].p4546542;
				cout<<"completo"<<endl;
				}
			break;
			case 25:
				cout<<"\n--GRUPO 25--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4548553):";
				cin>>grupo25[1].p4548553;
				if(grupo25[1].p4548553<3){
					grp[76]="-Faltan del Grupo 25 la pieza p4548553: ";
					fs[76]=3-grupo25[1].p4548553;
				cout<<"faltan:"<<fs[76]<<endl;
				}
				if(grupo25[1].p4548553>3){
					grp[76]="-Sobran del Grupo 25 la pieza p4548553: ";
					fs[76]=grupo25[1].p4548553-3;
				cout<<"sobran:"<<fs[76]<<endl;
				}
				if(grupo25[1].p4548553==3){
				    grp[76]="-Completo del Grupo 25 la pieza p4548553: ";
					fs[76]=grupo25[1].p4548553;
				cout<<"completo"<<endl;
				}  
				cout<<"Ingrese la cantidad de la pieza(4547402):";
				cin>>grupo25[1].p4547402;
				if(grupo25[1].p4547402<2){
					grp[77]="-Faltan del Grupo 25 la pieza p4547402: ";
					fs[77]=2-grupo25[1].p4547402;
				cout<<"faltan:"<<fs[77]<<endl;
				}
				if(grupo25[1].p4547402>2){
					grp[77]="-Sobran del Grupo 25 la pieza p4547402: ";
					fs[77]=grupo25[1].p4547402-2;
				cout<<"sobran:"<<fs[77]<<endl;
				}
				if(grupo25[1].p4547402==2){
				    grp[77]="-Completo del Grupo 25 la pieza p4547402: ";
					fs[77]=grupo25[1].p4547402;
				cout<<"completo"<<endl;
				}  
				cout<<"Ingrese la cantidad de la pieza(4547403):";
				cin>>grupo25[1].p4547403;
				if(grupo25[1].p4547403<2){
					grp[78]="-Faltan del Grupo 25 la pieza p4547403: ";
					fs[78]=2-grupo25[1].p4547403;
				cout<<"faltan:"<<fs[78]<<endl;
				}
				if(grupo25[1].p4547403>2){
					grp[78]="-Sobran del Grupo 25 la pieza p4547403: ";
					fs[78]=grupo25[1].p4547403-2;
				cout<<"sobran:"<<fs[78]<<endl;
				}
				if(grupo25[1].p4547403==2){
				    grp[78]="-Completo del Grupo 25 la pieza p4547403: ";
					fs[78]=grupo25[1].p4547403;
				cout<<"completo"<<endl;
				}  
				cout<<"Ingrese la cantidad de la pieza(4288099):";
				cin>>grupo25[1].p4288099;
				if(grupo25[1].p4288099<1){
					grp[79]="-Faltan del Grupo 25 la pieza p4288099: ";
					fs[79]=1-grupo25[1].p4288099;
				cout<<"faltan:"<<fs[79]<<endl;
				}
				if(grupo25[1].p4288099>1){
					grp[79]="-Sobran del Grupo 25 la pieza p4288099: ";
					fs[79]=grupo25[1].p4288099-1;
				cout<<"sobran:"<<fs[79]<<endl;
				}
				if(grupo25[1].p4288099==1){
				    grp[79]="-Completo del Grupo 25 la pieza p4288099: ";
					fs[79]=grupo25[1].p4288099;
				cout<<"completo"<<endl;
				}  
				cout<<"Ingrese la cantidad de la pieza(4292468):";
				cin>>grupo25[1].p4292468;
				if(grupo25[1].p4292468<2){
					grp[80]="-Faltan del Grupo 25 la pieza p4292468: ";
					fs[80]=2-grupo25[1].p4292468;
				cout<<"faltan:"<<fs[80]<<endl;
				}
				if(grupo25[1].p4292468>2){
					grp[80]="-Sobran del Grupo 25 la pieza p4292468: ";
					fs[80]=grupo25[1].p4292468-2;
				cout<<"sobran:"<<fs[80]<<endl;
				}
				if(grupo25[1].p4292468==2){
				    grp[80]="-Completo del Grupo 25 la pieza p4292468: ";
					fs[80]=grupo25[1].p4292468;
				cout<<"completo"<<endl;
				}  
				cout<<"Ingrese la cantidad de la pieza(4502834):";
				cin>>grupo25[1].p4502834;
				if(grupo25[1].p4502834<2){
					grp[81]="-Faltan del Grupo 25 la pieza p4502834: ";
					fs[81]=2-grupo25[1].p4502834;
				cout<<"faltan:"<<fs[81]<<endl;
				}
				if(grupo25[1].p4502834>2){
					grp[81]="-Sobran del Grupo 25 la pieza p4502834: ";
					fs[81]=grupo25[1].p4502834-2;
				cout<<"sobran:"<<fs[81]<<endl;
				}
		        if(grupo25[1].p4502834==2){
				    grp[81]="-Completo del Grupo 25 la pieza p4502834: ";
					fs[81]=grupo25[1].p4502834;
				cout<<"completo"<<endl;
				}   
			break;
			case 26:
				cout<<"\n--GRUPO 26--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4297187):";
				cin>>grupo26[1].p4297187;
				if(grupo26[1].p4297187<1){
					grp[82]="-Faltan del Grupo 26 la pieza p4297187: ";
					fs[82]=1-grupo26[1].p4297187;
				cout<<"faltan:"<<fs[82]<<endl;
				}
				if(grupo26[1].p4297187>1){
					grp[82]="-Sobran del Grupo 26 la pieza p4297187: ";
					fs[82]=grupo26[1].p4297187-1;
				cout<<"sobran:"<<fs[82]<<endl;
				}
				if(grupo26[1].p4297187==1){
				    grp[82]="-Completo del Grupo 26 la pieza p4297187: ";
					fs[82]=grupo26[1].p4297187;
				cout<<"completo"<<endl;
				} 
				cout<<"Ingrese la cantidad de la pieza(4297188):";
				cin>>grupo26[1].p4297188;
				if(grupo26[1].p4297188<4){
					grp[83]="-Faltan del Grupo 26 la pieza p4297188: ";
					fs[83]=4-grupo26[1].p4297188;
				cout<<"faltan:"<<fs[83]<<endl;
				}
				if(grupo26[1].p4297188>4){
					grp[83]="-Sobran del Grupo 26 la pieza p4297188: ";
					fs[83]=grupo26[1].p4297188-4;
				cout<<"sobran:"<<fs[83]<<endl;
				}
				if(grupo26[1].p4297188==4){
				    grp[83]="-Completo del Grupo 26 la pieza p4297188: ";
					fs[83]=grupo26[1].p4297188;
				cout<<"completo"<<endl;
				} 
				cout<<"Ingrese la cantidad de la pieza(4297185):";
				cin>>grupo26[1].p4297185;
				if(grupo26[1].p4297185<2){
					grp[84]="-Faltan del Grupo 26 la pieza p4297185: ";
					fs[84]=2-grupo26[1].p4297185;
				cout<<"faltan:"<<fs[84]<<endl;
				}
				if(grupo26[1].p4297185>2){
					grp[84]="-Sobran del Grupo 26 la pieza p4297185: ";
					fs[84]=grupo26[1].p4297185-2;
				cout<<"sobran:"<<fs[84]<<endl;
				}
				if(grupo26[1].p4297185==2){
				    grp[84]="-Completo del Grupo 26 la pieza p4297185: ";
					fs[84]=grupo26[1].p4297185;
				cout<<"completo"<<endl;
				} 
				cout<<"Ingrese la cantidad de la pieza(cable):";
				cin>>grupo26[1].cable;
				if(grupo26[1].cable<1){
					grp[85]="-Faltan del Grupo 26 el cable: ";
					fs[85]=1-grupo26[1].cable;
				cout<<"faltan:"<<fs[85]<<endl;
				}
				if(grupo26[1].cable>1){
					grp[85]="-Sobran del Grupo 26 el cable: ";
					fs[85]=grupo26[1].cable-1;
				cout<<"sobran:"<<fs[85]<<endl;
				}
			    if(grupo26[1].cable==2){
				    grp[85]="-Completo del Grupo 26 la pieza cable: ";
					fs[85]=grupo26[1].cable;
				cout<<"completo"<<endl;
				} 
			break;
			case 27:
				cout<<"\n--GRUPO 27--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(4558295):";
				cin>>grupo27[1].p4558295;
				if(grupo27[1].p4558295<1){
					grp[86]="-Faltan del Grupo 27 la pieza p4558295: ";
					fs[86]=1-grupo27[1].p4558295;
				cout<<"faltan:"<<fs[86]<<endl;
				}
				if(grupo27[1].p4558295>1){
					grp[86]="-Sobran del Grupo 27 la pieza p4558295: ";
					fs[86]=grupo27[1].p4558295-1;
				cout<<"sobran:"<<fs[86]<<endl;
				}
			    if(grupo27[1].p4558295==1){
				    grp[86]="-Completo del Grupo 27 la pieza p4297185: ";
					fs[86]=grupo27[1].p4558295;
				cout<<"completo"<<endl;
				}
			break;
			case 28:
				cout<<"\n--GRUPO 28--"<<endl;
				cout<<"Ingrese la cantidad de la pieza(guia):";
				cin>>grupo28[1].guia;
				if(grupo28[1].guia<1){
					grp[87]="-Faltan del Grupo 28 la guia: ";
					fs[87]=1-grupo28[1].guia;
				cout<<"faltan:"<<fs[87]<<endl;
				}
				if(grupo28[1].guia>1){
					grp[87]="-Sobran del Grupo 28 la guia: ";
					fs[87]=grupo28[1].guia-1;
				cout<<"sobran:"<<fs[87]<<endl;
				}
				if(grupo28[1].guia==1){
				    grp[87]="-Completo del Grupo 28 la pieza guia: ";
					fs[87]=grupo28[1].guia;
				cout<<"completo"<<endl;
				} 
				cout<<"Ingrese la cantidad de la pieza(test):";
				cin>>grupo28[1].test;
				if(grupo28[1].test<1){
					grp[88]="-Faltan del Grupo 28 el test: ";
					fs[88]=1-grupo28[1].test;
				cout<<"faltan:"<<fs[88]<<endl;
				}
				if(grupo28[1].test>1){
					grp[88]="-Sobran del Grupo 28 el test: ";
					fs[88]=grupo28[1].test-1;
				cout<<"sobran:"<<fs[88]<<endl;
				}
				if(grupo28[1].test==1){
				    grp[88]="-Completo del Grupo 28 la pieza test: ";
					fs[88]=grupo28[1].guia;
				cout<<"completo"<<endl;
				} 
				cout<<"Ingrese la cantidad de la pieza(disco):";
				cin>>grupo28[1].disco;
				if(grupo28[1].disco<1){
					grp[89]="-Faltan del Grupo 28 el disco: ";
					fs[89]=1-grupo28[1].disco;
				cout<<"faltan:"<<fs[89]<<endl;
				}
				if(grupo28[1].disco>1){
					grp[89]="-Sobran del Grupo 28 el disco: ";
					fs[89]=grupo28[1].disco-1;
				cout<<"sobran:"<<fs[89]<<endl;
				}
			    if(grupo28[1].disco==1){
				    grp[89]="-Completo del Grupo 28 la pieza disco: ";
					fs[89]=grupo28[1].disco;
				cout<<"completo"<<endl;
				} 
			break;
			//Con la ayuda de un default haremos que cualquier otra opción digitada haga que finalize el bucle
			default:
				f=1;
			break;
			}
		}
	cout<<"\n==>Ingrese el estado de la ficha de inventario:";
	cin>>estado;
	return 0;	
}
