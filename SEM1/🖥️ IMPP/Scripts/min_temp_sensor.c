#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200

int main() {
    char string[MAX];
    char delimiter[] = " ,";
    char *ptr;

    FILE *file = fopen("C:\\Users\\karlk\\Dokumente\\DHSN\\dhsn-notes\\SEM1\\Scripts\\temps_2026_01_07.log", "r"); // Mac: /Users/karlkuhne/Documents/DHSN/dhsn-notes/SEM1/Scripts/temps_2026_01_07.log
    if (file == NULL) {
        fprintf(stderr, "Ich kann die Quell-Datei nicht oeffnen.\n");
        return -1;
    }

    while (fgets(string, MAX, file) != NULL) {
        string[strlen(string) - 1] = 0; // /n entfernen
        ptr = strtok(string, delimiter);

        int i = 0;
        int currentHours, currentMinutes, lowSensor;
        float currentTemp, lowTemp;
        while (ptr != NULL) {
            i++;
            switch(i) {
                case 1:
                    printf("Uhrzeit: %s\n", ptr); // hat die Form HH:MM:
                    sscanf(ptr, "%d:%d:", &currentHours, &currentMinutes);
                    break;
                default:
                    printf("Temperatur %d: %s\n", i-1, ptr);
                    currentTemp = atof(ptr); // String in float umwandeln
                    if (currentTemp < lowTemp) {
                        lowTemp = currentTemp;
                        lowSensor = i - 1;
                    }
                    break;
            }
            // naechsten Abschnitt erstellen
            ptr = strtok(NULL, delimiter);
        }
        printf("Die niedrigste gemessene Temperatur um %02d:%02d Uhr: %.2f Grad (gemessen von Sensor %d)", currentHours, currentMinutes, lowTemp, lowSensor);
        puts("");
        puts("");
    }
    fclose(file);
}