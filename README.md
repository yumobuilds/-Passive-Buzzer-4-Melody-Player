🎵 Passive Buzzer — 4 Melody Player

An Arduino project using a passive buzzer module to play four classic melodies in a loop. Unlike an active buzzer, the passive buzzer accepts frequency signals — letting you play real music!


## 📦 Hardware Required

| Component | Quantity |
|---|---|
| Arduino UNO | 1 |
| Passive Buzzer Module | 1 |
| USB Cable | 1 |
| Jumper Wires | 3 |

---

## 🔌 Wiring

| Buzzer Pin | Arduino Pin |
|---|---|
| S (Signal) | Digital 3 |
| – (Negative) | GND |
| + (Positive) | 5V |

---

🎼 Melodies Included

#SongDuration
1🎂 Happy Birthday~10 sec
2⭐ Twinkle Twinkle Little Star~10 sec
3🔔 Jingle Bells (chorus)~10 sec 
4🎶 Ode to Joy~10 sec 

All four play back-to-back with a 1-second pause between each, then loop forever.


---
⚙️ How It Works

The passive buzzer has no internal oscillator — it needs an external frequency signal to vibrate and produce sound. Arduino's built-in tone() function handles this perfectly.

Each melody is stored as two arrays:


Notes array — frequencies in Hz (e.g. 440 = note A4)
Duration array — how long each note plays in milliseconds


The playMelody() function loops through both arrays together and plays each note with a tiny gap (* 0.9) so notes don't blur into each other.


📋 Specifications

PropertyValueWorking Voltage3.3V – 5VInterfaceDigital (PWM)Module Size30 × 20 mmWeight4g


📝 Notes


Uses Arduino's built-in tone() and noTone() functions — no extra libraries needed
You can add your own melody by defining a new notes + durations array and calling playMelody()
Note frequencies follow standard musical tuning (A4 = 440 Hz)



