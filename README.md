# SkyLight
## Physical Computing 1 : Small Project 1


[![Light](https://github.com/andraiorgules/SkyLight/blob/main/assets/light.jpg)](https://youtu.be/mcbCU0l0oeM)
###### Please Click The Image To Watch A Demo On Youtube


### Description
  When placed next to a window, this device will use a light sensor to track the amount of light outside and then display a color that matches the sky. I used a Tri-Color LED (which combines red, green, and blue LEDs into one to create an almost 
infinite amount of colors) and used 220 ohms resistors to connect each of the RGB pins to PWM 11,10, and 9 on the Arduino board. The longest pin of the LED went to GND. The PhotoResistor is connected to A0, GND (on the power side), and 5V. I 
then took light measurements throughout the day and made note of which sky colors occurred at different light values. (The container dims the amount of light by about 100, so I made sure to take light measurements through the container. I also kept all the lights in my apartment off so they wouldn’t interfere with the data.) Using the data I collected, I played around with different RGB values to create colors that matched the sky. I then coded those colors to display when the PhotoResistor sensed the same light values from my recordings. I placed everything inside of a frosted plastic container, so the breadboard and arduino can be hidden while still allowing enough light to shine through for the sensor. The container also glows beautifully when the LED is at its brightest.

  When thinking about what to create for this project, I was very inspired by the colorful LED light trends that have been going around lately. For example, LED strip lights are very popular right now - many people (myself included) have them up on their walls. Anotherexample is the sunset lamp, which shines an orb of vivid sunset colors onto any surface. I actually have an LED clock which reflects the various colors of the sky based on the time of day. However, I felt that this design was flawed due to the fact that the changes of the sky aren’t consistent over time. For example: during winter when the days are shorter and nighttime happens earlier, the clock would show daytime and sunset colors even though it was already dark outside. Using time as a sensor also doesn’t account for other sky conditions such as cloudiness, which will greatly affect the color that should be displayed. My device solves this problem because the color is based on the amount of light, not a linear time scale. Therefore, the colors are able to change dynamically as opposed to just one after the other.


### Images
![Wiring Schematic](sp1_wiring.png)
