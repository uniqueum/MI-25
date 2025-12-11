//Komplilieren mit g++

#include <stdio.h>
#include <stdlib.h>

typedef struct Ele {
	Ele* next;
	float payload;
} Ele;

void output(Ele*);

Ele* last(Ele*);

void append(Ele*, float);

void deleteLast(Ele*);

void deleteEle(Ele*, Ele*);

void concat(Ele*, Ele*);

void insertAfter(Ele*, Ele*, Ele*);

void insertBefore(Ele*, Ele*, Ele*);

int main(int argc, char** argv) {

	//Listen-Variablen anlegen
	Ele* liste1 = NULL;
	Ele* liste2 = NULL;

	//Elemente initialisieren
	Ele* e1 = (Ele*)malloc(sizeof(Ele));
	e1->payload = 1.;

	Ele* e2 = (Ele*)malloc(sizeof(Ele));
	e2->payload = 2.;

	Ele* e3 = (Ele*)malloc(sizeof(Ele));
	e3->payload = 3.;


	Ele* e21 = (Ele*)malloc(sizeof(Ele));
	e21->payload = 1.;

	Ele* e22 = (Ele*)malloc(sizeof(Ele));
	e22->payload = 2.;

	Ele* e23 = (Ele*)malloc(sizeof(Ele));
	e23->payload = 3.;

	//Listen-Variable ist einfach erstes Element
	liste1 = e1;

	liste2 = e21;

	//Next-Werte der Elemente definieren
	e1->next = e2;
	e2->next = e3;
	e3->next = NULL;

	e21->next = e22;
	e22->next = e23;
	e23->next = NULL;


	output(liste1);
	printf("\n");

	deleteLast(liste1);
	output(liste1);
	printf("\n");

	deleteLast(liste1);
	output(liste1);
	printf("\n");

	deleteLast(liste1);
	output(liste1);

/*
	//Listen-Operationen ausführen
	printf("Liste 1 ausgeben:\n");
	output(liste1);

	printf("\nLetztes Element ausgeben:\n");
	Ele* lastele = last(liste1);
	if(lastele) printf("%f\n", lastele->payload);
	else printf("Liste ist leer!\n");

	printf("\nElement 4 an die Liste anhängen:\n");
	append(liste1, 4.);
	output(liste1);

	printf("\nLetztes Element löschen:\n");
	deleteLast(liste1);
	output(liste1);

	printf("\nElement 2 löschen:\n");
	deleteEle(liste1, e2);
	output(liste1);

	printf("\nListe 2 ausgeben:\n");
	output(liste2);

	printf("\nListe 1 und 2 konkatinieren:\n");
	concat(liste1, liste2);
	output(liste1);

	printf("\nNeues Element nach Element 4 einfügen:\n");
	Ele* enew = (Ele*)malloc(sizeof(Ele));
	enew->payload = 5.;
	enew->next = NULL;
	insertAfter(liste1, e22, enew);
	output(liste1);

	printf("\nNeues Element vor Element 3 einfügen:\n");
	Ele* enew2 = (Ele*)malloc(sizeof(Ele));
	enew2->payload = 6.;
	enew2->next = NULL;
	insertBefore(liste1,e21, enew2);
	output(liste1);
*/
	return 0;
}

//Gibt alle Elemente der Liste aus
void output(Ele* list) {

	if (list == NULL) {
		printf("Liste ist leer!");
		return;
	}

	Ele* iterator = list;
	while (iterator != NULL) {
		printf("%f\n", iterator->payload);
		iterator = iterator->next;
	}
}

//Aufgabe 1: Gibt letztes Element der Liste zurück
Ele* last(Ele* list) {

	//Wenn Liste NULL ist, einfach NULL zurückgeben
	if (list == NULL) return NULL;

	//Per Schleife über alle Elemente der Liste iterieren, solange das nächste(!) Element des Iterators nicht NULL ist
	Ele* iterator = list;
	while (iterator->next != NULL) {
		iterator = iterator->next;
	}

	//Wenn die Schleife endet, ist das Iterator-Element das letzte Element der Liste (da iterator->next NULL ist)
	return iterator;
}

//Aufgabe 2: Hängt Element an das Ende der Liste an
void append(Ele* list, float value) {

	//Neues Element erstellen
	Ele* e = (Ele*)malloc(sizeof(Ele));
	e->payload = value;
	e->next = NULL;

	//Letztes Element der Liste holen
	Ele* lastele = last(list);

	//Neues Element an letztes Element anhängen
	lastele->next=e;
}

//Aufgabe 3: Löscht letztes Element der Liste
void deleteLast(Ele* list) {

	if (list == NULL) return;

	Ele* iterator = list;
	Ele* prev = list;

	//Über Liste iterieren bis zum letzten Element
	while (iterator->next != NULL) {
		//Vor jedem Schleifendurchlauf letztes Iterator-Element Speichern
		prev = iterator;
		iterator = iterator->next;
	}

	//Next-Wert des vorletzten Elementes auf Null setzen (--> Listenende)
	prev->next = NULL;

	//Letztes Element löschen
	free(iterator);
	iterator = NULL;
}

//Aufgabe 4: Löscht spezifisches Element
void deleteEle(Ele* list, Ele* item) {

	if (list == NULL || item == NULL) return;

	Ele* iterator = list;
	Ele* prev = list;

	//Über alle Elemente der Liste iterieren (inkl. letztes Element)
	while (iterator != NULL) {

		if (iterator == item) {
			//Element wurde gefunden
			//Next-Pointer des vorherigen Elements auf nächstes Element des zu löschenden Elements setzen
			prev->next = iterator->next;

			//Element löschen
			free(iterator);
			iterator == NULL;

			return;
		}

		prev = iterator;
		iterator = iterator->next;
	}

	//Ist das Ende der Liste erreicht, wurde das Element nicht gefunden
	printf("Element nicht gefunden.\n");
}

//Aufgabe 5: Verkettet 2 Listen
void concat(Ele* list1, Ele* list2) {
	//Letztes Element von Liste 1 holen
	Ele* lastele = last(list1);

	//Erstes Element von Liste 2 als Next-Pointer vom letzten Element von Liste 1 setzen
	lastele->next = list2;
}


//Aufgabe 6: Fügt neues Element nach bestimmtem Element in Liste ein
void insertAfter(Ele* list, Ele* ref, Ele* item) {

	Ele* iterator = list;

	//Schleife wie oben (nur ohne prev-Element)
	while (iterator != NULL) {

		if (iterator == ref) {
			//Next-Pointer des neuen Elements auf nächstes Element des Iterators setzen
			item->next = iterator->next;

			//Next-Pointer des Iterators auf eues Element setzen
			iterator->next = item;

			return;
		}

		iterator = iterator->next;
	}

	printf("Element nicht gefunden.\n");
}

//Aufgabe 7: Fügt neues Element vor bestimmtem Element in Liste ein
void insertBefore(Ele* list, Ele* ref, Ele* item) {

	Ele* iterator = list;
	Ele* prev = list;

	//Schleife wie oben
	while (iterator != NULL) {

		if (iterator == ref) {
			//Next-Pointer der vorherigen Elements auf neues Element setzen
			prev->next = item;

			//Next-Pointer des neuen Elements auf Iterator setzen.
			item->next = iterator;

			return;
		}

		prev = iterator;
		iterator = iterator->next;
	}

	printf("Element nicht gefunden.\n");
}
