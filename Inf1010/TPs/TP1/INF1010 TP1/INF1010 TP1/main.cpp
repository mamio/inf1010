/* Fichier: main.cpp
 Noms:
 Date de crÈation: 10 Janvier 2013
 Date de modification:
 Description: Programme de gestion des Coffrets de films. Permet de regrouper
   		   plusieurs Coffrets en Videotheque
*/

#include <iostream>
#include <string>
#include "Film.h"
#include "Date.h"
#include "Coffret.h"
#include "Videotheque.h"

using namespace std;

int main()    

{
    
    //1) Créer un objet Film(unFilm) avec constructeur par défaut ;
    
	Film unFilm;

    //2) Création d'un objet Film (unAutreFilm) avec constructeur par paramètre
    //Utiliser les arguments suivants : id = 2, titre = "Tentation (New Moon)", description = "Il s'agit du deuxième volet de l'adaptation cinématographique de la série de romans de Stephenie Meyer" duree 120, Date: 1/1/2010
	
    Film unAutreFilm(2, "Tentation (New Moon)", "Il s'agit du deuxième volet de l'adaptation cinématographique de la série de romans de Stephenie Meyer", 120, 1,1,2010);

    //3) Modifier tous les attributs du Film créée dans 1) ;
    //utilisant les arguments suivants: id =1 titre = "Fascination (Twilight)", description = "Fascination est le premier roman de la saga twilight"  et duree = 120, Date: 12/10/2009
	Date date;
	unFilm.setId(1);
    unFilm.setTitre("Fascination (Twilight)");
    unFilm.setDescription("Fascination est le premier roman de la saga twilight");
    unFilm.setDuree(120);
    unFilm.setDate(date);
	date.setJ(12);
	date.setM(10);
	date.setA(2009);

    //4) Allouer dynamiquement un Film utilisant le constructeur par défaut ;
    //nom de l'objet : (unFilmDynamique)
    Film* unFilmDynamique = new Film;
    
    
    //5) Allouer dynamiquement une Film utilisant le constructeur par paramètres ;
    //Utiliser les arguments suivants : id = 4 ,titre = "Twilight, chapitre IV : Révélation", description = "Le mariage tant attendu a lieu"et 120, , Date: 1,1,2013

    Film* unAutreFilmDynamique = new Film(4, "Twilight, chapitre IV : Révélation", "Le mariage tant attendu a lieu", 120, 1,1,2013);
    
    //6) Modifier les attributs de Film créée dans 4) ;
    //Appel des fonctions de modification l'objet unFilmDynamique
    //Utiliser les arguments suivants :id = 3, titre = "Twilight, chapitre III : Hésitation", desciption = "La famille Cullen est de retour à Forks" et duree = 120, Date: 2/3/2012

    unFilmDynamique->setId(3);
    unFilmDynamique->setTitre("Twilight, chapitre III : Hésitation");
    unFilmDynamique->setDescription("La famille Cullen est de retour à Forks");
    unFilmDynamique->setDuree(120);
    unFilmDynamique->setDate(date);
	date.setJ(2);
	date.setM(3);
	date.setA(2012);
    
    cout<<endl<<"***************Affichage des attributs de unFilmDynamique***************"<<endl;
    
    //7) Afficher les informations du Film créée dans 4) ;
    
    unFilmDynamique->afficheInfo();

    //8) Allouer dynamiquement un tableau de 4 Films ;

    Film* tableauFilm = new Film[4];

    //9) Remplir le tableau crée dans 8) avec les Films créées précédemment* ;

   	 tableauFilm[0] = unFilm;
   	 tableauFilm[1] = unAutreFilm;
   	 tableauFilm[2] = *unFilmDynamique;
   	 tableauFilm[3] = *unAutreFilmDynamique;

    
    cout<<endl<<"***************affichage du tableau de Films***************"<<endl;

    //10) Afficher les informations des Films du tableau ;    

    for (int i = 0; i<4; i++)
   		tableauFilm[i].afficheInfo();
	
    // //11) Créer un objet Coffret (CoffretSagaTwilight)
    //Utiliser l'id = 1 et le titre "Saga Twilight", Date:10/12/2012
    


	Coffret CoffretSagaTwilight(1,"Saga Twilight",10,12,2012);
    

    //12) Ajouter les Films du tableau dans le Coffret ;
    //Copier les Films contenues dans le tableau tableauFilm
    //dans l'Coffret CoffretSagaTwilight
        
	for(int i = 0; i<4; i++)
		CoffretSagaTwilight.ajouterFilm(tableauFilm[i]);
     //13 creer 7 autres coffrets de votre choix avec les films de votre choix(pour simplifier les choses, deux film par coffret)
    
    Coffret CoffretSagaBatman(2, "Saga Batman", 16, 1, 2013);
	Film BatmanLeCommencement(5, "Batman, le commencement", "Le premier film de la serie du chevalier noir. Bruce Wayne devient le legendaire Batman", 136,13,7,2008);
	Film LeChevalierNoir(6, "Le Chevalier Noir", "Le deuxieme film de la serie du chevalier noir. Batman combat le Joker", 152, 30 ,9 ,2010);
	CoffretSagaBatman.ajouterFilm(BatmanLeCommencement);
	CoffretSagaBatman.ajouterFilm(LeChevalierNoir);

	Coffret CoffretSagaAvengers(3, "Saga Avengers", 16, 1, 2013);
	Film Thor(7, "Thor", "L'Asgardien Thor est exile sur Terre par jugement divin et doit retrouver ses pouvoirs", 130, 25, 12, 2012 );
	Film Avengers(8, "Avengers","Une equipe de super-heros disfonctionelle est montee pour proteger la terre d'une attaque extra-terrestre", 165, 28, 6, 2012);
	CoffretSagaAvengers.ajouterFilm(Thor);
	CoffretSagaAvengers.ajouterFilm(Avengers);
	
	Coffret CoffretSagaIronMan(4,"Saga Iron Man",16,1,2013);
	Film IronMan(9, "Iron Man","M. Stark doit s'evader d'une base de terroriste en construisant des armes",142,6,5,2009);
	Film IronManII(10, "Iron Man II","Une equipe de super-heros disfonctionelle est montee pour proteger la terre d'une attaque extra-terrestre",153,7,12,20120);
	CoffretSagaAvengers.ajouterFilm(IronMan);
	CoffretSagaAvengers.ajouterFilm(IronManII);

	Coffret CoffretSagaSpiderMan(5,"Saga Spider Man",16,1,2013);
	Film SpiderMan(11, "Spider Man","Peter Parker decouvre ses pouvoirs apres une morsure d'araignee",115,13,11,2007);
	Film SpiderManII(12, "Spider Man II","Peter Parker doit arreter un scientifique d'effectuer une experience dangereuse",120,18,9,2009);
	CoffretSagaSpiderMan.ajouterFilm(SpiderMan);
	CoffretSagaSpiderMan.ajouterFilm(SpiderManII);
	
	Coffret CoffretSagaHarryPotter(6,"Saga Harry Potter",16,1,2013);
	Film LaPierrePhilosophale(13, "La Pierre Philosophale","Harry Potter et ses amis tentent d'empecher un individu dangereux de trouver une pierre magique",115,5,5,2006);
	Film LaChambreDesSecrets(14, "La chambre des secrets","Harry et ses amis tentent de comprendre pourquoi des gens sont changes en pierre",123,1,2,2007);
	CoffretSagaHarryPotter.ajouterFilm(LaPierrePhilosophale);
	CoffretSagaHarryPotter.ajouterFilm(LaChambreDesSecrets);

	Coffret CoffretSagaLotR(7,"Saga Lord of the Rings",16,1,2013);
	Film LaCommunauteDeLanneau(15, "La Communaute de l'Anneau","La compagnie de l'anneau est formee et l'aventure les mene dans les mines de la moria",171,14,5,2008);
	Film LesDeuxTours(16, "Les Deux Tours","La communaute est divisee alors qu'elle defend le Rohan et voyage vers le Mordor",197,7,2,2009);
	CoffretSagaLotR.ajouterFilm(LaCommunauteDeLanneau);
	CoffretSagaLotR.ajouterFilm(LesDeuxTours);
	
	Coffret CoffretSagaIceAge(8,"Saga Ice Age",16,1,2013);
	Film IceAge(17, "Ice Age", "Un groupe d'animaux prehistoriques doivent retrouve les parents d'un bebe humain", 97, 27, 5, 2009);
	Film IceAgeII(18, "Ice Age II", "La horde doit se mettre a l'abris alors qu'un deluge menace les terres", 93, 7, 2, 2011);
	CoffretSagaIceAge.ajouterFilm(IceAge);
	CoffretSagaIceAge.ajouterFilm(IceAgeII);

    cout<<endl<<"***************Afficher les Films d'un Coffret***************"<<endl;
    
    //14 Afficher les film du premier coffret crée
    
	CoffretSagaBatman.afficheCoffret();

    // 15) Créer un objet Videotheque ;
    //Creation d'une Videotheque (maVideotheque)

	Videotheque maVideotheque;
    
 
    //16) Ajouter tous les coffrets crées précédemment à la Videotheque
	
	maVideotheque.ajouterCoffret(CoffretSagaTwilight);
	//maVideotheque.ajouterCoffret(CoffretSagaBatman);
	maVideotheque.ajouterCoffret(CoffretSagaAvengers);
	//maVideotheque.ajouterCoffret(CoffretSagaSpiderMan);
	//maVideotheque.ajouterCoffret(CoffretSagaIronMan);
	//maVideotheque.ajouterCoffret(CoffretSagaHarryPotter);
	//maVideotheque.ajouterCoffret(CoffretSagaLotR);
	//maVideotheque.ajouterCoffret(CoffretSagaIceAge);
	
    cout<<endl<<"*******Afficher Coffrets et Films de la Videotheque*******"<<endl;

	
    
    //17) Afficher les titres et les informations de tous les films de tous les Coffrets de la Videotheque ;
    
maVideotheque.AfficherInfo();

	return 0;
}
