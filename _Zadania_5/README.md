# Zadania 5

## Zadanie 1

**Cel:** Dodawanie elementu na początek listy (add_first)
Aby dodać element na początek listy, musimy wykonać następujące czynności:

- Utworzyć nowy element i ustawić jego wartość
- Powiązać nowy element, aby wskazywał na początek listy
- Ustawić nagłówek listy jako nasz nowy element
- Spowoduje to utworzenie nowego nagłówka listy z nową wartością i powiązanie z nim pozostałej części listy.

## Zadanie 2

**Cel:** Usuwanie pierwszego elementu (pop)

Aby usunąć pierwszy element, musimy w zasadzie zrobić to samo co przy pushu natomiast na odwrót

## Zadanie 3

**Cel:** Usuwanie ostatniego elementu z listy (remove_last)

Usuwanie ostatniego elementu z listy jest bardzo podobne do dodawania go na koniec listy, ale z jednym dużym wyjątkiem - ponieważ musimy zmienić jeden element przed ostatnim elementem, musimy spojrzeć dwa elementy do przodu i sprawdzić, czy następny element jest ostatnim na liście:

## Zadanie 4

**Cel:** Usuwanie konkretnego elementu z listy (remove_by_index)

Aby usunąć konkretny element z listy, albo według jego indeksu od początku listy, albo według jego wartości, będziemy musieli przejść przez wszystkie elementy, ciągle patrząc do przodu, aby dowiedzieć się, czy dotarliśmy do węzła przed elementem, który chcemy usunąć. Wynika to z faktu, że musimy zmienić lokalizację na miejsce, na które wskazuje również poprzedni węzeł.

## Zadanie 5

**Cel:** Usuwanie pierwszego elementu z określoną wartością

## Zadanie 6

**Cel**: Dodawanie elementu na określonym indeksie
