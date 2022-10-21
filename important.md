# Wichtig

## Leds

Bitte Widerstände nicht vergessen

## H-Brücken

Es sollten nie beide Pins für einen Motor aktiv sein!

```ino
// Im Uhrzeigersinn
digitalWrite(Motor11, HIGH);    // 11 meint Motor 1 PIN 1
digitalWrite(Motor12, LOW);     // 12 meint Motor 1 PIN 2

// Gegen den Uhrzeigersinn
digitalWrite(Motor11, LOW);     // 11 meint Motor 1 PIN 1
digitalWrite(Motor12, HIGH);    // 12 meint Motor 1 PIN 2
```


## Arduino

Arduino nicht über die H-Brücken mit Stromversorgen
> Überhitzung
>  
Beim Löten aufpassen das der Chip des Arduinos nicht zu heiß wird
> Bei zu hohen Temperaturen geht dieser kaputt

## Verkabelung

Alle Kabel isolieren!
> **Das heißt:** Dafür sorgen das sich keine offenen Kabel berühren die sich nicht berühren sollten
