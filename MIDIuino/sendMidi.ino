/*
 * MAIN MIDI send algorithm 
 * 
 * github/bredbord
 * Last updated:6/26/20
 *
 */
 
boolean sendMidi(byte a, byte b, byte c) {  // Takes in three Midi bytes and writes them as binary values
  Serial.write(a, BIN);
  Serial.write(b, BIN);
  Serial.write(c, BIN);
}
