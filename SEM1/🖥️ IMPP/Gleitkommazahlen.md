
>__Formel__: $\text{Zahl} = (-1)^V \times M \times 2^E$

## Beispiel 1: Wie wird die Gleitkommazahl -6.5 abgespeichert?

__Vorzeichenbit__
1 (weil negatives Vorzeichen)

__Mantisse__

1) $6.5_{10}$ ist in Binärcode $110.1_2$
2) Das muss nun normalisiert werden, also das Komma so verschoben, dass genau eine 1 davor steht (ähnlich der wissenschaftlichen Schreibweise).
3) Um daraus also $1.101_2$ zu machen, müssen wir das Komma um 2 Stellen nach links verschieben. Jede Verschiebung nach links bedeutet, dass wir die Zahl durch 2 geteilt haben, also müssen wir sie mit $2^2$  multiplizieren, um den ursprünglichen Wert beizubehalten.
4) Die normalisierte Form ist also $1.101_2 \cdot 2^2$
5) Die Mantisse ist der Teil nach dem Komma in der normalisierten Form, ohne die führende '1'.
6) Hier ergibt sich also $101_2$. Nach dem 32-Bit Standard wird für 32-Bit Zahlen auf 23 aufgefüllt also ergibt sich $10100000000000000000000$

__Exponent:__

1) Für 32-Bit Gleitkommazahlen gibt es einen festen "Bias" (Verschiebung) von 127. Dieser Bias wird zum tatsächlichen Exponenten addiert, um auch negative Exponenten als positive Zahlen speichern zu können.
2) Der tatsächliche Exponent ist 2, also ergibt sich 129 und in Binär 10000001.

__Lösung:__
$-6.5$ abgespeichert als
$1\ 10000001\ 10100000000000000000000$

## Beispiel 2: Wie wird die Gleitkommazahl 0.15625 abgespeichert?

__Vorzeichenbit__  
0 (weil positives Vorzeichen)

__Mantisse__

1) $0.15625_{10}$ ist in Binärcode $0.00101_2$
2) Das muss nun normalisiert werden, also das Komma so verschoben, dass genau eine 1 davor steht (ähnlich der wissenschaftlichen Schreibweise).  
3) Um daraus also $1.01_2$ zu machen, müssen wir das Komma um 3 Stellen nach rechts verschieben. Jede Verschiebung nach rechts bedeutet, dass wir die Zahl mit $2^{-1}$ multiplizieren, also müssen wir sie mit $2^{-3}$ multiplizieren, um den ursprünglichen Wert beizubehalten.  
4) Die normalisierte Form ist also $1.01_2 \cdot 2^{-3}$  
5) Die Mantisse ist der Teil nach dem Komma in der normalisierten Form, ohne die führende '1'. 
6) Hier ergibt sich also $010_2$. Nach dem 32-Bit Standard wird für 32-Bit Zahlen auf 23 aufgefüllt, also ergibt sich $01000000000000000000000$

__Exponent:__

1) Für 32-Bit Gleitkommazahlen gibt es einen festen "Bias" (Verschiebung) von 127. Dieser Bias wird zum tatsächlichen Exponenten addiert, um auch negative Exponenten als positive Zahlen speichern zu können.  
2) Der tatsächliche Exponent ist $-3$, also ergibt sich $127 + (-3) = 124$ und in Binär $01111100$.

__Lösung:__  
$0.15625$ wird abgespeichert als
$0\ 01111100\ 01000000000000000000000$