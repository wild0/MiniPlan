#include <Wire.h>
#include <Servo.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <Adafruit_PWMServoDriver.h>
#include <EEPROM.h>

// I2C Address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
Servo GPIO12SERVO;
Servo GPIO14SERVO;

int busy = 0;
// Servos Matrix
const int ALLMATRIX = 19;          // 0 ~ 15 Servo + GPIO12 + GPIO14 + Run Time
const int ALLSERVOS = 18;        // 16 ~ 17 Servo + GPIO12 + GPIO14
const int PWMRES_Min = 1;        // PWM Resolution 1
const int PWMRES_Max = 120;   // PWM Resolution 120

// ES08MDII Pulse Traveling 1500us to 1900us , 120度
const int SERVOMIN = 1100;     // 1100
const int SERVOMAX = 2700;    // 2600

// Servo Delay Base Time
const int BASEDELAYTIME = 10;    // 10ms

// AP Password
const char WiFiAPPSK[] = "12345678";

int GPIO_ID;
int GPIO12_PWM; //16
int GPIO14_PWM; //17

int rollbackAction;
int currentAction;

// Backup Servo Value
int currentPosition [ALLMATRIX];

ESP8266WebServer server(80);


const int ACTION_00 = 0; //standbyconst
const int ACTION_01 = 1; //standby
const int ACTION_02 = 2;//bow
const int ACTION_03 = 3;//wave
const int ACTION_04 = 4;//ironman
const int ACTION_05 = 5;//apache
const int ACTION_06 = 6;//balance
const int ACTION_07 = 7;//warmup
const int ACTION_08 = 8;//forward
const int ACTION_09 = 9;//backward
const int ACTION_10 = 10;//left
const int ACTION_11 = 11;//right
const int ACTION_20 = 20;//right
const int ACTION_21 = 21;//right
const int ACTION_DAVINCI = 99;

void setup(void) {
  
  currentAction = 0;
  rollbackAction = 0;
  
  // PCA9685 OE PIN
  Serial.begin(9600);
  //Serial.println("miniPlan start");
  //Serial.println("miniPlen start");
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);


  // Software PWM PIN
  GPIO12SERVO.attach(12); //16
  GPIO14SERVO.attach(14); //17


  // Initialize I2C
  Wire.begin(4, 5);


  // PWMServoDriver
  pwm.begin();
  pwm.setPWMFreq(320);   // servos run at 300Hz updates

  // AP SSID Name
  uint8_t mac[WL_MAC_ADDR_LENGTH];
  WiFi.softAPmacAddress(mac);
  String macID = String(mac[WL_MAC_ADDR_LENGTH - 2], HEX) +
                 String(mac[WL_MAC_ADDR_LENGTH - 1], HEX);
  macID.toUpperCase();
  String AP_NameString = "ROB" + macID;

  char AP_NameChar[AP_NameString.length() + 1];
  memset(AP_NameChar, AP_NameString.length() + 1, 0);

  for (int i = 0; i < AP_NameString.length(); i++)
    AP_NameChar[i] = AP_NameString.charAt(i);

  WiFi.softAP(AP_NameChar, WiFiAPPSK);
  IPAddress myIP = WiFi.softAPIP();
  
  // EEPROM
  EEPROM.begin(512);
  delay(10);

  //resetServo();

  // 啟用網頁伺服器
   enableWebServer();

}



/*============================================================================*/
void loop(void) {

  
  server.handleClient();
  if(rollbackAction!=currentAction){
    if(busy==0){
      busy=1;
       Serial.print("current action b4:");
       Serial.println(currentAction);
       doAction(currentAction);
       currentAction = rollbackAction;

       Serial.print("current action after:");
       Serial.println(currentAction);
       
    }
    busy=0;
  }
  //Serial.print("current action b4:");
  //Serial.println(currentAction);
  //doAction(currentAction);
  //Serial.print("current action after:");
  //Serial.println(currentAction);
  delay(100);
}

