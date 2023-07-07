# Smart Lamp With IoT Technology
<!--- Replace this text with a brief description (2-3 sentences) of your project. This description should draw the reader in and make them interested in what you've built. You can include what the biggest challenges, takeaways, and triumphs from completing the project were. As you complete your portfolio, remember your audience is less familiar than you are with all that your project entails! -->
The IoT (internet of things) smart lamp, is a project involving sensors, colorful lights, and wifi. The lamp includes multiple features: changing colors with rgb, detecting the temperature and humidity in a room, automatically turning on and off, sensing motion, and sending alerts to my email and phone. These aspects are not only really convenient, but I can access and personalize them with a click of a button from my phone. 

<!--- <You should comment out all portions of your portfolio that you have not completed yet, as well as any instructions:

 This is an HTML comment in Markdown -->
<!--- Anything between these symbols will not render on the published site -->


| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Alicia Y | The Harker School | Mechanical Engineering | Incoming Sophmore 

 
<!---
**Replace the BlueStamp logo below with an image of yourself and your completed project. Follow the guide [here](https://tomcam.github.io/least-github-pages/adding-images-github-pages-site.html) if you need help.**

![Headstone Image](logo.svg)
  
# Final Milestone

**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**

<iframe width="560" height="315" src="https://www.youtube.com/embed/F7M7imOVGug" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For your final milestone, explain the outcome of your project. Key details to include are:
- What you've accomplished since your previous milestone
- What your biggest challenges and triumphs were at BSE
- A summary of key topics you learned about
- What you hope to learn in the future after everything you've learned at BSE



# Second Milestone

**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**

<iframe width="560" height="315" src="https://www.youtube.com/embed/y3VAmNlER5Y" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

For your second milestone, explain what you've worked on since your previous milestone. You can highlight:
- Technical details of what you've accomplished and how they contribute to the final goal
- What has been surprising about the project so far
- Previous challenges you faced that you overcame
- What needs to be completed before your final milestone -->

# First Milestone

**Don't forget to replace the text below with the embedding for your milestone video. Go to Youtube, click Share -> Embed, and copy and paste the code to replace what's below.**

<iframe width="560" height="315" src="https://www.youtube.com/embed/noj1Op3PSlw" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

My main project is the Smart Lamp with IoT (internet of things) technology. I chose it because of its practicality, design freedom, and multicolor LEDs. When connected to power, the smart lamp’s data appears on a website called Cayenne, which displays information like temperature, motion, and RGB sliders on a dashboard. Cayenne also features triggers that email and text alerts when for example: temperature surpasses a certain threshold.  
For my first milestone I wired all the components together, uploaded the code to the board, and set up Cayenne. I used multiple sensors and components in the project: DHT11 (digital humidity and temperature sensor), PIR sensor (passive infrared sensor → motion), LDR (light dependent resistor → light), 1k resistor, buzzer, neopixel ring light, and NODEMCU esp8266 (board → WiFi connectivity).  
I used a breadboard as the base because it makes troubleshooting very convenient and wired up all the parts. Afterwards, I used the Arduino code in the instructions and attempted to upload it to my NODEMCU. As expected, there were a lot of problems which I will talk about later, but eventually I managed to upload the code and started to troubleshoot a lot of the major errors. After figuring out the code and wiring, I was able to access Cayenne and start creating widgets and triggers.   
Despite everything working by the end of the week, there were a lot of drawbacks throughout the process. I had three major ones, and they each costed me a lot of time and effort to fix. My first problem was uploading the code to my board: it wouldn’t upload no matter what I did. I practically spent an entire day trying different methods: changing the adaptor, cord, arduino settings, and even using a different version of the esp8266 library. None of it worked, except when I changed the library back to the original, an error popped up saying that my board wasn’t the esp8266, but the esp32. I double checked, and turns out my board was the wrong one. After using the write board, I managed to upload the code. The next problem I faced was the DHT11 sensor not receiving proper values, the numbers were always the maximum integer number, zero, or nan (not a number). I decided to isolate the sensor and use sample code to ensure that the sensor was actually working, but it was really frustrating because I would fix the code and the values would seem normal, then five minutes later, without changing anything, it stopped working again. The process of working then not working kept occurring which befuddled and annoyed me because I didn’t understand why it kept happening. I realized two things: the pin mapping of the board was really weird, I had to define pin D2 as either D2 or 4, not just 2; and I had to connect the positive and negative terminals to the pins on the board because that was where there was power. My last problem was my neopixel ring light, it wouldn’t light up or receive values from Cayenne. I used the same tactic: isolation. I found that I had to solder the wires to the light because the connection was very sketchy otherwise, I also altered the code and it lit up. I started troubleshooting the code that wasn’t receiving values and found out that my restrictions for when the light can turn on weren’t allowing it to turn on. I fixed all the problems, and the majority of my project was done.   
I definitely became a lot more efficient at troubleshooting as the later problems were solved in a more timely matter (cough cough my DHT11). For my next milestone, I plan on moving my circuit onto a smaller bread board, finding a reliable power source (maybe I can use a wall outlet), and figuring out how my neopixel can turn on automatically, so I don’t have to manually activate it in Cayenne.   


# Starter Project

<iframe width="560" height="315" src="https://www.youtube.com/embed/l3O3y8DIs7g" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>
 
My starter project is the Useless Box which I chose due to its intriguing concept. I thought: what makes this box useless? Turns out, the Useless Box relies mainly on a motor and a switch. Flipping the switch prompts the motor to rotate an acrylic piece and open the box. However, the acrylic piece eventually hits the switch, flipping it back, causing the motor to reverse and close the box.  
The process to create the project involves soldering a switch, snap switch, LED, resistors, and screw terminals to the circuit board. Then, I screwed two acrylic pieces to the motor, and attached the circuit board to the motor as well. Then I attached the assembly into the base of the box, and connected the batteries. Unfortunately, I didn't progress to the next step, which involves building the acrylic box.  
I wasn’t able to finish the project due to myriad problems I encountered. First, I soldered the snap switch on in the wrong direction. Then, I found out there was an issue with either the circuit lines or the switch, forcing me to restart. The new version included a slightly different snap switch because we ran out of the original. This new snap switch didn’t conduct the electricity properly in my project, which led to the moving acrylic arm not going back down after hitting the switch. I tried solving the problem by taping solder onto the metal flap and gluing the solder onto the metal flap, both of which were unsuccessful. The excess glue also hardened, ruining the switch. I desoldered it and used a new switch, but it still refused to work.  
I already spent a lot of time and still practiced and learned a lot from the useless box so I decided to complete a quick LED starter project. It consists of three sliders that control the RGB (red, green, blue)values and change the color of an LED.  
The difficulties I faced during this experience taught me the importance of patience and problem-solving, qualities that are important when I deal with problems in my intensive project.

<!---
# Schematics 
Here's where you'll put images of your schematics. [Tinkercad](https://www.tinkercad.com/blog/official-guide-to-tinkercad-circuits) and [Fritzing](https://fritzing.org/learning/) are both great resoruces to create professional schematic diagrams, though BSE recommends Tinkercad becuase it can be done easily and for free in the browser. 

# Code
Here's where you'll put your code. The syntax below places it into a block of code. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize it to your project needs. 

```c++
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
```

# Bill of Materials
Here's where you'll list the parts in your project. To add more rows, just copy and paste the example rows below.
Don't forget to place the link of where to buy each component inside the quotation marks in the corresponding row after href =. Follow the guide [here]([url](https://www.markdownguide.org/extended-syntax/)) to learn how to customize this to your project needs. 

| **Part** | **Note** | **Price** | **Link** |
|:--:|:--:|:--:|:--:|
| NODEMCU ESP8266 | What the item is used for | $7.99 | <a href="https://www.amazon.com/dp/B010O1G1ES/ref=twister_B086QGXBRW?_encoding=UTF8&psc=1"> Link </a> |
| DHT11 | Temperature and Humidity Sensor | $9.99 | <a href="https://www.amazon.com/Adafruit-temperature-humidity-sensor-extras-ADA386/dp/B00NAY22V8"> Link </a> |
| NeoPixel Ring (12 LEDs) | Light up and change the lamp's colors | $11.40 | <a href="[https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/](https://www.amazon.com/Adafruit-NeoPixel-Ring-Integrated-Drivers/dp/B00KAE3R1U/ref=sr_1_2?keywords=NEOPIXEL+RING%2812+LEDs%29&qid=1688157496&sr=8-2)"> Link </a> |
| PIR Sensor | Security mode and motion detection | $11.99 | <a href="[https://www.amazon.com/dp/B010O1G1ES/ref=twister_B086QGXBRW?_encoding=UTF8&psc=1](https://www.amazon.com/Adafruit-LK-918O-SANV-FBACA-PIR-Motion-Sensor/dp/B00JOZTAC6)"> Link </a> |
| LDR Sensor | Light detection | $7.99 | <a href="https://www.amazon.com/dp/B010O1G1ES/ref=twister_B086QGXBRW?_encoding=UTF8&psc=1"> Link </a> |

# Other Resources/Examples
One of the best parts about Github is that you can view how other people set up their own work. Here are some past BSE portfolios that are awesome examples. You can view how they set up their portfolio, and you can view their index.md files to understand how they implemented different portfolio components.
- [Example 1](https://trashytuber.github.io/YimingJiaBlueStamp/)
- [Example 2](https://sviatil0.github.io/Sviatoslav_BSE/)
- [Example 3](https://arneshkumar.github.io/arneshbluestamp/)

To watch the BSE tutorial on how to create a portfolio, click here. -->
