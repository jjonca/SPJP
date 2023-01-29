# Laboratorium 10 

 

## Zadanie 1 

  

Napisz program, który będzie obliczał pola i obwód/objętość wybranych przez użytkownika figur geometrycznych. Kalkulator powinien uwzględniać kilka przez ciebie wybranych figur płaskich i przestrzennych. Do obliczania pól i objętości każdej figury należy zdefiniować własne funkcje w osobnych plikach oraz ich nagłówki w plikach nagłówkowych. 

  

Przykładowe figury płaskie: 

  
koło 

trójkąt 

kwadrat 

prostokąt 

trapez 

  
Przykładowe figury przestrzenne: 


graniastosłup trójkątny 

graniastosłup czworokątny 

ostrosłup trójkątny 

ostrosłup czworokątny 

kula 

stożek 

walec 

Podpowiedź: W bibliotece <math.h> znajduje się funkcja sqrt i stałą M_PI 

  

# Zadanie 2 

  

Napisz program, który będzie obsługiwał co najmniej dwie proste gry. Do wywołania gier należy zdefiniować własne funkcje w osobnych plikach oraz ich nagłówki w plikach nagłówkowych. Program powinien zawierać menu, które umożliwi wybór odpowiedniej gry.  

  

Stwórz odpowiedni plik Makefile, taki że program make skompiluje Twój program. Możesz, ale nie musisz, dodać dodatkowe możliwości tj. multiplayer, zapisywanie najlepszego wyniku (możesz poczytać o plikach binarnych), zmiany ustawień gry itp. 

  

Przykład prostych gier: 

  

Kółko i krzyżyk. Postaraj się utworzyć taki program, aby komputer grał w miarę dobrze. 

  

Kamień, papier i nożyce. Gracz gra z komputerem do 10-ciu wygranych. 

  

Komputer losuje liczbę z zakresu od 1 do 1 000 000. Zadaniem gracza jest odgadnięcie w 10 ruchach jaka to liczba. Po każdym ruchu gracz otrzymuje informacje czy wylosowana liczba jest mniejsza czy większa od tej którą podał. 

  

Gracze (człowiek i komputer) na przemian rzucają dwa razy dwiema kostkami (losowane są dwie liczby z zakresu od 1 do 6). Po pierwszym rzucie gracz próbuje zgadnąć czy w kolejnym rzucie suma oczek będzie mniejsza, większa czy taka sama. Jeśli zgadnie otrzymuje punkt. Wygra gracz, który jako pierwszy zdobędzie 10 punktów. 

  

Gracze (człowiek i komputer) na przemian podają liczbę 1 lub 2 lub 3. Wszystkie podane liczby są sumowane. Wygra gracz, który poda liczbę przy których suma wyniesie 30. Postaraj się utworzyć taki program, aby komputer grał w miarę dobrze. 

  

Podpowiedź: W celu wykonania ruchów komputera lub losowania liczb możesz użyć biblioteki <time.h> oraz funkcji rand. 
