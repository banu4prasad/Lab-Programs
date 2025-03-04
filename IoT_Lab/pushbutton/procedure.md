```mermaid
graph TD;
  A[Start] --> B[Gather Components];
  B --> C[Arduino Board];
  B --> D[Push Button];
  B --> E[Resistor (10kΩ)];
  B --> F[Connecting Wires];
  B --> G[Breadboard];
  G --> H[Connect Push Button to Breadboard];
  H --> I[Connect one side of the Button to 5V];
  I --> J[Connect other side of the Button to a Digital Pin];
  J --> K[Connect same side to GND via Resistor];
  K --> L[Write Arduino Code];
  L --> M[Set up pinMode in setup()];
  M --> N[Use digitalRead() in loop()];
  N --> O[Upload and Test];
  O --> P[Press Button];
  P --> Q[Check Serial Monitor / LED Response];
  Q --> R[Success];