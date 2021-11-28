# TP4-informatique
TP 4
Allocation dynamique de mémoire
Exercice 1 : tabulation d’un polynôme

1. Écrivez un programme nommé exo1.c permettant de calculer et stocker en mémoire les
différentes valeurs d’un polynôme dans un intervalle donné.
1. Le programme prend comme paramètres d’entrée les limites de l’intervalle dans lequel on
souhaite calculer les valeurs du polynôme, le nombre de points souhaités ainsi que les
coefficients du polynôme en commençant par le terme constant suivi des coefficients des
termes en x, x², x³, … Le nombre de paramètre détermine donc l’ordre du polynôme.
exemple : ./exo1 -1 2 51 1 2 3 calcule les valeurs du polynôme y=1+2x+3x² pour x allant de
-1 à 2 en 51 pas.
2. Il faut pour cela allouer au moins deux blocs de mémoire permettant de stocker n couples de
valeurs en double précision. Le premier bloc mémoire contiendra les valeurs de x alors que
le second contiendra les valeurs de y correspondantes.
3. Le résultat sera affiché sur le terminal en respectant le format CSV, c’est-à-dire que chaque
ligne affichée devra correspondre à un couple (x,y)
ex :
1.0 , 0.0
1.5 , 1.0
2.0 , 1.4
…
2. Créez un fichier makefile avec une recette exo1 permettant de produire l’exécutable exo1.
3. Testez votre programme avec quelques polynômes simples sur quelques points. Il sera ensuite
possible de tester et vérifier le résultat sur un grand nombre de points en redirigeant la sortie
standard vers un fichier portant l’extension .csv que l’on pourra finalement ouvrir avec un
tableur pour tracer le polynôme.

Exercice 2 : lecture et traitement d’un ensemble dedonnées de taille inconnue

1. Écrivez un programme nommé exo2.c permettant de lire un ensemble de données de taille a
priori inconnue contenu dans un fichier au format CSV.
1. Les données sont enregistrées au format CSV avec, en première colonne la date et, en
seconde colonne, la température exprimée en Kelvin (relevés Météo France d’Entzheim). Le
nom du fichier d’entrée sera passé en paramètre.
2. Le programme devra dans un premier temps allouer un bloc de mémoire de petite taille (par
exemple 256 données). Les données seront ensuite lues et enregistrées dans ce bloc
mémoire jusqu’à ce qu’il soit rempli ou que l’on rencontre la fin de fichier. Si le bloc
mémoire est rempli mais que la fin de fichier n’est pas atteinte, le programme devra étendre
le bloc initialement alloué (256 données de plus) pour pouvoir continuer la lecture. On
utilisera pour cela la fonction realloc de stdlib.
3. Le programme devra afficher sur le terminal le nombre de lignes lues, le nombre d’éléments
alloués ainsi que le taux d’occupation (rapport entre la quantité mémoire utilisée et la
quantité de mémoire allouée).
2. Complétez votre fichier makefile avec une recette exo2 permettant de produire l’exécutable
exo2 et testez votre programme.

Exercice 3 : Statistiques

1. Écrivez un programme nommé exo3.c permettant de lire les données du fichier fourni et d’en
tirer des statistiques.
1. Le nom du fichier d’entrée sera passé en paramètre. Les données produites seront imprimées
sur la sortie standard au format CSV et pourront être redirigées vers un fichier pour enfin
être importées dans un tableur et les visualiser.
2. On pourra par exemple calculer :
1. La température moyenne de chaque année et générer un tableau montrant l’évolution de
la température moyenne d’année en année.
2. Les températures minimales, maximales et moyenne de chaque année et générer un
tableau montrant l’évolution de ces températures d’année en année.
3. La température moyenne d’un mois en particulier (numéro du mois en paramètre) de
chaque année et générer un tableau montrant l’évolution de la température moyenne de
ce mois d’année en année.
