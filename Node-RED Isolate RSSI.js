/****************************************************************************************************
* The following code was used in a Node-RED function node in order to isolate the RSSI signals of   * 
* the four ESP32 Bluetooth beacons by searching through their raw strings and isolating the         *
* signal strength value. The advertised devices were isolated by simply searching for the first two * 
* characters of each ESP32’s address. One could have typed in the whole addresses but this was      *
* unnecessary.                                                                                      *
*****************************************************************************************************/

var sLength = msg.payload.length;
for (var i = 0; i < sLength; i++) {
  if (
    msg.payload[i] == "U" &&
    msg.payload[i + 1] == "U" &&
    msg.payload[i + 2] == "I" &&
    msg.payload[i + 3] == "D"
  ) {
    // && msg.payload[i+4] == 'e' && msg.payload[i+5] == 's' && msg.payload[i+6] == 's')

    msg.add2 =
      msg.payload[i + 6] +
      msg.payload[i + 7] +
      msg.payload[i + 8] +
      msg.payload[i + 9] +
      msg.payload[i + 10] +
      msg.payload[i + 11] +
      msg.payload[i + 12] +
      msg.payload[i + 13]; // + msg.payload[i+17] +
    msg.payload[i + 18] +
      msg.payload[i + 19] +
      msg.payload[i + 20] +
      msg.payload[i + 21] +
      msg.payload[i + 22] +
      msg.payload[i + 23] +
      msg.payload[i + 24] +
      msg.payload[i + 25];
    ///for (var = k; k<msg.add2.length; k++){
    if (msg.add2[0] == "4" && msg.add2[1] == "f") {
      // && msg.add2[2] == ":" && msg.add2[3] == '2' && msg.add2[4] == 'c' && msg.add2[5] == ":" && msg.add2[6] == 'b' && msg.add2[7] == '6' && msg.add2[8] == ":" && msg.add2[9] == '4' && msg.add2[10] == '9' && msg.add2[11] == ":" && msg.add2[12] == 'e' && msg.add2[13] == '1' && msg.add2[14] == ":" && msg.add2[15] == '4' && msg.add2[16] == 'f' ){
      msg.add3 = msg.add2;
      msg.test =
        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
      msg.sig = msg.payload[111] + msg.payload[112]; //116,117
    }
    if (msg.add2[0] == "5" && msg.add2[1] == "f") {
      // && msg.add2[2] == ":" && msg.add2[3] == '2' && msg.add2[4] == 'c' && msg.add2[5] == ":" && msg.add2[6] == 'b' && msg.add2[7] == '6' && msg.add2[8] == ":" && msg.add2[9] == '4' && msg.add2[10] == '9' && msg.add2[11] == ":" && msg.add2[12] == 'e' && msg.add2[13] == '1' && msg.add2[14] == ":" && msg.add2[15] == '4' && msg.add2[16] == 'f' ){
      msg.add4 = msg.add2;
      msg.test =
        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
      msg.sig2 = msg.payload[111] + msg.payload[112]; //116,117
    }
    if (msg.add2[0] == "6" && msg.add2[1] == "f") {
      // && msg.add2[2] == ":" && msg.add2[3] == '2' && msg.add2[4] == 'c' && msg.add2[5] == ":" && msg.add2[6] == 'b' && msg.add2[7] == '6' &&msg.add2[8] == ":" && msg.add2[9] == '4' && msg.add2[10] == '9' && msg.add2[11] == ":" && msg.add2[12] == 'e' && msg.add2[13] == '1' && msg.add2[14] == ":" && msg.add2[15] == '4' && msg.add2[16] == 'f' ){
      msg.add5 = msg.add2;
      msg.test =
        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
      msg.sig3 = msg.payload[111] + msg.payload[112]; //116,117
    }
    if (msg.add2[0] == "7" && msg.add2[1] == "f") {
      // && msg.add2[2] == ":" && msg.add2[3] == '2' && msg.add2[4] == 'c' && msg.add2[5] == ":" && msg.add2[6] == 'b' && msg.add2[7] == '6' && msg.add2[8] == ":" && msg.add2[9] == '4' && msg.add2[10] == '9' && msg.add2[11] == ":" && msg.add2[12] == 'e' && msg.add2[13] == '1' && msg.add2[14] == ":" && msg.add2[15] == '4' && msg.add2[16] == 'f' ){
      msg.add6 = msg.add2;
      msg.test =
        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
      msg.sig4 = msg.payload[111] + msg.payload[112]; //116,117
    }
    //}
    /*if (msg.add2 == "6e:91:44:e1:e1:a9"){//"08:2C:B6:49:E1:4F"){
 msg.add = msg.add2;
 msg.sig = "61";
 for (var j = 0; j<sLength; j++){
 if (msg.payload[j] == 'R' && msg.payload[j+1] == 's' && 
msg.payload[j+2] == 's' && msg.payload[j+3] == 'i'){
 msg.sig = "52";//msg.payload[j+7] + msg.payload[j+8];
 
 //msg.payload = 
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
 }
 }
 }*/
  }
}

return msg;
