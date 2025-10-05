/* Import the library */
#include <Keypad.h>

/* STEP 1: Define keypad dimensions */
const byte ROWS = 4;
const byte COLUMNS = 4;

/* STEP 2: Create 2D array for key mapping */
char Keys[ROWS][COLUMNS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

/* STEP 3: Declare pins connected to rows and columns */
byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLUMNS] = {5, 4, 3, 2};

/* STEP 4: Initialize keypad object */
Keypad customKeypad = Keypad(makeKeymap(Keys), rowPins, colPins, ROWS, COLUMNS);

/* STEP 5: Setup Arduino */
void setup(){ 
    Serial.begin(9600);
}

/* STEP 6: Main loop */
void loop(){
    char customKey = customKeypad.getKey();  // Read pressed key
    if (customKey){
        Serial.println(customKey);  // Print key to Serial Monitor
    }
}
