# Verkabelung

## Colorcodes

Farbe | Beschreibung
--- | ---
Braun       |9V oder höher
Rot         |5V
Schwarz     |GND
Blau        |Trigger (US)   & Motor1
Gelb        |Echo (US)      & Motor2
Weiß        |Brücke Pin 1   (1 ist am Terminal)
Lila        |Brücke Pin 2   (1 ist am Terminal)
grün        |Brücke Pin 3   (1 ist am Terminal)
orange      |Brücke Pin 4   (1 ist am Terminal)
grau        |I2C            (SCL & SDA)

## Anschlüsse am Arduino

### Motoren

Pins ``6`` bis ``13``
>Gruppen aufsteigend (Links nach rechts auf Brücke)

### Sensoren

#### Ultraschall

Pins ``2`` bis ``5`` und Pins ``A0`` und ``A1``
> kleinerer Pin Betrag ist Trigger, größerer ist Echo

#### Gyroskop

Pins ``SCL`` und ``SDA`` via I2C
