#define builder_mstartup I2CSlaveStartup(); mediaStartup(); tapDanceStartup();
#define builder_mloop I2CSlaveLoop(); mediaLoop(); tapDanceLoop();
#define builder_mpresscoord I2CSlavePressCoord(x, y); mediaPressCoord(x, y); tapDancePressCoord(x, y);
#define builder_mprepress I2CSlavePrePress(val, type); mediaPrePress(val, type); tapDancePrePress(val, type);
#define builder_mkeydown I2CSlaveKeyDown(val, type); mediaKeyDown(val, type); tapDanceKeyDown(val, type);
#define builder_mkeyup I2CSlaveKeyUp(val, type); mediaKeyUp(val, type); tapDanceKeyUp(val, type);
#define builder_mserial I2CSlaveSerial(input); mediaSerial(input); tapDanceSerial(input);

void ModStartup()
{
  builder_mstartup
}

void ModLoop()
{
  if (CheckMillis())
  {
  }
  builder_mloop
}


void ModPressCoord(byte x, byte y)
{
  builder_mpresscoord
}

void ModPrePress(char val, byte type)
{
  builder_mprepress
}

void ModKeyDown(char val, byte type)
{
  builder_mkeydown
}

void ModKeyUp(char val, byte type)
{
  builder_mkeyup
}

void ModSerial(String input)
{
  if (input == "uniquekgetmods")
  {
    Serial.print("get mods(");
  }
  builder_mserial
  if (input == "uniquekgetmods")
  {
    Serial.print("\r\n");
  }
}
