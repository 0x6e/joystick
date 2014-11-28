
JoystickState m_joyStick;

void setup() {

}

void loop() {
  
  // update the state:
  m_joyStick.xAxis = (int8_t) ((analogRead(A0) - 512) / (int) 4);
  m_joyStick.yAxis = 0;
  m_joyStick.buttons = 0;

  Joystick.setState(&m_joyStick);
}
