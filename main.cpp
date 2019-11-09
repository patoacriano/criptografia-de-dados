#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	
	string arqv, msg,cont;
	int x,a;
	cout<<"Voce deseja [1]criptografar ou [2]descriptografar um arquivo?\n:";
	cin>>x;
	if(x == 1)
	{
		cout<<endl<<"Escreva o nome do arquivo que deseja criptografar(coloque a extensão no final): ";
		cin.ignore();
		getline(cin,arqv);
		ofstream arquivo(arqv,ios::app);
		cout<<endl<<"Agora, escreva o que deseja encriptografar: ";
		getline(cin,msg);
		a = msg.length();
		for (int i = 0; i<a; i++)
		{
			msg[i] = msg[i] + 3;
		}
		arquivo<<msg;

		

	}
	else if(x == 2)
	{
		cout<<endl<<"Insira o nome do arquivo que deseja descriptografar: ";
		cin.ignore();
		getline(cin,arqv);
		ifstream arquivo(arqv);
		getline(arquivo,msg);
		a = msg.length();
		for(int i = 0;i<a;i++)
		{
			msg[i] = msg [i] - 3;
		}
		cout<<endl<<msg<<endl;



	}


	return 0;
}
