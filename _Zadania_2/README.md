## Zadania 2

### **Zadanie 1: Wprowadzenie do wskaźników**

---

- Zadeklaruj zmienną typu **`int`** i przypisz jej wartość.
- Utwórz wskaźnik do tej zmiennej.
- Zmodyfikuj wartość zmiennej za pomocą wskaźnika.
- Wypisz wartość zmiennej na dwa sposoby: bezpośrednio i przez wskaźnik.

### **Zadanie 2: Modyfikacja wartości przez funkcję**

---

- Zdefiniuj funkcję, która przyjmuje wskaźnik do zmiennej typu **`float`** i modyfikuje jej wartość (np. podwaja).
- W funkcji **`main`**, utwórz zmienną typu **`float`**, przekaż wskaźnik do tej zmiennej do funkcji, a następnie wypisz nową wartość zmiennej.

### **Zadanie 3: Użycie wskaźników w strukturach**

---

- Zdefiniuj strukturę **`Point`**, która przechowuje współrzędne punktu na płaszczyźnie (x, y).
- Napisz funkcję, która przyjmuje wskaźnik do struktury **`Point`** i zmienia jej wartości współrzędnych.
- Utwórz instancję **`Point`** i zmień jej współrzędne za pomocą funkcji, a następnie wypisz zmienione współrzędne.
- Następnie utwórz strukturę `Rectangle`
- Napisz funkcję, która przyjmuje do struktury `Rectangle` i liczy pole, obwód tej struktury.

### **Zadanie 4: Sortowanie tablicy struktur**

---

- Zdefiniuj strukturę **`Student`**, która zawiera imię (jako tablicę znaków) i ocenę końcową (jako liczbę zmiennoprzecinkową).
- Utwórz tablicę struktur **`Student`** i zainicjuj ją przykładowymi danymi.
- Napisz funkcję sortującą, która przyjmuje wskaźnik do tablicy struktur **`Student`** oraz jej rozmiar i sortuje studentów według ich ocen końcowych w porządku malejącym.
    - Możesz użyć prostego algorytmu sortowania, np. sortowania bąbelkowego.
- W funkcji **`main`**, wywołaj funkcję sortującą, a następnie wypisz posortowaną listę studentów wraz z ich ocenami. **Spróbuj użyć funkcji dla większej ilości studentów. Minimum 100.**

### **Zadanie 5: Implementacja prostej książki adresowej**

---

- Zdefiniuj strukturę **`Contact`**, która zawiera imię, nazwisko (jako tablice znaków) oraz numer telefonu (jako tablicę znaków).
- Utwórz tablicę struktur **`Contact`** i zainicjuj ją przykładowymi danymi.
- Napisz funkcje do:
    - Dodawania nowego kontaktu do książki adresowej.
    - Wyszukiwania kontaktu po nazwisku.
    - Usuwania kontaktu po nazwisku.
    - Wypisywania wszystkich kontaktów w książce adresowej.
- Aby ułatwić zarządzanie tablicą kontaktów, możesz założyć stały maksymalny rozmiar tablicy i śledzić aktualną liczbę kontaktów.
- W funkcji **`main`**, zaimplementuj prosty interfejs użytkownika pozwalający na wykonanie powyższych operacji (dodaj, znajdź, usuń, wyświetl wszystkie). ( po prostu użyj funkcji `scanf` , pytając co użytkownik chce zrobić, lub wykorzystaj [parsowanie argumentów wejściowych](https://stackoverflow.com/questions/9642732/parsing-command-line-arguments-in-c))
