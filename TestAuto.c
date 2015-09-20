#pragma config(Sensor, S1,     sonarSensor,         sensorSONAR)






task main()
{
  int distance_in_cm = 40;   // Create variable 'distance_in_cm' and initialize it to 20(cm).
  while(SensorValue[sonarSensor] > distance_in_cm)   /* While the Sonar Sensor readings are greater */
{                                                  /* than the specified, 'distance_in_cm':       */
    motor[motorB] = 75;                     // Motor B is run at a 75 power level
    motor[motorC] = 75;                     // Motor C is run at a 75 power level
  }

  motor[motorB] = 75;    // Motor B is stopped at a 0 power level
  motor[motorC] = 75;    // Motor C is stopped at a 0 power level
}
