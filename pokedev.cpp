#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <cstring>
#include <ctime>
#include <stdlib.h>

using namespace std;

int memoria[180];
int aux = 0;
int aux_1[180];
string texto[30][50];
void memory_reset(void);
void dados(void);
void add_pokemon(void);
void del_pokemon(void);



struct estrutura{

    
    string nome;
    int codigo;
    string tipo;
    float altura;
    float peso;
    string fraqueza;


    void armazen(string stnome, int stcodigo, string sttipo, float staltura, float stpeso, string stfraqueza){

    nome=stnome;
    codigo=stcodigo;
    tipo=sttipo;
    altura=staltura;
    peso=stpeso;
    fraqueza=stfraqueza;

    }

    void impressao(void){


    cout << "Nome     : " << nome << endl;
    cout << "Tipo     : " << tipo << endl;
    cout << "Peso     : " << peso << " kg" << endl;
    cout << "Altura   : " << altura << " m" << endl;
    cout << "Codigo   : " << codigo << endl;
    cout << "Fraqueza : " << fraqueza << endl;
    cout << "\n" << "\n" << endl;
    cout << "1. Nova Pesquisa" << endl;
    cout << "2. Menu principal" << endl;
    cout << "3. Sair\n" << endl;

    }

};


struct config_arcade{
	
	int coman_golpe;
	int a;
	int escolha_batalha;
	int aux;
	int vida_rest = 100;
    int sua_vida = 100;
    int cont_inimigo = 0;
    int cont_insignias;
    int cont_inimigosss;

	
	
};

struct config_infin{
	int sua_vidaINFINITO = 100;
    int vida_restINFINITO = 100;
	int coman_golpeINFINITO;
	int contagem_inimigo = 0;
   	int mortes = 0;
   	int moedas = 0;
   	int nivel = 1;
   	int escolha_loja;
   	int pote_vidaP = 0;
   	int pote_vidaM = 0;
   	int pote_vidaG = 0;
   	int decida_vida;
   	string decida;
};

estrutura *pokemons=new estrutura[180];
estrutura p_0, p_1, p_2, p_3, p_4, p_5, p_6, p_7, p_8, p_9, p_10;
estrutura p_11, p_12, p_13, p_14, p_15, p_16, p_17, p_18, p_19, p_20;
estrutura p_21, p_22, p_23, p_24, p_25, p_26, p_27, p_28, p_29, p_30;
estrutura p_31, p_32, p_33, p_34, p_35, p_36, p_37, p_38, p_39, p_40;
estrutura p_41, p_42, p_43, p_44, p_45, p_46, p_47, p_48, p_49, p_50;
estrutura p_51, p_52, p_53, p_54, p_55, p_56, p_57, p_58, p_59, p_60;
estrutura p_61, p_62, p_63, p_64, p_65, p_66, p_67, p_68, p_69, p_70;
estrutura p_71, p_72, p_73, p_74, p_75, p_76, p_77, p_78, p_79, p_80;
estrutura p_81, p_82, p_83, p_84, p_85, p_86, p_87, p_88, p_89, p_90;
estrutura p_91, p_92, p_93, p_94, p_95, p_96, p_97, p_98, p_99, p_100;
estrutura p_101, p_102, p_103, p_104, p_105, p_106, p_107, p_108, p_109, p_110;
estrutura p_111, p_112, p_113, p_114, p_115, p_116, p_117, p_118, p_119, p_120;
estrutura p_121, p_122, p_123, p_124, p_125, p_126, p_127, p_128, p_129, p_130;
estrutura p_131, p_132, p_133, p_134, p_135, p_136, p_137, p_138, p_139, p_140;
estrutura p_141, p_142, p_143, p_144, p_145, p_146, p_147, p_148, p_149, p_150;
estrutura p_151, p_152, p_153, p_154, p_155, p_156, p_157, p_158, p_159, p_160;
estrutura p_161, p_162, p_163, p_164, p_165, p_166, p_167, p_168, p_169, p_170;
estrutura p_171, p_172, p_173, p_174, p_175, p_176, p_177, p_178, p_179, p_180;


int main(){
		config_arcade arcade;
		config_infin infinito;
		
		int argc;
	    int aleatorio;
        char const* argv[0]; //determinar algumas variaveis como locais nos devidos espaços lá embaixo
        int maior = 9;
        int menor = 1;
        int aleatorio2;
        int maior2 = 10;
        int menor2 = 5;
        int aleatorio3;
        int maior3 = 8;
        int menor3 = 5;
        int aleatorio4;
        int maior4 = 15;
        int menor4 = 6;
        
        int aleatorio5;
        int maior5 = 5;
        int menor5 = 2;
        
        int aleatorio6;
        int maior6 = 7;
        int menor6 = 4;
        
        int aleatorio7;
        int maior7 = 10;
        int menor7 = 6;
        
        int aleatorio8;
        int maior8 = 13;
        int menor8 = 8;
        
        
        int aleatorio_INFINITO;
        int maior_infinito = 8;
        int menor_infinito = 2;
        
        int aleatorio_INFINITO2;
        int maior_infinito2 = 13;
        int menor_infinito2 = 5;
        
        int aleatorio_INFINITO3;
        int maior_infinito3 = 9;
        int menor_infinito3 = 4;
        
        int aleatorio_INFINITO4;
        int maior_infinito4 = 15;
        int menor_infinito4 = 8;
       
       
        int aleatorio_INFINITO_INIM;
        int maior_infinito_inim = 6;
        int menor_infinito_inim = 3;
        
        int aleatorio_INFINITO2_INIM;
        int maior_infinito2_inim = 12;
        int menor_infinito2_inim = 7;
        
        int aleatorio_INFINITO3_INIM;
        int maior_infinito3_inim = 7;
        int menor_infinito3_inim = 4;
        
        int aleatorio_INFINITO4_INIM;
        int maior_infinito4_inim = 13;
        int menor_infinito4_inim = 8;
        
        
        
        int CONT_INIM_INVI;
	
	
		srand((unsigned)time(0));
	

    if(aux == 0){
        memory_reset();
        aux++;
    }

    string line_1;
        ifstream file_1("titulo.txt");
        if(file_1.is_open()){
            while(getline(file_1,line_1)){
                cout << line_1 << endl;
            }
            file_1.close();
        }
        else{
            cout << "Arquivo de Texto nao aberto" << endl;
        }
        cout << endl;

    cout << "\n" << endl;


    cout << "1. Biblioteca de Dados\n" << endl;
    cout << "2. Adicionar Pokemon\n" << endl;
    cout << "3. Excluir Pokemon\n" << endl;
    cout << "4. Restaurar Memoria\n" << endl;
    cout << "5. Batalhas Pokemon\n" << endl;

    int opcao;

    cin >> opcao;
    Beep(1200,200);
    system ("CLS");

    switch(opcao){

        case 1: 
        dados();
        break;

        case 2: 
        add_pokemon();
        break;

        case 3: 
        del_pokemon();
        break;
    
        case 4:
        memory_reset();
        system ("CLS");
        cout << "\n" << "\n" << endl;
        cout << "Memoria Restaurada!\n" << endl;
        Beep(220,300);
        Beep(294,300);
        Beep(294,300);
        Beep(370,300);
        Beep(494,300);
        Beep(370,300);
        Beep(440,800);
        system ("CLS");
        main();
        
        case 5:
        	
        	VEMAQUI_derrota: // serve para reiniciar caso eu perca para algum pokemon ou vença o lider de ginasio
		AQUI:
		cout << "Escolha uma das opcoes abaixo: " << '\n';
		cout << "1-Batalha arcade" << '\n';
		cout << "2-Batalha infinita" << '\n';
		cout << "3-Loja das batalhas infinitas" << '\n';
	
		
	cin >> arcade.escolha_batalha;
		system("cls");
		
		switch (arcade.escolha_batalha){
			
		case 1:
	
				if (arcade.cont_insignias == 6){
			
		
			cout << "Voce ja conseguiu todas as insignias, tente as batalhas infinitas" <<'\n' << '\n';
			cout << "Total de insignias ganhas: " << arcade.cont_insignias << '\n';
			system("pause");
			system("cls");
			goto VEMAQUI_derrota;
				
		}
		
		
		cout << "Bem vindo a batalha arcade, as regras sao as seguintes: " << '\n' << '\n';
		cout << "-Batalhe contra 6 oponentes para ganhar a insignia do ginasio" << '\n';
		cout << "-Consiga todas as 6 para ser o campeao da liga"<< '\n';
		cout << "-A cada inimigo derrotado voce ira se curar em 20" << '\n' << '\n';
		cout << "o total de insignias ganhas foram: " << arcade.cont_insignias << '\n' << '\n';
	
			
		system("pause");
		system("cls");
		
		do{
			
			VEMAQUI_vitoria:

				cout << "Inimigo numero " << arcade.cont_inimigo + 1 << '\n' << '\n';
				cout << "Pokemon inimigo: " << arcade.vida_rest << '\n' << '\n';
		        cout << "Pokemon aliado: " << arcade.sua_vida << '\n' << '\n';
		    	cout << "essa e sua lista de golpes-- " << '\n';
				 
		cout << "1-Investida" << "(" << menor << "-" << maior << " de dano)" << '\n'; 
		cout << "2-arranhao " << "(" << menor2 << "-" << maior2 << " de dano)" << '\n';
		cout << "3-cortar   " << "(" << menor3 << "-" << maior3 << " de dano)" << '\n';
		cout << "4-morder   " << "(" << menor4 << "-" << maior4 << " de dano)" << '\n';
		cout << "Presione 0 para ir ao menu" << '\n' << '\n';
		cout << "Escolha seu golpe: ";
			
		
		cin >> arcade.coman_golpe;
		
		
	
			system("cls");
			
		if(arcade.coman_golpe == 1){
	
		aleatorio = rand()%(maior-menor) + menor;
		aleatorio5 = rand()%(maior5-menor5) + menor5;
		arcade.vida_rest = arcade.vida_rest - aleatorio;
		arcade.sua_vida = arcade.sua_vida - aleatorio5;                           // criar um aleatorio para receber o golpe
			
		}
		if(arcade.coman_golpe == 2){
			
		aleatorio2 = rand()%(maior2-menor2) + menor2;
		aleatorio6 = rand()%(maior6-menor6) + menor6;
		arcade.vida_rest = arcade.vida_rest - aleatorio2;
		arcade.sua_vida = arcade.sua_vida - aleatorio6;
	
	    
		}
		if(arcade.coman_golpe == 3){
		
		aleatorio3 = rand()%(maior3-menor3) + menor3;
		aleatorio7 = rand()%(maior7-menor7) + menor7;
		arcade.vida_rest = arcade.vida_rest - aleatorio3;
		arcade.sua_vida = arcade.sua_vida - aleatorio7;
		
		
		}
		if(arcade.coman_golpe == 4){
			
		aleatorio4 = rand()%(maior4-menor4) + menor4;
		aleatorio8 = rand()%(maior8-menor8) + menor8;
		arcade.vida_rest = arcade.vida_rest - aleatorio4;
		arcade.sua_vida = arcade.sua_vida - aleatorio8;

		}

	
		
			if (arcade.vida_rest <= 0){
			
			arcade.cont_inimigo++;
			arcade.cont_inimigosss++;
			CONT_INIM_INVI++;
			arcade.vida_rest = 100;
			arcade.sua_vida = arcade.sua_vida + 20; //
			
			
				goto VEMAQUI_vitoria;
	
		}
		
		
		
		
		if(arcade.cont_inimigo == 6){
			
			cout << "parabens voe ganhou do lider de ginasio e conseguiu uma insignia " << '\n';
			
			arcade.cont_insignias++;
			
			arcade.sua_vida = 100;
			arcade.vida_rest = 100;
			
			arcade.cont_inimigo = 0;
			
			system("pause");
			system("cls");
			
			goto VEMAQUI_derrota;
			
		}
		
		if(arcade.coman_golpe == 0){
			
			goto VEMAQUI_derrota;
		}
		
		
		if(arcade.sua_vida <= 0){
			cout << "Voce perdeu" << '\n' << '\n';
		
			arcade.sua_vida = 100;
			arcade.vida_rest = 100;
			
			
			system("pause");
			system("cls");
			goto VEMAQUI_derrota;
		}
		
		
		}while(arcade.vida_rest >= 0);
		
	
		 
        case 2:

		cout << "Boas vindas as batalhas infinitas" << '\n' << '\n';
		cout << "-Batalhe ate aonde seu pokemon aguentar" << '\n';
		cout << "-Voce ganha moedas a cada pokemon que derrota" << '\n';
		cout << "-A cada 5 niveis comprados seus atributos sobem um pouco, mas cuidado os do inimigo tambem" << '\n';
		cout << "-As moedas voce podera usar em itens de cura ou niveis para seu pokemon" <<'\n' << '\n' << '\n'; // escolha qual sera mais vantajoso para seu pokemon, vida ou nivel?
		cout << "E lembre-se, nenhuma morte sera em vao" << '\n';
		
		system ("pause");
		system ("cls");

			
        do{
		          
		        cout << "Mortes: " << infinito.mortes << '\n' << '\n';
		        cout << "Suas moedas: " << infinito.moedas << '\n';
		        cout << "Seu nivel: " << infinito.nivel << '\n';
		        cout << "5-Potes de vida(P): " << infinito.pote_vidaP << '\n';
		        cout << "6-Potes de vida(M): " <<  infinito.pote_vidaM <<'\n';
		        cout << "7-Potes de vida(G): " << infinito.pote_vidaG << '\n' << '\n';
		        cout << "Pokemons derrotados: " << infinito.contagem_inimigo << '\n' << '\n';
		       // cout << "Recorde: " << cont_inimigo << '\n' << '\n';                     POR ENQUANTO
		         cout << "Vida Pokemon aliado: " << infinito.sua_vidaINFINITO << '\n';
		        cout << "Vida Pokemon inimigo: " << infinito.vida_restINFINITO << '\n' << '\n';
		         
		       	cout << "sua lista de golpes--" << '\n';
		        cout << "1-investida" << "(" << menor_infinito << "-" << maior_infinito << " de dano)" << '\n';
		        cout << "2-arranhao " << "(" << menor_infinito2 << "-" << maior_infinito2 << " de dano)" << '\n';
		        cout << "3-golpe leve" << "(" << menor_infinito3 << "-" << maior_infinito3 << " de dano)" << '\n';
		        cout << "4-golpe pesado" << "(" << menor_infinito4 << "-" << maior_infinito4 << " de dano)" << '\n';
		        
        	cin >> infinito.coman_golpeINFINITO;
        	system("cls");
        	
        	
        	
        	if(infinito.coman_golpeINFINITO == 1){
        		
        		aleatorio_INFINITO_INIM = rand()%(maior_infinito_inim-menor_infinito_inim) + menor_infinito_inim;
        		aleatorio_INFINITO = rand()%(maior_infinito-menor_infinito) + menor_infinito;
        		infinito.sua_vidaINFINITO = infinito.sua_vidaINFINITO - aleatorio_INFINITO_INIM; // criar variaveis para cada caso de revidação do inimigo para poder usar nos niveis para tomar menos dano e dar mais dano
        		infinito.vida_restINFINITO = infinito.vida_restINFINITO - aleatorio_INFINITO;
			}
			
			if(infinito.coman_golpeINFINITO == 2){
				
				aleatorio_INFINITO2_INIM = rand()%(maior_infinito2_inim-menor_infinito2_inim) + menor_infinito2_inim;
				aleatorio_INFINITO2 = rand()%(maior_infinito2-menor_infinito2) + menor_infinito2;
				infinito.sua_vidaINFINITO = infinito.sua_vidaINFINITO - aleatorio_INFINITO2_INIM;
				infinito.vida_restINFINITO = infinito.vida_restINFINITO - aleatorio_INFINITO2;
				
			}
			
			if(infinito.coman_golpeINFINITO == 3){
				
				aleatorio_INFINITO3_INIM = rand()%(maior_infinito3_inim-menor_infinito3_inim) + menor_infinito3_inim;
        		aleatorio_INFINITO3 = rand()%(maior_infinito3-menor_infinito3) + menor_infinito3;
        		infinito.sua_vidaINFINITO = infinito.sua_vidaINFINITO - aleatorio_INFINITO3_INIM;
        		infinito.vida_restINFINITO = infinito.vida_restINFINITO - aleatorio_INFINITO3;
			}
			
			if(infinito.coman_golpeINFINITO == 4){
				
				aleatorio_INFINITO4_INIM = rand()%(maior_infinito4_inim-menor_infinito4_inim) + menor_infinito4_inim;
        		aleatorio_INFINITO4 = rand()%(maior_infinito4-menor_infinito4) + menor_infinito4;
        		infinito.sua_vidaINFINITO = infinito.sua_vidaINFINITO - aleatorio_INFINITO4_INIM;
        		infinito.vida_restINFINITO = infinito.vida_restINFINITO - aleatorio_INFINITO4;
			}
			
			if(infinito.coman_golpeINFINITO == 0){
				
				
				goto AQUI;
			}
			
			
			if(infinito.vida_restINFINITO <= 0){
				
				infinito.vida_restINFINITO = 100;

				
				infinito.moedas = infinito.moedas + 3;
				
				infinito.contagem_inimigo++;
		
			}
			
			
			if(infinito.coman_golpeINFINITO == 5){
					
					if(infinito.pote_vidaP >= 1){
						
					infinito.pote_vidaP = infinito.pote_vidaP - 1;
					infinito.sua_vidaINFINITO = infinito.sua_vidaINFINITO + 10;
				}
				
				
				else{
					
				cout << "Sem vida para usar" << '\n';
				}
			}
			
			
						if(infinito.coman_golpeINFINITO == 6){
					
					if(infinito.pote_vidaM >= 1){
						
					infinito.pote_vidaM = infinito.pote_vidaM - 1;
					infinito.sua_vidaINFINITO = infinito.sua_vidaINFINITO + 20;
				}
				
				
				else{
					
				cout << "Sem vida para usar" << '\n';
				}
			}
			
			
						if(infinito.coman_golpeINFINITO == 7){
					
					if(infinito.pote_vidaG >= 1){
						
					infinito.pote_vidaG = infinito.pote_vidaG - 1;
					infinito.sua_vidaINFINITO = infinito.sua_vidaINFINITO + 30;
				}
				
				
				else{
					
				cout << "Sem vida para usar" << '\n';
				}
			}
			
			
		
			
			
			if(infinito.coman_golpeINFINITO == 0){
				
				goto VEMAQUI_derrota;
			}
			
			
			
			
			
			if(infinito.sua_vidaINFINITO <= 0){
				
				cout << "Voce perdeu, consegue fazer melhor?" << '\n' << '\n';
				
			
				
				infinito.vida_restINFINITO = 100;
				infinito.sua_vidaINFINITO = 100;
				infinito.contagem_inimigo = 0;
				
				
				infinito.mortes++;
				system("pause");
				system("cls");
				goto VEMAQUI_derrota;
			}
			
			
			
			
		}while(infinito.vida_restINFINITO >= 0);

		
		
		
		case 3:
			LOJA:
			cout << "Boas vindas a loja" << '\n' <<'\n';
			cout << "Voce tem: " << infinito.moedas << " moedas" <<'\n';
			cout << "O nivel do seu pokemon e: " << infinito.nivel << '\n' << '\n';
			cout << "Vida(P): " << infinito.pote_vidaP << '\n';
			cout << "Vida(M): " << infinito.pote_vidaM << '\n';
			cout << "Vida(G): " << infinito.pote_vidaG << '\n' << '\n';
			  
			cout << "1-Comprar niveis: 11 moedas" << '\n'; 
			cout << "2-Pote de vida(pequeno): 3 moedas(restaure 10 de vida)" << '\n';
			cout << "3-pote de vida(medio): 6 moedas(restaure 20 de vida)" << '\n';
			cout << "4-Pote de vida(grande): 10 moedas(restaure 30 de vida)" << '\n' << '\n';
			
			//cin >> escolha_loja;
			
			if(infinito.moedas > 0){
			cin >> infinito.escolha_loja;
			
		
						
			if(infinito.escolha_loja == 0){
			
			system("cls");
			goto VEMAQUI_derrota;
		}
				
				if(infinito.escolha_loja == 2){
					
					if( infinito.moedas >= 3){
					infinito.moedas = infinito.moedas - 3;
					infinito.pote_vidaP = infinito.pote_vidaP + 1;
				//	cout << "Comprado" << '\n';
				
				//	system("pause");
					system("cls");	
					goto LOJA;
					}
					
					
				
					else{
						cout << "Moedas insuficientes" << '\n';
						system ("pause");
						system ("cls");
						goto VEMAQUI_derrota;
						
					}
					
					
					
				}
				
				
				if(infinito.escolha_loja == 1){
					
					if(infinito.moedas >= 11){
						
					infinito.moedas = infinito.moedas - 11;
					infinito.nivel++;
				
				if(infinito.nivel == 5 || infinito.nivel == 10 || infinito.nivel == 15 || infinito.nivel == 20 || infinito.nivel == 30 || infinito.nivel == 50){
					
					maior_infinito = maior_infinito + 4;
					menor_infinito = menor_infinito + 1;
					
					maior_infinito_inim = maior_infinito_inim + 5;
					menor_infinito_inim = menor_infinito_inim + 2;
					
					maior_infinito2 = maior_infinito2 + 5;
					menor_infinito2 = menor_infinito2 + 3;
					
					maior_infinito2_inim = maior_infinito2_inim + 7;
					menor_infinito2_inim = menor_infinito2_inim + 3;
					
					maior_infinito3 = maior_infinito3 + 2;
					menor_infinito3 = menor_infinito3 + 1;
					
					maior_infinito3_inim = maior_infinito3_inim + 3;
					menor_infinito3_inim = menor_infinito3_inim + 2;
					
					maior_infinito4 = maior_infinito4 + 4;
					menor_infinito4 = menor_infinito4 + 1;
					
					maior_infinito4_inim = maior_infinito4_inim + 5;
					menor_infinito4_inim = menor_infinito4_inim + 2;
					
				}
				
				if(infinito.nivel == 50){
					
					cout << "atingiu o nivel maximo, apartir de agora voce não ira ganhar mais status" <<'\n';
					
				}
				
				
					system("cls");	
					goto LOJA;	
				}
				else{
					cout << "Moedas insuficientes" << '\n';
						system ("pause");
						system ("cls");
						goto VEMAQUI_derrota;
				}
				
					
				}
				
				
							
					if(infinito.escolha_loja == 3){
					
					if( infinito.moedas >= 6){
					infinito.moedas = infinito.moedas - 6;
					infinito.pote_vidaM = infinito.pote_vidaM + 1;

					system("cls");	
					goto LOJA;
					}
					else{
						cout << "Moedas insuficientes" << '\n';
						system ("pause");
						system ("cls");
						goto VEMAQUI_derrota;
						
					}
					
				}
				
							
					if(infinito.escolha_loja == 4){
					
					if( infinito.moedas >= 10){
					infinito.moedas = infinito.moedas - 10;
					infinito.pote_vidaG = infinito.pote_vidaG + 1;

					system("cls");	
					goto LOJA;
					}
					else{
						cout << "Moedas insuficientes" << '\n';
						system ("pause");
						system ("cls");
						goto VEMAQUI_derrota;
						
					}
					
				}		
				
				
			}
			else {
				cout << "Voce nao tem moedas, batalhe por algumas" << '\n';
			
				system("pause");
				system("cls");
				goto VEMAQUI_derrota;
			}





	}
        	
        	
       

        default:
        cout << "Opcao Invalida" << endl;
        cout << "\n";
        main();
        break;

    }
    
    return 0;
}


void dados(void){

    int codigo;

    cout << "Digite o Codigo do Pokemon\n" << endl;

    cin >> codigo;
    Beep(1200,200);
    system ("CLS");

    for(;;){

        if(codigo < 1 || codigo > 180){
        cout << "Digite um codigo entre 1 e 180\n" << endl;
        cin >> codigo;
        Beep(1200,200);
        system ("CLS");
        } 

        else{
            break;
        }

    }


    string arquivo;

    switch(codigo){

        case 1:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "001.txt";
        break;
        case 2:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "002.txt";
        break;
        case 3:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "003.txt";
        break;
        case 4:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "004.txt";
        break;
        case 5:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "005.txt";
        break;
        case 6:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "006.txt";
        break;
        case 7:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "007.txt";
        break;
        case 8:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "008.txt";
        break;
        case 9:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "009.txt";
        break;
        case 10:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "010.txt";
        break;
        case 11:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "011.txt";
        break;
        case 12:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "012.txt";
        break;
        case 13:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "013.txt";
        break;
        case 14:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "014.txt";
        break;
        case 15:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "015.txt";
        break;
        case 16:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "016.txt";
        break;
        case 17:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "017.txt";
        break;
        case 18:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "018.txt";
        break;
        case 19:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "019.txt";
        break;
        case 20:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "020.txt";
        break;
        case 21:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "021.txt";
        break;
        case 22:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "022.txt";
        break;
        case 23:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "023.txt";
        break;
        case 24:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "024.txt";
        break;
        case 25:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "025.txt";
        break;
        case 26:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "026.txt";
        break;
        case 27:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "027.txt";
        break;
        case 28:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "028.txt";
        break;
        case 29:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "029.txt";
        break;
        case 30:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "030.txt";
        break;
        case 31:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "031.txt";
        break;
        case 32:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "032.txt";
        break;
        case 33:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "033.txt";
        break;
        case 34:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "034.txt";
        break;
        case 35:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "035.txt";
        break;
        case 36:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "036.txt";
        break;
        case 37:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "037.txt";
        break;
        case 38:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "038.txt";
        break;
        case 39:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "039.txt";
        break;
        case 40:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "040.txt";
        break;
        case 41:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "041.txt";
        break;
        case 42:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "042.txt";
        break;
        case 43:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "043.txt";
        break;
        case 44:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "044.txt";
        break;
        case 45:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "045.txt";
        break;
        case 46:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "046.txt";
        break;
        case 47:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "047.txt";
        break;
        case 48:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "048.txt";
        break;
        case 49:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "049.txt";
        break;
        case 50:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "050.txt";
        break;
        case 51:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "051.txt";
        break;
        case 52:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "052.txt";
        break;
        case 53:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "053.txt";
        break;
        case 54:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "054.txt";
        break;
        case 55:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "055.txt";
        break;
        case 56:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "056.txt";
        break;
        case 57:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "057.txt";
        break;
        case 58:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "058.txt";
        break;
        case 59:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "059.txt";
        break;
        case 60:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "060.txt";
        break;
        case 61:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "061.txt";
        break;
        case 62:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "062.txt";
        break;
        case 63:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "063.txt";
        break;
        case 64:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "064.txt";
        break;
        case 65:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "065.txt";
        break;
        case 66:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "066.txt";
        break;
        case 67:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "067.txt";
        break;
        case 68:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "068.txt";
        break;
        case 69:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "069.txt";
        break;
        case 70:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "070.txt";
        break;
        case 71:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "071.txt";
        break;
        case 72:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "072.txt";
        break;
        case 73:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "073.txt";
        break;
        case 74:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "074.txt";
        break;
        case 75:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "075.txt";
        break;
        case 76:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "076.txt";
        break;
        case 77:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "077.txt";
        break;
        case 78:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "078.txt";
        break;
        case 79:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "079.txt";
        break;
        case 80:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "080.txt";
        break;
        case 81:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "081.txt";
        break;
        case 82:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "082.txt";
        break;
        case 83:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "083.txt";
        break;
        case 84:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "084.txt";
        break;
        case 85:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "085.txt";
        break;
        case 86:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "086.txt";
        break;
        case 87:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "087.txt";
        break;
        case 88:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "088.txt";
        break;
        case 89:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "089.txt";
        break;
        case 90:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "090.txt";
        break;
        case 91:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "091.txt";
        break;
        case 92:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "092.txt";
        break;
        case 93:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "093.txt";
        break;
        case 94:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "094.txt";
        break;
        case 95:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "095.txt";
        break;
        case 96:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "096.txt";
        break;
        case 97:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "097.txt";
        break;
        case 98:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "098.txt";
        break;
        case 99:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "099.txt";
        break;
        case 100:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "100.txt";
        break;
        case 101:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "101.txt";
        break;
        case 102:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "102.txt";
        break;
        case 103:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "103.txt";
        break;
        case 104:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "104.txt";
        break;
        case 105:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "105.txt";
        break;
        case 106:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "106.txt";
        break;
        case 107:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "107.txt";
        break;
        case 108:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "108.txt";
        break;
        case 109:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "109.txt";
        break;
        case 110:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "110.txt";
        break;
        case 111:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "111.txt";
        break;
        case 112:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "112.txt";
        break;
        case 113:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "113.txt";
        break;
        case 114:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "114.txt";
        break;
        case 115:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "115.txt";
        break;
        case 116:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "116.txt";
        break;
        case 117:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "117.txt";
        break;
        case 118:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "118.txt";
        break;
        case 119:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "119.txt";
        break;
        case 120:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "120.txt";
        break;
        case 121:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "121.txt";
        break;
        case 122:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "122.txt";
        break;
        case 123:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "123.txt";
        break;
        case 124:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "124.txt";
        break;
        case 125:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "125.txt";
        break;
        case 126:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "126.txt";
        break;
        case 127:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "127.txt";
        break;
        case 128:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "128.txt";
        break;
        case 129:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "129.txt";
        break;
        case 130:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "130.txt";
        break;
        case 131:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "131.txt";
        break;
        case 132:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "132.txt";
        break;
        case 133:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "133.txt";
        break;
        case 134:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "134.txt";
        break;
        case 135:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "135.txt";
        break;
        case 136:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "136.txt";
        break;
        case 137:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "137.txt";
        break;
        case 138:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "138.txt";
        break;
        case 139:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "139.txt";
        break;
        case 140:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "140.txt";
        break;
        case 141:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "141.txt";
        break;
        case 142:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "142.txt";
        break;
        case 143:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "143.txt";
        break;
        case 144:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "144.txt";
        break;
        case 145:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "145.txt";
        break;
        case 146:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "146.txt";
        break;
        case 147:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "147.txt";
        break;
        case 148:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "148.txt";
        break;
        case 149:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "149.txt";
        break;
        case 150:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "150.txt";
        break;
        case 151:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        }
        else if(aux_1[codigo] == 1)
            break;
        arquivo = "151.txt";
        break;
        case 152:
        if(memoria[codigo] == 1){
            aux_1[codigo] == 1;
            break;
        } 
        arquivo = texto[1][50];
        break;
        case 153:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[2][50];
        break;
        case 154:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[3][50];
        break;
        case 155:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[4][50];
        break;
        case 156:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[5][50];
        break;
        case 157:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[6][50];
        break;
        case 158:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[7][50];
        break;
        case 159:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[8][50];
        break;
        case 160:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[9][50];
        break;
        case 161:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[10][50];
        break;
        case 162:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[11][50];
        break;
        case 163:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[12][50];
        break;
        case 164:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[13][50];
        break;
        case 165:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[14][50];
        break;
        case 166:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[15][50];
        break;
        case 167:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[16][50];
        break;
        case 168:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[17][50];
        break;
        case 169:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[18][50];
        break;
        case 170:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[19][50];
        break;
        case 171:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[20][50];
        break;
        case 172:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[21][50];
        break;
        case 173:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[22][50];
        break;
        case 174:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[23][50];
        break;
        case 175:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[24][50];
        break;
        case 176:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[25][50];
        break;
        case 177:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[26][50];
        break;
        case 178:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[27][50];
        break;
        case 179:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[28][50];
        break;
        case 180:
        if(memoria[codigo] == 1){
            break;
        } 
        arquivo = texto[29][50];
        break;


    }

        string line_1;
        ifstream file_1;
        file_1.open(arquivo.c_str());
       
        if(file_1.is_open()){
            while(getline(file_1,line_1)){
                cout << line_1 << endl;
            }
            file_1.close();
        }
        else{
            cout << "Arquivo de Texto nao aberto" << endl;
        }
        cout << endl;


    
    pokemons[codigo].impressao();


    cin >> codigo;
    Beep(1200,200);
    system ("CLS");

    switch(codigo){

        case 1: 
        dados();
        system ("CLS");
        break;

        case 2: 
        main();
        system ("CLS");
        break;

        case 3: 
        exit(0);
        break;
    
        default:
        cout << "Opcao Invalida" << endl;
        main();
        break;

    }
       
}

void add_pokemon(void){

    string arq;
    int opcao;
    int codigo;
    string nome;
    string tipo;
    float altura;
    float peso;
    string fraqueza;

    cout << "Digite o Codigo do Pokemon a ser adicionado\n" << endl;
    cin >> codigo;
    Beep(1200,200);
    system ("CLS");


    for(;;){

        if(codigo < 1 || codigo > 180){
        cout << "Digite um codigo entre 1 e 180\n" << endl;
        cin >> codigo;
        Beep(1200,200);
        system ("CLS");
    } 

        else if((memoria[codigo]) == 0){
            cout << "Posicao de armazenamento em uso, por favor selecione outra\n" << endl;
            cin >> codigo;
            Beep(1200,200);
            system ("CLS");

        }
        else{
            break;
        }

    }

    memoria[codigo] = 0;

    cout << "Nome: ";
    cin >> nome;
     cout << "\n";
    cout << "Tipo: ";
    cin >> tipo;
     cout << "\n";
    cout << "Altura: ";
    cin >> altura;
     cout << "\n";
    cout << "Peso: ";
    cin >> peso;
     cout << "\n";
    cout << "Fraqueza: ";
    cin >> fraqueza;
    cout << "\n";
    cout << "\n";

    cout << "Deseja adicionar uma arte ascii para este pokemon?" << endl;
    cout << "\n";
    cout << "\n";
     cout << "1. Sim" << endl << "2. Nao\n" << endl;

    cin >> opcao;

    pokemons[codigo] = p_0;
    pokemons[codigo].armazen(nome, codigo, tipo, altura, peso, fraqueza);

    codigo = codigo - 151;

    switch(opcao){
        case 1:
        system ("CLS");
        cout << "Digite o nome do arquivo + extensao txt\n" << endl;
        cin >> arq;
        texto[codigo][50] = arq;
        break;

        case 2:
        break;

        default:
        main();
        break;

    }

    system ("CLS");
    cout << "\n" << "\n" << endl;
    cout << "Pokemon Adicionado com Sucesso!" << endl;

    Beep(220,300);
    Beep(294,300);
    Beep(294,300);
    Beep(370,300);
    Beep(494,300);
    Beep(370,300);
    Beep(440,800);

    cout << "\n" << "\n" << endl;
    cout << "1. Adicionar novo pokemon" << endl;
    cout << "2. Menu principal" << endl;
    cout << "3. Sair\n" << endl;

    cin >> codigo;
    Beep(1200,200);
    system ("CLS");

    switch(codigo){

        case 1: 
        add_pokemon();
        system ("CLS");
        break;

        case 2: 
        main();
        system ("CLS");
        break;

        case 3: 
        exit(0);
        break;
    
        default:
        cout << "Opcao Invalida" << endl;
        main();
        break;

    }



}


void del_pokemon(void){

    int codigo;

    cout << "Digite o Codigo do Pokemon a ser deletado\n" << endl;

    cin >> codigo;
    Beep(1200,200);
    system ("CLS");

    pokemons[codigo].armazen("--", codigo, "--", 0, 0, "--");

    memoria[codigo] = 1;

    aux_1[codigo] = 1;

    cout << "\n" << "\n" << endl;
    cout << "Pokemon Deletado com Sucesso!\n" << endl;

    Beep(220,300);
    Beep(294,300);
    Beep(294,300);
    Beep(370,300);
    Beep(494,300);
    Beep(370,300);
    Beep(440,800);

    cout << "\n" << "\n" << endl;
    cout << "1. Deletar outro pokemon" << endl;
    cout << "2. Menu principal" << endl;
    cout << "3. Sair\n" << endl;

    cin >> codigo;
    Beep(1200,200);
    system ("CLS");

    switch(codigo){

        case 1: 
        del_pokemon();
        system ("CLS");
        break;

        case 2: 
        main();
        system ("CLS");
        break;

        case 3: 
        exit(0);
        break;
    
        default:
        cout << "Opcao Invalida" << endl;
        main();
        break;

    }



}


void memory_reset(void){

    for(int i = 0; i <= 151 ; i++){
        memoria[i] = 0;
    }

    for(int i = 152; i < 180 ; i++){
        memoria[i] = 1;
    }

    for(int i = 0; i < 180 ; i++){
        aux_1[i] = 0;
    }

    for(int i = 152; i < 180; i++){
        pokemons[i].armazen("--", i, "--", 0, 0, "--");

    }

    pokemons[1] = p_1;
    pokemons[2] = p_2;
    pokemons[3] = p_3;
    pokemons[4] = p_4;
    pokemons[5] = p_5;
    pokemons[6] = p_6;
    pokemons[7] = p_7;
    pokemons[8] = p_9;
    pokemons[9] = p_10;
    pokemons[10] = p_11;
    pokemons[11] = p_12;
    pokemons[12] = p_13;
    pokemons[13] = p_14;
    pokemons[14] = p_15;
    pokemons[15] = p_16;
    pokemons[16] = p_17;
    pokemons[17] = p_18;
    pokemons[18] = p_19;
    pokemons[19] = p_20;
    pokemons[20] = p_21;
    pokemons[21] = p_22;
    pokemons[22] = p_23;
    pokemons[23] = p_24;
    pokemons[24] = p_25;
    pokemons[25] = p_26;
    pokemons[26] = p_27;
    pokemons[27] = p_28;
    pokemons[28] = p_29;
    pokemons[29] = p_30;
    pokemons[30] = p_31;
    pokemons[31] = p_32;
    pokemons[32] = p_33;
    pokemons[33] = p_34;
    pokemons[34] = p_35;
    pokemons[35] = p_36;
    pokemons[36] = p_37;
    pokemons[37] = p_38;
    pokemons[38] = p_39;
    pokemons[39] = p_40;
    pokemons[40] = p_41;
    pokemons[41] = p_42;
    pokemons[42] = p_43;
    pokemons[43] = p_44;
    pokemons[44] = p_45;
    pokemons[45] = p_46;
    pokemons[46] = p_47;
    pokemons[47] = p_48;
    pokemons[48] = p_49;
    pokemons[49] = p_50;
    pokemons[50] = p_51;
    pokemons[51] = p_52;
    pokemons[52] = p_53;
    pokemons[53] = p_54;
    pokemons[54] = p_55;
    pokemons[55] = p_56;
    pokemons[56] = p_57;
    pokemons[57] = p_58;
    pokemons[58] = p_59;
    pokemons[59] = p_60;
    pokemons[60] = p_61;
    pokemons[61] = p_62;
    pokemons[62] = p_63;
    pokemons[63] = p_64;
    pokemons[64] = p_65;
    pokemons[65] = p_66;
    pokemons[66] = p_67;
    pokemons[67] = p_68;
    pokemons[68] = p_69;
    pokemons[69] = p_70;
    pokemons[70] = p_71;
    pokemons[71] = p_72;
    pokemons[72] = p_73;
    pokemons[73] = p_74;
    pokemons[74] = p_75;
    pokemons[75] = p_76;
    pokemons[76] = p_77;
    pokemons[77] = p_78;
    pokemons[78] = p_79;
    pokemons[79] = p_80;
    pokemons[80] = p_81;
    pokemons[81] = p_82;
    pokemons[82] = p_83;
    pokemons[83] = p_84;
    pokemons[84] = p_85;
    pokemons[85] = p_86;
    pokemons[86] = p_87;
    pokemons[87] = p_88;
    pokemons[88] = p_89;
    pokemons[89] = p_90;
    pokemons[90] = p_91;
    pokemons[91] = p_92;
    pokemons[92] = p_93;
    pokemons[93] = p_94;
    pokemons[94] = p_95;
    pokemons[95] = p_96;
    pokemons[96] = p_97;
    pokemons[97] = p_98;
    pokemons[98] = p_99;
    pokemons[99] = p_100;
    pokemons[100] = p_101;
    pokemons[101] = p_102;
    pokemons[102] = p_103;
    pokemons[103] = p_104;
    pokemons[104] = p_105;
    pokemons[105] = p_106;
    pokemons[106] = p_107;
    pokemons[107] = p_108;
    pokemons[108] = p_109;
    pokemons[109] = p_110;
    pokemons[110] = p_111;
    pokemons[111] = p_112;
    pokemons[112] = p_113;
    pokemons[113] = p_114;
    pokemons[114] = p_115;
    pokemons[115] = p_116;
    pokemons[116] = p_117;
    pokemons[117] = p_118;
    pokemons[118] = p_119;
    pokemons[119] = p_120;
    pokemons[120] = p_121;
    pokemons[121] = p_122;
    pokemons[122] = p_123;
    pokemons[123] = p_124;
    pokemons[124] = p_125;
    pokemons[125] = p_126;
    pokemons[126] = p_127;
    pokemons[127] = p_128;
    pokemons[128] = p_129;
    pokemons[129] = p_130;
    pokemons[130] = p_131;
    pokemons[131] = p_132;
    pokemons[132] = p_133;
    pokemons[133] = p_134;
    pokemons[134] = p_135;
    pokemons[135] = p_136;
    pokemons[136] = p_137;
    pokemons[137] = p_138;
    pokemons[138] = p_139;
    pokemons[139] = p_140;
    pokemons[140] = p_141;
    pokemons[141] = p_142;
    pokemons[142] = p_143;
    pokemons[143] = p_144;
    pokemons[144] = p_145;
    pokemons[145] = p_146;
    pokemons[146] = p_147;
    pokemons[147] = p_148;
    pokemons[148] = p_149;
    pokemons[149] = p_150;
    pokemons[150] = p_151;



pokemons[1].armazen("Bulbasaur", 001, "Planta / Venenoso", 0.70, 6.90, "Fogo / Gelo / Psiquico / Voador");
pokemons[2].armazen("Ivysaur", 002, "Planta / Venenoso", 1.00, 13.00, "Fogo / Gelo / Psiquico / Voador");
pokemons[3].armazen("Venusaur", 003, "Planta / Venenoso", 2.00, 100.00, "Fogo / Gelo / Psiquico / Voador");
pokemons[4].armazen("Charmander", 004, "Fogo", 0.60, 8.50, "Agua / Terra / Pedra");
pokemons[5].armazen("Charmeleon", 005, "Fogo", 1.10, 19.00, "Agua / Terra / Pedra");
pokemons[6].armazen("Charizard", 006, "Fogo / Voador", 1.70, 90.50, "Agua / Eletrico / Pedra");
pokemons[7].armazen("Squirtle", 007, "Agua", 0.50, 9.00, "Planta / Eletrico");
pokemons[8].armazen("Wartortle", 8, "Agua", 1.00, 22.50, "Planta / Eletrico");
pokemons[9].armazen("Blastoise", 9, "Agua", 1.60, 85.50, "Planta / Eletrico");
pokemons[10].armazen("Caterpie", 10, "Inseto", 0.30, 2.90, "Fogo / Voador / Pedra");
pokemons[11].armazen("Metapod", 11, "Inseto", 0.71, 9.90, "Fogo / Voador / Pedra");
pokemons[12].armazen("Butterfree", 12, "Inseto / Voador", 1.10, 32.00, "Fogo / Voador / Eletrico / Gelo / Pedra");
pokemons[13].armazen("Weedle", 13, "Inseto / Venenoso", 0.30, 3.20, "Fogo / Psiquico / Voador / Pedra");
pokemons[14].armazen("Kakuna", 14, "Inseto / Venenoso", 0.61, 9.97, "Fogo / Psiquico / Voador / Pedra");
pokemons[15].armazen("Beedril", 15, "Inseto / Venenoso", 0.99, 29.5, "Fogo / Psiquico / Voador / Pedra");
pokemons[16].armazen("Pidgey", 16, "Normal / Voador", 0.30, 1.81, "Eletrico / Gelo / Pedra");
pokemons[17].armazen("Pidgeotto", 17, "Normal / Voador", 1.09, 30.00, "Eletrico / Gelo / Pedra");
pokemons[18].armazen("Pidgeot", 18, "Normal / Voador", 1.50, 39.50, "Eletrico / Gelo / Pedra");
pokemons[19].armazen("Rattata", 19, "Normal", 0.30, 3.49, "Luta");
pokemons[20].armazen("Raticate", 20, "Normal", 0.70, 18.50, "Luta");
pokemons[21].armazen("Spearow", 21, "Normal / Voador", 0.30, 1.99, "Eletrico / Gelo / Pedra");
pokemons[22].armazen("Fearow", 22, "Normal / Voador", 1.19, 38.00, "Eletrico / Gelo / Pedra");
pokemons[23].armazen("Ekans", 23, "Venenoso", 2.01, 6.89,"Psiquico / Terra");
pokemons[24].armazen("Arbok", 24, "Venenoso", 3.51, 65.00, "Psiquico / Terra");
pokemons[25].armazen("Pikachu", 25, "Eletrico", 0.41, 5.99, "Terra");
pokemons[26].armazen("Raichu", 26, "Eletrico", 0.79, 29.98, "Terra");
pokemons[27].armazen("Sandshrew", 27, "Terra", 0.78, 12.02, "Agua / Planta / Gelo");
pokemons[28].armazen("Sandslash", 28, "Terra", 0.99, 29.48, "Agua / Planta / Gelo");
pokemons[29].armazen("Nidoran", 29, "Venenoso", 0.41, 6.99, "Psiquico / Terra");
pokemons[30].armazen("Nidorina", 30, "Venenoso", 0.79, 20.00, "Psiquico / Terra");
pokemons[31].armazen("Nidoqueen", 31, "Venenoso / Terra", 1.29, 59.96, "Agua / Psiquico / Gelo / Terra");
pokemons[32].armazen("Nidoran", 32, "Venenoso", 0.51, 8.98, "Psiquico / Terra");
pokemons[33].armazen("Nidorino", 33, "Venenoso", 0.89, 19.50, "Psiquico / Terra");
pokemons[34].armazen("Nidoking", 34, "Venenoso / Terra", 1.40, 62.00, "Agua / Psiquico / Gelo / Terra");
pokemons[35].armazen("Clefairy", 35, "Mistico", 0.61, 7.48, "Aco / Venenoso");
pokemons[36].armazen("Clefable", 36, "Mistico", 1.30, 40.00, "Aco / Venenoso");
pokemons[37].armazen("Vulpix", 37, "Fogo", 0.61, 9.89, "Agua / Terra / Pedra");
pokemons[38].armazen("Ninetales", 38, "Fogo", 1.09, 19.91, "Agua / Terra / Pedra");
pokemons[39].armazen("Jiggly", 39, "Normal / Mistico", 0.51, 5.49, "Aco / Venenoso");
pokemons[40].armazen("Wigglytuff", 40, "Normal / Mistico", 0.99, 12.02, "Aco / Venenoso");
pokemons[41].armazen("Zubat", 41, "Venenoso / Voador", 0.79, 7.48, "Psiquico / Eletrico / Gelo / Pedra");
pokemons[42].armazen("Golbat", 42, "Venenoso / Voador", 1.60, 55.02, "Psiquico / Eletrico / Gelo / Pedra");
pokemons[43].armazen("Oddish", 43, "Planta / Venenoso", 0.51, 5.40, "Fogo / Psiquico / Voador / Gelo");
pokemons[44].armazen("Gloom", 44, "Planta / Venenoso", 0.79, 8.62, "Fogo / Psiquico / Voador / Gelo");
pokemons[45].armazen("Vileplume", 45, "Planta / Venenoso", 0.94, 18.60, "Fogo / Psiquico / Voador / Gelo");
pokemons[46].armazen("Paras", 46, "Inseto / Planta", 0.30, 5.40, "Fogo / Voador / Gelo / Venenoso / Pedra / Inseto");
pokemons[47].armazen("Parasect", 47, "Inseto / Planta", 0.99, 29.48, "Fogo / Voador / Gelo / Venenoso / Pedra / Inseto");
pokemons[48].armazen("Venonat", 48, "Inseto / Venenoso", 0.99, 29.98, "Fogo / Psiquico / Voador / Pedra");
pokemons[49].armazen("Venomoth", 49, "Inseto / Venenoso", 1.50, 12.52, "Fogo / Psiquico / Voador / Pedra");
pokemons[50].armazen("Diglett", 50, "Terra", 0.20, 0.82, "Agua / Planta / Gelo");
pokemons[51].armazen("Dugtrio", 51, "Terra", 0.71, 33.29, "Agua / Planta / Gelo");
pokemons[52].armazen("Meowth", 52, "Normal", 0.41, 4.22, "Luta");
pokemons[53].armazen("Persian", 53, "Normal", 0.99, 31.99, "Luta");
pokemons[54].armazen("Psyduck", 54, "Agua", 0.79, 19.60, "Planta / Eletrico");
pokemons[55].armazen("Golduck", 55, "Agua", 1.70, 76.61, "Planta / Eletrico");
pokemons[56].armazen("Mankey", 56, "Luta", 0.51, 27.99, "Psiquico / Voador / Mistico");
pokemons[57].armazen("Primeape", 57, "Luta", 0.99, 31.98, "Psiquico / Voador / Mistico");
pokemons[58].armazen("Growlithe", 58, "Fogo", 0.71, 19.00, "Agua / Terra / Pedra");
pokemons[59].armazen("Arcanine", 59, "Fogo", 1.90, 154.99, "Agua / Terra / Pedra");
pokemons[60].armazen("Poliwag", 60, "Agua", 0.61, 12.38, "Planta / Eletrico");
pokemons[61].armazen("Poliwhirl", 61, "Agua", 0.99, 20.00, "Planta / Eletrico");
pokemons[62].armazen("Poliwrath", 62, "Agua / Luta", 1.30, 53.98, "Mistico / Planta / Voador / Psiquico / Eletrico");
pokemons[63].armazen("Abra", 63, "Psiquico", 0.89, 19.50, "Fantasma / Sombrio / Inseto");
pokemons[64].armazen("Kadabra", 64, "Psiquico", 1.30, 56.52, "Fantasma / Sombrio / Inseto");
pokemons[65].armazen("Alakazam", 65, "Psiquico", 1.50, 47.99, "Fantasma / Sombrio / Inseto");
pokemons[66].armazen("Machop", 66, "Luta", 0.79, 19.50, "Psiquico / Voador / Mistico");
pokemons[67].armazen("Machoke", 67, "Luta", 1.50, 70.49, "Psiquico / Voador / Mistico");
pokemons[68].armazen("Machamp", 68, "Luta", 1.60, 130.00, "Psiquico / Voador / Mistico");
pokemons[69].armazen("Bellsprout", 69, "Planta / Venenoso", 0.71, 3.99, "Fogo / Psiquico / Voador / Gelo");
pokemons[70].armazen("Weepinbell", 70, "Planta / Venenoso", 0.99, 6.40, "Fogo / Psiquico / Voador / Gelo");
pokemons[71].armazen("Victreebel", 71, "Planta / Venenoso", 1.70, 15.51, "Fogo / Psiquico / Voador / Gelo");
pokemons[72].armazen("Tentacool", 72, "Agua / Venenoso", 0.89, 45.50, "Psiquico / Eletirco / Terra");
pokemons[73].armazen("Tentacruel", 73, "Agua / Venenoso", 1.60, 55.02, "Psiquico / Eletrico / Terra");
pokemons[74].armazen("Geodude", 74, "Pedra / Terra", 0.41, 20.00, "Aco / Luta / Agua / Gelo / Planta / Terra");
pokemons[75].armazen("Graveler", 75, "Petra / Terra", 0.99, 105.01, "Aco / Luta / Agua / Gelo / Planta / Terra");
pokemons[76].armazen("Golem", 76, "Petra / Terra", 1.40, 300.00, "Aco / Luta / Agua / Gelo / Planta / Terra");
pokemons[77].armazen("Ponyta", 77, "Fogo", 0.99, 29.98, "Agua / Terra / Pedra");
pokemons[78].armazen("Rapidash", 78, "Fogo", 1.70, 94.98, "Agua / Terra / Pedra");
pokemons[79].armazen("Slowpoke", 79, "Agua / Psiquico", 1.19, 36.02, "Fantasma / Sombrio / Planta / Eletrico / Inseto");
pokemons[80].armazen("Slowbro", 80, "Agua / Psiquico", 1.60, 78.52, "Fantasma / Sombrio / Planta / Eletrico / Inseto");
pokemons[81].armazen("Magnemite", 81, "Eletrico / Aco", 0.30, 5.99, "Fogo / Luta / Terra");
pokemons[82].armazen("Magneton", 82, "Eletrico / Aco", 0.99, 60.01, "Fogo / Luta / Terra");
pokemons[83].armazen("Farfetchâ€™d", 83, "Normal / Voador", 0.79, 15.01, "Eletrico / Gelo / Pedra");
pokemons[84].armazen("Doduo", 84, "Normal / Voador", 1.40, 39.19, "Eletrico / Gelo / Pedra");
pokemons[85].armazen("Dodrio", 85, "Normal / Voador", 1.80, 85.18, "Eletrico / Gelo / Pedra");
pokemons[86].armazen("Seel", 86, "Agua", 1.09, 89.99, "Planta / Eletrico");
pokemons[87].armazen("Dewgong", 87, "Agua / Gelo", 1.70, 120.02, "Planta / Eletrico / Luta / Pedra");
pokemons[88].armazen("Grimer", 88, "Venenoso", 0.89, 29.98, "Psiquico / Terra");
pokemons[89].armazen("Muk", 89, "Venenoso", 1.19, 29.98, "Psiquico / Terra");
pokemons[90].armazen("Shellder", 90, "Agua", 0.30, 3.99, "Planta / Eletrico");
pokemons[91].armazen("Cloyster", 91, "Agua / Gelo", 1.50, 132.49, "Planta / Eletrico / Luta / Pedra");
pokemons[92].armazen("Gastly", 92, "Fantasma / Venenoso", 1.30, 0.09, "Fantasma / Sombrio / Psiquico / Terra");
pokemons[93].armazen("Hauter", 93, "Fantasma / Venenoso", 1.60, 0.09, "Fantasma / Sombrio / Psiquico / Terra");
pokemons[94].armazen("Gengar", 94, "Fantasma / Venenoso", 1.50, 40.51, "Fantasma / Sombrio / Psiquico / Terra");
pokemons[95].armazen("Onix", 95, "Pedra / Terra", 8.79, 210.01, "Aco / Luta / Agua / Gelo / Planta / Terra");
pokemons[96].armazen("Drowzee", 96, "Psiquico", 0.99, 32.39, "Fantasma / Sombrio / Inseto");
pokemons[97].armazen("Hypno", 97, "Psiquico", 1.60, 75.61, "Fantasma / Sombrio / Inseto");
pokemons[98].armazen("Krabby", 98, "Agua", 0.41, 6.49, "Planta / Eletrico");
pokemons[99].armazen("Kingler", 99, "Agua", 1.30, 60.01, "Planta / Eletrico");
pokemons[100].armazen("Voltorb", 100, "Eletrico", 0.51, 10.39, "Terra");
pokemons[101].armazen("Electrode", 101, "Eletrico", 1.19, 66.59, "Terra");
pokemons[102].armazen("Exeggcute", 102, "Planta / Psiquico", 0.41, 2.49, "Fantasma / Fogo / Voador / Gelo / Sombrio / Venenoso");
pokemons[103].armazen("Exeggutor", 103, "Planta / Psiquico", 2.01, 120.02, "Fantasma / Fogo / Voador / Gelo / Sombrio / Venenoso");
pokemons[104].armazen("Cubone", 104, "Terra", 0.41, 6.49, "Agua / Planta / Gelo");
pokemons[105].armazen("Marowak", 105, "Terra", 0.99, 45.00, "Agua / Planta / Gelo");
pokemons[106].armazen("Hitmonlee", 106, "Luta", 1.50, 49.80, "Psiquico / Voador / Mistico");
pokemons[107].armazen("Hitmonchan", 107, "Luta", 1.40, 50.21, "Psiquico / Voador / Mistico");
pokemons[108].armazen("Lickitung", 108, "Normal", 1.19, 65.50, "Luta");
pokemons[109].armazen("Koffing", 109, "Venenoso", 0.61, 1.00, "Psiquico / Terra");
pokemons[110].armazen("Weezing", 110, "Venenoso", 1.19, 9.48, "Psiquico / Terra");
pokemons[111].armazen("Rhyhorn", 111, "Terra / Pedra", 0.99, 114.99, "Aco / Gelo / Agua / Luta / Planta / Terra");
pokemons[112].armazen("Rhydon", 112, "Terra / Pedra", 1.90, 120.02, "Aco / Gelo / Agua / Luta / Planta / Terra");
pokemons[113].armazen("Chansey", 113, "Normal", 1.09, 34.61, "Luta");
pokemons[114].armazen("Tangela", 114, "Planta", 0.99, 35.01, "Fogo / Voador / Gelo / Venenoso / Inseto");
pokemons[115].armazen("Kangaskhan", 115, "Normal", 2.21, 89.01, "Luta");
pokemons[116].armazen("Horsea", 116, "Agua", 0.41, 7.98, "Planta / Eletrico");
pokemons[117].armazen("Seadra", 117, "Agua", 1.19, 24.99, "Planta / Eletrico");
pokemons[118].armazen("Goldeen", 118, "Agua", 0.61, 15.01, "Planta / Eletrico");
pokemons[119].armazen("Seaking", 119, "Agua", 1.30, 39.01, "Planta / Eletrico");
pokemons[120].armazen("Staryu", 120, "Agua", 0.79, 34.52, "Planta / Eletrico");
pokemons[121].armazen("Starmie", 121, "Agua / Psiquico", 1.09, 80.01, "Fantasma / Sombrio / Planta / Eletrico / Inseto");
pokemons[122].armazen("Mr. Mime", 122, "Psiquico / Mistico", 1.30, 54.52, "Fantasma / Aco / Venenoso");
pokemons[123].armazen("Scyther", 123, "Inseto / Voador", 1.50, 56.02, "Fogo / Voador / Eletrico /Gelo / Pedra");
pokemons[124].armazen("Jynx", 124, "Gelo / Psiquico", 1.40, 40.60, "Aco / Fantasma / Fogo / Sombrio / Pedra / Inseto");
pokemons[125].armazen("Electabuzz", 125, "Eletrico", 1.09, 29.98, "Terra");
pokemons[126].armazen("Magmar", 126, "Fogo", 1.30, 44.50, "Agua / Terra / Pedra");
pokemons[127].armazen("Pinsir", 127, "Inseto", 1.50, 55.02, "Fogo / Voador / Pedra");
pokemons[128].armazen("Tauros", 128, "Normal", 1.40, 88.41, "Luta");
pokemons[129].armazen("Magikarp", 129, "Agua", 0.89, 9.98, "Planta / Eletrico");
pokemons[130].armazen("Gyarados", 130, "Agua / Voador", 6.50, 235.01, "Eletrico / Pedra");
pokemons[131].armazen("Lapras", 131, "Agua / Gelo", 2.49, 220.00, "Panta / Eletrico / Luta / Pedra");
pokemons[132].armazen("Ditto", 132, "Normal", 0.30, 3.99, "Luta");
pokemons[133].armazen("Eevee", 133, "Normal", 0.30, 6.49, "Luta");
pokemons[134].armazen("Vaporeon", 134, "Agua", 0.99, 28.98, "Planta / Eletrico");
pokemons[135].armazen("Jolteon", 135, "Eletrico", 0.79, 24.49, "Terra");
pokemons[136].armazen("Flareon", 136, "Fogo", 0.89, 24.99, "Agua / Terra / Pedra");
pokemons[137].armazen("Porygon", 137, "Normal", 0.79, 36.51, "Luta");
pokemons[138].armazen("Omanyte", 138, "Pedra / Agua", 0.41, 7.48, "Planta / Eletrico / Luta / Terra");
pokemons[139].armazen("Omastar", 139, "Pedra / Agua", 0.99, 35.02, "Planta / Eletrico / Luta / Terra");
pokemons[140].armazen("Kabuto", 140, "Pedra / Agua", 0.51, 11.52, "Planta / Eletrico / Luta / Terra");
pokemons[141].armazen("Kabutops", 141, "Pedra/ Agua", 1.30, 40.51, "Planta / Eletrico / Luta / Terra");
pokemons[142].armazen("Aerodactyl", 142, "Pedra / Voador", 1.80, 59.01, "Aco / Agua / Eletrico / Gelo / Pedra");
pokemons[143].armazen("Snorlax", 143, "Normal", 2.11, 459.99, "Luta");
pokemons[144].armazen("Articuno", 144, "Gelo / Voador", 1.70, 55.38, "Aco / Fogo / Eletrico / Pedra");
pokemons[145].armazen("Zapdos", 145, "Eletrico / Voador", 1.60, 52.62, "Gelo / Pedraa");
pokemons[146].armazen("Moltres", 146, "Fogo / Voador", 2.01, 59.96, "Agua / Eletrico / Pedra");
pokemons[147].armazen("Dratini", 147, "Dragao", 1.80, 3.31, "Mistico / Gelo / Dragao");
pokemons[148].armazen("Dragnoir", 148, "Dragao", 3.99, 16.51, "Mistico / Gelo / Dragao");
pokemons[149].armazen("Dragonite", 149, "Dragao / Voador", 2.21, 210.01, "Mistico / Gelo / Dragao / Pedra");
pokemons[150].armazen("Mewtwo", 150, "Psiquico", 2.01, 122.02, "Fantasma / Sombrio / Inseto");
pokemons[151].armazen("Mew", 151, "Psiquico", 0.41, 3.99, "Fantasma / Sombrio / Inseto");
    
}
