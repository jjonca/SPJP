# Zadanie 1 

  

Napisz program, który pobierze od użytkownika liczbę i sprawdzi, czy odpowiada ona kodowi ASCII. Jeśli nie to program powinien wyświetlić odpowiedni komunikat, w przeciwnym wypadku program sprawdza czy liczba odpowiada literze alfabetu, cyfrze czy innemu znakowi ASCII. Dla liter i cyfr należy również wyświetlić ten znak. 

  

# Zadanie 2 

  

Napisz program posiadający zmienną `globalną typu int` i zmienną `lokalną (w main) typu int`. Dodatkowo napisz funkcję typu `void` która posiada argument typu `int` (można utworzyć dodatkowe argumenty wedle uznania). Funkcja powinna zmienić wartości wcześniej utworzonych zmiennych na wartość przekazaną pierwszym argumentem. 

  

# Zadanie 3 

  

Napisz program, który wczyta od użytkownika liczbę typu `int` i wypisze na ekranie `"choinkę"` wysokości odpowiadającej podanej liczbie. Wynik powinien zgadzać się z przykładem. 

  
```

Podana liczba = 6 

     * 

    * * 

   * * * 

  * * * * 

 * * * * * 

* * * * * * 

   |___| 
```
  
```

Podana liczba = 3 

  * 

 * * 

* * * 

|___| 

```  

# Zadanie 4 

  

Napisz funkcję `rekurencyjną` która dla podanej tablicy znaków i liczby `n` oznaczającej długość tablicy (i innych argumentów pomocniczych) wypisze elementy tablicy w wierszach tak aby ostatni wiersz zawierał tylko ostatni element (indeks `n-1`), przedostatni wiersz zawiera elementy o indeksach `n-3, n-2` itd. Pierwszy wypisywany wiersz może zawierać mniej elementów. 

Przykład: 
```

tablica {a, b, c, d, e, f, g, h} n=8 

ab 

cde 

fg 

h 

tablica {a, b, c, d, e, f, g, h, i, j} n=10 

abcd 

efg 

hi 

j 

```

# Zadanie 5 

  

Napisz program pełniący rolę prostego kalkulatora. Na początku program powinien poprosić użytkownika o podanie dwóch liczb rzeczywistych i działania (dodawanie, odejmowanie, mnożenie, dzielenie) i wykona to działanie na podanych liczbach. Po wykonaniu działania program powinien poprosić o następne działanie oraz jedną liczbę i wykonać odpowiednie działanie na poprzednim wyniku i nowej liczbie. Program powinien prosić o nowe liczby i zadania aż do podania działania, które nie odpowiada czterem podstawowym działaniom. 
