/*
 * MAIN MIDI send algorithm 
 * 
 * github/bredbord
 * Last updated:6/26/20
 *
 */
 
boolean sendMidiNote(byte chan, byte note, byte vel) {  // Takes in three Midi bytes and writes them as binary values
  Serial.println(chan, BIN);
  Serial.println(note, BIN);
  Serial.println(vel, BIN);
  
  return true;
}
