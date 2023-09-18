#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;


struct informacao_signo{
	string nome;
	string descricao;
	string caractPositivas;
	string caractNegativas;
	};


main(){
	setlocale(LC_ALL,"Portuguese");
	int dia, mes;
	informacao_signo signo[12];
	char escolha, significado;
			
	signo[0].nome = "�ries!";
	signo[0].descricao = "Os arianos costumam ser individualistas e espont�neos.";
	signo[0].caractPositivas = "Se coloca em primeiro lugar, mas sem esquecer dos demais � sua volta! Motiva as pessoas e � prestativo, al�m de perseverante e apaixonado.";
	signo[0].caractNegativas = "Sua agita��o faz com que o ariano normalmente seja inquieto, impulsivo ou inconsequente. Por pensar muito nele pr�prio tamb�m � �s vezes taxado de ego�sta.";
	
	signo[1].nome = "Touro!";
	signo[1].descricao = "Os taurinos s�o esfor�ados e pr�ticos.";
	signo[1].caractPositivas = "Cuidadoso com tudo e com todos, � paciente e produtivo. Desse modo, s�o pessoas em que se podem confiar e costumam ser muito fi�is.";
	signo[1].caractNegativas = "A teimosia � caracter�stica nata de um taurino. Visto que s�o muito persistentes e obstinado, querem cuidar de tudo e podem se mostrar centralizadores, inflex�veis e materialistas;a teimosia � caracter�stica nata de um taurino. Visto que s�o muito persistentes e obstinado, querem cuidar de tudo e podem se mostrar centralizadores, inflex�veis e materialistas.";
	
	signo[2].nome = "G�meos!";
	signo[2].descricao = "Os geminianos s�o extrovertidos e amig�es.";
	signo[2].caractPositivas = "Animados e comunicativos, eles tem a mente aberta e s�o muito espertos.";
	signo[2].caractNegativas = "Podem oscilar muito, tonando-se indecisos, inconstantes, ansiosos e ao mesmo tempo evasivos."; 
	
	signo[3].nome = "C�ncer!";
	signo[3].descricao = "A principal marca dos cancerianos � a sensibilidade e o carinho.";
	signo[3].caractPositivas = "S�o dedicados e gentis, sempre ouvindo ou cuidando de algu�m por perceberam suas emo��es e problemas.";
	signo[3].caractNegativas = "A car�ncia e o mau humor podem surgir a qualquer momento nos cancerianos, que podem se tornar ciumentos ou se vitimizar."; 
	
	signo[4].nome = "Le�o!";
	signo[4].descricao = "Os leoninos s�o vaidosos e confiantes.";
	signo[4].caractPositivas = "Inteligentes e corajosos, s�o l�deres natos. Por outro lado, s�o expressivos e determinados: quando colocam algo na mente, pode ter certeza que v�o at� o fim para conquist�-la.";
	signo[4].caractNegativas = "T�m a personalidade muito forte, podendo se tornar ambiciosos, mand�es ou convencidos demais.";	
	
	signo[5].nome = "Virgem!";
	signo[5].descricao = "Organizados e anal�ticos: esses s�o os virginianos.";
	signo[5].caractPositivas = "Observa��o e efici�ncia s�o marcas do virginiano, que � bastante atencioso e sincero com os demais e est� sempre resolvendo um problema: seja seu ou dos outros.";
	signo[5].caractNegativas = "Ser sistem�tico torna o virginiano cheio de manias, muito cr�tico e desconfiado. Tamb�m pode torn�-los ansiosos e perfeccionistas demais.";
	
	signo[6].nome = "Libra!";
	signo[6].descricao = "Clich� dizer, mas o equil�brio e a justi�a definem os librianos.";
	signo[6].caractPositivas = "Extremamente diplom�ticos, s�o sinceros e buscam ponderar sempre para chegar no melhor resultado. Para isso contam com sua simpatia, boa comunica��o e tranquilidade.";
	signo[6].caractNegativas = "Querer atingir o equil�brio sempre torna o libriano indeciso, controlador e com muita mania de organiza��o. Tamb�m t�m dificuldade de dizer n�o em algumas situa��es.";
	
	signo[7].nome = "Escorpi�o!";
	signo[7].descricao = "Atraente e intenso: esse � o escorpiano!";
	signo[7].caractPositivas = "De uma auto-confian�a invej�vel, t�m muita intui��o e um instinto protetor maravilhoso. S�o dedicados e apaixonados.";
	signo[7].caractNegativas = "Sua boa mem�ria, ci�mes e �s vezes obsess�o fazem com que o nunca esque�am do que lhe fizeram, se tornando vingativos e rancorosos.";
	
	signo[8].nome = "Sagit�rio!";
	signo[8].descricao = "Independ�ncia e liberdade marcam os sagitariano!(Melhor signo)";
	signo[8].caractPositivas = "S�o talentosos, inteligentes e justos. S�o pessoas estimulantes, que gostam de se divertir e t�m bastante espontaneidade e vitalidade.";
	signo[8].caractNegativas = "Podem aparentar arrog�ncia por saberem demais, r�gidos com si mesmos e os outros, um pouco impacientes e sarc�sticos.";
	
	signo[9].nome = "Capric�rnio!";
	signo[9].descricao = "A responsabilidade � o ponto forte do capricorniano.";
	signo[9].caractPositivas = "S�o persistentes e determinados. Sua organiza��o e ambi��o natas fazem com que sejam muito eficientes e trabalhadores.";
	signo[9].caractNegativas = "Muito certinhos, podem se tornar r�gidos e orgulhosos demais. Por serem muito pr�ticos, tamb�m podem se tornar frios e pessimistas.";
	
	signo[10].nome = "Aqu�rio!";
	signo[10].descricao = "Os aquarianos s�o amantes dos desafios e da liberdade.";
	signo[10].caractPositivas = "Idealista e inventivo, o aquariano costuma ser tranquilo e justo, ao mesmo tempo que gosta de transformar e n�o se acomodar nas situa��es.";
	signo[10].caractNegativas = "Por ser individualista e desapegado, muitos consideram o aquariano frio e sem cora��o (rs), al�m de distante, rebelde e imprevis�vel.";
	
	signo[11].nome = "Peixes!";
	signo[11].descricao = "Emocionais e espiritualizados, esses s�o os piscianos.";
	signo[11].caractPositivas = "Ouvintes natos, s�o confi�veis, intuitivos, prestativos e preocupados com os demais. S�o adapt�veis e simp�ticos, os tornando bem soci�veis.";
	signo[11].caractNegativas = "A sensibilidade aflorada pode os tornar emocionais demais, tendendo para a depress�o, os tornando muito temperamentais e rancorosos. S�o avoados, escapistas da realidade e por confiarem muito nos outros tamb�m costumam ser indecisos e inocentes.";
	
	cout<<"Ol�!!! Seja bem vindo � consulta de signos\n\n";
	
	do {
		
		cout<<"\nGostaria de saber seu signo?(S/N)"; 
		cin>>escolha;
		
		if ((escolha == 'S') or (escolha == 's')) {		
			cout<<"\nGostaria de saber o significado junto do signo?(S/N)";
			cin>>significado;
			
				if ((significado == 'S') or (significado == 's')) {				
					cout<<"\nQual o dia que voc� nasceu? ";
					cin>>dia;
					cout<<"\nQual o m�s que voc� nasceu? ";
					cin>>mes;
					cout<<"\n-------------------------------------------------\n";	
				
					if ((dia >= 21 and mes == 03) or (dia <= 20 and mes == 04)) {
						cout<<"\nSeu signo � "<<signo[0].nome<<"\n\nCaracter�siticas de �ries: "<<signo[0].descricao<<"\n\nCaracter�sticas Positivas de �ries: "<<signo[0].caractPositivas<<"\n\nCaracter�sticas negativas de �ries: "<<signo[0].caractNegativas<<"\n";
						}
					if ((dia >= 21 and mes == 04) or (dia <= 20 and mes == 05)) {
						cout<<"\nSeu signo � "<<signo[1].nome<<"\n\nCaracter�siticas de Touro: "<<signo[1].descricao<<"\n\nCaracter�sticas Positivas de Touro: "<<signo[1].caractPositivas<<"\n\nCaracter�sticas negativas de Touro: "<<signo[1].caractNegativas<<"\n";
						}
					if ((dia >= 21 and mes == 05) or (dia <=20 and mes == 06)) {
						cout<<"\nSeu signo � "<<signo[2].nome<<"\n\nCaracter�sticas de G�meos: "<<signo[2].descricao<<"\n\nCaracter�siticas Positivas de G�meos: "<<signo[2].caractPositivas<<"\n\nCaracter�sticas negativas de G�meos: "<<signo[2].caractNegativas<<"\n";
						}
					if ((dia >= 21 and mes == 06) or (dia <= 22 and mes == 07)) {
						cout<<"\nSeu signo � "<<signo[3].nome<<"\n\nCaracter�sticas de C�ncer: "<<signo[3].descricao<<"\n\nCaracter�siticas Positivas de C�ncer: "<<signo[3].caractPositivas<<"\n\nCaracter�sticas negativas de C�ncer: "<<signo[3].caractNegativas<<"\n";
						}
					if ((dia >= 23 and mes == 07) or (dia <=22 and mes == 8)) {
						cout<<"\nSeu signo � "<<signo[4].nome<<"\n\nCaracter�sticas de Le�o: "<<signo[4].descricao<<"\n\nCaracter�siticas Positivas de Le�o: "<<signo[4].caractPositivas<<"\n\nCaracter�sticas negativas de Le�o: "<<signo[4].caractNegativas<<"\n";
						}
					if ((dia >= 23 and mes == 8) or (dia <= 22 and mes == 9)) {
						cout<<"\nSeu signo � "<<signo[5].nome<<"\n\nCaracter�sticas de Virgem: "<<signo[5].descricao<<"\n\nCaracter�siticas Positivas de Virgem: "<<signo[5].caractPositivas<<"\n\nCaracter�sticas negativas de Virgem: "<<signo[5].caractNegativas<<"\n";
						}		
					if ((dia >= 23 and mes == 9) or (dia <= 22 and mes == 10)) {
	   					cout<<"\nSeu signo � "<<signo[6].nome<<"\n\nCaracter�sticas de Libra: "<<signo[6].descricao<<"\n\nCaracter�siticas Positivas de Libra: "<<signo[6].caractPositivas<<"\n\nCaracter�sticas negativas de Libra: "<<signo[6].caractNegativas<<"\n";
						}	
					if ((dia >= 23 and mes == 10) or (dia <= 21 and mes == 11)) {
	   					cout<<"\nSeu signo � "<<signo[7].nome<<"\n\nCaracter�sticas de Escorpi�o: "<<signo[7].descricao<<"\n\nCaracter�siticas Positivas de Escorpi�o: "<<signo[7].caractPositivas<<"\n\nCaracter�sticas negativas de Escorpi�o: "<<signo[7].caractNegativas<<"\n";
						}  
					if ((dia >= 22 and mes == 11) or (dia <= 21 and mes == 12)) {	
	   					cout<<"\nSeu signo � "<<signo[8].nome<<"\n\nCaracter�sticas de Sagit�rio: "<<signo[8].descricao<<"\n\nCaracter�siticas Positivas de Sagit�rio: "<<signo[8].caractPositivas<<"\n\nCaracter�sticas negativas de Sagit�rio: "<<signo[8].caractNegativas<<"\n";
						}
    				if ((dia >= 22 and mes == 12) or (dia <= 20 and mes == 01)) {
       					cout<<"\nSeu signo � "<<signo[9].nome<<"\n\nCaracter�sticas de Capric�rnio: "<<signo[9].descricao<<"\n\nCaracter�siticas Positivas de Capric�rnio: "<<signo[9].caractPositivas<<"\n\nCaracter�sticas negativas de Capric�rnio: "<<signo[9].caractNegativas<<"\n";
						}
    				if ((dia >= 21 and mes == 01) or (dia <= 18 and mes == 02)) {
       					cout<<"\nSeu signo � "<<signo[10].nome<<"\n\nCaracter�sticas de Aqu�rio: "<<signo[10].descricao<<"\n\nCaracter�siticas Positivas de Aqu�rio: "<<signo[10].caractPositivas<<"\n\nCaracter�sticas negativas de Aqu�rio: "<<signo[10].caractNegativas<<"\n";
						}
    				if ((dia >= 19 and mes == 02) or (dia <= 20 and mes == 03)) {
    					cout<<"\nSeu signo � "<<signo[11].nome<<"\n\nCaracter�sticas de Peixes: "<<signo[11].descricao<<"\n\nCaracter�siticas Positivas de Peixes: "<<signo[11].caractPositivas<<"\n\nCaracter�sticas negativas de Peixes: "<<signo[11].caractNegativas<<"\n";
						}
						cout<<"\n-------------------------------------------------\n";								
				}
					
				if ((significado == 'N') or (significado == 'n')) {
					cout<<"\nQual o dia que voc� nasceu? ";
					cin>>dia;
					cout<<"\nQual o m�s que voc� nasceu? ";
					cin>>mes;
					cout<<"\n-------------------------------------------------\n";	
					
					if ((dia >= 21 and mes == 03) or (dia <= 20 and mes == 04)) {
						cout<<"\nSeu signo � \n"<<signo[0].nome;
					}
					if ((dia >= 21 and mes == 04) or (dia <= 20 and mes == 05)) {
						cout<<"\nSeu signo � \n"<<signo[1].nome;
					}
					if ((dia >= 21 and mes == 05) or (dia <= 20 and mes == 06)) {
						cout<<"\nSeu signo � \n"<<signo[2].nome;
					}
					if ((dia >= 21 and mes == 06) or (dia <= 22 and mes == 07)) {
						cout<<"\nSeu signo � \n"<<signo[3].nome;
					}
					if ((dia >= 23 and mes == 07) or (dia <= 22 and mes == 8)) {
						cout<<"\nSeu signo � \n"<<signo[4].nome;
					}
					if ((dia >= 23 and mes == 8) or (dia <= 22 and mes == 9)) {
						cout<<"\nSeu signo � \n"<<signo[5].nome;
					}
					if ((dia >= 23 and mes == 9) or (dia <= 22 and mes == 10)) {
						cout<<"\nSeu signo � \n"<<signo[6].nome;
					}
					if ((dia >= 23 and mes == 10) or (dia <= 21 and mes == 11)) {
						cout<<"\nSeu signo � \n"<<signo[7].nome;
					}
					if ((dia >= 22 and mes == 11) or (dia <= 21 and mes == 12)) {
						cout<<"\nSeu signo � \n"<<signo[8].nome;
					}
					if ((dia >= 22 and mes == 12) or (dia <= 20 and mes == 01)) {
						cout<<"\nSeu signo � \n"<<signo[9].nome;
					}
					if ((dia >= 21 and mes == 01) or (dia <= 18 and mes == 02)) {
						cout<<"\nSeu signo � \n"<<signo[10].nome;
					}
					if ((dia >= 19 and mes == 02) or (dia <= 20 and mes == 03)) {
						cout<<"\nSeu signo � \n"<<signo[11].nome;
					}
					cout<<"\n-------------------------------------------------\n";					
				}				
		}
		if ((escolha == 'N') or (escolha == 'n')) {
			cout<<"\nMuito obrigado pela aten��o!\n";
		}
	} while ((escolha == 'S') or (escolha == 's'));	

system("pause");
}
								

