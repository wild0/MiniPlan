void handleZero(){

  String content = "";
  content += "<html>";
  content += "<head>";
  content += "<title>MiniPlen Controller</title>";
  content += " <style type=\"text/css\">";
  content += "  body {";
  content += "    color: white;";
  content += "    background-color: #000000 }";
  
  content += "  .pm_btn {";
  //content += "  width: 160px;";
  content += "  -webkit-border-radius: 5;";
  content += "  -moz-border-radius: 5;";
  content += "  border-radius: 5px;";
  content += "  font-family: Arial;";
  content += "  color: #ffffff;";
  content += "  font-size: 24px;";
  content += "  background: #3498db;";
  content += "  padding: 10px 20px 10px 20px;";
  content += "  text-decoration: none;";
  content += "}";
  content += ".pm_text {";
  //content += "width: 160px;";
  content += "-webkit-border-radius: 5;";
  content += "-moz-border-radius: 5;";
  content += "border-radius: 5px;";
  content += "font-family: Arial;";
  content += "font-size: 24px;";
  
  content += "padding: 10px 20px 10px 20px;";
  content += "text-decoration: none;";
  content += "}";
  
  content += ".pm_btn:hover {";
  content += "  background: #3cb0fd;";
  content += "  background-image: -webkit-linear-gradient(top, #3cb0fd, #3498db);";
  content += "  background-image: -moz-linear-gradient(top, #3cb0fd, #3498db);";
  content += "  background-image: -ms-linear-gradient(top, #3cb0fd, #3498db);";
  content += "  background-image: -o-linear-gradient(top, #3cb0fd, #3498db);";
  content += "  background-image: linear-gradient(to bottom, #3cb0fd, #3498db);";
  content += "  text-decoration: none;";
  content += "}";
  
  content += ".pms_btn {";
  //content += "width: 240px;";
  content += "-webkit-border-radius: 5;";
  content += "-moz-border-radius: 5;";
  content += "border-radius: 5px;";
  content += "font-family: Arial;";
  content += "color: #ffffff;";
  content += "font-size: 24px;";
  content += "background: #3498db;";
  content += "padding: 10px 20px 10px 20px;";
  content += "text-decoration: none;";
  content += "}";
  
  content += ".pms_btn:hover {";
  content += "background: #3cb0fd;";
  content += "background-image: -webkit-linear-gradient(top, #3cb0fd, #3498db);";
  content += "background-image: -moz-linear-gradient(top, #3cb0fd, #3498db);";
  content += "background-image: -ms-linear-gradient(top, #3cb0fd, #3498db);";
  content += "background-image: -o-linear-gradient(top, #3cb0fd, #3498db);";
  content += "background-image: linear-gradient(to bottom, #3cb0fd, #3498db);";
  content += "text-decoration: none;";
  content += "}";
  content += "  </style>";
  content += "</head>";
  content += "<body>";
  
  content += "<table width=\"100%\">";
  content +="<tr>";
  content +="<td><a href='./index'><button>Home</button></a></td>";
  content +="<td><a href='./editor'><button>Setting Motor</button></a></td>";
  content +="<td><a href='./zero'><button>Init Motor</button></a></td>";
  content +="</tr>";
  content += "</table>";
  
  content += "<table width=\"100%\">";
  content += "<tr>";
  
  content += "<td width=\"50%\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlGpid(14, 90)\">GPIO14</button></td>";
  content += "<td width=\"50%\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlGpid(12, 90)\">GPIO12</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(8,90)\">Servo 10</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(7, 60)\">Servo 5</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(9,90)\">Servo 9</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(6,'servo_6')\">Servo 6</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(8,90)\">Servo 8</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(7,90)\">Servo 7</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(11,90)\">Servo 11</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(4,90)\">Servo 4</button></td>";
  content += "</tr>";
  
  
  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(12,90)\">Servo 12</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(3,90)\">Servo 3</button></td>";
  content += "</tr>";
  
  
  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(13,90)\">Servo 13</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(2,90)\">Servo 2</button></td>";
  content += "</tr>";
  
  
  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(14,90)\">Servo 14</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(1,90)\">Servo 1</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(15,90)\">Servo 15</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(0,90)\">Servo 0</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td colspan=\"2\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlPm(100)\">ALL</button></td>";
  content += "</tr>";
  
  
  content += "</table>";
  content += "<br>";
  
  
  content += "</body>";
  content += "<script>";
  content += "function controlServo(id, value) {";
  content += "  var xhttp = new XMLHttpRequest();";
  
  content += "  xhttp.onreadystatechange = function() {";
  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
  content += "    }";
  content += "  };";
  content += "  xhttp.open(\"GET\", \"controller?servo=\"+id+\"&value=\"+value, true);";
  content += "  xhttp.send();";
  content += "}";
  content += "function controlGpid(id, value) {";
  content += "  var xhttp = new XMLHttpRequest();";
  
  content += "  xhttp.onreadystatechange = function() {";
  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
  content += "    }";
  content += "  };";
  content += "  xhttp.open(\"GET\", \"controller?gpid=\"+id+\"&value=\"+value, true);";
  content += "  xhttp.send();";
  content += "}";
  
  content += "function controlPm(value) {";
  content += "  var xhttp = new XMLHttpRequest();";
  content += "  xhttp.onreadystatechange = function() {";
  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
  content += "    }";
  content += "  };";
  content += "  xhttp.open(\"GET\", \"controller?pm=\"+value, true);";
  content += "  xhttp.send();";
  content += "}";
  
  content += "</script>";
  content += "</html>";
  
  server.send(200, "text/html", content);
  
}

//首頁顯示的畫面
void handleIndex() {

  String content = "";
  content +="<html>";
  content +="<head>";
  content +="  <title>MiniPlen Controller</title>";
  content +="  <style type=\"text/css\">";
  content +="  body {";
  content +="    color: purple;";
  content +="    background-color: #000000 }";
  content +="  .pm_btn {";
  content +="  width: 160px;";
  content +="  -webkit-border-radius: 5;";
  content +="  -moz-border-radius: 5;";
  content +="  border-radius: 5px;";
  content +="  font-family: Arial;";
  content +="  color: #ffffff;";
  content +=" font-size: 24px;";
  content +="background: #3498db;";
  content +="  padding: 10px 20px 10px 20px;";
  content +="  text-decoration: none;";
  content +="}";

  content +=".pm_btn:hover {";
  content +="  background: #3cb0fd;";
  content +="  background-image: -webkit-linear-gradient(top, #3cb0fd, #3498db);";
  content +="  background-image: -moz-linear-gradient(top, #3cb0fd, #3498db);";
  content +="  background-image: -ms-linear-gradient(top, #3cb0fd, #3498db);";
  content +="  background-image: -o-linear-gradient(top, #3cb0fd, #3498db);";
  content +="  background-image: linear-gradient(to bottom, #3cb0fd, #3498db);";
  content +="  text-decoration: none;";
  content +="}";

  content +=".pms_btn {";
  content +="width: 240px;";
  content +="-webkit-border-radius: 5;";
  content +="-moz-border-radius: 5;";
  content +="border-radius: 5px;";
  content +="font-family: Arial;";
  content +="color: #ffffff;";
  content +="font-size: 24px;";
  content +="background: #3498db;";
  content +="padding: 10px 20px 10px 20px;";
  content +="text-decoration: none;";
  content +="}";

  content +=".pms_btn:hover {";
  content +="background: #3cb0fd;";
  content +="background-image: -webkit-linear-gradient(top, #3cb0fd, #3498db);";
  content +="background-image: -moz-linear-gradient(top, #3cb0fd, #3498db);";
  content +="background-image: -ms-linear-gradient(top, #3cb0fd, #3498db);";
  content +="background-image: -o-linear-gradient(top, #3cb0fd, #3498db);";
  content +="background-image: linear-gradient(to bottom, #3cb0fd, #3498db);";
  content +="text-decoration: none;";
  content +="}";
   content +=" </style>";
  content +="</head>";


  
  content +="<body>";
  
  content += "<table width=\"100%\">";
  content +="<tr>";
  content +="<td><a href='./index'><button>Home</button></a></td>";
  content +="<td><a href='./editor'><button>Setting Motor</button></a></td>";
  content +="<td><a href='./zero'><button>Init Motor</button></a></td>";
  content +="</tr>";
  content += "</table>";
  
  content +="<table>";
  content +="<tr>";
  content +="<td></td>";
  content +="<td><button  class=\"pm_btn\" type=\"button\" onclick=\"action(8)\">Forward</button></td>";
  content +="<td></td>";
  content +="</tr>";

  content +="<tr>";
  content +="<td><button  class=\"pm_btn\" type=\"button\" onclick=\"action(10)\">Left</button></td>";
  content +="<td><button  class=\"pm_btn\" style=\"background: #ed3db5;\" type=\"button\" onclick=\"action(1)\">STOP</button></td>";
  content +="<td><button  class=\"pm_btn\" type=\"button\" onclick=\"action(11)\">Right</button></td>";
  content +="</tr>";

  content +="<tr>";
  content +="<td></td>";
  content +="<td><button  class=\"pm_btn\" type=\"button\" onclick=\"controlPm(9)\">Backward</button></td>";
  content +="<td></td>";
  content +="</tr>";
  content +="</table>";

  content +="<table>";
  content +="<tr>";
  content +="<td><button class=\"pms_btn\"  type=\"button\" onclick=\"action(2)\">Bow</button></td>";
  content +="<td><button  class=\"pms_btn\" type=\"button\" onclick=\"action(5)\">Apache</button></td>";
  content +="</tr>";
  content +="<tr>";
  content +="<td><button class=\"pms_btn\"  type=\"button\" onclick=\"action(3)\">Waving</button></td>";
  content +="<td><button  class=\"pms_btn\" type=\"button\" onclick=\"action(6)\">Balance</button></td>";
  content +="</tr>";
  content +="<tr>";
  content +="<td><button class=\"pms_btn\"  type=\"button\" onclick=\"action(4)\">Iron Man</button></td>";
  content +="<td><button  class=\"pms_btn\" type=\"button\" onclick=\"action(7)\">Warm-Up</button></td>";
  content +="</tr>";
  content +="<tr>";
  content +="<td colspan=\"2\"><center><button  class=\"pms_btn\" type=\"button\" onclick=\"action(99)\">Auto</button></center></td>";

  content +="</tr>";
  content +="</table>";

  content +="</body>";
  content +="<script>";
  content +="function action(id) {";
  content +="var xhttp = new XMLHttpRequest();";
  content +="xhttp.onreadystatechange = function() {";
  content +="    if (xhttp.readyState == 4 && xhttp.status == 200) {";

  content +="    }";
  content +="  };";
  content +="  xhttp.open(\"GET\", \"action?action_id=\"+id, true);";
  content +="  xhttp.send();";
  content +="}";

  content +="</script>";
  content +="</html>";
  
  server.send(200, "text/html", content);
  
}

void handlerEditor(){

  String content = "";
  content += "<html>";
  content += "<head>";
  content += "  <title>MiniPlen Controller</title>";
  content += "  <style type=\"text/css\">";
  content += "  body {";
  content += "    color: white;";
  content += "    background-color: #000000 }";
  
  content += "  .pm_btn {";
  content += "  -webkit-border-radius: 5;";
  content += "  -moz-border-radius: 5;";
  content += "  border-radius: 5px;";
  content += "  font-family: Arial;";
  content += "  color: #ffffff;";
  content += "  font-size: 24px;";
  content += "  background: #3498db;";
  content += "  padding: 10px 20px 10px 20px;";
  content += "  text-decoration: none;";
  content += "}";
  
  content += ".pm_text {";
  content += "width: 50%;";
  content += "-webkit-border-radius: 5;";
  content += "-moz-border-radius: 5;";
  content += "border-radius: 5px;";
  content += "font-family: Arial;";
  content += "font-size: 24px;";
  content += "padding: 10px 20px 10px 20px;";
  content += "text-decoration: none;";
  content += "}";
  
  content += ".pm_btn:hover {";
  content += "  background: #3cb0fd;";
  content += "  background-image: -webkit-linear-gradient(top, #3cb0fd, #3498db);";
  content += "  background-image: -moz-linear-gradient(top, #3cb0fd, #3498db);";
  content += "  background-image: -ms-linear-gradient(top, #3cb0fd, #3498db);";
  content += "  background-image: -o-linear-gradient(top, #3cb0fd, #3498db);";
  content += "  background-image: linear-gradient(to bottom, #3cb0fd, #3498db);";
  content += "  text-decoration: none;";
  content += "}";
  
  content += ".pms_btn {";
  content += "-webkit-border-radius: 5;";
  content += "-moz-border-radius: 5;";
  content += "border-radius: 5px;";
  content += "font-family: Arial;";
  content += "color: #ffffff;";
  content += "font-size: 24px;";
  content += "background: #3498db;";
  content += "padding: 10px 20px 10px 20px;";
  content += "text-decoration: none;";
  content += "}";
  
  content += ".pms_btn:hover {";
  content += "background: #3cb0fd;";
  content += "background-image: -webkit-linear-gradient(top, #3cb0fd, #3498db);";
  content += "background-image: -moz-linear-gradient(top, #3cb0fd, #3498db);";
  content += "background-image: -ms-linear-gradient(top, #3cb0fd, #3498db);";
  content += "background-image: -o-linear-gradient(top, #3cb0fd, #3498db);";
  content += "background-image: linear-gradient(to bottom, #3cb0fd, #3498db);";
  content += "text-decoration: none;";
  content += "}";
  content += "  </style>";
  content += "</head>";
  content += "<body>";
  
  content += "<table width=\"100%\">";
  content +="<tr>";
  content +="<td><a href='./index'><button>Home</button></a></td>";
  content +="<td><a href='./editor'><button>Setting Motor</button></a></td>";
  content +="<td><a href='./zero'><button>Init Motor</button></a></td>";
  content +="</tr>";
  content += "</table>";
  
  content += "<table width=\"100%\">";
  content += "<tr>";
  
  content += "<td width=\"50%\">GPID14<br/><input class=\"pm_text\" type=\"text\" id=\"gpid_14\" value=\"90\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlGpid(14, 'gpid_14')\">SEND</button></td>";
  content += "<td width=\"50%\">GPID12<br/><input class=\"pm_text\" type=\"text\" id=\"gpid_12\"  value=\"90\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlGpid(12, 'gpid_12')\">SEND</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td>Servo8<br/><input class=\"pm_text\" type=\"text\" id=\"servo_8\" value=\"40\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(8,'servo_8')\">SEND</button></td>";
  content += "<td>Servo7<br/><input class=\"pm_text\" type=\"text\" id=\"servo_7\" value=\"80\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(7, 'servo_7')\">SEND</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td>Servo9<br/><input class=\"pm_text\" type=\"text\" id=\"servo_9\" value=\"100\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(9,'servo_9')\">SEND</button></td>";
  content += "<td>Servo6<br/><input class=\"pm_text\" type=\"text\" id=\"servo_6\" value=\"20\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(6,'servo_6')\">SEND</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td>Servo10<br/><input class=\"pm_text\" type=\"text\" id=\"servo_10\" value=\"20\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(10,'servo_10')\">SEND</button></td>";
  content += "<td>Servo5<br/><input class=\"pm_text\" type=\"text\" id=\"servo_5\" value=\"10\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(5,'servo_5')\">SEND</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td>Servo11<br/><input class=\"pm_text\" type=\"text\" id=\"servo_11\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(11,'servo_11')\">SEND</button></td>";
  content += "<td>Servo4<br/><input class=\"pm_text\" type=\"text\" id=\"servo_4\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(4,'servo_4')\">SEND</button></td>";
  content += "</tr>";
  
  
  content += "<tr>";
  content += "<td>Servo12<br/><input class=\"pm_text\" type=\"text\" id=\"servo_12\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(12,'servo_12')\">SEND</button></td>";
  content += "<td>Servo3<br/><input class=\"pm_text\" type=\"text\" id=\"servo_3\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(3,'servo_3')\">SEND</button></td>";
  content += "</tr>";
  
  
  content += "<tr>";
  content += "<td>Servo13<br/><input class=\"pm_text\" type=\"text\" id=\"servo_13\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(13,'servo_13')\">SEND</button></td>";
  content += "<td>Servo2<br/><input class=\"pm_text\" type=\"text\" id=\"servo_2\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(2,'servo_2')\">SEND</button></td>";
  content += "</tr>";
  
  
  content += "<tr>";
  content += "<td>Servo14<br/><input class=\"pm_text\" type=\"text\"  id=\"servo_14\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(14,'servo_14')\">SEND</button></td>";
  content += "<td>Servo1<br/><input class=\"pm_text\" type=\"text\" id=\"servo_1\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(1,'servo_1')\">SEND</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td>Servo15<br/><input class=\"pm_text\" type=\"text\"  id=\"servo_15\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(15,'servo_15')\">SEND</button></td>";
  content += "<td>Servo0<br/><input class=\"pm_text\" type=\"text\" id=\"servo_0\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(0,'servo_0')\">SEND</button></td>";
  content += "</tr>";
  
  
  content += "</table>";
  content += "<br>";
  
  
  content += "</body>";
  content += "<script>";
  
  content += "function controlServo(id, textId) {";
  content += "  var xhttp = new XMLHttpRequest();";
  content += "  var value = document.getElementById(textId).value;";
  content += "  xhttp.onreadystatechange = function() {";
  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
  content += "    }";
  content += "  };";
  content += "  xhttp.open(\"GET\",\"controller?servo=\"+id+\"&value=\"+value, true);";
  content += "  xhttp.send();";
  content += "}";
  content += "function controlGpid(id, textId) {";
  content += "  var xhttp = new XMLHttpRequest();";
  content += "  var value = document.getElementById(textId).value;";
  content += "  xhttp.onreadystatechange = function() {";
  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
  content += "    }";
  content += "  };";
  content += "  xhttp.open(\"GET\", \"controller?gpid=\"+id+\"&value=\"+value, true);";
  content += "  xhttp.send();";
  content += "}";
  
  content += "function controlPm(value) {";
  content += "  var xhttp = new XMLHttpRequest();";
  content += "  xhttp.onreadystatechange = function() {";
  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
  content += "    }";
  content += "  };";
  content += "  xhttp.open(\"GET\", \"controller?pm=\"+value, true);";
  content += "  xhttp.send();";
  content += "}";
  
  content += "</script>";
  content += "</html>";
  server.send(200, "text/html", content);
  
}

/*============================================================================*/
void handleSave()
{
  //如果value = 100 則全部reset
  String key = server.arg("key");
  String value = server.arg("value");

  int8_t keyInt = key.toInt();
  int8_t valueInt = value.toInt();

  if (keyInt == 100)
  {
    writeKeyValue(0, 0);
    writeKeyValue(1, 0);
    writeKeyValue(2, 0);
    writeKeyValue(3, 0);
    writeKeyValue(4, 0);
    writeKeyValue(5, 0);
    writeKeyValue(6, 0);
    writeKeyValue(7, 0);
    writeKeyValue(8, 0);
    writeKeyValue(9, 0);
    writeKeyValue(10, 0);
    writeKeyValue(11, 0);
    writeKeyValue(12, 0);
    writeKeyValue(13, 0);
    writeKeyValue(14, 0);
    writeKeyValue(15, 0);
    writeKeyValue(16, 0);
    writeKeyValue(17, 0);
  }
  else
  {
    writeKeyValue(keyInt, valueInt);
  }

  server.send(200, "text/html", "(key, value)=(" + key + "," + value + ")");
}
void handleMotor(){
  String motorId = server.arg("motor_id"); //0~17
  String value = server.arg("value");
  
  if(motorId!="" && value!=""){
    int iServoPWM = value.toInt();
    int iMotorId = motorId.toInt();
    if(iMotorId==16){
      int GPIO12_PWM = iServoPWM + readKeyValue(16);
      GPIO12SERVO.write(GPIO12_PWM);
    }
    else if(iMotorId==17){
      int GPIO14_PWM = iServoPWM + readKeyValue(17);
      GPIO14SERVO.write(GPIO14_PWM);
    }
    else{
      int pulselength = map(iServoPWM, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(iMotorId, 0, pulselength);
    }
  }
  server.send(200, "text/html", "motor_id="+motorId+",value="+value);
}
void handleAction(){
  String actionId = server.arg("action_id");//前進  後退
  if(actionId!=""){
    currentAction = actionId.toInt();
  }
  server.send(200, "text/html", "action_id="+actionId);
}

int getCurrentAction(){
  return currentAction;
}

void handleController() {
  String pm = server.arg("pm");//前進  後退
  String pms = server.arg("pms");//特別動作  鞠躬
  String servo = server.arg("servo");
  String gpid = server.arg("gpid");
  String motorId = server.arg("motor_id"); //0~17
  String value = server.arg("value");

  //ival = server.arg("pm");
  if(pm!=""){
    //Servo_PROGRAM = pm.toInt();
    currentAction = pm.toInt();
  }
  //ival = server.arg("pms");
  if(pms!=""){
    //Servo_PROGRAM_Stack = pms.toInt();
    currentAction = pms.toInt();
  }
  if(servo!=""){
    //ival = server.arg("id");
      int Servo_ID = servo.toInt();
      String ival = server.arg("value");
      int Servo_PWM = ival.toInt();
      int pulselength = map(Servo_PWM, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(Servo_ID, 0, pulselength);
  }
  if(gpid!=""){
    GPIO_ID = gpid.toInt();
    if (GPIO_ID == 12) {
      String ival = server.arg("value");
      GPIO12_PWM = ival.toInt();
      GPIO12SERVO.write(GPIO12_PWM);
    }
    if (GPIO_ID == 14) {
      String ival = server.arg("value");
      GPIO14_PWM = ival.toInt();
      GPIO14SERVO.write(GPIO14_PWM);
    }
  }
  server.send(200, "text/html", "(pm, pms)=("+pm+","+pms+")");
}

void enableWebServer(){
  
  HTTPMethod getMethod = HTTP_GET;
  
  server.on("/", getMethod, handleIndex);
  server.on("/zero", getMethod, handleZero);
  server.on("/editor", getMethod, handlerEditor);
  server.on("/save", getMethod, handleSave);
  server.on("/controller", getMethod, handleController);
  server.on("/action", getMethod, handleAction);
  server.on("/motor", getMethod, handleMotor);
  server.begin();
  
  Serial.println("service enable");
  
}

