# Verkabelung

## Colorcodes

Blau:       Trigger (US)
Gelb:       Echo (US)
Rot:        5V
Schwarz:    GND
Braun:      +9V
Weiß:       Brücke Pin 1 (Vom Terminal weg gezählt)
Lila:       Brücke Pin 2 (Vom Terminal weg gezählt)
:           Brücke Pin 3 (Vom Terminal weg gezählt)
:           Brücke Pin 4 (Vom Terminal weg gezählt)
:           SCL
:           SDA

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
