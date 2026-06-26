const int buzzerPin = 3;

// ─── NOTE FREQUENCIES ───────────────────────────────
#define C4  262
#define D4  294
#define E4  330
#define F4  349
#define G4  392
#define A4  440
#define B4  494
#define C5  523
#define D5  587
#define E5  659
#define G5  784
#define REST 0

// ─── MELODY 1: Happy Birthday ───────────────────────
int hbNotes[] = {
  C4,C4,D4,C4,F4,E4,
  C4,C4,D4,C4,G4,F4,
  C4,C4,C5,A4,F4,E4,D4,
  A4,A4,G4,F4,G4,F4
};
int hbDur[] = {
  300,300,600,600,600,1200,
  300,300,600,600,600,1200,
  300,300,600,600,600,600,1200,
  300,300,600,600,600,1200
};
int hbLen = 25;

// ─── MELODY 2: Twinkle Twinkle ──────────────────────
int twNotes[] = {
  C4,C4,G4,G4,A4,A4,G4,
  F4,F4,E4,E4,D4,D4,C4,
  G4,G4,F4,F4,E4,E4,D4,
  G4,G4,F4,F4,E4,E4,D4
};
int twDur[] = {
  400,400,400,400,400,400,800,
  400,400,400,400,400,400,800,
  400,400,400,400,400,400,800,
  400,400,400,400,400,400,800
};
int twLen = 28;

// ─── MELODY 3: Jingle Bells (chorus) ────────────────
int jbNotes[] = {
  E4,E4,E4,
  E4,E4,E4,
  E4,G4,C4,D4,E4,
  F4,F4,F4,F4,F4,E4,E4,E4,E4,D4,D4,E4,D4,G4
};
int jbDur[] = {
  300,300,600,
  300,300,600,
  300,300,300,300,1200,
  300,300,300,300,600,300,300,150,150,300,300,300,300,600
};
int jbLen = 25;

// ─── MELODY 4: Ode to Joy ────────────────────────────
int ojNotes[] = {
  E4,E4,F4,G4,G4,F4,E4,D4,
  C4,C4,D4,E4,E4,D4,D4,
  E4,E4,F4,G4,G4,F4,E4,D4,
  C4,C4,D4,E4,D4,C4,C4
};
int ojDur[] = {
  400,400,400,400,400,400,400,400,
  400,400,400,400,600,200,800,
  400,400,400,400,400,400,400,400,
  400,400,400,400,600,200,800
};
int ojLen = 30;

// ─── PLAY FUNCTION ───────────────────────────────────
void playMelody(int notes[], int durations[], int length) {
  for (int i = 0; i < length; i++) {
    if (notes[i] == REST) {
      noTone(buzzerPin);
    } else {
      tone(buzzerPin, notes[i], durations[i] * 0.9);
    }
    delay(durations[i]);
  }
  noTone(buzzerPin);
}

// ─── SETUP & LOOP ────────────────────────────────────
void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  playMelody(hbNotes,  hbDur,  hbLen);   // Happy Birthday
  delay(1000);

  playMelody(twNotes,  twDur,  twLen);   // Twinkle Twinkle
  delay(1000);

  playMelody(jbNotes,  jbDur,  jbLen);   // Jingle Bells
  delay(1000);

  playMelody(ojNotes,  ojDur,  ojLen);   // Ode to Joy
  delay(1000);
}