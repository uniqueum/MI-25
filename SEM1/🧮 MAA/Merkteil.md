## 1.  Zahlen

- Natürliche Zahlen $\mathbb{N}$
- Ganze Zahlen $\mathbb{Z}$
- Rationale Zahlen $\mathbb{Q}$
  Die Menge aller gemeinen Brüche bzw. endlicher dezimaler Brüche oder unendlich dezimaler aber periodischer Brüche
- Reele Zahlen $\mathbb{R}$
  $\sqrt{2}, \pi$ sind rationale Zahlen]]

## 2. Aussagenlogik

	In der Aussagenlogik werden Aussagen miteinander verglichen. Eine Aussage ist
	eine behauptung die eindeutig mit WAHR oder FALSCH beantwortet werden

Beispiele für Aussagen:
- a = b
- 1 > 2

Beispiele für Nichtaussagen
- a ! b
- $a \land b$

### 2.1 Junktoren
#### 2.1.1 Die Konjunktion $\land$

Die Konjunktion ist das logische UND. Es seien A und B zwei Aussagen.
Logischer Ausdruck $A \land B$

| $A$ | $B$ | $A \land B$ |
| :-: | :-: | :---------: |
|  1  |  1  |      1      |
|  1  |  0  |      0      |
|  0  |  1  |      0      |
|  0  |  0  |      0      |
#### 2.1.2 Die Disjunktion $\lor$

Logisches ODER
Logischer Ausdfruck: $A \land B$
Die Disjunktion ist wahr, wenn wenigstens eine der beiden Aussagen wahr ist

| $A$ | $B$ | $A \lor b$ |
| :-: | :-: | :--------: |
|  1  |  1  |     1      |
|  1  |  0  |     1      |
|  0  |  1  |     1      |
|  0  |  0  |     0      |
#### 2.1.3 Die Negation $\lnot$

Alternativ schreibt man auch $\overline A$

| $A$ | $\overline A$ |
| :-: | :-----------: |
|  1  |       0       |
|  0  |       1       |
#### 2.1.4 DIe doppelte Negation

| $A$ | $\overline{A}$ | $\overline{\overline{A}}$ |
| :-: | :------------: | :-----------------------: |
|  1  |       0        |             1             |
|  0  |       1        |             0             |
#### 2.1.5 Die Äquivalenz

$A \Leftrightarrow B$

| $A$ | $B$ | $A \Leftrightarrow B$ |
| :-: | :-: | :-------------------: |
|  1  |  1  |           1           |
|  1  |  0  |           0           |
|  0  |  1  |           0           |
|  0  |  0  |           1           |
#### 2.1.6 Die Implikation

A impliziert B (umgangssprachlich: daraus folgt)
$A \Rightarrow B$

Bsp: A = "Es regnet", B = "Die Straße ist nass"

| $A$ | $B$ | $A \Rightarrow B$ |
| :-: | :-: | :---------------: |
|  1  |  1  |         1         |
|  1  |  0  |         0         |
|  0  |  1  |         1         |
|  0  |  0  |         1         |
Bsp. 2: A = "Ich trinke ein Bier", B="In Paris scheint die Sonne"
D.h. A und B müssen nicht zwingend einen kausalen Zusammenhang haben

#### 2.1.7 De  Morgansche Gesetze

__1. De Morgansches Gesetz__
$\overline{A \land B} = \overline{A} \lor \overline{B}$

__2. De Morgansches Gesetz__
$\overline{A \lor B} = \overline{A} \land \overline{B}$

__Beweis 1.__

| $A$ | $B$ | $\overline{A}$ | $\overline{B}$ | $A \land B$ | $\overline{A} \lor \overline{B}$ | $\overline{A \land B}$ |
| :-: | :-: | :------------: | :------------: | :---------: | :------------------------------: | :--------------------: |
|  1  |  1  |       0        |       0        |      1      |                0                 |           0            |
|  1  |  0  |       0        |       1        |      0      |                1                 |           0            |
|  0  |  1  |       1        |       0        |      0      |                1                 |           0            |
|  0  |  0  |       1        |       1        |      0      |                1                 |           1            |
__Beweis 2.__

| $A$ | $B$ | $\overline{A}$ | $\overline{B}$ | $A \lor B$ | $\overline{A} \land \overline{B}$ | $\overline{A \lor B}$ |
| :-: | :-: | :------------: | :------------: | :--------: | :-------------------------------: | :-------------------: |
|  1  |  1  |       0        |       0        |     1      |                 0                 |           0           |
|  1  |  0  |       0        |       1        |     1      |                 0                 |           0           |
|  0  |  1  |       1        |       0        |     1      |                 0                 |           0           |
|  0  |  0  |       1        |       1        |     f      |                 1                 |           1           |
Die beiden letzten Spalten sind jedes Mal identisch

#### 2.1.8 Kommutativgesetz

__1. Kommutativgesetz__

$A \land B \Leftrightarrow B \land A$
| $A$ | $B$ | $A \land B$ | $B \land A$ |
| :-: | :-: | :---------: | :---------: |
|  1  |  1  |      1      |      1      |
|  1  |  0  |      0      |      0      |
|  0  |  1  |      0      |      0      |
|  0  |  0  |      0      |      0      |
__2. Kommutativgesetz__

$A \lor B \Leftrightarrow B \lor A$

| $A$ | $B$ | $A \lor B$ | $B \lor A$ |
| :-: | :-: | :--------: | :--------: |
|  1  |  1  |     1      |     1      |
|  1  |  0  |     1      |     1      |
|  0  |  1  |     1      |     1      |
|  0  |  0  |     0      |     0      |
#### 2.1.9 Assoziativgesetz

__1. Assoziativgesetz__

$A \land (B \land C) \Leftrightarrow (A \land B) \land C$
| $A$ | $B$ | $C$ | $B \land C$ | $A \land B$ | $A \land (B \land C)$ | $(A \land B) \land C$ |
| :-: | :-: | :-: | :---------: | :---------: | :-------------------: | :-------------------: |
|  1  |  1  |  1  |      1      |      1      |           1           |           1           |
|  1  |  1  |  0  |      0      |      1      |           0           |           0           |
|  1  |  0  |  1  |      0      |      0      |           0           |           0           |
|  1  |  0  |  0  |      0      |      0      |           0           |           0           |
|  0  |  1  |  1  |      1      |      0      |           0           |           0           |
|  0  |  1  |  0  |      0      |      0      |           0           |           0           |
|  0  |  0  |  1  |      0      |      0      |           0           |           0           |
|  0  |  0  |  0  |      0      |      0      |           0           |           0           |

__2.  Assoziativgesetz__

$A \lor (B \lor C) \Leftrightarrow (A \lor B) \lor C$
| $A$ | $B$ | $C$ | $B \lor C$ | $A \lor B$ | $A \lor (B \lor C)$ | $(A \lor B) \lor C$ |
| :-: | :-: | :-: | :--------: | :--------: | :-----------------: | :-----------------: |
|  1  |  1  |  1  |     1      |     1      |          1          |          1          |
|  1  |  1  |  0  |     1      |     1      |          1          |          1          |
|  1  |  0  |  1  |     1      |     1      |          1          |          1          |
|  1  |  0  |  0  |     0      |     1      |          1          |          1          |
|  0  |  1  |  1  |     1      |     1      |          1          |          1          |
|  0  |  1  |  0  |     1      |     1      |          1          |          1          |
|  0  |  0  |  1  |     1      |     0      |          1          |          1          |
|  0  |  0  |  0  |     0      |     0      |          0          |          0          |
Die beiden letzten Spalten sind jedes Mal identisch

#### 2.1.10 Distributivgesetz

__1. Distributivgesetz__

$A \land (B \lor C) \Leftrightarrow (A \land B) \lor (A \land C)$
| $A$ | $B$ | $C$ | $B \lor C$ | $A \land B$ | $A \land C$ | $A \land (B \lor C)$ | $(A \land B) \lor (A \land C)$ |
| :-: | :-: | :-: | :--------: | :---------: | :---------: | :------------------: | :----------------------------: |
|  1  |  1  |  1  |     1      |      1      |      1      |          1           |               1                |
|  1  |  1  |  0  |     1      |      1      |      0      |          1           |               1                |
|  1  |  0  |  1  |     1      |      0      |      1      |          1           |               1                |
|  1  |  0  |  0  |     0      |      0      |      0      |          0           |               0                |
|  0  |  1  |  1  |     1      |      0      |      0      |          0           |               0                |
|  0  |  1  |  0  |     1      |      0      |      0      |          0           |               0                |
|  0  |  0  |  1  |     1      |      0      |      0      |          0           |               0                |
|  0  |  0  |  0  |     0      |      0      |      0      |          0           |               0                |
__2. Distributivgesetz__

$A \lor (B \land C) \Leftrightarrow (A \lor B) \land (A \lor C)$
| $A$ | $B$ | $C$ | $B \land C$ | $A \lor B$ | $A \lor C$ | $A \lor (B \land C)$ | $(A \lor B) \land (A \lor C)$ |
|:-:|:-:|:-:|:-----------:|:----------:|:----------:|:-------------------:|:----------------------------:|
| 1 | 1 | 1 | 1           | 1          | 1          | 1                   | 1                            |
| 1 | 1 | 0 | 0           | 1          | 1          | 1                   | 1                            |
| 1 | 0 | 1 | 0           | 1          | 1          | 1                   | 1                            |
| 1 | 0 | 0 | 0           | 1          | 1          | 1                   | 1                            |
| 0 | 1 | 1 | 1           | 1          | 1          | 1                   | 1                            |
| 0 | 1 | 0 | 0           | 1          | 0          | 0                   | 0                            |
| 0 | 0 | 1 | 0           | 0          | 1          | 0                   | 0                            |
| 0 | 0 | 0 | 0           | 0          | 0          | 0                   | 0                            |
Die beiden letzten Spalten sind jedes Mal identisch

#### 2.1.11 Idempotenzgesetze

__1. Idempotenzgesetz__

$A \land A \Leftrightarrow A$

__2. Idempotenzgesetz__

$A \lor A \Leftrightarrow A$

#### 2.1.12 Absorptionsgesetze

__1. Absorptionsgesetz__

$A \Leftrightarrow A \land (A \lor B)$
| $A$ | $B$ | $A \lor B$ | $A \land (A \lor B)$ |
|:-:|:-:|:-----------:|:-------------------:|
| 1 | 1 | 1           | 1                   |
| 1 | 0 | 1           | 1                   |
| 0 | 1 | 1           | 0                   |
| 0 | 0 | 0           | 0                   |
Erste und letzte Spalte identisch

__2. Absorptionsgesetz__

$A \Leftrightarrow A \lor (A \land B)$
| $A$ | $B$ | $A \land B$ | $A \lor (A \land B)$ |
|:-:|:-:|:-----------:|:-------------------:|
| 1 | 1 | 1           | 1                   |
| 1 | 0 | 0           | 1                   |
| 0 | 1 | 0           | 0                   |
| 0 | 0 | 0           | 0                   |
Erste und letzte Spalte identisch

#### 2.1.13 Neutralitätsgesetze

__1. Neutralitätsgesetz__

$A \land W \Leftrightarrow A$
| $A$ | $W$ | $A \land W$ |
|:-:|:-:|:-----------:|
| 1 | 1 | 1           |
| 0 | 1 | 0           |

__2. Neutralitätsgesetz__

$A \lor f \Leftrightarrow A$
| $A$ | $F$ | $A \lor F$ |
|:-:|:-:|:-----------:|
| 1 | 0 | 1           |
| 0 | 0 | 0           |

#### 2.1.14 Extremalgesetze

__1. Extremalgesetz__

$A \land F \Leftrightarrow F$
| $A$ | $F$ | $A \land F$ |
|:-:|:-:|:-----------:|
| 1 | 0 | 0           |
| 0 | 0 | 0           |

__2. Extremalgesetz__

$A \lor W \Leftrightarrow W$
| $A$ | $W$ | $A \lor W$ |
|:-:|:-:|:-----------:|
| 1 | 1 | 1           |
| 0 | 1 | 1           |

#### 2.1.15 Komplementärgesetze

__1. Komplementärgesetz__

$A \land \overline{A} \Leftrightarrow F$
| $A$ | $\overline{A}$ | $A \land \overline{A}$ |
|:-:|:-:|:-------------------:|
| 1 | 0 | 0                   |
| 0 | 1 | 0                   |

__2. Komplementärgesetz__

$A \lor \overline{A} \Leftrightarrow F$

| $A$ | $\overline{A}$ | $A \lor \overline{A}$ |
|:-:|:-:|:-------------------:|
| 1 | 0 | 1                   |
| 0 | 1 | 1                   |

#### 2.1.16 Dualitätsgesetze

$\overline{W} \Leftrightarrow F$
$\overline{F} \Leftrightarrow W$

## 3. Mengenlehre

>Unter einer Menge verstehen wir jede Zusammenfassung M von bestimmten wohl unterscheidbaren Objekten unserer Anschauung und unseres Denkens (Cantor)

Beispiele:

1) M = {linker Schuh, rechter Schuh, Hose, Shirt}
2) M = {1, 2, 3}

### 3.1 Elemente einer Menge

allgemein: M = ${m_1, m_2, ..., m_n}$
$m_1 \in M, m_2 \in M, ..., m_n \in M$

Weiterhin gilt für ein beliebiges Element $m_k$ mit
$m_1 != m_k, m_2 != m_k, \dots, m_n != m_k$
==> mk !e M

logische Schreibweise
$\overline{m_k \in M} \Leftrightarrow \overline{m_k \in M}$

### 3.2 Darstellung einer Menge mit unendlich vielen Elementen

Es sei A eine Menge deren Elemente natürliche Zahlen sind.

$A = \{ m \in \mathbb{N}_0 \mid \dots \}$

Gegenbeispiele:

$A = \{  n \in \mathbb{Z} | n^2\}$
$n^2$ alleine ist keine Aussage

$A = \{ n \in \mathbb{Q} | 5 \}$

### 3.3 Die leere Menge

$\varnothing = \{ \}$

Die Menge enthält keine Elemente

### 3.4 Die Mächtigkeit endlicher Mengen

Eine Menge heißt endlich, wenn sie endlich viele Elemente besitzt.

$A = \{ m_1, m_2, \dots, m_n \}$
$\Leftrightarrow | A | = n$

Beispiel:

$A = \{ 1, 2, 3 \}$
$|A| = 3$

### 3.5 Mengenoperationen

#### 3.5.1 Vereinigung zweier Mengen A und B

$A = \{ 1, 2, 3 \}$
$B = \{3, 4, 5\}$
$\Leftrightarrow A \cup B = \{1, 2, 3, 3, 4, 5 \}$

__Logische Formulierung der Vereinigung__

$\forall x_. x \in (A \cup B) \Leftrightarrow (x \in A) \lor (x \in B)$

#### 3.5.2 Schnitt/Durchschnitt zweier Mengen A und B

$A = \{ 1, 2, 3 \}$
$B = \{3, 4, 5\}$
$\Leftrightarrow A \cap B = \{ 3 \}$

$A = \{ 2, 4, 6 \}$
$B = \{1, 3, 5\}$
$\Leftrightarrow A \cap B = \varnothing$

__Logische Formulierung__

$\forall x_. x \in (A \cap B) \Leftrightarrow (x \in A) \land (x \in B)$

#### 3.5.3 Differenz zweier Mengen A und B

$A = \{ 1, 2, 3 \}$
$B = \{3, 4, 5\}$
$A \setminus B = \{ 1, 2, 4, 5 \}$

__Logische Formulierung__

$\forall x_.(x \in A \setminus B) \Leftrightarrow (x \in A) \land (x \notin B)$

#### 3.5.4 Äquivalenz zweier  Mengen A und B

__Logische Formulierung__

$\forall x_. x \in (x \in A) \Leftrightarrow (x \in B)$

### 3.6 Teilmengenrelation

A ist Teilmenge von B $(A \subseteq B)$

__Logische Formulierung__

$A \subseteq B \Leftrightarrow (\forall x_.(x \in A) \implies (x \in B))$

A ist echte Teilmenge von B ($A \subset B$)

#### 3.6.1 Durchschnitt von Mengen A, B und C

$A \cap (B \cap C) = (A \cap B) \cap C$

#### 3.6.2 Absorptionsgesetze

$(A \cap B) \cup A = A$
$(A \cup B) \cap A = A$

#### 3.6.3 Noch eine Beziehung

$(A \setminus B) \cup B = (A \cap \overline{B}) \cup B = B \cup (A \cap \overline{B}$
$=(B \cup A) \cap (B \cup \overline{B})$ (letzteres ist die Grundmenge)
$= A \cup B$

### 3.7 Mächtigkeit und Abzählbarkeit unendlicher Mengen

Beispiele: $\mathbb{N, R, Q, Z}$

Problem: Eine konkrete Anzahl von Elementen einer unendlichen Menge kann nicht angegeben werden.

$A = \{ m_1, m_2, m_3 \}$

#### 3.7.1 Abzählbarkeit von $\mathbb{N_0}$

Abzählen beginnend mit 1 bei der 0

#### 3.7.2 Abzählbarkeit von $\mathbb{Z}$

Abzählen mit der 1 bei der 0, dann gerade Zahlen für negative und ungerade für positive

#### 3.7.3 Abzählbarkeit von $\mathbb{Q}$

Ist auch möglich

#### 3.8.4 Abzählbarkeit von $\mathbb{R}$

$\mathbb{R}$ ist überabzählbar im Gegensatz zu $\mathbb{N_0, Q, Z}$

## 4. Die vollständige Induktion

>Ein Verfahren zum Beweisen  mathematischer Zusammenhänge der Form
>$f(n), n \in \mathbb{N}, \mathbb{N}_0$

### 4.1 Induktionsanfang

Stimmt die Behauptung fürs $n = 0$ oder $n = 1$.

### 4.2 Induktionsvoraussetzung/-annahme

Es wird angenommen, dass die Annahme $f(n)$ korrekt ist.

### 4.3 Induktionsschritt

Es ist zu zeigen, dass $f(n)$ auch für $n + 1$ statt $n$ gilt.
D.h. überall wo $n$ steht, wird $n + 1$ eingesetzt.

### 4.4 Schlussfolgerung

Da die Aussage für $n = 0$ bzw. $n = 1$ gilt und aus der Gültigkeit von $f(n)$ auch die Gültigkeit von $f(n + 1)$ folgt, gilt die Annahme für alle folgenden Schritt: $n + 2, n + 3, \dots$

Bsp.: Addition von $n$ Zahlen von 1 bis $n$
$z_n = \frac{n(n + 1)}{2}$
$= 1 + 2 + 3 + \dots + n, n \in \mathbb(N)$

__1. Induktionsanfang__

$n = 1$
$\Rightarrow z_1 = \frac{1(1 + 1)}{2} = 1$

__2. Induktionsvoraussetzung__

$z_n = \frac{n(n + 1)}{2}$

__3. Induktionsschritt__

Ersetzen $n$ durch $n + 1$
$\Rightarrow z_n \rightarrow z_{n + 1}$
$\Rightarrow z_{n + 1} = \frac{(n + 1)(n + 1 + 1)}{2}$
$\Rightarrow \frac{(n + 1)(n + 2)}{2}$

$z_{n + 1}= 1 + 2 + 3 + \dots + n + n + 1, n \in \mathbb(N)$
$z_{n + 1} = \frac{n(n +  1) + 2(n + 1)}{2}$
$= \frac{(n + 1)(n + 2)}{2}$

__4. Induktionsschlussfolgerung__

Passt

## 5. Die Potenzmenge

Die Potenzmenge ist die Menge aller Teilmengen einer beliebigen Menge $A$. Dann ist $P(A)$ die Potenzmenge von A.

Bsp.:
$A = \{ 2, 4, 6 \}$
$P = \{ \varnothing, \{2\}, \{4\}, \{6\}, \{2, 4\}, \{2, 6\}, \{4, 6\}, A \}$

__Potenzmenge der leeren Menge__

$P( \varnothing ) = \{ \varnothing \}$


__Satz: Mächtigkeit der Potenzmenge__

Anzahl der Teilmengen
$M$ sei eine beliebige Menge.

$| P(M) | = 2^{|M|}$


__Beweis:__

$|M| \in \mathbb{N}$
$\Rightarrow |M| = n$
$M = \{ m_1, m_2, m_3, \dots, m_n \}$
$\Rightarrow |P(M)| = 2^n$ (Induktionsvoraussetzung)


__Induktionsanfang:__

$n = 0, M = \{  \} = \varnothing$
$P(M) = \{ \varnothing \}$
$|P(M)| = 2^0 = 1$

__Induktionsschritt__

$n$ durch $n + 1$ ersetzen:
$\Rightarrow M = \{ m_1, m_2, m_3, \dots, m_n, m_{n+1} \}$
$\Rightarrow |P(M)| = 2^{n + 1}$

Betrachten für beliebige Teilmenge $x \in M$. Für $x$ gibt es zwei Möglichkeiten:

Fall 1:
$m_{n + 1} \notin x$
Definieren: $M' = \{ m_1, m_2, m_3, \dots, m_n \}$
Nach Induktionsvoraussetzung: $|P(M)| = 2^n$

Fall 2:
$m_{m + 1} \in x$
Definieren:
$A = \{ x \subseteq M \mid m_{n + 1} \notin X \}$ Menge aller Teilmengen, die $m_{n + 1}$ nicht enthalten
$B = \{ x \subseteq M \mid m_{n + 1} \in X \}$ Menge aller Teilmengen, die $m_{n + 1}$ enthalten


Beispiel:

$M = \{ m_1, m_2, m_3, m_4 \}$
$M' = \{ m_1, m_2, m_3 \}$ $n = 3$

$A = \{ \varnothing, \{m_1\}, \{m_2\}, \{m_3\}, \{m_1, m_2\}, \{m_1, m_3\}, \{m_2, m_3\}, \{m_1, m_2, m_3\} \}$
$B = \{ \{m_4\}, \{m_1, m_4\}, \{m_2, m_4\}, \{m_3, m_4\}, \{m_1, m_2, m_4\}, \{m_1, m_3, m_4\}, \{m_2, m_3, m_4\}, \{m_1, m_2, m_3, m_4\} \}$
$\Rightarrow A \cap B = \varnothing$
$P(M) = A \cup B$
$|P(M)| = |A| + |B|$
$\Rightarrow |P(M)| = 2^n + 2^n = 2^{n + 1}$

Schlussfolgerung: passt