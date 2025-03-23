PSUEDOCODE
//3.5-4.0 Cumlaude
//3.0-3.4 Outstanding
//2.5–2.9 Very Good
//2.0–2.4 Good
//less than 2.0 Poor
start

Declare float IPK;
Declare int subject;
Declare int nilai[subject];
Declare int sks[subject];
Declare int totalScore[subject];
Declareint totalSKS = 0, totalS = 0;
    
Display "How many subject did you take in this semester?" //Input matakuliah
Input subject
    
for (int i = 0; i < subject; i++)
Display("Please insert your %d score: ", i + 1);
Input("%d", &nilai[i]);
Display("Please insert your %d SKS: ", i + 1);
Input("%d", &sks[i]);
    
for (int i = 0; i < subject; i++) totalSKS += sks[i];

for (int i = 0; i < subject; i++) totalScore[i] = (sks[i] * nilai[i]);

for (int i = 0; i < subject; i++) totalS += totalScore[i];
    
Set IPK = (totalS / totalSKS) / 25; //rumus penghitung IPK
Display("IPK = %.2f\n", IPK);
    
if IPK > 3.4 && IPK <= 4.0; Display "Cumlaude\n"
else if IPK > 2.9 && IPK <= 3.4; Display "Outstanding\n"
else if IPK > 2.4 && IPK <= 2.9; Display"Very Good\n"
else if IPK > 1.9 && IPK <= 2.4; Display "Good\n"
else if IPK >= 0 && IPK <= 1.9; Display "Poor\n"
else Display "Your IPK score is not valid!\n" //Jika ipk yang diinput tidak valid, akan ditanya ulang

end