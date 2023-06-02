//The following bit of code was used in a Node-RED function node in order to print the obtained 
//RSSI signals from each ESP32 Bluetooth beacon into the debug log.

if (msg.add2 == msg.add3 && msg.sig != null) {
  msg.payload = msg.sig;
  node.warn(msg.sig);
}
if (msg.add2 == msg.add4 && msg.sig2 != null) {
  msg.payload = msg.sig2;
  node.warn(msg.sig2);
}
if (msg.add2 == msg.add5 && msg.sig3 != null) {
  msg.payload = msg.sig3;
  node.warn(msg.sig3);
}
if (msg.add2 == msg.add6 && msg.sig4 != null) {
  msg.payload = msg.sig4;
  node.warn(msg.sig4);
}
return msg;