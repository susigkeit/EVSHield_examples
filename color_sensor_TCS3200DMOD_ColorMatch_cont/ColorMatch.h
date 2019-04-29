// Header file for the ColorMatch application
// This file is generated by the ColorMatch Application in Learn Mode

// Calibration data
sensorData sdBlack = { 22860, 18570, 23770 };
sensorData sdWhite = { 194130, 175420, 230800 };

// Color Table for matching
typedef struct
{
  char    name[9];  // color name 8+nul
  colorData rgb;    // RGB value
} colorTable;

colorTable ct[] = 
{
  {"WHITE", {253, 253, 254} },
  {"BLACK", {4, 2, 2} },
  {"YELLOW", {227, 193, 78} },
  {"ORANGE", {220, 124, 67} },
  {"RED", {170, 48, 42} },
  {"GREEN", {102, 123, 73} },
  {"BLUE", {77, 93, 124} },
  {"BROWN", {98, 49, 34} },
};