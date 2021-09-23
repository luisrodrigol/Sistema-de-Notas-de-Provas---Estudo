	#include <iostream>
	#include <string.h>
	#include <locale.h>
	
	using namespace std;
	
	struct no {
	char nome[80];
	char curso[80];
	int matricula;
	float vp1;
	float vp2;
	float vf;};
	
	struct no L[6];
	int m = 5; 
	int n = 0;
	int menu;
	
	
	
	void meni(){
	cout<<"Menu"        <<endl;
	cout<<"1 - Incluir" <<endl;
	cout<<"2 - Buscar"  <<endl;
	cout<<"3 - Excluir" <<endl;
	cout<<"4 - Alterar" <<endl;
	cout<<"5 - Listar"  <<endl;
	cout<<"6 - Sair"    <<endl;
	cout<< "Escolha uma opcao:";
	int op;
	cin >> op;
	while(op < 1 or op > 6){
	
		cout<<"Escolha uma opcao valida:";
		cin >> op;}	
	menu=op;
	
	          }
	
	int buscar(int x){
	    
		int i=0;
		int busca=0;
		while(i <= n){
			if(L[i].matricula == x){
				busca=i;
				i=n+1;
			}
			else{i=i+1;
			}	
		}
	return busca;	
	}
	
void incluir(int x){char nom[80];char cur[80];float v1;float v2;float vfi;	
	if (0==buscar(x)){
		L[n+1].matricula = x;
		cout<<"Digite nome do aluno: ";
	    cin>>nom;
		cout<<"Digite o curso: ";
		cin>>cur;
		cout<<"Digite a nota VP1: ";
		cin>>v1;
		cout<<"Digite a nota VP2: ";
		cin>>v2;
		cout<<"Digite a nota VF: ";
		cin>>vfi;	
		strcpy(L[n+1].curso,cur);
		strcpy(L[n+1].nome,nom);
		L[n+1].vp1 = v1;
		L[n+1].vp2 = v2;
		L[n+1].vf = vfi;
		n = n+1;
		cout << "Inclusao efetuada! Novo valor de n:"<<n<<endl;
	}
	else{
	cout<<"Matricula ja existe!"<<endl;	
	    }
	
	}
		
	void excluir(int x){
	int ind = buscar(x);
	if(ind!=0){
	  while(ind<n){
	  	L[n-1].matricula = L[n].matricula;
	  	strcpy(L[n-1].nome,L[n].nome);
	  	strcpy(L[n-1].curso,L[n].curso);
	  	L[n-1].vp1 = L[n].vp1;
	  	L[n-1].vp2 = L[n].vp2;
	  	L[n-1].vf = L[n].vf;
	  	n=n-1;
		  	  }	
	  	  
	  cout << "Exclusao efetuada! Novo valor de n:"<<n<<endl;
	}
	else{
	cout << "Matricula nao existe"<<endl;
};
	}
	
	void alterar(int mat){ char nom[80];char cur[80];float v1;float v2;float vfi;
	cout<<"Digite o novo nome: ";
    cin>>nom;
	cout<<"Digite o novo curso: ";
	cin>>cur;
	cout<<"Digite a nota VP1: ";
	cin>>v1;
	cout<<"Digite a nota VP2: ";
	cin>>v2;
	cout<<"Digite a nota VF: ";
	cin>>vfi;	
	strcpy(L[mat].curso,cur);
	strcpy(L[mat].nome,nom);
	L[mat].vp1 = v1;
	L[mat].vp2 = v2;
	L[mat].vf = vfi;
	cout << "Alteracao efetuada!"<<endl;
	}
	
	void listar(){
		int i = 1;
		while (i<=n){
			cout <<"=============================="<<endl;
			cout <<"Nome: "<<L[i].nome<<endl;
			cout <<"Curso: "<<L[i].curso<<endl;
			cout <<"Matricula: "<<L[i].matricula<<endl;
			cout <<"vp1: "<<L[i].vp1<<endl;
			cout <<"vp2: "<<L[i].vp2<<endl;
			cout <<"vf: "<<L[i].vf<<endl;
			cout <<"=============================="<<endl;
			i=i+1;
		};
	cout << "Listagem executada!"<<endl;
	
	}
	
	int main() {
	
	int bus;
	int ins;
	int exc;
	int mat;
	char nom[80];
	char cur[80];
	float v1;
	float v2;
	float vfi;
		
	while(menu != 6){	
	meni();
	if (menu == 1 and n==m){
	cout <<"Lista cheia!"<<endl;
	}
	
	else{
		if(menu == 1 and n<m){
		cout << "Digite a matricula a ser inclusa:";
		cin >> ins;
		incluir(ins);
		}
	 	else{
		 	if (menu == 2 and n==0){
			cout <<"Lista vazia!"<<endl;
			}
	
			else{
				if(menu == 2 and n>0){
				cout << "Digite a matricula a ser buscada:";
				cin >> bus;	
				bus = buscar(bus);
				cout << "Busca efetuada! O valor de n:"<<bus<<endl;
	 			}
	 			else{
				 	if (menu == 3 and n==0){
					cout <<"Lista vazia!"<<endl;
					}
	
					else{
						if(menu == 3 and n>0){
						cout << "Digite a matricula a ser excluida:";
		                cin >> exc;	
						excluir(exc);
	 					}
	 					
						 else{
	 						if (menu == 4 and n==0){
							cout <<"Lista vazia!"<<endl;
							}
	
							else{
								if(menu == 4 and n>0){
								cout<<"Para qual matricula deseja fazer a alteracao: ";
								cin>>mat;
								if(buscar(mat)==0){
									cout<<"Matricula nao existe!"<<endl;
								}
								else{alterar(buscar(mat));
								    }	
								}
	 							else{
	 								if (menu == 5 and n==0){
									cout <<"Lista vazia!"<<endl;
									}
	
									else{
										if(menu == 5 and n>0){
										listar();
	 									}
	 									}
	 								}
	 							}
	 						}
						}											
					}
				}
			}
		}
	};
cout << "Programa encerrado!";};
