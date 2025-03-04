```mermaid
graph TD;
  A[Start] --> B[Gather Components];
  B --> C[Arduino Board];
  B --> D[Push Button];
  B --> E[Resistor 10k Ohm];
  B --> F[Connecting Wires];
  B --> G[Breadboard];
  G --> H[Connect Button to Breadboard];
  H --> I[Wire Button to 5V];
  I --> J[Wire Other Side to Digital Pin];
  J --> K[Connect to GND via Resistor];
  K --> L[Write Arduino Code];
  L --> M[Setup pinMode in setup];
  M --> N[Use digitalRead in loop];
  N --> O[Upload and Test];
  O --> P[Press Button];
  P --> Q[Check Serial Monitor or LED];
  Q --> R[Success];
