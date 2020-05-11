#include<iostream>
#include<stdlib.h>
using namespace std;
int hero(int a,int x);
int armor(int a,int x);
int sword(int a,int x);
int skin(int a,int x);
int main(){
	string username, password; 
	cout << "---------------BEGINNING FANTASY VII v0.2----------------" << endl;
	cout << "-------------------------LOGIN---------------------------" << endl;
	cout << "Username \t: ";
	cin >> username;
	cout << "Password \t: ";
	cin >> password;

	//buat char
	int tindakan, P = 1;
	int player1[3] = {100,10,10};
	int player2[3] = {100,10,10};
	char pedang[3][20] = {"desert sword","dark sword","knight sword"};
	char perisai[3][20] = {"desert armor","dark armor","knight armor"};
	char pahlawan[3][20] = {"neo amstrong","cyclon","jet amstrong"};
	char kulit[3][20] = {"Big PP","Smol PP","Florgeng"};
	int s1=3,h1=3,a1=3,c1=3;
	int s2=3,h2=3,a2=3,c2=3;
	menu:
	system ("CLS");
	cout << "------------------BEGINNING FANTASY VII------------------" << endl;
	cout << "--------------------CHARACTER CREATION-------------------" << endl;
	cout << "welcome " << username<<endl;
	cout << "Player 1 : \t\t\t|" << "Player 2 : " <<endl; 
	cout << "---------------------------------------------------------"<<endl;
	cout << "\t hero\t : " << pahlawan[h1] << "\t|\t hero\t :"<< pahlawan[h2]<< endl;
	cout << "\t sword\t : " << pedang[s1] << "\t|\t sword\t :"<< pedang[s2]<< endl;
	cout << "\t armor\t : " << perisai[a1] << "\t|\t armor\t :"<< perisai[a2]<< endl;
	cout << "\t skin\t : " << kulit[c1] << "\t|\t skin\t :"<< kulit[c2]<< endl;
	cout << "---------------------------------------------------------"<<endl;
	cout << "\t health\t : " << player1[0] << "\t\t|\t healt\t :"<< player2[0]<< endl;
	cout << "\t str\t : " << player1[1] << "\t\t|\t str\t :"<< player2[1]<< endl;
	cout << "\t vit\t : " << player1[2] << "\t\t|\t vit\t :"<< player2[2]<< endl;
	cout << "---------------------------------------------------------"<<endl;
	
	cout << "*setiap gear, hero dan skin memiliki efek pada status" <<endl;
	if  (P == 1){
		cout << "Untuk player 1 : "<< endl;
	}else{
		cout << "SEKARANG Untuk player 2 : "<< endl;
	}
	cout << "1. hero"<< endl;
	cout << "2. sword"<< endl;
	cout << "3. armor"<<endl;
	cout << "4. skin"<< endl;
	cout << "5. selesai"<< endl;
	cout << "pilih tindakan : ";
	cin >> tindakan;
	if (tindakan == 1){
		int x;
		cout << "--------------------------" << endl;
		cout << "1. "<< pahlawan[0]<<endl;
		cout << "2. "<< pahlawan[1]<<endl;
		cout << "3. "<< pahlawan[2]<<endl;
		cout << "Pilih hero : ";
		cin >> x;
		if (P==1){
			h1=x-1;
		}else{
			h2=x-1;
		}
		if (P == 1){
			for (int i=0; i<=2; i++){
				int r = 1+(rand ()%3);
				player1[i]=player1[i]+hero(i,r);
			}
			goto menu;			
		}else {
			for (int i=0; i<=2; i++){
				int r = 1+(rand ()%3);
				player2[i]=player2[i]+hero(i,r);
			}
			goto menu;
		}
	}else if (tindakan == 2){
		int x;
		cout << "--------------------------" << endl;
		cout << "1. "<< pedang [0]<<endl;
		cout << "2. "<< pedang [1]<<endl;
		cout << "3. "<< pedang [2]<<endl;
		cout << "Pilih Pedang : ";
		cin >> x;
		if (P==1){
			s1=x-1;
		}else{
			s2=x-1;
		}
		if (P == 1){
			for (int i=0; i<=2; i++){
				int r = 1+(rand ()%3);
				player1[i]=player1[i]+sword(i,r);
			}
			goto menu;			
		}else {
			for (int i=0; i<=2; i++){
				int r = 1+(rand ()%3);
				player2[i]=player2[i]+sword(i,r);
			}
			goto menu;
		}
	}else if (tindakan == 3){
		int x;
		cout << "--------------------------" << endl;
		cout << "1. "<< perisai[0]<<endl;
		cout << "2. "<< perisai[1]<<endl;
		cout << "3. "<< perisai[2]<<endl;
		cout << "Pilih Armor : ";
		cin >> x;
		if (P==1){
			a1=x-1;
		}else{
			a2=x-1;
		}
		if (P == 1){
			for (int i=0; i<=2; i++){
				int r = 1+(rand ()%3);
				player1[i]=player1[i]+armor(i,r);
			}
			goto menu;			
		}else {
			for (int i=0; i<=2; i++){
				int r = 1+(rand ()%3);
				player2[i]=player2[i]+armor(i,r);
			}
			goto menu;
		}
	}else if (tindakan == 4){
		int x;
		cout << "--------------------------" << endl;
		cout << "1. "<< kulit[0]<<endl;
		cout << "2. "<< kulit[1]<<endl;
		cout << "3. "<< kulit[2]<<endl;
		cout << "Pilih SKIN : ";
		cin >> x;
		if (P==1){
			c1=x-1;
		}else{
			c2=x-1;
		}
		if (P == 1){
			for (int i=0; i<=2; i++){
				int r = 1+(rand ()%3);
				player1[i]=player1[i]+skin(i,r);
			}
			goto menu;			
		}else {
			for (int i=0; i<=2; i++){
				int r = 1+(rand ()%3);
				player2[i]=player2[i]+skin(i,r);
			}
			goto menu;
		}
	}else if (tindakan == 5){
		if (P == 1){
			P = 2;
			goto menu;
		}else{
			goto bertarung;
		}
	}else{
		cout << "tidak termasuk pilihan"<<endl;
		cin;
		goto menu;
	}
	bertarung:
	int turn = 1, act;
	int PP1=3, PP2=3;
	turn:
	while (player1[0]>0 && player2[0]>0){
		system ("CLS");
		cout << "------------------BEGINNING FANTASY VII------------------" << endl;
		cout << "--------------------CHARACTER CREATION-------------------" << endl;
		cout << "welcome " << username<<endl;
		cout << "Player 1 : \t\t\t|" << "Player 2 : " <<endl; 
		cout << "---------------------------------------------------------"<<endl;
		cout << "\t hero\t : " << pahlawan[h1] << "\t|\t hero\t :"<< pahlawan[h2]<< endl;
		cout << "\t sword\t : " << pedang[s1] << "\t|\t sword\t :"<< pedang[s2]<< endl;
		cout << "\t armor\t : " << perisai[a1] << "\t|\t armor\t :"<< perisai[a2]<< endl;
		cout << "\t skin\t : " << kulit[c1] << "\t|\t skin\t :"<< kulit[c2]<< endl;
		cout << "---------------------------------------------------------"<<endl;
		cout << "\t health\t : " << player1[0] << "\t\t|\t healt\t :"<< player2[0]<< endl;
		cout << "\t str\t : " << player1[1] << "\t\t|\t str\t :"<< player2[1]<< endl;
		cout << "\t vit\t : " << player1[2] << "\t\t|\t vit\t :"<< player2[2]<< endl;
		cout << "---------------------------------------------------------"<<endl;

		if (turn == 1){
			cout << "1. Serang \t 2. HEAL(" << PP1 << ")"<< endl;
			cout << "player 1 ambil tindakan : ";
			cin >> act;
			if (act == 1){
				player2[0]=(player2[0])-((player1[1])-(player2[2]/3));
			}else if(act == 2 && PP1>0 ){
				player1[0]=player1[0]+10;
				PP1=PP1-1;
			}else if(act == 2 && PP1==0){
				goto turn;
			}
			turn = 2;
		}else if (turn == 2){
			cout << "1. Serang \t 2. HEAL(" << PP1 << ")"<< endl;
			cout << "player 2 ambil tindakan : ";
			cin >> act;
			if (act == 1){
				player1[0]=(player1[0])-((player2[1])-(player1[2]/3));
			}else if(act == 2 && PP2>0 ){
				player2[0]=player2[0]+10;
				PP2=PP2-1;
			}else if(act == 2 && PP1==0){
				goto turn;
			}
			turn = 1;
		}
	}
	system ("CLS");
	cout << "------------------BEGINNING FANTASY VII------------------" << endl;
	cout << "--------------------CHARACTER CREATION-------------------" << endl;
	cout << "welcome " << username<<endl;
	cout << "Player 1 : \t\t\t|" << "Player 2 : " <<endl; 
	cout << "---------------------------------------------------------"<<endl;
	cout << "\t hero\t : " << pahlawan[h1] << "\t|\t hero\t :"<< pahlawan[h2]<< endl;
	cout << "\t sword\t : " << pedang[s1] << "\t|\t sword\t :"<< pedang[s2]<< endl;
	cout << "\t armor\t : " << perisai[a1] << "\t|\t armor\t :"<< perisai[a2]<< endl;
	cout << "\t skin\t : " << kulit[c1] << "\t|\t skin\t :"<< kulit[c2]<< endl;
	cout << "---------------------------------------------------------"<<endl;
	cout << "\t health\t : " << player1[0] << "\t\t|\t healt\t :"<< player2[0]<< endl;
	cout << "\t str\t : " << player1[1] << "\t\t|\t str\t :"<< player2[1]<< endl;
	cout << "\t vit\t : " << player1[2] << "\t\t|\t vit\t :"<< player2[2]<< endl;
	cout << "---------------------------------------------------------"<<endl;	
	if(player1[0]<=0){
		cout << "player 2 MENANG YEEE";
	}else{
		cout << "player 1 menang";
	}

}
int hero(int a,int x){
	int hero[3][3] = {{20,5,5},{5,10,10},{7,7,7}};
	a = hero[x-1][a];
}
int armor(int a,int x){
	int armor[3][3] = {{20,5,5},{5,10,10},{7,7,7}};
	a = armor[x-1][a];
}
int sword(int a,int x){
	int sword[3][3] = {{20,5,5},{5,10,10},{7,7,7}};
	a = sword[x-1][a];
}
int skin(int a,int x){
	int skin[3][3] = {{20,5,5},{5,10,10},{7,7,7}};
	a = skin[x-1][a];
}
