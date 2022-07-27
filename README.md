# StreetLightController_ArduinoUNO_DLDProject
Used an arduino uno with motion sensors to develop a smart street light controller system


A PIR sensor detects motion by detecting infrared radiation emitted by or reflected from objects. It is used to sense the motion of people, animals or other objects. Whenever an object passes the proximity of the PIR motion sensor (5 to 12 meters), the motion sensor will detect the infrared radiation emitted by the object. As soon as a car or any object for that matter passes under a streetlight, the motion sensor attached somewhat near the streetlight will give the signal to the Arduino connected and turn the streetlight on. Where, the LED will turn on for a period of 5 seconds (done through coding) and the LCD will display “Motion Detected” if an object is detected, otherwise the LED will be off, and the LCD will display “Motion Ended”. 

Now as per my "hopes" for this project, I believe that I can add multiple LEDs and PIR sensors, each to detect various speed limits of the cars. For example, a car travelling at 120km/h would activate the LED placed the closest to it with respect to the speed of the car. Whilst, a car travelling at 60km/h would activate the LED placed closest to it with respect to the speed of the car. 
This is implemented on a small scale, with a few tweeks here and there it can be implemented on a larger scale with the same logic but some change in the equipment. PIR sensor will be replaced by a Laser Sensor, LEDs will be greater in size and a big memory storage unit will be used instead of an Arduino, or a industry scale microcontroller. 




The proper documentation and working pictures and videos of my project can be seen using the link below, it directs you to my drive where I have kept all the files, code and whatnot in a zip file. Happy coding!





https://drive.google.com/drive/folders/1vFKa3MccoUKta541oaDBPifn06yIwecr?usp=sharing
