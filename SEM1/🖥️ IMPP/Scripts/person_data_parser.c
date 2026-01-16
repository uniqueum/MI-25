#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define PERS 20

typedef struct
{
	char Vorname [50];
	char Name [100];
	char Phone [20]; 
	char Land [4];
} 
PERSON;
// Wie viele Bytes belegt ein Eintrag?
int sp = sizeof(PERSON); 
PERSON p[PERS]; //statisches Array of Struct
// Prototypen
void print(PERSON*, int);
void binary(PERSON*, int);
void bubble_person_land(PERSON *, int);
void bubble_person_name(PERSON *, int);
int XML(PERSON *, int);

int main() {
	puts("Parser Aufgabe 2.10 Karl Kuhne");
	int i, anz=0;
	//String zerteilen: Parser
	char string[MAX]; // Format der Eingabe  "Kurt,Kanns;555678;DE";
	char delimiter[] = ",; ";
	char *ptr;
	//CSV-Datei 
	FILE *file = 
	fopen("C:\\Users\\karlk\\Dokumente\\DHSN\\dhsn-notes\\SEM1\\Scripts\\Elena.txt", "r"); 
	if (file == NULL) {
	       printf("Ich kann die Quell-Datei nicht oeffnen.\n");
	       return -1;
	}
	// zeilenweise aus der Datei einlesen und parsen
	while (fgets(string, MAX, file) != NULL) {
	       printf("Es wurde eingelesen: %s", string);
	
		// initialisieren und ersten Abschnitt erstellen
		i=0;
		ptr = strtok(string, delimiter);
		while(ptr != NULL) 
		{
			printf("%d.Abschnitt gefunden: %s\n", ++i, ptr);
			// befuelle Struktur
			switch (i) 
			{
				case 1: 
					strcpy(p[anz].Vorname, ptr);
					break;
				case 2: 
					strcpy(p[anz].Name, ptr);
					break;
				case 3: 
					strcpy(p[anz].Phone, ptr);
					break;
				case 4: 
					strcpy(p[anz].Land, ptr);
					break;
			}
			// naechsten Abschnitt erstellen
			ptr = strtok(NULL, delimiter);
		}//strtok
		anz++;
	}//FILE
	puts("");
	if (feof(file)) {
       printf("End of file reached.\n");
   } else if (ferror(file)) {
       printf("An error occurred.\n");
   }

    fclose(file);
	puts("Unsortiertes array of struct");
	// drucke anz Elemente aus dem Array of Struct	
	print(p, anz);
	
	puts("\nSortiertes array of struct");
	bubble_person_name(p, anz);
	print(p, anz);
	//erstelle XML-Datei
	XML(p, anz);
	// speichere in die Binaer-Datei
	binary(p, anz);
	
	return 0;
}

// drucke anz Elemente aus dem Array of Struct a
void print(PERSON* a, int anz) {
	int i;
	puts("Drucke die Eintraege:");
	for(i=0; i<anz; i++)
	{
		printf("%d.Eintrag:\n", i+1);
		puts(a[i].Vorname);
		puts(a[i].Name);
		puts(a[i].Phone);
		puts(a[i].Land);
	}
}

// speichere Array als Binary-File
void binary(PERSON *arr, int anz) 
{
	FILE *f;
	printf("\nSpeichere Array mit der Adresse %p mit %d Eintraegen als Binaerdatei...\n", arr, anz);
	f = fopen ("F:\\2025\\IMPPR-10\\Musterl�sungen_2023\\Elena.BIN", "wb");
	fwrite(arr, sp, anz, f);
	fclose(f);
}

//Bubble-Sort Array of Struct nach dem Land
void bubble_person_land(PERSON *A, int Grenze)
{
	int n, i; 
	PERSON tmp;
	puts("Sortiere nach dem Land und BubbleSort-Verfahren das Array of Struct...");
	for (n = Grenze; n > 1; n = n - 1) 
	{ // äußere Schleife
		for (i = 0; i < n - 1; i = i + 1) 
		{ // innere Schleife
			if (strcmp(A[i].Land , A[i + 1].Land)>0) //Swapping-> Elemente werden umgestellt
			{
				//A.swap(i, i + 1)
				tmp = A[i];
				A[i] = A[i+1];
				A[i+1] = tmp;
			}//if
		}//i
	}//n
}

//Bubble-Sort Array of Struct nach dem Name
void bubble_person_name(PERSON *A, int Grenze)
{
	int n, i; 
	PERSON tmp;
	puts("Sortiere nach dem Namen und BubbleSort-Verfahren das Array of Struct...");
	for (n = Grenze; n > 1; n = n - 1) 
	{ // äußere Schleife
		for (i = 0; i < n - 1; i = i + 1) 
		{ // innere Schleife
			if (strcmp(A[i].Name , A[i + 1].Name)>0) //Swapping-> Elemente werden umgestellt
			{
				//A.swap(i, i + 1)
				tmp = A[i];
				A[i] = A[i+1];
				A[i+1] = tmp;
			}//if
		}//i
	}//n
}

//Ausgabe in XML-Format ASCII-Datei
int XML(PERSON *array, int anz)
{
	FILE *fp;
	int i;
	char fn[] = "C:\\Users\\karlk\\Dokumente\\DHSN\\dhsn-notes\\SEM1\\Scripts\\Elena.XML";
	fp = fopen(fn, "w");
	if(fp == NULL) 
	{
		printf("Datei %s konnte NICHT geoeffnet werden.\n", fn);
		return -2;
	}
	for (i=0; i<anz; i++) {
		if(array[i].Name) //Eintrag existiert
		{
			fprintf (fp, "<PERSON># %d\n", i+1);
			fprintf (fp, "   <NAME>%s</NAME>\n", array[i].Vorname);
			fprintf (fp, "   <SURNAME>%s</SURNAME>\n", array[i].Name);
			fprintf (fp, "   <PHONE>%s</PHONE>\n", array[i].Phone);
			fprintf (fp, "   <STATE>%s</STATE>\n", array[i].Land);
			fprintf (fp, "</PERSON>\n");
		}
	}
	printf("Datei %s wurde erstellt.\n", fn);
}
