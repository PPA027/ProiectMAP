# ProiectMAP

Proiectul consta din rezolvarea problemei Turnurile din Hanoi. Varianta clasica a jocului dispune 3 tije. Pe cea mai din stanga tija avem un numar n de discuri (numarul clasic este 3) suprapuse in ordine de sus de la cel mai mic la cel mai mare.
Scopul Problemei este de a muta toate discurile de pe tija 1 pe tija 3 cu regula ca nu putem avea un disc mai mare peste un disc mai mic. Rezolvarea problemei este relativ usoara, ne putem folosi de tija 2 ca un intermediar pentru a elibera discurile mai mari
de jos in timp ce tija 3 ramane libera pentru a putea muta tija cea mai mare. Aceasta regula simplificata va fuctiona pentru orice numar de discuri, singurul lucru ce difera este numarul de pasi care vor fi necesari. Varianta clasica necesita minimum 7 mutari
daca nu va exista greseala umana iar regula generala este 2^n - 1 pentru discuri mai multe, n fiind numarul de discuri. Alt lucru ce trebuie mentionat este ca la fiecare pas putem muta un singur disc.

Proiectul este rezolvat in C++. Prin cod asiguram eliminarea erorii umane deoarece mereu va urma pasul corect, spre deosebire de alte alt joc cum ar fi sah unde nu exista un anumit pas ci mai degraba un sir de pasuri corecte care se schimba dinamic in functie
de ce alege adversarul unde este necesar un engine. Am implementat o functie recursiva ce primeste ca parametrii : n - numarul de discuri, a - tija a, b - tija b, c - tija c si un nr caruia i se va returna adresa pentru a vedea numarul de mutari.

Prima oara verificam daca n este 1. Pe acesta ramura se intra daca am citit un singur disc unde singura varianta este sa mutam discul pe tija c sau daca suntem la ultimul pas dupa ce am executat un numar de pasi, ultimul pas fiind mereu acelasi. Mai exact
mutam cel mai mic disc pe tija 3. Tot in aceasta verificare incrementam numarul de pasi.

Apoi urmeaza apelul recusriv unde daca avem mai mult de un disc functia se apeleaza recusriv de doua ori. Primul apel muta n-1 discuri de pe tija a pe tija b folosind c ca o tija auxiliara. Al doilea apel recusriv le schimba pozitiile si avem n-1 discuri mutate
de pe tija b pe tija c folosind tija a ca auxiliar. Dupa apeluri incrementam nr pentru numarul de mutari. Dupa primul apel printam mutarea ca sa putem vedea dupa fiecare apel schimbarile.

In main citim N pentru numarul de discuri si nr care va lua valoarea numerelor dupa apelul functiei. Apelam functia cu simple caractere 'A' , 'B' , 'C' ca sa denumim tijele, iar apoi printam printam numarul de pasi dupa ce toate mutarile au avut loc.

"Bilbiografie" : pentru vizualizare si sa inteleg cum se joaca: https://www.mathsisfun.com/games/towerofhanoi.html
                 pentru implementare: https://www.youtube.com/watch?v=YstLjLCGmgg
