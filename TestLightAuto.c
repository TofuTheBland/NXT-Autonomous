#pragma config(Sensor, S1,     lightSensor,         sensorLightActive)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int memes = 1;
   wait1Msec(50);                        // The program waits 50 milliseconds to initialize the light sensor.
   while(memes)                           // Infinite loop
   {
      if(SensorValue(lightSensor) > 30)  // If the Light Sensor reads a value less than 45:
      {
        motor[motorB] = 80;                  // Motor B is run at a 60 power level.
        motor[motorC] = 80;                  // Motor C is run at a 20 power level.
      }
      else                               // If the Light Sensor reads a value greater than or equal to 45:
      {
        motor[motorB] = 0;                  // Motor B is run at a 20 power level.
        motor[motorC] = 0;                  // Motor C is run at a 60 power level.

      }
   }
}
