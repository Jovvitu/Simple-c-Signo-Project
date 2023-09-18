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
			
	signo[0].nome = "Áries!";
	signo[0].descricao = "Os arianos costumam ser individualistas e espontâneos.";
	signo[0].caractPositivas = "Se coloca em primeiro lugar, mas sem esquecer dos demais à sua volta! Motiva as pessoas e é prestativo, além de perseverante e apaixonado.";
	signo[0].caractNegativas = "Sua agitação faz com que o ariano normalmente seja inquieto, impulsivo ou inconsequente. Por pensar muito nele próprio também é às vezes taxado de egoísta.";
	
	signo[1].nome = "Touro!";
	signo[1].descricao = "Os taurinos são esforçados e práticos.";
	signo[1].caractPositivas = "Cuidadoso com tudo e com todos, é paciente e produtivo. Desse modo, são pessoas em que se podem confiar e costumam ser muito fiéis.";
	signo[1].caractNegativas = "A teimosia é característica nata de um taurino. Visto que são muito persistentes e obstinado, querem cuidar de tudo e podem se mostrar centralizadores, inflexíveis e materialistas;a teimosia é característica nata de um taurino. Visto que são muito persistentes e obstinado, querem cuidar de tudo e podem se mostrar centralizadores, inflexíveis e materialistas.";
	
	signo[2].nome = "Gêmeos!";
	signo[2].descricao = "Os geminianos são extrovertidos e amigões.";
	signo[2].caractPositivas = "Animados e comunicativos, eles tem a mente aberta e são muito espertos.";
	signo[2].caractNegativas = "Podem oscilar muito, tonando-se indecisos, inconstantes, ansiosos e ao mesmo tempo evasivos."; 
	
	signo[3].nome = "Câncer!";
	signo[3].descricao = "A principal marca dos cancerianos é a sensibilidade e o carinho.";
	signo[3].caractPositivas = "São dedicados e gentis, sempre ouvindo ou cuidando de alguém por perceberam suas emoções e problemas.";
	signo[3].caractNegativas = "A carência e o mau humor podem surgir a qualquer momento nos cancerianos, que podem se tornar ciumentos ou se vitimizar."; 
	
	signo[4].nome = "Leão!";
	signo[4].descricao = "Os leoninos são vaidosos e confiantes.";
	signo[4].caractPositivas = "Inteligentes e corajosos, são líderes natos. Por outro lado, são expressivos e determinados: quando colocam algo na mente, pode ter certeza que vão até o fim para conquistá-la.";
	signo[4].caractNegativas = "Têm a personalidade muito forte, podendo se tornar ambiciosos, mandões ou convencidos demais.";	
	
	signo[5].nome = "Virgem!";
	signo[5].descricao = "Organizados e analíticos: esses são os virginianos.";
	signo[5].caractPositivas = "Observação e eficiência são marcas do virginiano, que é bastante atencioso e sincero com os demais e está sempre resolvendo um problema: seja seu ou dos outros.";
	signo[5].caractNegativas = "Ser sistemático torna o virginiano cheio de manias, muito crítico e desconfiado. Também pode torná-los ansiosos e perfeccionistas demais.";
	
	signo[6].nome = "Libra!";
	signo[6].descricao = "Clichê dizer, mas o equilíbrio e a justiça definem os librianos.";
	signo[6].caractPositivas = "Extremamente diplomáticos, são sinceros e buscam ponderar sempre para chegar no melhor resultado. Para isso contam com sua simpatia, boa comunicação e tranquilidade.";
	signo[6].caractNegativas = "Querer atingir o equilíbrio sempre torna o libriano indeciso, controlador e com muita mania de organização. Também têm dificuldade de dizer não em algumas situações.";
	
	signo[7].nome = "Escorpião!";
	signo[7].descricao = "Atraente e intenso: esse é o escorpiano!";
	signo[7].caractPositivas = "De uma auto-confiança invejável, têm muita intuição e um instinto protetor maravilhoso. São dedicados e apaixonados.";
	signo[7].caractNegativas = "Sua boa memória, ciúmes e às vezes obsessão fazem com que o nunca esqueçam do que lhe fizeram, se tornando vingativos e rancorosos.";
	
	signo[8].nome = "Sagitário!";
	signo[8].descricao = "Independência e liberdade marcam os sagitariano!(Melhor signo)";
	signo[8].caractPositivas = "São talentosos, inteligentes e justos. São pessoas estimulantes, que gostam de se divertir e têm bastante espontaneidade e vitalidade.";
	signo[8].caractNegativas = "Podem aparentar arrogância por saberem demais, rígidos com si mesmos e os outros, um pouco impacientes e sarcásticos.";
	
	signo[9].nome = "Capricórnio!";
	signo[9].descricao = "A responsabilidade é o ponto forte do capricorniano.";
	signo[9].caractPositivas = "São persistentes e determinados. Sua organização e ambição natas fazem com que sejam muito eficientes e trabalhadores.";
	signo[9].caractNegativas = "Muito certinhos, podem se tornar rígidos e orgulhosos demais. Por serem muito práticos, também podem se tornar frios e pessimistas.";
	
	signo[10].nome = "Aquário!";
	signo[10].descricao = "Os aquarianos são amantes dos desafios e da liberdade.";
	signo[10].caractPositivas = "Idealista e inventivo, o aquariano costuma ser tranquilo e justo, ao mesmo tempo que gosta de transformar e não se acomodar nas situações.";
	signo[10].caractNegativas = "Por ser individualista e desapegado, muitos consideram o aquariano frio e sem coração (rs), além de distante, rebelde e imprevisível.";
	
	signo[11].nome = "Peixes!";
	signo[11].descricao = "Emocionais e espiritualizados, esses são os piscianos.";
	signo[11].caractPositivas = "Ouvintes natos, são confiáveis, intuitivos, prestativos e preocupados com os demais. São adaptáveis e simpáticos, os tornando bem sociáveis.";
	signo[11].caractNegativas = "A sensibilidade aflorada pode os tornar emocionais demais, tendendo para a depressão, os tornando muito temperamentais e rancorosos. São avoados, escapistas da realidade e por confiarem muito nos outros também costumam ser indecisos e inocentes.";
	
	cout<<"Olá!!! Seja bem vindo à consulta de signos\n\n";
	
	do {
		
		cout<<"\nGostaria de saber seu signo?(S/N)"; 
		cin>>escolha;
		
		if ((escolha == 'S') or (escolha == 's')) {		
			cout<<"\nGostaria de saber o significado junto do signo?(S/N)";
			cin>>significado;
			
				if ((significado == 'S') or (significado == 's')) {				
					cout<<"\nQual o dia que você nasceu? ";
					cin>>dia;
					cout<<"\nQual o mês que você nasceu? ";
					cin>>mes;
					cout<<"\n-------------------------------------------------\n";	
				
					if ((dia >= 21 and mes == 03) or (dia <= 20 and mes == 04)) {
						cout<<"\nSeu signo é "<<signo[0].nome<<"\n\nCaracterísiticas de Áries: "<<signo[0].descricao<<"\n\nCaracterísticas Positivas de Áries: "<<signo[0].caractPositivas<<"\n\nCaracterísticas negativas de Áries: "<<signo[0].caractNegativas<<"\n";
						}
					if ((dia >= 21 and mes == 04) or (dia <= 20 and mes == 05)) {
						cout<<"\nSeu signo é "<<signo[1].nome<<"\n\nCaracterísiticas de Touro: "<<signo[1].descricao<<"\n\nCaracterísticas Positivas de Touro: "<<signo[1].caractPositivas<<"\n\nCaracterísticas negativas de Touro: "<<signo[1].caractNegativas<<"\n";
						}
					if ((dia >= 21 and mes == 05) or (dia <=20 and mes == 06)) {
						cout<<"\nSeu signo é "<<signo[2].nome<<"\n\nCaracterísticas de Gêmeos: "<<signo[2].descricao<<"\n\nCaracterísiticas Positivas de Gêmeos: "<<signo[2].caractPositivas<<"\n\nCaracterísticas negativas de Gêmeos: "<<signo[2].caractNegativas<<"\n";
						}
					if ((dia >= 21 and mes == 06) or (dia <= 22 and mes == 07)) {
						cout<<"\nSeu signo é "<<signo[3].nome<<"\n\nCaracterísticas de Câncer: "<<signo[3].descricao<<"\n\nCaracterísiticas Positivas de Câncer: "<<signo[3].caractPositivas<<"\n\nCaracterísticas negativas de Câncer: "<<signo[3].caractNegativas<<"\n";
						}
					if ((dia >= 23 and mes == 07) or (dia <=22 and mes == 8)) {
						cout<<"\nSeu signo é "<<signo[4].nome<<"\n\nCaracterísticas de Leão: "<<signo[4].descricao<<"\n\nCaracterísiticas Positivas de Leão: "<<signo[4].caractPositivas<<"\n\nCaracterísticas negativas de Leão: "<<signo[4].caractNegativas<<"\n";
						}
					if ((dia >= 23 and mes == 8) or (dia <= 22 and mes == 9)) {
						cout<<"\nSeu signo é "<<signo[5].nome<<"\n\nCaracterísticas de Virgem: "<<signo[5].descricao<<"\n\nCaracterísiticas Positivas de Virgem: "<<signo[5].caractPositivas<<"\n\nCaracterísticas negativas de Virgem: "<<signo[5].caractNegativas<<"\n";
						}		
					if ((dia >= 23 and mes == 9) or (dia <= 22 and mes == 10)) {
	   					cout<<"\nSeu signo é "<<signo[6].nome<<"\n\nCaracterísticas de Libra: "<<signo[6].descricao<<"\n\nCaracterísiticas Positivas de Libra: "<<signo[6].caractPositivas<<"\n\nCaracterísticas negativas de Libra: "<<signo[6].caractNegativas<<"\n";
						}	
					if ((dia >= 23 and mes == 10) or (dia <= 21 and mes == 11)) {
	   					cout<<"\nSeu signo é "<<signo[7].nome<<"\n\nCaracterísticas de Escorpião: "<<signo[7].descricao<<"\n\nCaracterísiticas Positivas de Escorpião: "<<signo[7].caractPositivas<<"\n\nCaracterísticas negativas de Escorpião: "<<signo[7].caractNegativas<<"\n";
						}  
					if ((dia >= 22 and mes == 11) or (dia <= 21 and mes == 12)) {	
	   					cout<<"\nSeu signo é "<<signo[8].nome<<"\n\nCaracterísticas de Sagitário: "<<signo[8].descricao<<"\n\nCaracterísiticas Positivas de Sagitário: "<<signo[8].caractPositivas<<"\n\nCaracterísticas negativas de Sagitário: "<<signo[8].caractNegativas<<"\n";
						}
    				if ((dia >= 22 and mes == 12) or (dia <= 20 and mes == 01)) {
       					cout<<"\nSeu signo é "<<signo[9].nome<<"\n\nCaracterísticas de Capricórnio: "<<signo[9].descricao<<"\n\nCaracterísiticas Positivas de Capricórnio: "<<signo[9].caractPositivas<<"\n\nCaracterísticas negativas de Capricórnio: "<<signo[9].caractNegativas<<"\n";
						}
    				if ((dia >= 21 and mes == 01) or (dia <= 18 and mes == 02)) {
       					cout<<"\nSeu signo é "<<signo[10].nome<<"\n\nCaracterísticas de Aquário: "<<signo[10].descricao<<"\n\nCaracterísiticas Positivas de Aquário: "<<signo[10].caractPositivas<<"\n\nCaracterísticas negativas de Aquário: "<<signo[10].caractNegativas<<"\n";
						}
    				if ((dia >= 19 and mes == 02) or (dia <= 20 and mes == 03)) {
    					cout<<"\nSeu signo é "<<signo[11].nome<<"\n\nCaracterísticas de Peixes: "<<signo[11].descricao<<"\n\nCaracterísiticas Positivas de Peixes: "<<signo[11].caractPositivas<<"\n\nCaracterísticas negativas de Peixes: "<<signo[11].caractNegativas<<"\n";
						}
						cout<<"\n-------------------------------------------------\n";								
				}
					
				if ((significado == 'N') or (significado == 'n')) {
					cout<<"\nQual o dia que você nasceu? ";
					cin>>dia;
					cout<<"\nQual o mês que você nasceu? ";
					cin>>mes;
					cout<<"\n-------------------------------------------------\n";	
					
					if ((dia >= 21 and mes == 03) or (dia <= 20 and mes == 04)) {
						cout<<"\nSeu signo é \n"<<signo[0].nome;
					}
					if ((dia >= 21 and mes == 04) or (dia <= 20 and mes == 05)) {
						cout<<"\nSeu signo é \n"<<signo[1].nome;
					}
					if ((dia >= 21 and mes == 05) or (dia <= 20 and mes == 06)) {
						cout<<"\nSeu signo é \n"<<signo[2].nome;
					}
					if ((dia >= 21 and mes == 06) or (dia <= 22 and mes == 07)) {
						cout<<"\nSeu signo é \n"<<signo[3].nome;
					}
					if ((dia >= 23 and mes == 07) or (dia <= 22 and mes == 8)) {
						cout<<"\nSeu signo é \n"<<signo[4].nome;
					}
					if ((dia >= 23 and mes == 8) or (dia <= 22 and mes == 9)) {
						cout<<"\nSeu signo é \n"<<signo[5].nome;
					}
					if ((dia >= 23 and mes == 9) or (dia <= 22 and mes == 10)) {
						cout<<"\nSeu signo é \n"<<signo[6].nome;
					}
					if ((dia >= 23 and mes == 10) or (dia <= 21 and mes == 11)) {
						cout<<"\nSeu signo é \n"<<signo[7].nome;
					}
					if ((dia >= 22 and mes == 11) or (dia <= 21 and mes == 12)) {
						cout<<"\nSeu signo é \n"<<signo[8].nome;
					}
					if ((dia >= 22 and mes == 12) or (dia <= 20 and mes == 01)) {
						cout<<"\nSeu signo é \n"<<signo[9].nome;
					}
					if ((dia >= 21 and mes == 01) or (dia <= 18 and mes == 02)) {
						cout<<"\nSeu signo é \n"<<signo[10].nome;
					}
					if ((dia >= 19 and mes == 02) or (dia <= 20 and mes == 03)) {
						cout<<"\nSeu signo é \n"<<signo[11].nome;
					}
					cout<<"\n-------------------------------------------------\n";					
				}				
		}
		if ((escolha == 'N') or (escolha == 'n')) {
			cout<<"\nMuito obrigado pela atenção!\n";
		}
	} while ((escolha == 'S') or (escolha == 's'));	

system("pause");
}
								

