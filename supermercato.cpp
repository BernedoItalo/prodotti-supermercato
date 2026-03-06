#include <iostream>
#include <string>

using namespace std;

//prdoto none/prezzo/categoria
struct prodotto
{
string nome;
float prezzo;
string categoria;
};







void aggiungi( prodotto x, prodotto v[], int d)
{
	
v[d] = x;
}







	void visualizza ( prodotto v[], int d)
	{
					for( int i = 0; i < d; i++)
		{
		cout <<"prodotto:" << i<<endl;
		
		cout << "nome:" << v[i].nome << endl;
		
		cout << "prezzo:" << v[i].prezzo << endl;
		
		cout << "categoria:" << v[i].categoria << endl;
		}

	}


	void cerca( prodotto x, prodotto v[], int d)           //cerca
	{
		for( int i = 0; i < d; d++)
		{
                
			 if(v[i].nome==x.nome)
			 { 
			  cout<<"la posizione e"<<i<<endl;
			    break;
			 }
		}    
             
	}

/////////////////////////////////////////////////////////////////

bool cancella( prodotto x, prodotto v[], int d)
{
return false;
}

bool modifica( prodotto x, prodotto v[], int d)
{
return true;
}



/////////////////////////////////////////////////////////////////

int main()
{
	prodotto supermercato[100];
	int d=0;
	int opzione;
	prodotto x;
	
	
	do{
//opzioni del menu
	cout<<endl<< "1 = aggiungi "<<endl;

	cout<< "2 = visualizza "<<endl;
	
	cout<< "3 = cerca "<<endl;
	
	cout<< "4  cancella "<<endl;
	
	cout<< "5 = modifica "<<endl;
	
	cout<< "0 = termina il programma "<<endl;
	cin >> opzione;
	
	
	
	
	
/////////////////////////////////////////////////////////////////
	
	
	switch(opzione)
	{
	case 1: 
		{                            //operazione 1
		cout << "inserisci la categoria"<<endl;
		getline(cin,x.nome);
		cin >> x.categoria;
		
		cout << "scrivi  il prezzo da inserire"<<endl;
		cin >> x.prezzo;
		cout << "scrivi  il nome  da inserire"<<endl;
		cin >> x.nome;
		aggiungi(x, supermercato, d);
		d++;
		break;
        }
	case 2:                           //opzione 2
		cout << "inserisci il nome del prodoto che ti serve: ";
		cin >> x.nome;
		visualizza(supermercato, d);
		break;
	case 3:
		{  
		cout<<"inserisci il nome da cercare"<<endl;
		cin >> x.nome;
	    cerca(x, supermercato,d);
		break;
		 }
	case 4: 
		{                          //operazione 4
		cancella(x, supermercato, d);
		break;
        }
	case 5: 
		{                          //opzione 5
		modifica(x, supermercato, d);
		break;
           }

	}

 }while(opzione!=0);




    return 0;
}