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
  content +="<td><a href='./' class=\"pm_text\"><button>Home</button></a></td>";
  content +="<td><a href='./editor'  class=\"pm_text\"><button>Editor Motor</button></a></td>";
  content +="<td><a href='./zero'  class=\"pm_text\"><button>Init Motor</button></a></td>";
  content +="<td><a href='./setting'  class=\"pm_text\"><button>Setting Motor</button></a></td>";
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
  content +="<td><a href='./' class=\"pm_text\"><button>Home</button></a></td>";
  content +="<td><a href='./editor'  class=\"pm_text\"><button>Editor Motor</button></a></td>";
  content +="<td><a href='./zero'  class=\"pm_text\"><button>Init Motor</button></a></td>";
  content +="<td><a href='./setting'  class=\"pm_text\"><button>Setting Motor</button></a></td>";
  content +="</tr>";
  content += "</table>";
  
  content += "<table width=\"100%\">";
  content += "<tr>";
  
  content += "<td width=\"50%\"><button class=\"pm_btn\" type=\"button\" onclick=\"motor(17, 90)\">GPIO14[17]</button></td>";
  content += "<td width=\"50%\"><button class=\"pm_btn\" type=\"button\" onclick=\"motor(16, 90)\">GPIO12[16]</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td><button class=\"pm_btn\" style=\"background: #f5da81;\" type=\"button\" onclick=\"motor(8,40)\">Servo 8</button></td>";
  content += "<td><button class=\"pm_btn\" style=\"background: #f5da81;\" type=\"button\" onclick=\"motor(7,80)\">Servo 7</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td><button class=\"pm_btn\" style=\"background: #bdbdbd;\" type=\"button\" onclick=\"motor(9,100)\">Servo 9</button></td>";
  content += "<td><button class=\"pm_btn\" style=\"background: #bdbdbd;\" type=\"button\" onclick=\"motor(6,20)\">Servo 6</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"motor(10,20)\">Servo 10</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"motor(5, 100)\">Servo 5</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"motor(11,30)\">Servo 11</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"motor(4,80)\">Servo 4</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td><button class=\"pm_btn\" style=\"background: #bdbdbd;\" type=\"button\" onclick=\"motor(12,55)\">Servo 12</button></td>";
  content += "<td><button class=\"pm_btn\" style=\"background: #bdbdbd;\" type=\"button\" onclick=\"motor(3,60)\">Servo 3</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td><button class=\"pm_btn\" style=\"background: #f5da81;\" type=\"button\" onclick=\"motor(13,35)\">Servo 13</button></td>";
  content += "<td><button class=\"pm_btn\" style=\"background: #f5da81;\" type=\"button\" onclick=\"motor(2,80)\">Servo 2</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td><button class=\"pm_btn\" style=\"background: #bdbdbd;\" type=\"button\" onclick=\"motor(14,75)\">Servo 14</button></td>";
  content += "<td><button class=\"pm_btn\" style=\"background: #bdbdbd;\" type=\"button\" onclick=\"motor(1,35)\">Servo 1</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"motor(15,50)\">Servo 15</button></td>";
  content += "<td><button class=\"pm_btn\" type=\"button\" onclick=\"motor(0,65)\">Servo 0</button></td>";
  content += "</tr>";

  
  content += "<tr>";
  content += "<td colspan=\"2\"><button class=\"pm_btn\" type=\"button\" onclick=\"reset()\">ALL</button></td>";
  content += "</tr>";
  
  
  content += "</table>";
  content += "<br>";
  
  
  content += "</body>";
  content += "<script>";
  content += "function motor(id, value) {";
  content += "  var xhttp = new XMLHttpRequest();";
  
  content += "  xhttp.onreadystatechange = function() {";
  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
  content += "    }";
  content += "  };";
  content += "  xhttp.open(\"GET\", \"motor?motor_id=\"+id+\"&value=\"+value, true);";
  content += "  xhttp.send();";
  content += "}";
  
  content += "function reset() {";
  content += "  var xhttp = new XMLHttpRequest();";
  
  content += "  xhttp.onreadystatechange = function() {";
  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
  content += "    }";
  content += "  };";
  content += "  xhttp.open(\"GET\", \"reset\", true);";
  content += "  xhttp.send();";
  content += "}";
//  content += "function controlGpid(id, value) {";
//  content += "  var xhttp = new XMLHttpRequest();";
//  
//  content += "  xhttp.onreadystatechange = function() {";
//  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
//  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
//  content += "    }";
//  content += "  };";
//  content += "  xhttp.open(\"GET\", \"controller?gpid=\"+id+\"&value=\"+value, true);";
//  content += "  xhttp.send();";
//  content += "}";
  
//  content += "function controlPm(value) {";
//  content += "  var xhttp = new XMLHttpRequest();";
//  content += "  xhttp.onreadystatechange = function() {";
//  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
//  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
//  content += "    }";
//  content += "  };";
//  content += "  xhttp.open(\"GET\", \"controller?pm=\"+value, true);";
//  content += "  xhttp.send();";
//  content += "}";

  content += "function action(actionId, value) {";
  content += "  var xhttp = new XMLHttpRequest();";
  content += "  xhttp.onreadystatechange = function() {";
  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
  content += "    }";
  content += "  };";
  content += "  xhttp.open(\"GET\", \"action?action_id=\"+actionId, true);";
  content += "  xhttp.send();";
  content += "}";
  
  content += "</script>";
  content += "</html>";
  
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
  content +="<td><a href='./' class=\"pm_text\"><button>Home</button></a></td>";
  content +="<td><a href='./editor'  class=\"pm_text\"><button>Editor Motor</button></a></td>";
  content +="<td><a href='./zero'  class=\"pm_text\"><button>Init Motor</button></a></td>";
  content +="<td><a href='./setting'  class=\"pm_text\"><button>Setting Motor</button></a></td>";
  content +="</tr>";
  content += "</table>";
  
  content += "<table width=\"100%\">";
  content += "<tr>";
  
  content += "<td width=\"50%\">GPID14<br/><input class=\"pm_text\" type=\"text\" id=\"gpid_14\" value=\"90\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlGpid(17, 'gpid_14')\">SEND</button></td>";
  content += "<td width=\"50%\">GPID12<br/><input class=\"pm_text\" type=\"text\" id=\"gpid_12\"  value=\"90\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlGpid(16, 'gpid_12')\">SEND</button></td>";
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
  content += "<td>Servo12<br/><input class=\"pm_text\" type=\"text\" value=\"55\" id=\"servo_12\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(12,'servo_12')\">SEND</button></td>";
  content += "<td>Servo3<br/><input class=\"pm_text\" type=\"text\" value=\"60\" id=\"servo_3\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(3,'servo_3')\">SEND</button></td>";
  content += "</tr>";
  
  
  content += "<tr>";
  content += "<td>Servo13<br/><input class=\"pm_text\" type=\"text\" value=\"35\" id=\"servo_13\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(13,'servo_13')\">SEND</button></td>";
  content += "<td>Servo2<br/><input class=\"pm_text\" type=\"text\" value=\"80\" id=\"servo_2\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(2,'servo_2')\">SEND</button></td>";
  content += "</tr>";
  
  
  content += "<tr>";
  content += "<td>Servo14<br/><input class=\"pm_text\" type=\"text\" value=\"75\" id=\"servo_14\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(14,'servo_14')\">SEND</button></td>";
  content += "<td>Servo1<br/><input class=\"pm_text\" type=\"text\" value=\"35\" id=\"servo_1\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(1,'servo_1')\">SEND</button></td>";
  content += "</tr>";
  
  content += "<tr>";
  content += "<td>Servo15<br/><input class=\"pm_text\" type=\"text\" value=\"50\" id=\"servo_15\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(15,'servo_15')\">SEND</button></td>";
  content += "<td>Servo0<br/><input class=\"pm_text\" type=\"text\" value=\"65\" id=\"servo_0\"><button class=\"pm_btn\" type=\"button\" onclick=\"controlServo(0,'servo_0')\">SEND</button></td>";
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
  content += "  xhttp.open(\"GET\",\"motor?motor_id=\"+id+\"&value=\"+value, true);";
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
  content += "  xhttp.open(\"GET\", \"motor?motor_id=\"+id+\"&value=\"+value, true);";
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

/*============================================================================
  馬達校正畫面
  ============================================================================*/
void handleSetting()
{
  int8_t servo17Val = readKeyValue(17);
  String servo17ValStr = String(servo17Val);

  int8_t servo16Val = readKeyValue(16);
  String servo16ValStr = String(servo16Val);

  int8_t servo8Val = readKeyValue(8);
  String servo8ValStr = String(servo8Val);

  int servo7Val = readKeyValue(7);
  String servo7ValStr = String(servo7Val);

  int servo9Val = readKeyValue(9);
  String servo9ValStr = String(servo9Val);

  int servo6Val = readKeyValue(6);
  String servo6ValStr = String(servo6Val);

  int servo10Val = readKeyValue(10);
  String servo10ValStr = String(servo10Val);

  int servo5Val = readKeyValue(5);
  String servo5ValStr = String(servo5Val);

  int servo11Val = readKeyValue(11);
  String servo11ValStr = String(servo11Val);

  int servo4Val = readKeyValue(4);
  String servo4ValStr = String(servo4Val);

  int servo12Val = readKeyValue(12);
  String servo12ValStr = String(servo12Val);

  int servo3Val = readKeyValue(3);
  String servo3ValStr = String(servo3Val);

  int servo13Val = readKeyValue(13);
  String servo13ValStr = String(servo13Val);

  int servo2Val = readKeyValue(2);
  String servo2ValStr = String(servo2Val);

  int servo14Val = readKeyValue(14);
  String servo14ValStr = String(servo14Val);

  int servo1Val = readKeyValue(1);
  String servo1ValStr = String(servo1Val);

  int servo15Val = readKeyValue(15);
  String servo15ValStr = String(servo15Val);

  int servo0Val = readKeyValue(0);
  String servo0ValStr = String(servo0Val);

  String content = "";
  content += "<html>";
  content += "<head>";
  content += "  <title>MiniPlan Setting</title>";
  content += "  <style type=\"text/css\">";
  content += "  body {";
  content += "    color: white;";
  content += "    background-color: #000000 }";

  content += "  .pm_btn {";
  content += "  width: 120px;";
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
  content += "width: 80px;";
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
  content += "width: 160px;";
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
  content +="<td><a href='./' class=\"pm_text\"><button>Home</button></a></td>";
  content +="<td><a href='./editor'  class=\"pm_text\"><button>Editor Motor</button></a></td>";
  content +="<td><a href='./zero'  class=\"pm_text\"><button>Init Motor</button></a></td>";
  content +="<td><a href='./setting'  class=\"pm_text\"><button>Setting Motor</button></a></td>";
  content +="</tr>";
  content += "</table>";
  
  content += "<table>";
  content += "<tr>";
  content += "<td>GPIO 14 (Servo 17)<br/><input class=\"pm_text\" type=\"text\" id=\"servo_17\" value=\"" + servo17ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(17,'servo_17')\">SET</button></td>";
  content += "<td>GPIO 12 (Servo 16)<br/><input class=\"pm_text\" type=\"text\" id=\"servo_16\" value=\"" + servo16ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(16,'servo_16')\">SET</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td>Servo 8<br/><input class=\"pm_text\" type=\"text\" id=\"servo_8\" value=\"" + servo8ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(8,'servo_8')\">SET</button></td>";
  content += "<td>Servo 7<br/><input class=\"pm_text\" type=\"text\" id=\"servo_7\" value=\"" + servo7ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(7,'servo_7')\">SET</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td>Servo 9<br/><input class=\"pm_text\" type=\"text\" id=\"servo_9\" value=\"" + servo9ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(9,'servo_9')\">SET</button></td>";
  content += "<td>Servo 6<br/><input class=\"pm_text\" type=\"text\" id=\"servo_6\" value=\"" + servo6ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(6,'servo_6')\">SET</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td>Servo 10<br/><input class=\"pm_text\" type=\"text\" id=\"servo_10\" value=\"" + servo10ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(10,'servo_10')\">SET</button></td>";
  content += "<td>Servo 5<br/><input class=\"pm_text\" type=\"text\" id=\"servo_5\" value=\"" + servo5ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(5,'servo_5')\">SET</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td>Servo 11<br/><input class=\"pm_text\" type=\"text\" id=\"servo_11\" value=\"" + servo11ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(11,'servo_11')\">SET</button></td>";
  content += "<td>Servo 4<br/><input class=\"pm_text\" type=\"text\" id=\"servo_4\" value=\"" + servo4ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(4,'servo_4')\">SET</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td>Servo 12<br/><input class=\"pm_text\" type=\"text\" id=\"servo_12\" value=\"" + servo12ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(12,'servo_12')\">SET</button></td>";
  content += "<td>Servo 3<br/><input class=\"pm_text\" type=\"text\" id=\"servo_3\" value=\"" + servo3ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(3,'servo_3')\">SET</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td>Servo 13<br/><input class=\"pm_text\" type=\"text\" id=\"servo_13\" value=\"" + servo13ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(13,'servo_13')\">SET</button></td>";
  content += "<td>Servo 2<br/><input class=\"pm_text\" type=\"text\" id=\"servo_2\" value=\"" + servo2ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(2,'servo_2')\">SET</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td>Servo 14<br/><input class=\"pm_text\" type=\"text\" id=\"servo_14\" value=\"" + servo14ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(14,'servo_14')\">SET</button></td>";
  content += "<td>Servo 1<br/><input class=\"pm_text\" type=\"text\" id=\"servo_1\" value=\"" + servo1ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(1,'servo_1')\">SET</button></td>";
  content += "</tr>";

  content += "<tr>";
  content += "<td>Servo 15<br/><input class=\"pm_text\" type=\"text\" id=\"servo_15\" value=\"" + servo15ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(15,'servo_15')\">SET</button></td>";
  content += "<td>Servo 0<br/><input class=\"pm_text\" type=\"text\" id=\"servo_0\" value=\"" + servo0ValStr + "\"><button class=\"pm_btn\" type=\"button\" onclick=\"saveServo(0,'servo_0')\">SET</button></td>";
  content += "</tr>";
  content += "</table>";

  content += "<br>";

  content += "<table>";
  content += "<tr>";
  content += "<td><button class=\"pm_btn\" style=\"background: #ed3db5;\" type=\"button\" onclick=\"saveServo(100, 0)\">RESET</button></td>";
  content += "</tr>";
  content += "</table>";

  content += "<br>";

  content += "</body>";
  content += "<script>";

  content += "function saveServo(id, textId) {";
  content += "  var xhttp = new XMLHttpRequest();";
  content += "  var value = \"0\";";
  content += "  if(id==100){";
  content += "    document.getElementById(\"servo_17\").value = \"0\";";
  content += "    document.getElementById(\"servo_16\").value = \"0\";";
  content += "    document.getElementById(\"servo_15\").value = \"0\";";
  content += "    document.getElementById(\"servo_14\").value = \"0\";";
  content += "    document.getElementById(\"servo_13\").value = \"0\";";
  content += "    document.getElementById(\"servo_12\").value = \"0\";";
  content += "    document.getElementById(\"servo_11\").value = \"0\";";
  content += "    document.getElementById(\"servo_10\").value = \"0\";";
  content += "    document.getElementById(\"servo_9\").value = \"0\";";
  content += "    document.getElementById(\"servo_8\").value = \"0\";";
  content += "    document.getElementById(\"servo_7\").value = \"0\";";
  content += "    document.getElementById(\"servo_6\").value = \"0\";";
  content += "    document.getElementById(\"servo_5\").value = \"0\";";
  content += "    document.getElementById(\"servo_4\").value = \"0\";";
  content += "    document.getElementById(\"servo_3\").value = \"0\";";
  content += "    document.getElementById(\"servo_2\").value = \"0\";";
  content += "    document.getElementById(\"servo_1\").value = \"0\";";
  content += "    document.getElementById(\"servo_0\").value = \"0\";";
  content += "  }else{";
  content += "    value = document.getElementById(textId).value;";
  content += "   }";
  content += "  xhttp.onreadystatechange = function() {";
  content += "    if (xhttp.readyState == 4 && xhttp.status == 200) {";
  content += "     document.getElementById(\"demo\").innerHTML = xhttp.responseText;";
  content += "    }";
  content += "  };";
  content += "  xhttp.open(\"GET\",\"save?key=\"+id+\"&value=\"+value, true);";
  content += "  xhttp.send();";
  content += "}";

  content += "</script>";
  content += "</html>";
  server.send(200, "text/html", content);
}

/*============================================================================*/
void handleSave()
{
  //移動到davinci
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
    
    currentAction = ACTION_DAVINCI;
  }
  else
  {
    writeKeyValue(keyInt, valueInt);
    if(keyInt==16){
      int GPIO12_PWM = actionDavinci[16] + readKeyValue(16);
      GPIO12SERVO.write(GPIO12_PWM);
    }
    else if(keyInt==17){
      int GPIO14_PWM = actionDavinci[17] + readKeyValue(17);
      GPIO14SERVO.write(GPIO14_PWM);
    }
    else{
      int pwnVal = actionDavinci[keyInt] + readKeyValue(keyInt);
      int pulselength = map(pwnVal, 0, 180, SERVOMIN, SERVOMAX);
      pwm.setPWM(keyInt, 0, pulselength);
    }
  }
  
  
  //currentAction = ACTION_DAVINCI;

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
      int SERVOID_PWM = iServoPWM + readKeyValue(iMotorId);
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

void handleReset(){
  currentAction = ACTION_DAVINCI;
  
  server.send(200, "text/html", "reset=complete");
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

void handleHello(){
  String content = "";
  content = "<html>";
  content += "<body>";
  content += "Hello word";
  content += "</body>";
  content += "</html>";
  server.send(200, "text/html", content);
}

void handleHelloAction(){
  String content = "";
  content = "<html>";
  content += "<body>";
  content += "Hello word";
  content += "</body>";
  content += "</html>";
  resetToHello();
  server.send(200, "text/html", content);
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
  server.on("/reset", getMethod, handleReset);
  server.on("/setting", getMethod, handleSetting);
  server.on("/hello", getMethod, handleHello);
  
  server.begin();
  
  Serial.println("service enable");
  
}

