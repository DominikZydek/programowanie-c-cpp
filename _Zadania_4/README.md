# Zadania 4

## Zadanie 1

### Silnia

**Cel:** Zdefiniuj nową funkcję o nazwie `factorial()`, która obliczy czynnik przez rekurencyjne mnożenie (5! = 5 x 4 x 3 x 2 x 1). Zauważ, że zgodnie z konwencją, czynnik 0 jest równy 1 (0! = 1).

## Zadanie 2

### **Rekurencyjne wyszukiwanie binarne**

**Cel:** Napisz funkcję rekurencyjną w języku C, która wykonuje wyszukiwanie binarne w posortowanej tablicy. Funkcja powinna zwracać indeks szukanego elementu lub wartość **`-1`**, jeśli element nie zostanie znaleziony w tablicy.

**Wymagania:**

1. Funkcja powinna przyjmować jako argumenty tablicę (wskaźnik na pierwszy element), lewy indeks, prawy indeks oraz wartość szukanego elementu.
2. Wyszukiwanie binarne polega na podziale tablicy na dwie części i sprawdzeniu, czy szukany element znajduje się w lewej czy prawej połowie tablicy, a następnie rekurencyjnym powtórzeniu procesu dla odpowiedniej części.
3. Pamiętaj, aby tablica była posortowana przed przystąpieniem do wyszukiwania.

## Zadanie 3

### **Generowanie wszystkich permutacji ciągu**

**Cel:** Napisz program w języku C, który generuje wszystkie permutacje danego ciągu (np. ciągu liczb). Program powinien używać rekurencji do generowania permutacji i wyświetlać każdą permutację na ekranie.

**Wymagania:**

1. Funkcja powinna przyjmować jako argumenty ciąg (tablicę) oraz dwa indeksy: początkowy (zazwyczaj **`0`**) i końcowy (długość ciągu minus **`1`**).
2. Algorytm powinien rekurencyjnie zamieniać elementy miejscami, aby wygenerować wszystkie możliwe permutacje ciągu.
3. Po wygenerowaniu permutacji, funkcja powinna wyświetlić ją, a następnie kontynuować generowanie kolejnych permutacji, aż do wyczerpania możliwości.
4. Ważne jest, aby unikać powtarzania tych samych permutacji, jeśli ciąg zawiera powtarzające się elementy.
