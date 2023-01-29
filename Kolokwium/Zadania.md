# Zadanie 1 

  

Napisz program, który pobierze od użytkownika znak `char`. Program powinien poinformować użytkownika czy podany znak jest cyfrą, literą alfabetu lub innym znakiem. Dodatkowo program powinien wyświetlić podany znak i jego kod ASCII. 

  

# Zadanie 2 

  

Napisz program posiadający zmienną `globalną typu char` i zmienną `lokalną (w main) typu char`. Dodatkowo napisz funkcję typu `void` która posiada argument typu `char` (można utworzyć dodatkowe argumenty wedle uznania). Funkcja powinna zmieniać wartości wcześniej utworzonych zmiennych na wartość przekazaną pierwszym argumentem. 

  

# Zadanie 3 

  

Napisz program, który wczyta od użytkownika liczbę typu `int` i wypisze na ekranie `"wzór"` wysokości odpowiadającej podanej liczbie. Wynik powinien zgadzać się z przykładem. 

  
```
Podana liczba = 6 

     oxxxxx 

    xoxxxx 

   xxoxxx 

  xxxoxx 

 xxxxox 

xxxxxo 

Podana liczba = 3 

  oxx 

 xox 

xxo 
``` 

# Zadanie 4 

  

Napisz funkcję `rekurencyjną` która dla podanej tablicy cyfr i liczby `n` oznaczającej długość tablicy (i innych argumentów pomocniczych) wypisze elementy tablicy w wierszach tak aby ostatni wiersz zawierał tylko ostatni element (indeks `n-1`), przedostatni wiersz zawiera elementy o indeksach `n-2, n-3` itd. Pierwszy wypisywany wiersz może zawierać mniej elementów. 

Przykład: 

```  

tablica {1, 2, 3, 4, 5, 6, 7, 8} n=8 

21 

543 

76 

8 

tablica {1, 2, 3, 4, 5, 6, 7, 8, 9, 0} n=10 

4321 

765 

98 

0 

 ``` 

# Zadanie 5 

  

Napisz program pełniący rolę prostego kalkulatora. Na początku program powinien poprosić użytkownika o podanie dwóch bitów i działania (AND, OR, NAND, NOR) i wykona to działanie na podanych liczbach. Po wykonaniu działania program powinien poprosić o następne działanie oraz jeden bit i wykona odpowiednie działanie na poprzednim wyniku i nowej liczbie. Program powinien prosić o nowe bity i zadania aż do podania działania, które nie odpowiada czterem podstawowym działaniom. (Uwaga bit można reprezentować jako `int` o wartości 0 lub 1, zakładamy podanie poprawnych danych) 

  

  
