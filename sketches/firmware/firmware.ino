
JoystickState_t m_joyStick;

void setup() {

}

void loop() {
  
  // update the state:
  m_joyStick.xAxis = 0;
  m_joyStick.yAxis = 0;
  m_joyStick.buttons = 0;

  Joystick.setState(&m_joyStick);
}
