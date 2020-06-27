/*
 * MAIN MIDI send algorithm 
 * 
 * github/bredbord
 * Last updated:6/26/20
 *
 */
 
boolean sendMidiNote(byte chan, byte note, byte vel, boolean isOn) {  // Takes in three Midi bytes and writes them as binary values
  
  byte decOffset;
  if (isOn) { decOffset = 143; } else { decOffset = 127; }  // first byte offset for note on/off
  
  Serial.println(decOffset + chan, BIN);  // channel + note on/off
  Serial.println(note, BIN);  // note value
  Serial.println(vel, BIN);  // note velocity
  
  return true;
}

boolean sendMidiCC(byte chan, byte conNum, byte conVal) {

  //Serial.println(decOffset + chan, BIN);  // FIGURE OUT FIRST BYTE VAL SCHEMA
  Serial.println(conNum, BIN);  // control number
  Serial.println(conVal, BIN);  // value for specified control parameter
  
  return true;
}
