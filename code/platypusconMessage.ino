/**
 * platypusconMessage
 * 08.09.2016
 * idont
 * Encodes a message into morse and flashes it on the msg LED
 * The other LED stream works as a control message stream
 * (indicates start of a new char, or the whole msg)
 */

// pins
const int MESSAGE_LED = 3;
const int CONTROL_LED = 4;

// Set message
char msg[] = "We should all celebrate with extrabacon and epicbanana for breakfast. Tinfoilhat much?";

// Set up lengths of various properties - everything is based around dot
int dot = 500;              // short signal (aka dot)
int dash = dot * 3;         // long signal (aka dash)
int partSpace = dot;        // space between each part of a character
int charSpace = dot * 3;    // space between each character
int wordSpace = dot * 7;    // space between each word



void setup() {
  // Set output pins (no inputs for now)
  pinMode(MESSAGE_LED, OUTPUT);
  pinMode(CONTROL_LED, OUTPUT);
}


void loop() {
  // Flash to indicate the start of the message
  for (int i = 0; i < 10; i++) {
    digitalWrite(CONTROL_LED, HIGH);
    delay(200);
    digitalWrite(CONTROL_LED, LOW);
    delay(200);
  }
  
  // Fix the character
  for (int i = 0; i < sizeof(msg); i++) {
    char currChar = msg[i];
    currChar = toUpperCase(currChar);
    // Indicate a new character through the control LED
    digitalWrite(CONTROL_LED, HIGH);
    delay(100);
    digitalWrite(CONTROL_LED, LOW);
    encChar(currChar);
  }
}


// Encodes a character to morse and outputs it to the right LED
void encChar(char c) {
  switch (c) {
    case 'A':
      morseDot();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'B':
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'C':
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'D':
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'E':
      morseDot();
      delay(charSpace);
      break;

    case 'F':
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'G':
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'H':
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'I':
      morseDot();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'J':
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'K':
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'L':
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'M':
      morseDash();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'N':
      morseDash();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'O':
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'P':
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'Q':
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'R':
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'S':
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case 'T':
      morseDash();
      delay(charSpace);
      break;

    case 'U':
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'V':
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'W':
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'X':
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'Y':
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case 'Z':
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case '.':
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case ',':
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(charSpace);
      break;

    case '\'':
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case '"':
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case '?':
      morseDot();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDash();
      delay(partSpace);
      morseDot();
      delay(partSpace);
      morseDot();
      delay(charSpace);
      break;

    case ' ':
      delay(wordSpace);
      break;
      
    default:
      delay(wordSpace); // Probably won't need this
  }
  
}

// Could merge this and dash into one function, but fuck it
void morseDot() {
  digitalWrite(MESSAGE_LED, HIGH);
  delay(dot);
  digitalWrite(MESSAGE_LED, LOW);
}

void morseDash() {
  digitalWrite(MESSAGE_LED, HIGH);
  delay(dash);
  digitalWrite(MESSAGE_LED, LOW);
}

